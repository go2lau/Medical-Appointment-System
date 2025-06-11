#include "therapySession.h"

using namespace std;

TherapySession::TherapySession(){
    date="";
    time="";
    doctorID=0;
    patientID=0;
    appointmentID=0;
    sessionType="";

}

TherapySession::TherapySession(string date_, string time_, int doctorID_, int patientID_, int appointmentID_, string sessionType_){

    date=date_;
    time=time_;
    doctorID=doctorID_;
    patientID=patientID_;
    appointmentID=appointmentID_;
    sessionType=sessionType_;

}

string TherapySession::getDetails(){//gets details from patient perspective

    string msg;
    msg="These are the details of your therapy session \n Date: "+date+"\n"+"Time: "+time+"\nID of your doctor: "+to_string(doctorID)+ "\n"+"Appointment ID: "+to_string(appointmentID)+"\n"+"Session Type: "+sessionType+"\n";
    return msg;
}

string TherapySession::getDetails(bool doctor){//now from doctor perspective

    string msg;
    if (doctor){
        msg="These are the details of your therapy session \n Date: "+date+"\n"+"Time: "+time+"\nID of your patient: "+to_string(patientID)+ "\n"+"Appointment ID: "+to_string(appointmentID)+"\n"+"Session Type: "+sessionType+"\n";
        return msg;
    }
    msg="These are the details of your therapy session \n Date: "+date+"\n"+"Time: "+time+"\nID of your doctor: "+to_string(doctorID)+ "\n"+"Appointment ID: "+to_string(appointmentID)+"\n"+"\nSession Type: "+sessionType+"\n";
    return msg;

}
