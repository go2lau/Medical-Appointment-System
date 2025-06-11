#include "surgery.h"

using namespace std;

Surgery::Surgery(){
    date="";
    time="";
    doctorID=0;
    patientID=0;
    appointmentID=0;
    operatingRoom=0;
    typeOfSurgery="";
    duration=0;
}

Surgery::Surgery(string date_, string time_, int doctorID_, int patientID_, int appointmentID_, int operatingRoom_, string typeOfSurgery_, float duration_){

    date= date_;
    time= time_;
    doctorID= doctorID_;
    patientID=patientID_;
    appointmentID=appointmentID_;
    operatingRoom=operatingRoom_;
    typeOfSurgery=typeOfSurgery_;
    duration=duration_;
}

void Surgery::setRoom(int room){

    operatingRoom=room;
}

string Surgery::getDetails(){//gets details from patient perspective

    string msg;
    msg= "These are the details of your surgery \n Date: "+date+"\n"+"Time: "+time+"\nID of your doctor: "+to_string(doctorID)+ "\n"+"Appointment ID: "+to_string(appointmentID)+"\n"+"Operating Room: "+to_string(operatingRoom)+"\nType of surgery: "+typeOfSurgery+"\nDuration (hours): "+to_string(duration)+"\n";
    return msg; 
}

string Surgery::getDetails(bool doctor){//now from doctor perspective
    string msg;
    if (doctor){
        msg= "These are the details of your surgery \n Date: "+date+"\n"+"Time: "+time+"\nID of your patient: "+to_string(patientID)+ "\n"+"Appointment ID: "+to_string(appointmentID)+"\n"+"Operating Room: "+to_string(operatingRoom)+"\nType of surgery: "+typeOfSurgery+"\nDuration (hours): "+to_string(duration)+"\n";
        return msg; 
    }
    msg= "These are the details of your surgery \n Date: "+date+"\n"+"Time: "+time+"\nID of your doctor "+to_string(doctorID)+ "\n"+"Appointment ID: "+to_string(appointmentID)+"\n"+"Operating Room: "+to_string(operatingRoom)+"\nType of surgery: "+typeOfSurgery+"\nDuration (hours): "+to_string(duration)+"\n";
    return msg; 

}
