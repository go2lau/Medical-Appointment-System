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

string Surgery::getDetails(){

    //desde la perspectiva del paciente
}

string Surgery::getDetails(bool doctor){
    //desde la perspectiva del doctor

}
