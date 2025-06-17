//Sami-Ur-Rehman 22k-4673
//Muhammad Sohaib 22k-4751
//Ovais Adnan 22k-4677
#include <iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<fstream>
using namespace std;

class Vehicle
{
    string company, name, transmission, color, fueltype;
    string const chassis;
    int model, rentperday, renteddays;
    static int total_num_renteddays;
public:
    Vehicle() {}
    Vehicle(string company, string name, string const chassis, int model, int rentperday, string transmission, string color) : company(company), name(name), chassis(chassis), model(model), rentperday(rentperday), transmission(transmission), color(color)
    {
        renteddays = 0;
    }
    void setrenteddays(const int renteddays)
    {
        this->renteddays = renteddays;
    }
    int getrenteddays()const
    {
        return renteddays;
    }
    int gettotal_num_renteddays()
    {
        return total_num_renteddays;
    }
    void setcompany(const string company)
    {
        this->company = company;
    }
    string getcompany()const
    {
        return company;
    }
    void setname(const string name)
    {
        this->name = name;
    }
    string getname()const
    {
        return name;
    }
    string const getchassis()const
    {
        return chassis;
    }
    void setmodel(const int model)
    {
        this->model = model;
    }
    int getmodel()const
    {
        return model;
    }
    void setrentperday(const int rentperday)
    {
        this->rentperday = rentperday;
    }
    int getrentperday()const
    {
        return rentperday;
    }
    void settransmission(const string transmission)
    {
        this->transmission = transmission;
    }
    string gettransmission()const
    {
        return transmission;
    }
    void setcolor(const string color)
    {
        this->color = color;
    }
    string getcolor()const
    {
        return color;
    }
    void setfueltype(const string fueltype)
    {
        this->fueltype = fueltype;
    }
    string getfueltype()const
    {
        return fueltype;
    }
    void incrementrentdays()
    {
        total_num_renteddays = total_num_renteddays + renteddays;
    }
    void displayallinfo()
    {
        cout << "\n\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        cout << "\n\t\t\t\t\t  VEHICLE NAME: " << getname();
        cout << "\n\t\t\t\t\t  VEHICLE COMPANY: " << getcompany();
        cout << "\n\t\t\t\t\t  VEHICLE MODEL: " << getmodel();
        cout << "\n\t\t\t\t\t  VEHICLE COLOR: " << getcolor();
        cout << "\n\t\t\t\t\t  VEHICLE CHASSES NO# " << getchassis();
        cout << "\n\t\t\t\t\t  VEHICLE TRANSMISSION: " << gettransmission();
        cout << "\n\t\t\t\t\t  VEHICLE RENT/DAY: " << getrentperday();
        cout << "\n\t\t\t\t\t  VEHICLE FUELTYPE: " << getfueltype();
        cout << "\n\t\t\t\t      TOTAL DAYS VEHICLE WAS RENTED: " << gettotal_num_renteddays();
        cout << endl << endl;
    }
    void displaysearch()const
    {
        cout << "\n\t\t\t\t\tVEHICLE: " << getcompany() << " " << getname() << " " << getmodel();
        cout << "\n\t\t\t\t\tCHASSES# " << getchassis();
    }
};
int Vehicle::total_num_renteddays = 0;

class sportscar :public Vehicle
{
    string fueltype;
public:
    sportscar(string company, string name, string const chassis, int model, int rentperday, string transmission, string color) :Vehicle(company, name, chassis, model, rentperday, transmission, color)
    {
        this->fueltype = "DIESEL";
    }
    string getfueltype()const
    {
        return fueltype;
    }
    void displayallinfo()
    {
        cout << "\n\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        cout << "\n\t\t\t\t\t  VEHICLE NAME: " << getname();
        cout << "\n\t\t\t\t\t  VEHICLE COMPANY: " << getcompany();
        cout << "\n\t\t\t\t\t  VEHICLE MODEL: " << getmodel();
        cout << "\n\t\t\t\t\t  VEHICLE COLOR: " << getcolor();
        cout << "\n\t\t\t\t\t  VEHICLE CHASSES NO# " << getchassis();
        cout << "\n\t\t\t\t\t  VEHICLE TRANSMISSION: " << gettransmission();
        cout << "\n\t\t\t\t\t  VEHICLE RENT/DAY: " << getrentperday();
        cout << "\n\t\t\t\t\t  VEHICLE FUELTYPE: " << getfueltype();
        cout << "\n\t\t\t\t      TOTAL DAYS VEHICLE WAS RENTED: " << gettotal_num_renteddays();
        cout << endl << endl;
    }
};

class dailyusecar :public Vehicle
{
    string fueltype;
public:
    dailyusecar(string company, string name, string const chassis, int model, int rentperday, string transmission, string color) :Vehicle(company, name, chassis, model, rentperday, transmission, color)
    {
        this->fueltype = "PETROL";
    }
    string getfueltype()const
    {
        return fueltype;
    }
    void displayallinfo()
    {
        cout << "\n\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        cout << "\n\t\t\t\t\t  VEHICLE NAME: " << getname();
        cout << "\n\t\t\t\t\t  VEHICLE COMPANY: " << getcompany();
        cout << "\n\t\t\t\t\t  VEHICLE MODEL: " << getmodel();
        cout << "\n\t\t\t\t\t  VEHICLE COLOR: " << getcolor();
        cout << "\n\t\t\t\t\t  VEHICLE CHASSES NO# " << getchassis();
        cout << "\n\t\t\t\t\t  VEHICLE TRANSMISSION: " << gettransmission();
        cout << "\n\t\t\t\t\t  VEHICLE RENT/DAY: " << getrentperday();
        cout << "\n\t\t\t\t\t  VEHICLE FUELTYPE: " << getfueltype();
        cout << "\n\t\t\t\t      TOTAL DAYS VEHICLE WAS RENTED: " << gettotal_num_renteddays();
        cout << endl << endl;
    }
};
class ecar :public Vehicle
{
    string fueltype;
public:
    ecar(string company, string name, string const chassis, int model, int rentperday, string transmission, string color) :Vehicle(company, name, chassis, model, rentperday, transmission, color)
    {
        this->fueltype = "ELECTRIC POWERED";
    }
    string getfueltype()const
    {
        return fueltype;
    }
    void displayallinfo()
    {
        cout << "\n\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        cout << "\n\t\t\t\t\t  VEHICLE NAME: " << getname();
        cout << "\n\t\t\t\t\t  VEHICLE COMPANY: " << getcompany();
        cout << "\n\t\t\t\t\t  VEHICLE MODEL: " << getmodel();
        cout << "\n\t\t\t\t\t  VEHICLE COLOR: " << getcolor();
        cout << "\n\t\t\t\t\t  VEHICLE CHASSES NO# " << getchassis();
        cout << "\n\t\t\t\t\t  VEHICLE TRANSMISSION: " << gettransmission();
        cout << "\n\t\t\t\t\t  VEHICLE RENT/DAY: " << getrentperday();
        cout << "\n\t\t\t\t\t  VEHICLE FUELTYPE: " << getfueltype();
        cout << "\n\t\t\t\t      TOTAL DAYS VEHICLE WAS RENTED: " << gettotal_num_renteddays();
        cout << endl << endl;
    }
};

class Customer
{
    string name, email, address, vehiclename, vehiclechassis;
    double  phonenumber, totalamount = 0, advance = 0, newtotalamount;
    int renttingdays, vehiclerent_day;
    string const cnic;
public:
    Customer(string name, string email, string address, double phonenumber, string const cnic, Vehicle& obj, int customer_rentdays) :name(name), email(email), address(address), phonenumber(phonenumber), cnic(cnic)
    {
        obj.setrenteddays(customer_rentdays);
        this->renttingdays = customer_rentdays;
        this->vehiclechassis = obj.getchassis();
        this->vehiclename = obj.getname();
        this->vehiclerent_day = obj.getrentperday();
    }
    void setname(const string name)
    {
        this->name = name;
    }
    string getname()const
    {
        return name;
    }
    void setemail(const string email)
    {
        this->email = email;
    }
    string getemail()const
    {
        return email;
    }
    void setaddress(const string address)
    {
        this->email = email;
    }
    string getaddress()const
    {
        return address;
    }
    void setphonenumber(const double phonenumber)
    {
        this->phonenumber = phonenumber;
    }
    double getphonenumber()const
    {
        return phonenumber;
    }
    string getcnic()const
    {
        return cnic;
    }
    void displayallinfo1()const
    {
        cout << "\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        cout << "\n\t\t\t\t\t  CUSTOMER NAME: " << getname();
        cout << "\n\t\t\t\t\t  CUSTOMER CNIC: " << getcnic();
        cout << "\n\t\t\t\t\t  CUSTOMER ADDRESS: " << getaddress();
        cout << "\n\t\t\t\t\t  CUSTOMER EMAIL: " << getemail();
        cout << "\n\t\t\t\t\t  CUSTOMER PHONE NUMBER: " << getphonenumber();
        cout << endl << endl;
    }
    void displaysearch1()const
    {
        cout << "\n\t\t\t\t\t      NAME: " << getname();
        cout << "\n\t\t\t\t\t      CNIC: " << getcnic();
    }
    void billcalculation(Vehicle obj)
    {
        totalamount = obj.getrentperday() * obj.getrenteddays();
        advance = totalamount * 0.5;
    }
    int getrenttingdays()const
    {
        return renttingdays;
    }
    void setrentingdays(const int rentingdays)
    {
        this->renttingdays = this->renttingdays + rentingdays;
    }
    void incrementeddays(int renttingdays)
    {
        newtotalamount = vehiclerent_day * renttingdays;
        totalamount = newtotalamount + totalamount;
    }
    void displaybill()
    {
        cout << "\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        cout << "\n\t\t\t\t\t||  CUSTOMER NAME                || " << getname();
        cout << "\n\t\t\t\t\t||  CUSTOMER CNIC                || " << getcnic();
        cout << "\n\t\t\t\t\t||  CUSTOMER PHONE NUMBER        || " << getphonenumber();
        cout << "\n\t\t\t\t\t||  VEHICLE NAME                 || " << vehiclename;
        cout << "\n\t\t\t\t\t||  VEHICLE CHASSIS#             || " << vehiclechassis;
        cout << "\n\t\t\t\t\t||  VEHICLE RENTED DAYS          || " << getrenttingdays();
        cout << "\n\t\t\t\t\t||  VEHICLE RENT/DAY             || " << vehiclerent_day;
        cout << "\n\t\t\t\t\t||  TOTAL AMOUNT                 || " << totalamount;
        cout << "\n\t\t\t\t\t||  ADVANCE TO BE PAID           || " << advance;
        cout << "\n\t\t\t\t\t\xdb\xdb REMAING CHARGES TO BE CLEARED \xdb\xdb";
        cout << "\n\t\t\t\t\t||  REMAINING AMOUNT             || " << advance;
        cout << endl << endl;
    }
    void insuranceclaim()
    {
        cout << "\n\t~~~~PERKS OF DOING BUSINESS IS THAT FOR ANY DAMAGE DONE TO THE VEHICLE YOU GOT TO PAY 30% FOR YOUR ORIGNAL BILL AMOUNT~~~~";
        cout << "\n\t\t\t\t   PRESS ANYKEY TO GENERATE A NEW BILL!!!";
        _getch();
        cout << "\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        cout << "\n\t\t\t\t\t||  CUSTOMER NAME                || " << getname();
        cout << "\n\t\t\t\t\t||  CUSTOMER CNIC                || " << getcnic();
        cout << "\n\t\t\t\t\t||  CUSTOMER PHONE NUMBER        || " << getphonenumber();
        cout << "\n\t\t\t\t\t||  VEHICLE NAME                 || " << vehiclename;
        cout << "\n\t\t\t\t\t||  VEHICLE CHASSIS#             || " << vehiclechassis;
        cout << "\n\t\t\t\t\t||  VEHICLE RENTED DAYS          || " << getrenttingdays();
        cout << "\n\t\t\t\t\t||  VEHICLE RENT/DAY             || " << vehiclerent_day;
        cout << "\n\t\t\t\t\t||  TOTAL AMOUNT                 || " << totalamount;
        cout << "\n\t\t\t\t\t||  ADVANCE TO BE PAID           || " << advance;
        cout << "\n\t\t\t\t\t\xdb\xdb REMAING CHARGES TO BE CLEARED \xdb\xdb";
        cout << "\n\t\t\t\t\t||  REMAINING AMOUNT             || " << advance;
        cout << "\n\t\t\t\t\t||  DAMAGED PART COST            || " << totalamount * 0.3;
        cout << endl << endl;
    }
};

//login global function
int login()
{
    int i, option, numoftries = 0, count = 0;
    char pass[100]{};
    char user[100]{};
    cout << "\t\t\t \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Car Rental Mangement System \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    do
    {
        //\xdb used for designing
        cout << "\n\n\n\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb LOGIN REQUIRED \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        cout << "\n\n\t\t\t\t     Username:- ";
        cin >> user;
        cout << "\t\t\t\t     Password:- ";
        //method to get password stored.
        for (i = 0;i < 100;i++)
        {
            pass[i] = _getch();//any key pressed is not shown on the output console however it is stored in pass[i].
            if (pass[i] == 13)break;//13 is ascii value for enter so system breaks as enter is pressed. 
            cout << "*";//as value store is not shown it prints *.    	 
        }
        pass[i] = '\0';//last value of string is'\0'.
        //comparing of username and password with already stored value.
        if (strcmp(user, "user") == 0 && strcmp(pass, "pass") == 0)
        {
            cout << "\n\n\n\t\t\t\t\tLOGIN SUCCESSFUL!!!";
            cout << "\n\n\t\t\t\t   Press any key to continue...";
            count = count + 1;
            _getch();//pauses the Output Console until a key is pressed.
            break;
        }
        else
        {
            cout << "\n\n\t\t\t\t     LOGIN IS UNSUCESSFUL!!!\n\n\t\t\t*PRESS[1] TO TRY AGAIN\t*PRESS[2] TO MOVE BACK TO MAIN";
            option = _getch();//stores ACII value and does not shows the key pressed on the output screen
            numoftries++;
        }
        if (option == 50)//50 represent ACII value for 2
        {
            count = count + 2;
            break;
        }
    } while (numoftries <= 2);
    if (numoftries > 2)//if number of tries exceeds 3 the login portals end.
    {
        cout << "\n\n\t\t     ACCESS DENIED!!!YOU HAVE ENTERED WRONG LOGIN INFO 3 TIMES!!";
        // Beep(1000, 120);
        _getch();//hold the screen
    }
    system("cls");//clears the screen
    return (count);//count represent the result of login info entered by the user
}

int main()
{
    Vehicle* vehicleobj[100]{};
    Customer* customerobj[100]{};
    int vehicletype, loginreturn, option1 = 0, option2 = 0, option3 = 0, option9 = 0, option4 = 0, option5 = 0, vehicle_modelyear = 0, vehicle_rentperday = 0, transmission = 0, option6 = 0, renttingdays = 0, damagedreport = 0;
    double customerphone;
    char addvehicle = 'y', searchchassis = 'y', searchcustomer = 'y', addcustomer = 'y', editvehicle = 'y';
    static int numofvehicle = 0;
    static int numofcustomer = 0;
    string name, company, vehicle_chassesnumber, vehicle_transmission, customercnic, customeremail, address, vehicle_color;
    for (int i = 0;option1 != 51;i++)//51 represent ACII value for 3
    {
        cout << "\t\t\t \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Car Rental Mangement System \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        cout << "\n\n\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb MAIN MENU \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        cout << "\n\n\t    PRESS[1] FOR OWNER\t\tPRESS[2] FOR EMPLOYEE\t\tPRESS[3] TO EXIT PROGRAM" << endl << endl;
        option1 = _getch();//stores ACII value and does not shows the key pressed on the output screen
        system("cls");//clears the screen
        if (option1 == 49)//49 represent ACII valu for 1
        {
            //calling login function for user
            loginreturn = login();
            if (loginreturn == 1)//if 1 means that the login info entered by the user was right
            {
                int option2 = 0;
                //user menu
                for (int i = 0;option2 != 51;i++)//51 represent ACII value for 3
                {
                    cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb OWNER'S PORTAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
                    cout << "\n\n\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb TASK BAR \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
                    cout << "\n\t\t\t\xdb\t\t\t\t\t      \xdb\n\t\t\t\xdb PRESS[1] TO FILTER VEHICLE RELATED OPTIONS  \xdb\n\t\t\t\xdb PRESS[2] TO FILTER CUSTOMER RELATED OPTIONS \xdb\n\t\t\t\xdb PRESS[3] TO LOGOUT\t\t\t      \xdb\n\t\t\t\xdb\t\t\t\t\t      \xdb\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                    option2 = _getch();//stores ACII value and does not shows the key pressed on the output screen
                    system("cls");//clears the screen
                    if (option2 == 49)//49 represent ACII valu for 1
                    {
                        int option4 = 0;
                        char searchchassis = 'y';
                        char editvehicle = 'y';
                        for (int i = 0;option4 != 53;i++)
                        {
                            char searchchassis = 'y';
                            char addvehicle = 'y';
                            cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb VEHICLE RELATED OPTIONS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                            cout << "\t\t\t\tPRESS[1] TO ADD A VEHICLE\n\t\t\t\tPRESS[2] TO EDIT VEHICLE INFO\n\t\t\t\tPRESS[3] TO DISPLAY VEHICLE INFO\n\t\t\t\tPRESS[4] TO SHOW ALL VEHICLE INFO\n\t\t\t\tPRESS[5] TO RETURN TO TASK BAR";
                            option4 = _getch();
                            system("cls");
                            if (option4 == 49)
                            {
                                for (int i = 0;addvehicle == 'Y' || addvehicle == 'y';i++)
                                {
                                    ofstream outfile("Vehicle info.txt", ios::app);
                                    system("cls");
                                    cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ADDITION OF VEHICLE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                                    if (numofvehicle == 0)
                                    {
                                        cout << "\n\n\t\t\t\t*ENTER VEHICLE CHASSES NUMBER: ";
                                        cin >> ws;
                                        getline(cin, vehicle_chassesnumber);
                                        cout << "\t\t\t\t*ENTER VEHICLE NAME: ";
                                        cin >> ws;
                                        getline(cin, name);
                                        cout << "\t\t\t\t*ENTER VEHICLE COMPANY: ";
                                        cin >> ws;
                                        getline(cin, company);
                                        cout << "\t\t\t\t*ENTER VEHICLE MODEL YEAR:";
                                        cin >> vehicle_modelyear;
                                        cout << "\t\t\t\t*ENTER VEHICLE COLOR:";
                                        cin >> vehicle_color;
                                        cout << "\t\t\t\t*CHOOSE VEHICLE TRANSMISSION\n\t\t\t  PRESS[1] FOR AUTO\t\t PRESS[2] FOR MANUAL";
                                        transmission = _getch();
                                        if (transmission == 49)
                                        {
                                            vehicle_transmission = "AUTO";
                                        }
                                        if (transmission == 50)
                                        {
                                            vehicle_transmission = "MANUAL";
                                        }
                                        cout << "\n\t\t\t\t*ENTER RENT PER DAY FOR THIS VEHICLE: ";
                                        cin >> vehicle_rentperday;
                                        cout << "\t\t\t\t\t*CHOOSE VEHICLE TYPE\n   PRESS[1] FOR SPORTSCAR\t\t PRESS[2] FOR E-CAR\t\t PRESS[3] FOR DAILY USE CAR";
                                        vehicletype = _getch();
                                        if (vehicletype == 49)
                                        {
                                            vehicleobj[numofvehicle] = new sportscar(company, name, vehicle_chassesnumber, vehicle_modelyear, vehicle_rentperday, vehicle_transmission, vehicle_color);
                                            vehicleobj[numofvehicle]->setfueltype("DIESEL");
                                        }
                                        if (vehicletype == 50)
                                        {
                                            vehicleobj[numofvehicle] = new ecar(company, name, vehicle_chassesnumber, vehicle_modelyear, vehicle_rentperday, vehicle_transmission, vehicle_color);
                                            vehicleobj[numofvehicle]->setfueltype("BATTERY POWERD");
                                        }
                                        if (vehicletype == 51)
                                        {
                                            vehicleobj[numofvehicle] = new dailyusecar(company, name, vehicle_chassesnumber, vehicle_modelyear, vehicle_rentperday, vehicle_transmission, vehicle_color);
                                            vehicleobj[numofvehicle]->setfueltype("PETROL");
                                        }              
                                        outfile << "\n\t~~~~~~~~~ VEHICLE NUMBER# " << numofvehicle + 1 << " ~~~~~~~~~";
                                        outfile << "\n\tChassis number: " << vehicle_chassesnumber << "\n";
                                        outfile << "\tName: " << name << "\n";
                                        outfile << "\tCompany: " << company << "\n";
                                        outfile << "\tModel Year: " << vehicle_modelyear << "\n";
                                        outfile << "\tColor: " << vehicle_color << "\n";
                                        outfile << "\tTransmission: " << vehicle_transmission << "\n";
                                        outfile << "\tRent per day: " << vehicle_rentperday << "\n";
                                        outfile << "\tFUEL Type: " << vehicleobj[numofvehicle]->getfueltype() << "\n";
                                        outfile.close();
                                        numofvehicle++;
                                        cout << "\n\n\t\t\t~DO YOU WANT TO ADD ANOTHER VEHICLE YES(Y/y) OR NO(N/n): ";
                                        cin >> addvehicle;
                                        if (addvehicle == 'n' || addvehicle == 'N')
                                        {
                                            cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                                            _getch();
                                            system("cls");
                                            break;
                                        }
                                    }
                                    if (numofvehicle > 0)
                                    {
                                        for (int i = 0;i < numofvehicle;i++)
                                        {
                                            cout << "\n\n\t\t\t\t*ENTER VEHICLE CHASSES NUMBER: ";
                                            cin >> ws;
                                            getline(cin, vehicle_chassesnumber);
                                            if (vehicle_chassesnumber == vehicleobj[i]->getchassis())
                                            {
                                                cout << "\n\t\t\t!!!~VEHICLE CANNOT BE ADDED AS CHASSIS NUMBER ALREADY EXITS~!!!";
                                                cout << "\n\t\t\t    PRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                                                cout << "\n\n\t\t\t  ~DO YOU WANT TO ADD ANOTHER VEHICLE YES(Y/y) OR NO(N/n): ";
                                                cin >> addvehicle;
                                                if (addvehicle == 'n' || addvehicle == 'N')
                                                {
                                                    cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                                                    _getch();
                                                    system("cls");
                                                    break;
                                                }
                                                system("cls");
                                                break;
                                            }
                                            if (vehicle_chassesnumber != vehicleobj[i]->getchassis())
                                            {
                                                cout << "\n\t\t\t\t*ENTER VEHICLE NAME: ";
                                                cin >> ws;
                                                getline(cin, name);
                                                cout << "\t\t\t\t*ENTER VEHICLE COMPANY: ";
                                                cin >> ws;
                                                getline(cin, company);
                                                cout << "\t\t\t\t*ENTER VEHICLE MODEL YEAR:";
                                                cin >> vehicle_modelyear;
                                                cout << "\t\t\t\t*ENTER VEHICLE COLOR:";
                                                cin >> vehicle_color;
                                                cout << "\t\t\t\t*CHOOSE VEHICLE TRANSMISSION\n\t\t\t  PRESS[1] FOR AUTO\t\t PRESS[2] FOR MANUAL";
                                                transmission = _getch();
                                                if (transmission == 49)
                                                {
                                                    vehicle_transmission = "AUTO";
                                                }
                                                if (transmission == 50)
                                                {
                                                    vehicle_transmission = "MANUAL";
                                                }
                                                cout << "\n\t\t\t\t*ENTER RENT PER DAY FOR THIS VEHICLE: ";
                                                cin >> vehicle_rentperday;
                                                cout << "\t\t\t\t\t*CHOOSE VEHICLE TYPE\n   PRESS[1] FOR SPORTSCAR\t\t PRESS[2] FOR E-CAR\t\t PRESS[3] FOR DAILY USE CAR";
                                                vehicletype = _getch();
                                                if (vehicletype == 49)
                                                {
                                                    vehicleobj[numofvehicle] = new sportscar(company, name, vehicle_chassesnumber, vehicle_modelyear, vehicle_rentperday, vehicle_transmission, vehicle_color);
                                                    vehicleobj[numofvehicle]->setfueltype("DIESEL");
                                                }
                                                if (vehicletype == 50)
                                                {
                                                    vehicleobj[numofvehicle] = new ecar(company, name, vehicle_chassesnumber, vehicle_modelyear, vehicle_rentperday, vehicle_transmission, vehicle_color);
                                                    vehicleobj[numofvehicle]->setfueltype("BATTERY POWERD");
                                                }
                                                if (vehicletype == 51)
                                                {
                                                    vehicleobj[numofvehicle] = new dailyusecar(company, name, vehicle_chassesnumber, vehicle_modelyear, vehicle_rentperday, vehicle_transmission, vehicle_color);
                                                    vehicleobj[numofvehicle]->setfueltype("PETROL");
                                                }
                                                outfile << "\n\t~~~~~~~~~ VEHICLE NUMBER# " << numofvehicle + 1 << " ~~~~~~~~~";
                                                outfile << "\n\tChassis number: " << vehicle_chassesnumber << "\n";
                                                outfile << "\tName: " << name << "\n";
                                                outfile << "\tCompany: " << company << "\n";
                                                outfile << "\tModel Year: " << vehicle_modelyear << "\n";
                                                outfile << "\tColor: " << vehicle_color << "\n";
                                                outfile << "\tTransmission: " << vehicle_transmission << "\n";
                                                outfile << "\tRent per day: " << vehicle_rentperday << "\n";
                                                outfile << "\tFUEL Type: " << vehicleobj[numofvehicle]->getfueltype() << "\n";
                                                outfile.close();
                                                numofvehicle++;
                                                cout << "\n\n\t\t\t~DO YOU WANT TO ADD ANOTHER VEHICLE YES(Y/y) OR NO(N/n): ";
                                                cin >> addvehicle;
                                                if (addvehicle == 'n' || addvehicle == 'N')
                                                {
                                                    cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                                                    _getch();
                                                    system("cls");
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if (option4 == 50)
                            {
                                option9 = 0;
                                char editvehicle = 'y';
                                for (int i = 0;editvehicle == 'y' || editvehicle == 'Y';i++)
                                {
                                    system("cls");
                                    cout << "\t\t\t\t   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb EDIT VEHICLE INFO \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                                    if (numofvehicle == 0)
                                    {
                                        cout << "\n\t\t\t     PLEASE ADD A VEHICLE TO EDIT IT'S INFO..";
                                        cout << "\n\t\t\tPRESS ANY KEY TO RETURN BACK TO CUSTOMER RELATED OPTION..";
                                        _getch();
                                        system("cls");
                                        break;
                                    }
                                    for (int i = 0;i < numofvehicle;i++)
                                    {
                                        cout << "\n\t\t\t\t~~~~~~~~~ VEHICLE NUMBER# " << i + 1 << " ~~~~~~~~~";
                                        vehicleobj[i]->displaysearch();
                                    }
                                    cout << "\n\n\t\t\t\t    *ENTER VEHICLE CHASSIS# ";
                                    cin >> ws;
                                    getline(cin, vehicle_chassesnumber);
                                    for (int i = 0;i <= numofvehicle;i++)
                                    {
                                        if (vehicle_chassesnumber == vehicleobj[i]->getchassis())
                                        {
                                            vehicleobj[i]->displayallinfo();
                                            cout << "\n\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
                                            cout << "\n\t\t\t\tPRESS[1] TO EDIT VEHICLE NAME";
                                            cout << "\n\t\t\t\tPRESS[2] TO EDIT VEHICLE COLOR";
                                            cout << "\n\t\t\t\tPRESS[3] TO VEHICLE TRANSMISSIN";
                                            cout << "\n\t\t\t\tPRESS[4] TO RETRUN TO VEHICLE RELATED OPTIONS";
                                            option9 = _getch();
                                            if (option9 == 49)
                                            {
                                                cout << "\n\n\t\t\t\t*ENTER VEHICLE'S NEW NAME: ";
                                                cin >> ws;
                                                getline(cin, name);
                                                vehicleobj[i]->setname(name);
                                                cout << "\n\t\t\t\t!!VEHICLE'S NAME CHANGED!!";
                                                cout << "\n\t\t~DO YOU WANT TO EDIT ANOTHER VEHICLE INFO YES(Y/y) OR NO(N/n): ";
                                                cin >> editvehicle;
                                                if (editvehicle == 'n' || editvehicle == 'N')
                                                {
                                                    cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                                                    _getch();
                                                    system("cls");
                                                    break;
                                                }
                                            }
                                            if (option9 == 50)
                                            {
                                                cout << "\n\n\t\t\t\t*ENTER VEHICLE'S NEW COLOR: ";
                                                cin >> ws;
                                                getline(cin, vehicle_color);
                                                vehicleobj[i]->setcolor(vehicle_color);
                                                cout << "\n\t\t\t\t!!VEHICLE'S COLOR CHANGED!!";
                                                cout << "\n\t\t~DO YOU WANT TO EDIT ANOTHER VEHICLE INFO YES(Y/y) OR NO(N/n): ";
                                                cin >> editvehicle;
                                                if (editvehicle == 'n' || editvehicle == 'N')
                                                {
                                                    cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                                                    _getch();
                                                    system("cls");
                                                    break;
                                                }
                                            }
                                            if (option9 == 51)
                                            {
                                                cout << "\n\t\t\t\t*CHOOSE VEHICLE'S NEW TRANSMISSION\n\t\t\t  PRESS[1] FOR AUTO\t\t PRESS[2] FOR MANUAL";
                                                transmission = _getch();
                                                if (transmission == 49)
                                                {
                                                    vehicle_transmission = "AUTO";
                                                }
                                                if (transmission == 50)
                                                {
                                                    vehicle_transmission = "MANUAL";
                                                }
                                                vehicleobj[i]->settransmission(vehicle_transmission);
                                                cout << "\n\t\t\t\t!!VEHICLE'S TRANSMISSIN CHANGED!!";
                                                cout << "\n\t\t~DO YOU WANT TO EDIT ANOTHER VEHICLE INFO YES(Y/y) OR NO(N/n): ";
                                                cin >> editvehicle;
                                                if (editvehicle == 'n' || editvehicle == 'N')
                                                {
                                                    cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                                                    _getch();
                                                    system("cls");
                                                    break;
                                                }
                                            }
                                            if (option9 == 52)
                                            {
                                                editvehicle = 'n';
                                                if (editvehicle == 'n' || editvehicle == 'N')
                                                {
                                                    system("cls");
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if (option4 == 51)
                            {
                                char searchchassis = 'y';
                                for (int x = 0;searchchassis == 'Y' || searchchassis == 'y';x++)
                                {
                                    system("cls");
                                    cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb SEARCHING FOR VEHICLE INFO \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                                    if (numofvehicle == 0)
                                    {
                                        cout << "\n\t\t\t     PLEASE ADD A VEHICLE TO DISPLAY IT'S INFO..";
                                        cout << "\n\t\t\tPRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                                        _getch();
                                        system("cls");
                                        break;
                                    }
                                    for (int i = 0;i < numofvehicle;i++)
                                    {
                                        cout << "\n\t\t\t\t~~~~~~~~~ VEHICLE NUMBER# " << i + 1 << " ~~~~~~~~~";
                                        vehicleobj[i]->displaysearch();
                                    }
                                    if (numofvehicle >= 5)
                                    {
                                        cout << "\n\n\t\t\t\t    *ENTER VEHICLE NAME: ";
                                        cin >> ws;
                                        getline(cin, name);
                                        for (int i = 0;i < numofvehicle;i++)
                                        {
                                            if (name == vehicleobj[i]->getname())
                                            {
                                                cout << "\n\t\t\t\t~~~~~~~~~ VEHICLE NUMBER# " << i + 1 << " ~~~~~~~~~";
                                                vehicleobj[i]->displaysearch();
                                            }
                                        }
                                    }
                                    cout << "\n\n\t\t\t\t    *ENTER VEHICLE CHASSES NUMBER: ";
                                    cin >> ws;
                                    getline(cin, vehicle_chassesnumber);
                                    for (int i = 0;i < numofvehicle;i++)
                                    {
                                        if (vehicle_chassesnumber == vehicleobj[i]->getchassis())
                                        {
                                            vehicleobj[i]->displayallinfo();
                                            break;
                                        }
                                    }
                                    cout << "\n\t\t~DO YOU WANT TO SEARCH FOR ANOTHER VEHICLE INFO YES(Y/y) OR NO(N/n): ";
                                    cin >> searchchassis;
                                    if (searchchassis == 'n' || searchchassis == 'N')
                                    {
                                        cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                                        _getch();
                                        system("cls");
                                    }
                                }
                            }
                            if (option4 == 52)
                            {
                                //display all vehicle name and chases number and revenue generated by each of them
                                system("cls");
                                cout << "\t\t\t\t   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ALL VEHICLE INFO \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                                if (numofvehicle == 0)
                                {
                                    cout << "\n\t\t\t     PLEASE ADD A VEHICLE TO DISPLAY IT'S INFO..";
                                    cout << "\n\t\t\tPRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                                    _getch();
                                    system("cls");
                                    break;
                                }
                                for (int i = 0;i < numofvehicle;i++)
                                {
                                    cout << "\n\t\t\t\t    ~~~~~~~~~ VEHICLE NUMBER# " << i + 1 << " ~~~~~~~~~";
                                    vehicleobj[i]->displayallinfo();
                                }
                                cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                                _getch();
                                system("cls");
                            }
                        }
                    }
                    if (option2 == 50)//50 represent ACII valu for 2
                    {
                        int  option3 = 0;
                        char searchcustomer = 'y';
                        char editcustomer = 'y';
                        for (int i = 0;option3 != 52;i++)
                        {
                            cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb CUSTOMER RELATED OPTIONS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                            cout << "\t\t\t\tPRESS[1] TO EDIT CUSTOMER INFO\n\t\t\t\tPRESS[2] TO DISPLAY CUSTOMER INFO\n\t\t\t\tPRESS[3] TO DISPLAY ALL CUSTOMER INFO\n\t\t\t\tPRESS[4] TO RETURN TO TASK BAR";
                            option3 = _getch();
                            system("cls");
                            if (option3 == 49)
                            {
                                char editcustomer = 'y';
                                for (int i = 0;editcustomer == 'y' || editcustomer == 'Y';i++)
                                {
                                    system("cls");
                                    cout << "\t\t\t\t   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb EDIT CUSTOMER INFO \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                                    if (numofcustomer == 0)
                                    {
                                        cout << "\n\t\t\t     PLEASE ADD A CUSTOMER TO EDIT IT'S INFO..";
                                        cout << "\n\t\t\tPRESS ANY KEY TO RETURN BACK TO CUSTOMER RELATED OPTION..";
                                        _getch();
                                        system("cls");
                                        break;
                                    }
                                    for (int i = 0;i <= numofcustomer;i++)
                                    {
                                        cout << "\n\t\t\t\t~~~~~~~~~ CUSTOMER NUMBER# " << i + 1 << " ~~~~~~~~~";
                                        customerobj[i]->displaysearch1();
                                        break;
                                    }
                                    cout << "\n\n\t\t\t\t    *ENTER CUSTOMER CNIC: ";
                                    cin >> ws;
                                    getline(cin, customercnic);
                                    for (int i = 0;i <= numofcustomer;i++)
                                    {
                                        if (customercnic == customerobj[i]->getcnic())
                                        {
                                            customerobj[i]->displayallinfo1();
                                            cout << "\n\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
                                            cout << "\n\t\t\t\tPRESS[1] TO EDIT CUSTOMER NAME";
                                            cout << "\n\t\t\t\tPRESS[2] TO EDIT CUSTOMER ADDRESS";
                                            cout << "\n\t\t\t\tPRESS[3] TO EDIT CUSTOMER EMAIL";
                                            cout << "\n\t\t\t\tPRESS[4] TO EDIT CUSTOMER PHONE NUMBER";
                                            cout << "\n\t\t\t\tPRESS[5] TO RETRUN TO CUSTOMER RELATED OPTIONS";
                                            option6 = _getch();
                                            if (option6 == 49)
                                            {
                                                cout << "\n\n\t\t\t\t*ENTER CUSTOMER'S NEW NAME: ";
                                                cin >> ws;
                                                getline(cin, name);
                                                customerobj[i]->setname(name);
                                                cout << "\n\t\t\t\t!!CUSTOMER'S NAME CHANGED!!";
                                                cout << "\n\t\t~DO YOU WANT TO EDIT ANOTHER CUSTOMER INFO YES(Y/y) OR NO(N/n): ";
                                                cin >> editcustomer;
                                                if (editcustomer == 'n' || editcustomer == 'N')
                                                {
                                                    cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO CUSTOMER RELATED OPTION..";
                                                    _getch();
                                                    system("cls");
                                                    break;
                                                }
                                            }
                                            if (option6 == 50)
                                            {
                                                cout << "\n\n\t\t\t\t*ENTER CUSTOMER'S NEW ADDRESS: ";
                                                cin >> ws;
                                                getline(cin, address);
                                                customerobj[i]->setaddress(address);
                                                cout << "\n\t\t\t\t!!CUSTOMER'S ADDRESS CHANGED!!";
                                                cout << "\n\t\t~DO YOU WANT TO EDIT ANOTHER CUSTOMER INFO YES(Y/y) OR NO(N/n): ";
                                                cin >> editcustomer;
                                                if (editcustomer == 'n' || editcustomer == 'N')
                                                {
                                                    cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO CUSTOMER RELATED OPTION..";
                                                    _getch();
                                                    system("cls");
                                                    break;
                                                }
                                            }
                                            if (option6 == 51)
                                            {
                                                cout << "\n\n\t\t\t\t*ENTER CUSTOMER'S NEW EMAIL: ";
                                                cin >> ws;
                                                getline(cin, customeremail);
                                                customerobj[i]->setemail(customeremail);
                                                cout << "\n\t\t\t\t!!CUSTOMER'S EMAIL CHANGED!!";
                                                cout << "\n\t\t~DO YOU WANT TO EDIT ANOTHER CUSTOMER INFO YES(Y/y) OR NO(N/n): ";
                                                cin >> editcustomer;
                                                if (editcustomer == 'n' || editcustomer == 'N')
                                                {
                                                    cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO CUSTOMER RELATED OPTION..";
                                                    _getch();
                                                    system("cls");
                                                    break;
                                                }
                                            }
                                            if (option6 == 52)
                                            {
                                                cout << "\n\n\t\t\t\t*ENTER CUSTOMER'S NEW PHONE# ";
                                                cin >> customerphone;
                                                customerobj[i]->setphonenumber(customerphone);
                                                cout << "\n\t\t\t\t!!CUSTOMER'S PHONE NUMBEER CHANGED!!";
                                                cout << "\n\t\t~DO YOU WANT TO EDIT ANOTHER CUSTOMER INFO YES(Y/y) OR NO(N/n): ";
                                                cin >> editcustomer;
                                                if (editcustomer == 'n' || editcustomer == 'N')
                                                {
                                                    cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO CUSTOMER RELATED OPTION..";
                                                    _getch();
                                                    system("cls");
                                                    break;
                                                }
                                            }
                                            if (option6 == 53)
                                            {
                                                editcustomer = 'n';
                                                if (editcustomer == 'n' || editcustomer == 'N')
                                                {
                                                    system("cls");
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if (option3 == 50)
                            {
                                char searchcustomer = 'y';
                                for (int i = 0;searchcustomer == 'y' || searchcustomer == 'Y';i++)
                                {
                                    system("cls");
                                    cout << "\t\t\t\t   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb DISPLAY CUSTOMER INFO \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                                    if (numofcustomer == 0)
                                    {
                                        cout << "\n\t\t\t     PLEASE ADD A CUSTOMER TO DISPLAY IT'S INFO..";
                                        cout << "\n\t\t\tPRESS ANY KEY TO RETURN BACK TO CUSTOMER RELATED OPTION..";
                                        _getch();
                                        system("cls");
                                        break;
                                    }
                                    for (int i = 0;i < numofcustomer;i++)
                                    {
                                        cout << "\n\t\t\t\t      ~~~~~~~~~ CUSTOMER NUMBER# " << i + 1 << " ~~~~~~~~~";
                                        customerobj[i]->displaysearch1();
                                    }
                                    if (numofcustomer >= 5)
                                    {
                                        cout << "\n\n\t\t\t\t    *ENTER CUSTOMER NAME: ";
                                        cin >> ws;
                                        getline(cin, name);
                                        for (int i = 0;i < numofcustomer;i++)
                                        {
                                            if (name == customerobj[i]->getname())
                                            {
                                                cout << "\n\t\t\t\t~~~~~~~~~ CUSTOMER NUMBER# " << i + 1 << " ~~~~~~~~~";
                                                customerobj[i]->displaysearch1();
                                            }
                                        }
                                    }
                                    cout << "\n\n\t\t\t\t         *ENTER CUSTOMER CNIC: ";
                                    cin >> ws;
                                    getline(cin, customercnic);
                                    for (int i = 0;i < numofcustomer;i++)
                                    {
                                        if (customercnic == customerobj[i]->getcnic())
                                        {
                                            customerobj[i]->displayallinfo1();
                                            break;
                                        }
                                    }
                                    cout << "\n\t\t\t~DO YOU WANT TO SEARCH FOR ANOTHER CUSTOMER INFO YES(Y/y) OR NO(N/n): ";
                                    cin >> searchcustomer;
                                    if (searchcustomer == 'n' || searchcustomer == 'N')
                                    {
                                        cout << "\n\t\t\t\t PRESS ANY KEY TO RETURN BACK TO CUSTOMER RELATED OPTION..";
                                        _getch();
                                        system("cls");
                                    }
                                }

                            }
                            if (option3 == 51)
                            {
                                system("cls");
                                cout << "\t\t\t\t   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ALL CUSTOMER INFO \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                                if (numofcustomer == 0)
                                {
                                    cout << "\n\t\t\t     PLEASE ADD A CUSTOMER TO DISPLAY IT'S INFO..";
                                    cout << "\n\t\t\tPRESS ANY KEY TO RETURN BACK TO CUSTOMER RELATED OPTION..";
                                    _getch();
                                    system("cls");
                                }
                                else
                                {
                                    for (int i = 0;i <= numofcustomer;i++)
                                    {
                                        cout << "\n\t\t\t\t    ~~~~~~~~~ CUSTOMER NUMBER# " << i + 1 << " ~~~~~~~~~";
                                        customerobj[i]->displayallinfo1();
                                        cout << "\n\t\t\t PRESS ANY KEY TO RETURN BACK TO CUSTOMER RELATED OPTION..";
                                        _getch();
                                        system("cls");
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((loginreturn == 0 && loginreturn != 2) && (option2 != 51))
            {
                for (int i = 0;option1 != 51;i++)
                {
                    cout << "\t\t\t \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Car Rental Mangement System \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
                    cout << "\n\n\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb MAIN MENU \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
                    cout << "\n\n\t\t\tPRESS[2] FOR EMPLOYEE\t\tPRESS[3] TO EXIT PROGRAM" << endl << endl;
                    option1 = _getch();//stores ACII value and does not shows the key pressed on the output screen
                    system("cls");//clears the screen
                    if (option1 == 50)
                    {
                        int option5 = 0;
                        char addcustomer = 'y';
                        for (int i = 0;option5 != 52;i++)
                        {
                            cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb EMPLOYEE'S PORTAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
                            cout << "\n\n\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb TASK BAR \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
                            cout << "\n\t\t\t\xdb\t\t\t\t\t        \xdb\n\t\t\t\xdb PRESS[1] TO ADD A CUSTOMER  \t\t\t\xdb\n\t\t\t\xdb PRESS[2] FOR RETURNING OF VEHICLE BY CUSTOMER \xdb\n\t\t\t\xdb PRESS[3] TO EXTENSION OF RENTED DAYS    \t\xdb\n\t\t\t\xdb PRESS[4] TO RETURN TO MAIN MENU         \t\xdb\n\t\t\t\xdb\t\t\t\t\t        \xdb\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                            option5 = _getch();//stores ACII value and does not shows the key pressed on the output screen
                            system("cls");//clears the screen
                            if (option5 == 49)
                            {
                                char addcustomer = 'y';
                                //customer object creation
                                for (int i = 0;addcustomer == 'Y' || addcustomer == 'y';i++)
                                {
                                    system("cls");
                                    cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ADDITION OF CUSTOMER \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                                    ofstream outfile("Customer.txt", ios::app);
                                    if (numofvehicle == 0)
                                    {
                                        cout << "\n\t\t\t THERE IS NO VEHICLE PRESENT HENCE NO CUSTOMER CAN BE ADDED..";
                                        cout << "\n\t\t\t   PRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                                        _getch();
                                        system("cls");
                                        break;
                                    }
                                    cout << "\t\t\t\t*ENTER CUSTOMER CNIC NUMBER: ";
                                    cin >> ws;
                                    getline(cin, customercnic);
                                    if (numofcustomer > 0)
                                    {
                                        for (int i = 0;i < numofcustomer;i++)
                                        {
                                            if (customercnic == customerobj[i]->getcnic())
                                            {
                                                cout << "\n\t\t\t!!!~CUSTOMER CANNOT BE ADDED AS CNIC NUMBER ALREADY EXITS~!!!";
                                                cout << "\n\n\t\t\t~DO YOU WANT TO ADD ANOTHER CUSTOMER YES(Y/y) OR NO(N/n): ";
                                                cin >> addcustomer;
                                                if (addcustomer == 'n' || addcustomer == 'N')
                                                {
                                                    cout << "\n\t\t\t     PRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                                    _getch();
                                                    system("cls");
                                                    break;
                                                }
                                            }
                                            if (customercnic != customerobj[i]->getcnic())
                                            {
                                                cout << "\t\t\t\t*ENTER CUSTOMER NAME: ";
                                                cin >> ws;
                                                getline(cin, name);
                                                cout << "\t\t\t\t*ENTER CUSTOMER ADDRESS: ";
                                                cin >> ws;
                                                getline(cin, address);
                                                cout << "\t\t\t\t*ENTER CUSTOMER EMAIL:";
                                                cin >> customeremail;
                                                cout << "\t\t\t\t*ENTER CUSTOMER PHONE# ";
                                                cin >> customerphone;
                                                for (int i = 0;i < numofvehicle;i++)
                                                {
                                                    cout << "\n\t\t\t\t    ~~~~~~~~~ VEHICLE NUMBER# " << i + 1 << " ~~~~~~~~~";
                                                    vehicleobj[i]->displayallinfo();
                                                }
                                                cout << "\n\n\t\t\tENTER VEHICLE CHASSES NUMBER TO RENT THE PARTICULAR VEHICLE (IN DAYS): ";
                                                cin >> ws;
                                                getline(cin, vehicle_chassesnumber);
                                                for (int i = 0;i < numofvehicle;i++)
                                                {
                                                    if (vehicle_chassesnumber == vehicleobj[i]->getchassis())
                                                    {
                                                        cout << "\t\t\t\t*FOR HOW LONG YOU NEED TO RENT IT: ";
                                                        cin >> renttingdays;
                                                        customerobj[numofcustomer] = new Customer(name, customeremail, address, customerphone, customercnic, *vehicleobj[i], renttingdays);
                                                        vehicleobj[i]->setrenteddays(renttingdays);
                                                        vehicleobj[i]->incrementrentdays();
                                                        customerobj[i]->billcalculation(*vehicleobj[i]);
                                                        customerobj[i]->displaybill();
                                                        outfile << "\n    ~~~~~~~~~ Customer NUMBER# " << numofcustomer + 1 << " ~~~~~~~~~";
                                                        outfile << "\n\tCUSTOMER CNIC NUMBER: " << customercnic << endl;
                                                        outfile << "\tCUSTOMER NAME: " << name << endl;
                                                        outfile << "\tCUSTOMER ADDRESS: " << address << endl;
                                                        outfile << "\tCUSTOMER EMAIL: " << customeremail << endl;
                                                        outfile << "\tCUSTOMER PHONE#: " << customerphone << endl; 
                                                        outfile << "\n\t~~~CUSTOMER RENTED VEHICLE~~~" << endl;
                                                        outfile << "\n\tChassis number: " << vehicleobj[i]->getchassis() << "\n";
                                                        outfile << "\tName: " << vehicleobj[i]->getname() << "\n";
                                                        outfile << "\tCompany: " << vehicleobj[i]->getcompany() << "\n";
                                                        outfile << "\tModel Year: " << vehicleobj[i]->getmodel() << "\n";
                                                        outfile << "\tColor: " << vehicleobj[i]->getcolor() << "\n";
                                                        outfile << "\tTransmission: " << vehicleobj[i]->gettransmission() << "\n";
                                                        outfile << "\tRent per day: " << vehicleobj[i]->getrentperday() << "\n";
                                                        outfile << "\tFUEL Type: " << vehicleobj[i]->getfueltype() << "\n";                                                        
                                                        outfile.close();
                                                        numofcustomer++;
                                                        break;
                                                    }
                                                }
                                                cout << "\n\n\t\t\t~DO YOU WANT TO ADD ANOTHER CUSTOMER YES(Y/y) OR NO(N/n): ";
                                                cin >> addcustomer;
                                                if (addcustomer == 'n' || addcustomer == 'N')
                                                {
                                                    cout << "\n\t\t\t\tPRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                                    _getch();
                                                    system("cls");
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    if (numofcustomer == 0)
                                    {
                                        cout << "\t\t\t\t*ENTER CUSTOMER NAME: ";
                                        cin >> ws;
                                        getline(cin, name);
                                        cout << "\t\t\t\t*ENTER CUSTOMER ADDRESS: ";
                                        cin >> ws;
                                        getline(cin, address);
                                        cout << "\t\t\t\t*ENTER CUSTOMER EMAIL:";
                                        cin >> customeremail;
                                        cout << "\t\t\t\t*ENTER CUSTOMER PHONE# ";
                                        cin >> customerphone;
                                        for (int i = 0;i < numofvehicle;i++)
                                        {
                                            cout << "\n\t\t\t\t    ~~~~~~~~~ VEHICLE NUMBER# " << i + 1 << " ~~~~~~~~~";
                                            vehicleobj[i]->displayallinfo();
                                        }
                                        cout << "\n\n\t\t\tENTER VEHICLE CHASSES NUMBER TO RENT THE PARTICULAR VEHICLE: ";
                                        cin >> ws;
                                        getline(cin, vehicle_chassesnumber);
                                        for (int i = 0;i < numofvehicle;i++)
                                        {
                                            if (vehicle_chassesnumber == vehicleobj[i]->getchassis())
                                            {
                                                cout << "\t\t\t\t*FOR HOW LONG YOU NEED TO RENT IT (IN DAYS): ";
                                                cin >> renttingdays;
                                                customerobj[numofcustomer] = new Customer(name, customeremail, address, customerphone, customercnic, *vehicleobj[i], renttingdays);
                                                vehicleobj[i]->setrenteddays(renttingdays);
                                                vehicleobj[i]->incrementrentdays();
                                                customerobj[i]->billcalculation(*vehicleobj[i]);
                                                customerobj[i]->displaybill();
                                                outfile << "\n    ~~~~~~~~~ Customer NUMBER# " << numofcustomer + 1 << " ~~~~~~~~~";
                                                outfile << "\n\tCUSTOMER CNIC NUMBER: " << customercnic << endl;
                                                outfile << "\tCUSTOMER NAME: " << name << endl;
                                                outfile << "\tCUSTOMER ADDRESS: " << address << endl;
                                                outfile << "\tCUSTOMER EMAIL: " << customeremail << endl;
                                                outfile << "\tCUSTOMER PHONE#: " << customerphone << endl;
                                                outfile << "\n\t~~~CUSTOMER RENTED VEHICLE~~~" << endl;
                                                outfile << "\n\tChassis number: " << vehicleobj[i]->getchassis() << "\n";
                                                outfile << "\tName: " << vehicleobj[i]->getname() << "\n";
                                                outfile << "\tCompany: " << vehicleobj[i]->getcompany() << "\n";
                                                outfile << "\tModel Year: " << vehicleobj[i]->getmodel() << "\n";
                                                outfile << "\tColor: " << vehicleobj[i]->getcolor() << "\n";
                                                outfile << "\tTransmission: " << vehicleobj[i]->gettransmission() << "\n";
                                                outfile << "\tRent per day: " << vehicleobj[i]->getrentperday() << "\n";
                                                outfile << "\tFUEL Type: " << vehicleobj[i]->getfueltype() << "\n";
                                                outfile.close();
                                                numofcustomer++;
                                                break;
                                            }
                                        }
                                        cout << "\n\n\t\t\t~DO YOU WANT TO ADD ANOTHER CUSTOMER YES(Y/y) OR NO(N/n): ";
                                        cin >> addcustomer;
                                        if (addcustomer == 'n' || addcustomer == 'N')
                                        {
                                            cout << "\n\t\t\t\tPRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                            _getch();
                                            system("cls");
                                            break;
                                        }
                                    }
                                    if (customercnic == customerobj[i]->getcnic())
                                    {
                                        cout << "\n\t\t\t!!!~CUSTOMER CANNOT BE ADDED AS CNIC NUMBER ALREADY EXITS~!!!";
                                        cout << "\n\n\t\t\t~DO YOU WANT TO ADD ANOTHER CUSTOMER YES(Y/y) OR NO(N/n): ";
                                        cin >> addcustomer;
                                        if (addcustomer == 'n' || addcustomer == 'N')
                                        {
                                            cout << "\n\t\t\t     PRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                            _getch();
                                            system("cls");
                                            break;
                                        }
                                    }
                                }
                            }
                            if (option5 == 50)
                            {
                                //customer returning
                                cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb CUSTOMER RETURNING VEHICLE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
                                cout << "\n\n\t\t\t\t         *ENTER CUSTOMER CNIC: ";
                                cin >> ws;
                                getline(cin, customercnic);
                                for (int i = 0;i < numofcustomer;i++)
                                {
                                    if (customercnic == customerobj[i]->getcnic())
                                    {
                                        customerobj[i]->displaybill();
                                        cout << "\t\t\t\t*CHOOSE VEHICLE REPORT\n\t\t\t  PRESS[1] FOR DAMAGED\t\t PRESS[2] UNDAMAGED";
                                        damagedreport = _getch();
                                        if (damagedreport == 49)
                                        {
                                            customerobj[i]->insuranceclaim();
                                            cout << "\n\t\t\t\tPRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                            _getch();
                                            system("cls");
                                            break;
                                        }
                                        if (damagedreport == 50)
                                        {
                                            cout << "\n\t\t\t                ~~~ THANK YOU FOR CHOOSING US ~~~";
                                            cout << "\n\t\t\t~~~ WE HOPE THAT OUR CAR RENTAL SERVICES MET YOUR EXPECTATIONS ~~~";
                                            cout << "\n\t\t\t\tPRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                            _getch();
                                            system("cls");
                                            break;
                                        }
                                    }
                                }
                            }
                            if (option5 == 51)
                            {
                                cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb EXTENDING OF VEHICLE RENT DURATION \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                                cout << "\n\n\t\t\t\t         *ENTER CUSTOMER CNIC: ";
                                cin >> ws;
                                getline(cin, customercnic);
                                for (int i = 0;i < numofcustomer;i++)
                                {
                                    if (customercnic == customerobj[i]->getcnic())
                                    {
                                        customerobj[i]->displaybill();
                                        cout << "\t\t\t\t*ENTER THE NEW DURATION OF DAYS: ";
                                        cin >> renttingdays;
                                        customerobj[i]->setrentingdays(renttingdays);
                                        customerobj[i]->incrementeddays(renttingdays);
                                        customerobj[i]->displaybill();
                                        cout << "\n\t\t\t\tPRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                        _getch();
                                        system("cls");
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (option1 == 50)
        {
            int option5 = 0;
            char addcustomer = 'y';
            for (int i = 0;option5 != 52;i++)
            {
                cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb EMPLOYEE'S PORTAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
                cout << "\n\n\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb TASK BAR \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
                cout << "\n\t\t\t\xdb\t\t\t\t\t        \xdb\n\t\t\t\xdb PRESS[1] TO ADD A CUSTOMER  \t\t\t\xdb\n\t\t\t\xdb PRESS[2] FOR RETURNING OF VEHICLE BY CUSTOMER \xdb\n\t\t\t\xdb PRESS[3] TO EXTENSION OF RENTED DAYS    \t\xdb\n\t\t\t\xdb PRESS[4] TO RETURN TO MAIN MENU         \t\xdb\n\t\t\t\xdb\t\t\t\t\t        \xdb\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                option5 = _getch();//stores ACII value and does not shows the key pressed on the output screen
                system("cls");//clears the screen
                if (option5 == 49)
                {
                    char addcustomer = 'y';
                    //customer object creation
                    for (int i = 0;addcustomer == 'Y' || addcustomer == 'y';i++)
                    {
                        system("cls");
                        cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ADDITION OF CUSTOMER \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                        ofstream outfile("Customer.txt", ios::app);
                        if (numofvehicle == 0)
                        {
                            cout << "\n\t\t\t THERE IS NO VEHICLE PRESENT HENCE NO CUSTOMER CAN BE ADDED..";
                            cout << "\n\t\t\t   PRESS ANY KEY TO RETURN BACK TO VEHICLE RELATED OPTION..";
                            _getch();
                            system("cls");
                            break;
                        }
                        cout << "\t\t\t\t*ENTER CUSTOMER CNIC NUMBER: ";
                        cin >> ws;
                        getline(cin, customercnic);
                        if (numofcustomer > 0)
                        {
                            for (int i = 0;i < numofcustomer;i++)
                            {
                                if (customercnic == customerobj[i]->getcnic())
                                {
                                    cout << "\n\t\t\t!!!~CUSTOMER CANNOT BE ADDED AS CNIC NUMBER ALREADY EXITS~!!!";
                                    cout << "\n\n\t\t\t~DO YOU WANT TO ADD ANOTHER CUSTOMER YES(Y/y) OR NO(N/n): ";
                                    cin >> addcustomer;
                                    if (addcustomer == 'n' || addcustomer == 'N')
                                    {
                                        cout << "\n\t\t\t     PRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                        _getch();
                                        system("cls");
                                        break;
                                    }
                                }
                                if (customercnic != customerobj[i]->getcnic())
                                {
                                    cout << "\t\t\t\t*ENTER CUSTOMER NAME: ";
                                    cin >> ws;
                                    getline(cin, name);
                                    cout << "\t\t\t\t*ENTER CUSTOMER ADDRESS: ";
                                    cin >> ws;
                                    getline(cin, address);
                                    cout << "\t\t\t\t*ENTER CUSTOMER EMAIL:";
                                    cin >> customeremail;
                                    cout << "\t\t\t\t*ENTER CUSTOMER PHONE# ";
                                    cin >> customerphone;
                                    for (int i = 0;i < numofvehicle;i++)
                                    {
                                        cout << "\n\t\t\t\t    ~~~~~~~~~ VEHICLE NUMBER# " << i + 1 << " ~~~~~~~~~";
                                        vehicleobj[i]->displayallinfo();
                                    }
                                    cout << "\n\n\t\t\tENTER VEHICLE CHASSES NUMBER TO RENT THE PARTICULAR VEHICLE: ";
                                    cin >> ws;
                                    getline(cin, vehicle_chassesnumber);
                                    for (int i = 0;i < numofvehicle;i++)
                                    {
                                        if (vehicle_chassesnumber == vehicleobj[i]->getchassis())
                                        {
                                            cout << "\t\t\t\t*FOR HOW LONG YOU NEED TO RENT IT (IN DAYS): ";
                                            cin >> renttingdays;
                                            customerobj[numofcustomer] = new Customer(name, customeremail, address, customerphone, customercnic, *vehicleobj[i], renttingdays);
                                            vehicleobj[i]->setrenteddays(renttingdays);
                                            vehicleobj[i]->incrementrentdays();
                                            customerobj[i]->billcalculation(*vehicleobj[i]);
                                            customerobj[i]->displaybill();
                                            outfile << "\n    ~~~~~~~~~ Customer NUMBER# " << numofcustomer + 1 << " ~~~~~~~~~";
                                            outfile << "\n\tCUSTOMER CNIC NUMBER: " << customercnic << endl;
                                            outfile << "\tCUSTOMER NAME: " << name << endl;
                                            outfile << "\tCUSTOMER ADDRESS: " << address << endl;
                                            outfile << "\tCUSTOMER EMAIL: " << customeremail << endl;
                                            outfile << "\tCUSTOMER PHONE#: " << customerphone << endl;
                                            outfile << "\n\t~~~CUSTOMER RENTED VEHICLE~~~" << endl;
                                            outfile << "\n\tChassis number: " << vehicleobj[i]->getchassis() << "\n";
                                            outfile << "\tName: " << vehicleobj[i]->getname() << "\n";
                                            outfile << "\tCompany: " << vehicleobj[i]->getcompany() << "\n";
                                            outfile << "\tModel Year: " << vehicleobj[i]->getmodel() << "\n";
                                            outfile << "\tColor: " << vehicleobj[i]->getcolor() << "\n";
                                            outfile << "\tTransmission: " << vehicleobj[i]->gettransmission() << "\n";
                                            outfile << "\tRent per day: " << vehicleobj[i]->getrentperday() << "\n";
                                            outfile << "\tFUEL Type: " << vehicleobj[i]->getfueltype() << "\n";
                                            outfile.close();
                                            numofcustomer++;
                                            break;
                                        }
                                    }
                                    cout << "\n\n\t\t\t~DO YOU WANT TO ADD ANOTHER CUSTOMER YES(Y/y) OR NO(N/n): ";
                                    cin >> addcustomer;
                                    if (addcustomer == 'n' || addcustomer == 'N')
                                    {
                                        cout << "\n\t\t\t\tPRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                        _getch();
                                        system("cls");
                                        break;
                                    }
                                }
                            }
                        }
                        if (numofcustomer == 0)
                        {
                            cout << "\t\t\t\t*ENTER CUSTOMER NAME: ";
                            cin >> ws;
                            getline(cin, name);
                            cout << "\t\t\t\t*ENTER CUSTOMER ADDRESS: ";
                            cin >> ws;
                            getline(cin, address);
                            cout << "\t\t\t\t*ENTER CUSTOMER EMAIL:";
                            cin >> customeremail;
                            cout << "\t\t\t\t*ENTER CUSTOMER PHONE# ";
                            cin >> customerphone;
                            for (int i = 0;i < numofvehicle;i++)
                            {
                                cout << "\n\t\t\t\t    ~~~~~~~~~ VEHICLE NUMBER# " << i + 1 << " ~~~~~~~~~";
                                vehicleobj[i]->displayallinfo();
                            }
                            cout << "\n\n\t\t\tENTER VEHICLE CHASSES NUMBER TO RENT THE PARTICULAR VEHICLE: ";
                            cin >> ws;
                            getline(cin, vehicle_chassesnumber);
                            for (int i = 0;i < numofvehicle;i++)
                            {
                                if (vehicle_chassesnumber == vehicleobj[i]->getchassis())
                                {
                                    cout << "\t\t\t\t*FOR HOW LONG YOU NEED TO RENT IT (IN DAYS): ";
                                    cin >> renttingdays;
                                    customerobj[numofcustomer] = new Customer(name, customeremail, address, customerphone, customercnic, *vehicleobj[i], renttingdays);
                                    vehicleobj[i]->setrenteddays(renttingdays);
                                    vehicleobj[i]->incrementrentdays();
                                    customerobj[i]->billcalculation(*vehicleobj[i]);
                                    customerobj[i]->displaybill();
                                    outfile << "\n    ~~~~~~~~~ Customer NUMBER# " << numofcustomer + 1 << " ~~~~~~~~~";
                                    outfile << "\n\tCUSTOMER CNIC NUMBER: " << customercnic << endl;
                                    outfile << "\tCUSTOMER NAME: " << name << endl;
                                    outfile << "\tCUSTOMER ADDRESS: " << address << endl;
                                    outfile << "\tCUSTOMER EMAIL: " << customeremail << endl;
                                    outfile << "\tCUSTOMER PHONE#: " << customerphone << endl;
                                    outfile << "\n\t~~~CUSTOMER RENTED VEHICLE~~~" << endl;
                                    outfile << "\n\tChassis number: " << vehicleobj[i]->getchassis() << "\n";
                                    outfile << "\tName: " << vehicleobj[i]->getname() << "\n";
                                    outfile << "\tCompany: " << vehicleobj[i]->getcompany() << "\n";
                                    outfile << "\tModel Year: " << vehicleobj[i]->getmodel() << "\n";
                                    outfile << "\tColor: " << vehicleobj[i]->getcolor() << "\n";
                                    outfile << "\tTransmission: " << vehicleobj[i]->gettransmission() << "\n";
                                    outfile << "\tRent per day: " << vehicleobj[i]->getrentperday() << "\n";
                                    outfile << "\tFUEL Type: " << vehicleobj[i]->getfueltype() << "\n";
                                    outfile.close();
                                    numofcustomer++;
                                    break;
                                }
                            }
                            cout << "\n\n\t\t\t~DO YOU WANT TO ADD ANOTHER CUSTOMER YES(Y/y) OR NO(N/n): ";
                            cin >> addcustomer;
                            if (addcustomer == 'n' || addcustomer == 'N')
                            {
                                cout << "\n\t\t\t\tPRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                _getch();
                                system("cls");
                                break;
                            }
                        }
                        if (customercnic == customerobj[i]->getcnic())
                        {
                            cout << "\n\t\t\t!!!~CUSTOMER CANNOT BE ADDED AS CNIC NUMBER ALREADY EXITS~!!!";
                            cout << "\n\n\t\t\t~DO YOU WANT TO ADD ANOTHER CUSTOMER YES(Y/y) OR NO(N/n): ";
                            cin >> addcustomer;
                            if (addcustomer == 'n' || addcustomer == 'N')
                            {
                                cout << "\n\t\t\t     PRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                _getch();
                                system("cls");
                                break;
                            }
                        }
                    }
                }
                if (option5 == 50)
                {
                    //customer returning
                    cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb CUSTOMER RETURNING VEHICLE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
                    cout << "\n\n\t\t\t\t         *ENTER CUSTOMER CNIC: ";
                    cin >> ws;
                    getline(cin, customercnic);
                    for (int i = 0;i < numofcustomer;i++)
                    {
                        if (customercnic == customerobj[i]->getcnic())
                        {
                            customerobj[i]->displaybill();
                            cout << "\t\t\t\t\t*CHOOSE VEHICLE REPORT\n\t\t\t  PRESS[1] FOR DAMAGED\t\t PRESS[2] UNDAMAGED";
                            damagedreport = _getch();
                            if (damagedreport == 49)
                            {
                                customerobj[i]->insuranceclaim();
                                cout << "\n\t\t\t\tPRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                _getch();
                                system("cls");
                                break;
                            }
                            if (damagedreport == 50)
                            {
                                cout << "\n\t\t\t                ~~~ THANK YOU FOR CHOOSING US ~~~";
                                cout << "\n\t\t\t~~~ WE HOPE THAT OUR CAR RENTAL SERVICES MET YOUR EXPECTATIONS ~~~";
                                cout << "\n\t\t\t\tPRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                                _getch();
                                system("cls");
                                break;
                            }
                        }
                    }
                }
                if (option5 == 51)
                {
                    cout << "\t\t\t     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb EXTENDING OF VEHICLE RENT DURATION \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl << endl;
                    cout << "\n\n\t\t\t\t         *ENTER CUSTOMER CNIC: ";
                    cin >> ws;
                    getline(cin, customercnic);
                    for (int i = 0;i < numofcustomer;i++)
                    {
                        if (customercnic == customerobj[i]->getcnic())
                        {
                            customerobj[i]->displaybill();
                            cout << "\t\t\t\t*ENTER THE NEW DURATION OF DAYS: ";
                            cin >> renttingdays;
                            customerobj[i]->setrentingdays(renttingdays);
                            customerobj[i]->incrementeddays(renttingdays);
                            customerobj[i]->displaybill();
                            cout << "\n\t\t\t\tPRESS ANY KEY TO RETURN BACK TO TASK BAR..";
                            _getch();
                            system("cls");
                            break;
                        }
                    }
                }
            }
        }
    }
}