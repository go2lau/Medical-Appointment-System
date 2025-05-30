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

void Appointment::changeAppointment(string date_, string time_){

    date=date_;
    time=time_;
}

void Appointment::changeAppointment(string time_){

    time=time_;
}

