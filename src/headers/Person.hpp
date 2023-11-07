#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    string username;
    string phone_no;

public:
    // getter 
    string getName(){return name;}
    string getUsername(){return username;}
    string getPhoneNo(){return phone_no;}

    // setter 
    void setName(const string& _Name){name = _Name;}
    void setUsername(const string& _Username){username = _Username;}
    void setPhoneNo(const string& _PhoneNo){phone_no = _PhoneNo;}
};


class Employee : public Person {
private:
    string password;
    string secQ;
    int salary;

public:
    // getter
    string getPassword(){return password;}
    string getSecQ(){return secQ;}
    int getSalary(){return salary;}

    // setter
    void setPassword(const string& _Password){password = _Password;}
    void setSecQ(const string& _SecQ){secQ = _SecQ;}
    void setSalary(int _Salary){salary = _Salary;}
};


class Customer : public Person {
private:
    int points;

public:
    // getter 
    int getPoints(){return points;}

    // setter 
    void setPoints(int _Points){points = _Points;}
};


class Manager : public Employee {
public:

};



class Salesman : public Person {
private:
    int sold_value;
    int bonus;

public:
    // getter 
    int getSoldValue(){return sold_value;}
    int getBonus(){return bonus;}

    // setter
    void setSoldValue(int _SoldValue){sold_value = _SoldValue;}
    void setBonus(int _Bonus){bonus = _Bonus;}
};

#endif // PERSON_H