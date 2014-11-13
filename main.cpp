
/*      Hospital system 
        Authors  Munyaradzi and Nyarai  */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Docter;
class Reception;
class Patient{
    int age;
    string name, address, sex, ailment, prescription, date, contactNum;
    friend class Docter;
    friend class Reception;

    public:
    int getAge(){return age;}
    string getNum(){return contactNum;}
    string getName(){return name;}
    string getAddress(){return address;}
    string getSex(){return sex;}
    string getAilment(){return ailment;}
    string getPresc(){return prescription;}
    string getDate(){return date;}

};
class Docter{
    public:
    Patient setAilment(Patient patient){        // Sets the disease the patient is suffering from
        cout<<"Enter the ailment            ";
        getline(cin, patient.ailment);

        return patient;

    }
    Patient setPresc(Patient patient){      // Sets the prescription to thye ailment
        cout<<"Enter the prescription       ";
        getline(cin, patient.prescription);

        return patient;
    }
};
class Reception{
    public:
    Patient setDetails(Patient patient){
        cout<<"Enter the date               ";
        getline(cin, patient.date);
        cout<<"Enter the name of patient    ";
        getline(cin, patient.name);
        cout<<"Enter the address            ";
        getline(cin, patient.address);
        cout<<"Enter the age                ";
        cin>>patient.age;
        cin.ignore();
        cout<<"Enter the cell number        ";
        getline(cin, patient.contactNum);
        cout<<"Enter sex                    ";
        getline(cin, patient.sex);

        return patient;
    }
};

int main()
{
    Patient patient;
    Docter doc;
    Reception recep;

    patient = recep.setDetails(patient);
    patient = doc.setAilment(patient);
    patient = doc.setPresc(patient);

    cout<<"<<<<<<PRINTING PATIENT DETAILS>>>>>>>\n\n";
    cout<<"Date         :"<<patient.getDate()<<endl
        <<"Name         :"<<patient.getName()<<endl
        <<"Address      :"<<patient.getAddress()<<endl
        <<"Age          :"<<patient.getAge()<<endl
        <<"Sex          :"<<patient.getSex()<<endl
        <<"Ailment      :"<<patient.getAilment()<<endl
        <<"Prescription :"<<patient.getPresc()<<endl;

    return 0;
}
