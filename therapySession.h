#ifndef THERAPYSESSION_H
#define THERAPYSESSION_H
#include "appointment.h"

class TherapySession{
    private:
        string sessionType;
    public:
        TherapySession();
        TherapySession(string, string,int, int, int, string);
        string getDetails();
        string getDetails(bool); //para vista de doctor
        
};

#endif
