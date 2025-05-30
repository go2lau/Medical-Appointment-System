#ifndef SURGERY_H
#define SURGERY_H
#include <string>
#include "appointment.h"
using namespace std;


class Surgery: public Appointment{
    private:
        int operatingRoom;
        string typeOfSurgery;
        float duration;
    public:
        Surgery();
        Surgery(string, string, int, int, string, float);
        void setRoom(int);
        string getDetails(); 
        string getDetails(bool);
};

#endif
