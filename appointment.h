#include "appointmentManager.h"
using namespace std;
#include <vector>

AppointmentManager::AppointmentManager(){

    appointments={};

}

AppointmentManager::AppointmentManager(vector<Appointment*>appointments_){

    //using pointers to assign appointments_ to appointments
}

Appointment* AppointmentManager::getAppointment(int id){

    //returning appointment based on its id
}

vector <Appointment*> AppointmentManager:: getAppointments(){

    return appointments;
}

void AppointmentManager::addAppointment(Appointment* appointment){

    //using pointers to add an appointment to the vector which contains them
}
