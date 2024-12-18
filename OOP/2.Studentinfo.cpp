#include<iostream>
#include<string>
using namespace std;

class Data
{
private:
    string name;
    int rollNo;
    string cls;
    string division;
    string date_of_birth;
    string blood_group;
    long int phone;
    string address;
    string License_no;
    static int count;
public:
    Data();
    ~Data();
    static int getCount();
    void getData();
    void showData();
    Data(Data *obj); // Copy constructor
    Data(string name, int rollNo, string cls, string division, string date_of_birth, string blood_group, long int phone, string address, string License_no);
};

int Data::count = 0;

Data::Data()
{
    name = "";
    rollNo = 0;
    cls = "";
    division = "";
    date_of_birth = "dd/mm/yyyy";
    blood_group = "";
    phone = 0;
    address = "";
    License_no = "";
    count++;
}

Data::Data(Data *obj)
{
    cout << "Copy Constructor called." << endl;
}

Data::Data(string name, int rollNo, string cls, string division, string date_of_birth, string blood_group, long int phone, string address, string License_no)
{
    this->name = name;
    this->rollNo = rollNo;
    this->cls = cls;
    this->division = division;
    this->date_of_birth = date_of_birth;
    this->blood_group = blood_group;
    this->phone = phone;
    this->address = address;
    this->License_no = License_no;
    count++;
    cout << "\nParameterised Constructor." << endl;
}

Data::~Data()
{
    cout << "\nDestructor called." << endl;
}

int Data::getCount()
{
    return count;
}

void Data::getData()
{
    cout << "\nEnter Name : ";
    cin >> name;
    cout << "\nEnter Roll No. : ";
    cin >> rollNo;
    cout << "\nEnter class : ";
    cin >> cls;
    cout << "\nEnter Division : ";
    cin >> division;
    cout << "\nEnter Date of Birth (dd/mm/yyyy) : ";
    cin >> date_of_birth;
    cout << "\nEnter blood group : ";
    cin >> blood_group;
    cout << "Enter Mobile number : ";
    cin >> phone;
    cout << "Enter Address : ";
    cin >> address;
    cout << "Enter License number : ";
    cin >> License_no;
}

void Data::showData()
{
    cout << "Name : " << name << endl;
    cout << "Roll No. : " << rollNo << endl;
    cout << "Class : " << cls << endl;
    cout << "Division : " << division << endl;
    cout << "Date of Birth : " << date_of_birth << endl;
    cout << "Blood Group : " << blood_group << endl;
    cout << "Mobile Number : " << phone << endl;
    cout << "Address : " << address << endl;
    cout << "License number : " << License_no << endl;
}

int main()
{
    int num;
    Data *d1 = new Data();
    d1->showData();
    delete d1;

    Data *d2 = new Data("Spongebob", 23, "SE", "B", "12/4/1996", "O-", 342567891, "Under the sea", "MV985643");
    d2->showData();
    delete d2;

    cout << "\nEnter size of database i.e number of students : ";
    cin >> num;
    Data dx[num];
    for (int i = 0; i < num; i++)
    {
        dx[i].getData();
    }
    for (int i = 0; i < num; i++)
    {
        dx[i].showData();
    }

    cout << "Number of constructor calls and number of objects : " << Data::getCount() << endl;

    return 0;
}

