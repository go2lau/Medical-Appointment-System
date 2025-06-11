#ifndef GENERALCHECKUP_H
#define GENERALCHECKUP_H
#include "appointment.h"
class GeneralCheckup: public Appointment{
    private:
        string primaryConcern;
    public:
        GeneralCheckup();
        GeneralCheckup(string, string, int, int, int, string);
        string getDetails() override;
        string getDetails(bool) override;


};

#endif
