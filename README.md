# Medical-Appointment-System

Medical appointment management systems are quite important nowadays. It is an efficient way for doctors, especially ones with plenty of patients, to schedule appointments without the hassle of phone calls or in-person appointment management. Some examples of already existing systems of this sort include Doctoralia (this is the brand name in Mexico and Latin America), which allows patients to search for both doctors with a private consultory and those which work at a hospital, as well as, of course, being an auxiliary tool in making appointments. Other examples include TIMIFY, which offers customisable booking options and also supports other kinds of appointment scheduling, and Capterra's DoctorConnect. 

This medical appointment system will allow patients to choose between appointment types. The types which are possible to choose from are Therapy Session, Surgery and General Checkup. It will also allow them to set a time and a date for their appointment.

The system also supports viewing details and manipulating the system as a doctor. What allows doctors to view details from their perspective is method overloading. Also, there is different behavior for the method in charge of printing all the details of an appointment in every subclass, which is possible thanks to method overriding. 

The justification for each of the classes is the following: 

AppointmentManager: This class stores all of the appointments patients will have over time, or those that doctors will be notified of as they are made by patients. Its only attribute is a vector containing pointers to the Appointment class to allow polymorphism and code flexibility. 

Appointment: This is an abstract class containing getters and setters for every piece of data that the subclasses have in common, and pure virtual methods in order to allow adjusting behavior for these methods in each of the subclasses. 

GeneralCheckup: Includes an extra attribute called primaryConcern. It is included in its default constructor and its getDetails() and getDetails(bool) methods adapt to include it in the details. 

Surgery: Includes three extra attributes: operatingRoom, typeOfSurgery, and duration. They are included in its default constructor and its getDetails() and getDetails(bool) methods adapt to include it in the details. 

TherapySession: Includes an extra attribute called sessionType. It is included in its default constructor and its getDetails() and getDetails(bool) methods adapt to include it in the details. 

The class diagram is the following: 


![appointment (3)](https://github.com/user-attachments/assets/7daa18c2-6e77-4304-ab19-1ac1c47fc7a7)


References: 

Coviello, M. (2025, 12 mayo). DoctorConnect Patient Engagement Home - DoctorConnect Medical Appointment Reminders. DoctorConnect Medical Appointment Reminders. https://doctorconnect.net/?capterra=capterra&gdmcid=2ba0e086-4350-44d2-9f8d-533fdcdb0c3b

Medical Appointment Scheduling Software | TIMIFY. (s. f.). https://www.timify.com/en/solutions/medical-scheduling-software/

Doctoralia Pro | Nuestras soluciones para tu consultorio. (s. f.). https://pro.doctoralia.com.mx/soluciones
