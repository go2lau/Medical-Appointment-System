#include "appointmentManager.h"
using namespace std;
#include <vector>

AppointmentManager::AppointmentManager(){

    appointments={};

}



string AppointmentManager::getAppointment(int id){
    for (auto*a : appointments){
        if (a->getAID()==id){
            return a->getDetails(true);
        }
    }
    return "An appointment with such an ID does not exist.";
    //returning appointment based on its id
}

string AppointmentManager:: getAppointments(){
    string aux="";
    for (auto*a : appointments){
            aux+=a->getDetails(true);
        }
    return aux;
}


AppointmentManager& AppointmentManager::operator +(Appointment* appointment){
    appointments.push_back(appointment);
    return *this;
  //using pointers and operator overloading to add an appointment to the vector which contains them
}
