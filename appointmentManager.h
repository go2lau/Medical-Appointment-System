#ifndef APPOINTMENTMANAGER_H
#define APPOINTMENTMANAGER_H
#include "appointment.h"
#include <vector>
using namespace std;

class AppointmentManager{

    private:
        vector<Appointment*> appointments;
    public: 
        AppointmentManager();
        AppointmentManager& operator +(Appointment* appointment);
        string getAppointments();
        string getAppointment(int); //gets appointment details based on its id

};


#endif
