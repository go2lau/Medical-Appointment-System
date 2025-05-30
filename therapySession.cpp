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

string TherapySession::getDetails(){

    //details from patient perspective
}

string TherapySession::getDetails(bool doctor){

    //details from doctor perspective if true
}
