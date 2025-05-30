#include "generalCheckup.h"
using namespace std;

GeneralCheckup::GeneralCheckup(){
    date="";
    time="";
    doctorID=0;
    patientID=0;
    appointmentID=0;   
    basicVitals="";
}

GeneralCheckup::GeneralCheckup(string date_, string time_, int doctorID_, int patientID_, int appointmentID_, string basicVitals_){

    date=date_;
    time=time_;
    doctorID=doctorID_;
    patientID=patientID_;
    appointmentID_=appointmentID_;
    basicVitals=basicVitals_;
}

string GeneralCheckup::getDetails(){
    //pespectiva del paciente
}

string GeneralCheckup::getDetails(bool doctor){
    //perspectiva del doctor
}
