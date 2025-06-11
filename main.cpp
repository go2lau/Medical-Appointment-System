#include "appointmentManager.h"
#include "appointment.h"
#include "therapySession.h"
#include "surgery.h"
#include "generalCheckup.h"
#include <iostream>
#include <random>
#include <limits>
using namespace std;

void printTypes(){//a function to avoid rewriting the menu in which the user selects the type of appointment
    cout<<"Which kind of appointment would you like to make?"<<endl;
    cout<<"1. General Checkup"<<endl<<"2. Therapy Session"<<endl<<"3. Surgery";
}

int generateID(){//a function to generate a random 5-digit id either for doctors, patients or appointments. 
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(10000, 99999);

    int randomID = dist(gen);
    return randomID;
}

int generateOR(){//generates a random 3-digit id for the different operating rooms
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(100, 999);

    int randomID = dist(gen);
    return randomID;
}

float generateDuration(string type){//generating the duration of the durgery based on its type
    if (type=="Knee"||type=="KNEE"||type=="knee"){
        return 2;
    }
    else if (type=="Spine"||type=="spine"||type=="SPINE"){
        return 5;
    }
    else if (type=="Sciatic"||type=="sciatic"||type=="SCIATIC"){
        return 1.5;
    }
    else if (type=="Cervical"||type=="cervical"||type=="CERVICAL"){
        return 2.5;
    }
    else if (type=="Hernia removal"||type=="hernia removal"||type=="HERNIA REMOVAL"){
        return 0.5;
    }
    return 0;
}




int main(){

        cout<<"Welcome to the Physio Medical Appointment System!"<<endl;
        cout<<"Are you a patient or a doctor?"<<endl;
        string PorD;
        cin>>PorD;
        cin.ignore();
        AppointmentManager appointmentManager;
        string date;
        string time;

        if (PorD=="patient"||PorD=="PATIENT"||PorD=="Patient"){
        bool makeAnother;
        int patientID= generateID();

        do{            
            //if one selects patient, patient ID will be unchanging
            printTypes();
            string typestr;
            getline(cin, typestr);
            int type=stoi(typestr);

            if (type==1){
                int appointmentID=generateID();
                int doctorID=generateID();//doctor ID will change depending on type of appointment selected
                cout<<"Enter the date you would like to make your appointment: "<<endl;
                getline(cin, date);
                cout<<"Enter the time: "<<endl;
                getline(cin, time);
                cout<<"What is your primary concern? "<<endl;
                string primaryConcern;
                getline(cin, primaryConcern);
                GeneralCheckup generalCheckup(date, time, doctorID, patientID, appointmentID, primaryConcern);
                appointmentManager=appointmentManager+&generalCheckup;//adding new pointers to the class appointment to the appointment manager's vector of pointers using operator overloading
                cout<<"Your patient ID: "<<patientID<<endl;
                cout<<generalCheckup.getDetails();
            }
            else if (type==2){
                int appointmentID=generateID();
                int doctorID= generateID();
                cout<<"Enter the date you would like to make your appointment: "<<endl;
                getline(cin, date);
                cout<<"Enter the time: "<<endl;
                getline(cin, time);
                cout<<"What kind of therapy session would you like to book?"<<endl<<"Options are physiotherapy, chiropractic or orthopedic treatment";
                string sessionType;
                getline(cin, sessionType);
                TherapySession therapySession(date,time,doctorID, patientID, appointmentID, sessionType);
                appointmentManager=appointmentManager+&therapySession;
                cout<<"Your patient ID: "<<patientID<<endl;
                cout<<therapySession.getDetails();
                //add exception management

            }
            else if (type==3){
                int appointmentID=generateID();
                int doctorID= generateID();
                int operatingRoom=generateOR();
                cout<<"Enter the date you would like to make your appointment: "<<endl;
                getline(cin, date);
                cout<<"Enter the time: "<<endl;
                getline(cin, time);
                cout<< "Which type of surgery are you scheduling? "<<endl;
                cout<< "We only offer the following types: "<<endl<<"Knee"<<endl<<"Sciatic"<<endl<<"Cervical"<<endl<<"Spine"<<endl<<"Hernia removal"<<endl;
                string typeOfS;
                getline(cin,typeOfS);
                float duration=generateDuration(typeOfS);
                Surgery surgery(date, time, doctorID, patientID, appointmentID, operatingRoom, typeOfS, duration);
                appointmentManager=appointmentManager+&surgery;
                cout<<"Your patient ID: "<<patientID<<endl;     
                cout<<surgery.getDetails();                           
            }

            cout << "Would you like to make another appointment? (y/n) ";
            char ans;
            cin >> ans;
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            makeAnother = (ans == 'y' || ans == 'Y');

        }while(makeAnother);
        cout << "Thanks! Exiting patient menu.\n";


            
        }
        else if (PorD=="doctor"||PorD=="Doctor"||PorD=="DOCTOR"){
        int doctorID=generateID();
        cout<<"Are you a therapist, a surgeon or a general practitioner (GP)?"<<endl;
        string answer;
        getline(cin, answer);
            if (answer=="therapist"||answer=="Therapist"||answer=="THERAPIST"){
                int therapy1ID=generateID();
                string date1="01/07/2025";
                string time1="09:00";
                int patientID1=generateID();
                string type1= "Physiotherapy";
                auto* therapy1 = new TherapySession(date1, time1, doctorID, patientID1,therapy1ID, type1);//using raw pointers (still one of the methods does not work as expected)
                appointmentManager=appointmentManager+therapy1;

                int therapy2ID=generateID();
                string date2="02/07/2025";
                string time2="11:00";
                int patientID2=generateID();
                string type2= "Chiropractic";
                auto* therapy2 = new TherapySession(date2, time2, doctorID, patientID2,therapy2ID, type2);
                appointmentManager=appointmentManager+therapy2;

                cout<<"Your doctor ID is: "<<doctorID<<endl;
                cout<<"You have 2 new therapy sessions with the following IDs: "<<endl<<therapy1ID<<endl<<therapy2ID<<endl;

                
                bool viewing=true;

                do{ 
                cout<<"Would you like to view all of your appointments or just one? Type 1 for all, 2 for one, any other key to quit."<<endl;//choice 2 does not work properly, even if raw pointers are being used. there are no evident errors in the code
                int choice;
                cin>>choice;
                cin.ignore();
                if (choice==1){
                cout<<appointmentManager.getAppointments();//printing details 
                }
                else if (choice==2){
                int apptID;
                cout<<"Enter the ID of the appointment you'd like to see: "<<endl;
                cin>>apptID;
                cin.ignore();
                cout<<appointmentManager.getAppointment(apptID); //always returns id not found because of pointer error //instance of method overloading
                }
                else{
                viewing=false;
                }

                }while(viewing);            
                
                
                

            }  
            else if (answer=="GP"||answer=="gp"||answer=="Gp"){
                int gcID1=generateID();
                string date1="01/07/2025";
                string time1="09:00";
                int patientID1=generateID();
                string concern1= "Back Pain";
                auto* gc1 = new GeneralCheckup(date1, time1, doctorID, patientID1, gcID1, concern1);
                appointmentManager=appointmentManager+gc1;

                int gcID2=generateID();
                string date2="02/07/2025";
                string time2="12:00";
                int patientID2=generateID();
                string concern2= "Neck Pain";
                auto* gc2 = new GeneralCheckup(date2, time2, doctorID, patientID2, gcID2, concern2);
                appointmentManager=appointmentManager+gc2;


                cout<<"Your doctor ID is: "<<doctorID<<endl;
                cout<<"You have 2 new general checkups with the following IDs: "<<endl<<gcID1<<endl<<gcID2<<endl;

                bool viewing=true;

                do{ 
                cout<<"Would you like to view all of your appointments or just one? Type 1 for all, 2 for one, any other key to quit."<<endl;
                int choice;
                cin>>choice;
                cin.ignore();
                if (choice==1){
                cout<<appointmentManager.getAppointments();
                }
                else if (choice==2){
                int apptID;
                cout<<"Enter the ID of the appointment you'd like to see: "<<endl;
                cin>>apptID;
                cin.ignore();
                cout<<appointmentManager.getAppointment(apptID);
                }
                else{
                viewing=false;
                }

                }while(viewing);                   
            }

            else if (answer=="Surgeon"||answer=="surgeon"||answer=="SURGEON"){
                int surgeryID1=generateID();
                string date1="01/07/2025";
                string time1="09:00";
                int patientID1=generateID();
                int OR1= generateOR();
                string typeofS1= "Knee";
                float duration1= generateDuration(typeofS1);
                auto* surgery1=new Surgery(date1, time1, doctorID, patientID1, surgeryID1, OR1, typeofS1, duration1);
                appointmentManager=appointmentManager+surgery1;
                

                int surgeryID2=generateID();
                string date2="03/07/2025";
                string time2="08:00";
                int patientID2=generateID();
                int OR2= generateOR();
                string typeofS2= "Spine";
                float duration2= generateDuration(typeofS2);
                auto* surgery2=new Surgery(date2, time2, doctorID, patientID2, surgeryID2, OR2, typeofS2, duration2);
                appointmentManager=appointmentManager+surgery2;

                cout<<"Your doctor ID is: "<<doctorID<<endl;
                cout<<"You have 2 surgeries with the following IDs: "<<endl<<surgeryID1<<endl<<surgeryID2<<endl;
                bool viewing=true;

                do{ 
                cout<<"Would you like to view all of your appointments or just one? Type 1 for all, 2 for one, any other key to quit."<<endl;
                int choice;
                cin>>choice;
                cin.ignore();
                if (choice==1){
                cout<<appointmentManager.getAppointments();
                }
                else if (choice==2){
                int apptID;
                cout<<"Enter the ID of the appointment you'd like to see: "<<endl;
                cin>>apptID;
                cin.ignore();
                cout<<appointmentManager.getAppointment(apptID);
                }
                else{
                viewing=false;
                }

                }while(viewing);                                               
            }

            cout<<"Thank you! Extiting doctor view. \n ";
        }

        cout << "Invalid role—please restart the program and choose patient or doctor.\n";
        return 0;

    }
