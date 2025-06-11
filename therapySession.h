#ifndef THERAPYSESSION_H
#define THERAPYSESSION_H
#include "appointment.h"

class TherapySession:public Appointment{
    private: 
        string sessionType;
    public:
        TherapySession();
        TherapySession(string, string,int, int, int, string);
        string getDetails() override;
        string getDetails(bool) override; //para vista de doctor
        
};

#endif
