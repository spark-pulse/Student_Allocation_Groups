#include <iostream>
#include <vector>
#include <string>

class Student {
public:
    std::string firstname;
    std::string surname;
    std::string gender;
    int age;
    int bbitGroup;
    int bbitGroup;
    int bbitGroup;
};

class Activity {
public:
    std::string name;
    int maxCapacity;
    std::vector<Student> participants;
};

class Sport : public Activity {
public:
    Sport(std::string n, int cap) {
        name = n;
        maxCapacity = cap;
    }