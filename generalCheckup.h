#ifndef GENERALCHECKUP_H
#define GENERALCHECKUP_H
#include "appointment.h"
class GeneralCheckup: public Appointment{
    private:
        string basicVitals;
    public:
        GeneralCheckup();
        GeneralCheckup(string, string, int, int, string);
        string getDetails();
        string getDetails(bool);


};

#endif
