#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <string>
using namespace std;

class Appointment{

    protected:
        string date;
        string time;
        int doctorID;
        int patientID;
        int appointmentID;
    public:
        Appointment();
        Appointment(string, string, int, int);
        void changeAppointment(string, string); //cambiar fecha y hora
        void changeAppointment(string); //cambiar sólo hora
        virtual string getDetails()=0;
        virtual string getDetails(bool)=0; //para vista de doctor
};
#endif
