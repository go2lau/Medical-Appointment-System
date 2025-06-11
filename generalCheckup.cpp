#include "generalCheckup.h"
using namespace std;

GeneralCheckup::GeneralCheckup(){
    date="";
    time="";
    doctorID=0;
    patientID=0;
    appointmentID=0;   
    primaryConcern="";
}

GeneralCheckup::GeneralCheckup(string date_, string time_, int doctorID_, int patientID_, int appointmentID_, string primaryConcern_){

    date=date_;
    time=time_;
    doctorID=doctorID_;
    patientID=patientID_;
    appointmentID_=appointmentID_;
    primaryConcern=primaryConcern_;
}

string GeneralCheckup::getDetails(){//patient perspective
    string msg;
    msg= "These are the details of your checkup \n Date: "+date+"\n"+"Time: "+time+"\nID of your doctor: "+to_string(doctorID)+ "\n"+"Appointment ID: "+to_string(appointmentID)+"\n"+"Primary Concern: "+primaryConcern+"\n";
    return msg;
}



string GeneralCheckup::getDetails(bool doctor){//doctor perspective
    string msg;
    if (doctor){
        msg= "These are the details of your checkup \n Date: "+date+"\n"+"Time: "+time+"\nID of your patient: "+to_string(patientID)+ "\n"+"Appointment ID: "+to_string(appointmentID)+"\n"+"Primary Concern: "+primaryConcern+"\n";
        return msg;
    }
    msg= "These are the details of your checkup \n Date: "+date+"\n"+"Time: "+time+"\nID of your doctor: "+to_string(doctorID)+ "\n"+"Appointment ID: "+to_string(appointmentID)+"\n"+"Primary Concern: "+primaryConcern+"\n";
    return msg;    
}
