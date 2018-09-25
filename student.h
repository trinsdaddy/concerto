/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   student.h
 * Author: 1293413033E
 *
 * Created on September 24, 2018, 11:08 AM
 */

#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:
 Student(string sID, string fn, string ln, string ea, int a, int* daysInC);

    ~Student();

    string getFirstName();

    void setFirstName(string firstName);

    string getLastName();

    void setLastName(string lastName);

    string getEmailAddress();

    void setEmailAddress(string emailAddress);

    int getAge();

    void setAge(int age);

    string getStudentID();

    void setStudentID(string studentID);

    int *getDaysInCourse();

    void setDaysInCourse(int d0, int d1, int d2);

    virtual void print();

    void setDegree(string degree);

    virtual Degree getDegreeProgram();

private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse[3];
};

#endif /* STUDENT_H */

