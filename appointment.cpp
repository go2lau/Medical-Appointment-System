#include "appointment.h"
using namespace std;

Appointment::Appointment(){
    date="";
    time="";
    doctorID=0;
    patientID=0;
    appointmentID=0;

}

Appointment::Appointment(string date_, string time_, int doctorID_, int patientID_, int appointmentID_){
    date=date_;
    time=time_;
    doctorID=doctorID_;
    patientID=patientID_;
    appointmentID=appointmentID_;

}


string Appointment::getDate(){
    return date;
}

string Appointment::getTime(){
    return time;
}

int Appointment::getDID(){
    return doctorID;
}

int Appointment::getPID(){
    return patientID;
}

int Appointment::getAID(){
    return appointmentID;
}

