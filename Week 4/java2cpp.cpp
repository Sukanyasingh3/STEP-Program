#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string line1, line2, city, pinCode;

public:
    void setLine1(const string &l1) { line1 = l1; }
    void setLine2(const string &l2) { line2 = l2; }
    void setCity(const string &c) { city = c; }
    void setPinCode(const string &p) { pinCode = p; }

    string getLine1() const { return line1; }
    string getLine2() const { return line2; }
    string getCity() const { return city; }
    string getPinCode() const { return pinCode; }
};

class Employee {
private:
    string empId, name;
    Address address;

public:
    void setEmpId(const string &id) { empId = id; }
    void setName(const string &n) { name = n; }
    void setAddress(const Address &addr) { address = addr; }

    string getEmpId() const { return empId; }
    string getName() const { return name; }
    Address getAddress() const { return address; }
};

class DisplayForm {
public:
    static void displayEmployee(const Employee &emp) {
        cout << "Emp Id: " << emp.getEmpId() << endl;
        cout << "Name: " << emp.getName() << endl;
        displayAddress(emp.getAddress());
        cout << endl;
    }

    static void displayAddress(const Address &address) {
        cout << "Address Line 1: " << address.getLine1() << endl;
        cout << "Address Line 2: " << address.getLine2() << endl;
        cout << "City: " << address.getCity() << endl;
    }
};

class ObjectBuilder {
public:
    static Address makeAddress(const string &line1, const string &line2, const string &city, const string &pinCode) {
        Address addr;
        addr.setLine1(line1);
        addr.setLine2(line2);
        addr.setCity(city);
        addr.setPinCode(pinCode);
        return addr;
    }

    static Employee makeEmployee(const string &empId, const string &name, const Address &address) {
        Employee emp;
        emp.setEmpId(empId);
        emp.setName(name);
        emp.setAddress(address);
        return emp;
    }
};

int main() {
    Address a1 = ObjectBuilder::makeAddress("805, Tech Park 1", "SRM University", "Chennai", "600022");
    Employee e1 = ObjectBuilder::makeEmployee("1001", "Mayank", a1);

    DisplayForm::displayEmployee(e1);
    
    return 0;
}
