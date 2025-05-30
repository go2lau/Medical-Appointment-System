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
        AppointmentManager(vector<Appointment*>);
        void addAppointment(Appointment*);
        vector<Appointment*> getAppointments();
        Appointment* getAppointment(int); //obtiene appointment dado su ID

};


#endif
