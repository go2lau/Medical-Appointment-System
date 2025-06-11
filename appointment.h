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
        Appointment(string, string, int, int, int);
        virtual string getDetails()=0;
        virtual string getDetails(bool)=0; //para vista de doctor
        string getDate();
        string getTime();
        int getDID();
        int getPID();
        int getAID();
};
#endif


