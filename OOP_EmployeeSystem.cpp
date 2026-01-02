#include <iostream>
#include <iomanip>
#include<string>
using namespace std;


class clsEmployee
{
private:
    static int _NextID;
    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    double _Salary;
    string _Department;
public:

    clsEmployee(string first,string last,string tittle,string email,string phone,double salary,string dep)
    {
        _ID=_NextID++;
        _FirstName=first;
        _LastName=last;
        _Title=tittle;
        _Email=email;
        _Phone=phone;
        _Salary=salary;
        _Department=dep;
    }

   void Print()
{
    cout << left << setw(15) << "Employee ID:" << _ID << endl;
    cout << left << setw(15) << "Name:" << _FirstName << " " << _LastName << endl;
    cout << left << setw(15) << "Title:" << _Title << endl;
    cout << left << setw(15) << "Department:" << _Department << endl;
    cout << left << setw(15) << "Email:" << _Email << endl;
    cout << left << setw(15) << "Phone:" << _Phone << endl;
    cout << left << setw(15) << "Salary:" << fixed << setprecision(2) << "$" << _Salary << endl;
}

    int GetID(){
        return _ID;
    }

    void SetFirstName(const string& FNAME){
        _FirstName=FNAME;
    }
    
    string GetFirstName(){
        return _FirstName;
    }

    void SetLastName(const string& LNAME){
        _LastName=LNAME;
    }
    
    string GetLastName(){
        return _LastName;
    }

    void SetTittle(const string& TITTLE){
        _Title=TITTLE;
    }
    
    string GetTittle(){
        return _Title;
    }

    void SetEmail(const string& EMAIL){
        _Email=EMAIL;
    }
    
    string GetEmail(){
        return _Email;
    }

    void SetPhone(const string& PHONE){
        _Phone=PHONE;
    }
    
    string GetPhone(){
        return _Phone;
    }

    void SetSalary(double SALARY){
        _Salary=SALARY;
    }
    
    double GetSalary(){
        return _Salary;
    }

    void SetDepartment(const string& DEP){
        _Department=DEP;
    }
    
    string GetDepartment(){
        return _Department;
    }

};
int clsEmployee::_NextID=1;



int main()
{
    clsEmployee emp1("John", "Doe", "Developer", "john@example.com", "123-456-7890", 50000, "IT");
    clsEmployee emp2("Jane", "Smith", "Manager", "jane@example.com", "987-654-3210", 75000, "HR");

    emp1.Print();
    cout << endl;
    emp2.Print();
    
    return 0;
}
