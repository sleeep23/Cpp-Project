
#ifndef User_H
#define User_H

#include <iostream>

using namespace std;

class User {
private:
    string name;
    int age;
    string id;
    string pw;
public:
    User(string name, int age, string id, string pw);

    string getName() const;
    int getAge() const;
    string getId() const;
    string getPw() const;

    void setName(string);
    void setAge(int);
    void setId(string);
    void setPw(string);
};

#endif