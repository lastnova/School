#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void dataPrint(string name, string surname, string status)
{
    printf("Name: %s\n", name.c_str());
    printf("Surname: %s\n", surname.c_str());
    printf("Status: %s\n\n", status.c_str());
}

class Cook
{
public:
    string name, surname;

    void cooking()
    {
        printf("\nStudents successfully ate in the dining room!\n");
    }

    Cook(string name, string surname)
    {
        this -> name = name;
        this -> surname = surname;
    }

};

class Security
{
public:
    string name, surname;

    void protect()
    {
        printf("\nThe school is guarded!\n");
    }

    Security(string name, string surname)
    {
        this -> name = name;
        this -> surname = surname;
    }

};

class Cleaner
{
public:
    string name, surname;

    void clean()
    {
        printf("\nSuccessful cleaning!\n");
    }

    Cleaner(string name, string surname)
    {
        this -> name = name;
        this -> surname = surname;
    }

};

class Student
{
public:
    string name, surname, numberOfClassroom, letterOfClassroom;
    int art, biology, chemistry, english, geography, history, literature, math;
    float averageBallOfStudent;

    Student()
    {
        name = surname = numberOfClassroom = letterOfClassroom = "None";
    }

    void setNameSurnameClass(string numeStud, string surnameStud, string numClassStut, string letClassStud)
    {
      name = numeStud;
      surname = surnameStud;
      numberOfClassroom = numClassStut;
      letterOfClassroom = letClassStud;
    }

    void setBall(int artBall, int biologyBall, int chemistryBall, int englishBall, int geographyBall, int historyBall, int literatureBall, int mathBall)
    {
        artBall = art;
        biologyBall = biology;
        chemistryBall = chemistry;
        englishBall = english;
        geographyBall = geography;
        historyBall = history;
        literatureBall = literature;
        mathBall = math;
    }

    int getBall()
    {
      return art;

    }

    Student(string name, string surname, string numberOfClassroom, string letterOfClassroom)
    {
        this -> name = name;
        this -> surname = surname;
        this -> numberOfClassroom = numberOfClassroom;
        this -> letterOfClassroom = letterOfClassroom;
        this -> geography = geography;
        this -> english = english;
        this -> chemistry = chemistry;
        this -> biology = biology;
        this -> art = art;
        this -> history = history;
        this -> literature = literature;
        this -> math = math;
        averageBallOfStudent = (art + biology + chemistry + english + geography + history + literature + math)/8.0;
    }

};

class Classroom
{
public:
    string numberOfClassroom, letterOfClassroom, day;
    int quantityOfPupils, quantityOfLessons;

    void setStudentsBall(Student listOfStudents)
    {
        listOfStudents.setBall(1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5);
    }

    Classroom(string numberOfClassroom, string letterOfClassroom)
    {
        this -> numberOfClassroom = numberOfClassroom;
        this -> letterOfClassroom = letterOfClassroom;
        this -> quantityOfLessons = quantityOfLessons;
        this -> quantityOfPupils = quantityOfPupils;
    }

};

class Teacher
{
public:
    string name, surname, numberOfClassroom, letterOfClassroom;

    void teach(string numberOfClassroom, string letterOfClassroom)
    {
        printf("\nThe lesson in %s%s class was successfully conducted!\n", numberOfClassroom.c_str(), letterOfClassroom.c_str());
    }

    Teacher(string name, string surname, string numberOfClassroom, string letterOfClassroom)
    {
        this -> name = name;
        this -> surname = surname;
        this -> numberOfClassroom = numberOfClassroom;
        this -> letterOfClassroom = letterOfClassroom;
    }

};


class Administration
{
public:
    //void dismissAnEmployee(string nameOfObject)
    //{
        //delete nameOfObject;
        //printf("Employee %s was fired!", nameOfObject.c_str());
    //}

    string name, surname, status;

    Administration(string name, string surname, string status)
    {
        this -> name = name;
        this -> surname = surname;
        this -> status = status;
    }

};


int main()
{
    string nameAdmin, surnameAdmin, statusAdmin;
    string nameTeacher, surnameTeacher, numberOfClassroomTeacher, letterOfClassroomTeacher;
    string nameStudent, surnameStudent, numberOfClassroomStudent, letterOfClassroomStudent;
    string nameSecurity, surnameSecurity, nameCleaner, surnameCleaner, nameCook, surnameCook;
    string quantityOfPupilsClassroom;

    printf("Welcome! Let's create a school!\n");
    printf("First create a Administration.\n\n");

    cout << "Administration name: "; cin >> nameAdmin;
    cout << "Administration surname: "; cin >> surnameAdmin;
    cout << "Administration status(Director or head teacher or supply manager): "; cin >> statusAdmin;
    Administration Admin1(nameAdmin, surnameAdmin, statusAdmin);
    printf("\nAdministrator %s successfully created!\n", nameAdmin.c_str());

    printf("\n\nCreate a guard, cleaner and cook.\n");

    cout << "Security name: "; cin >> nameSecurity;
    cout << "Security surname: "; cin >> surnameSecurity;
    Security Sec1(nameSecurity, surnameSecurity);
    printf("\nSecurity %s successfully created!\n", nameSecurity.c_str());

    cout << "\nCleaner name: "; cin >> nameCleaner;
    cout << "Cleaner surname: "; cin >> surnameCleaner;
    Cleaner Clean1(nameCleaner, surnameCleaner);
    printf("\nCleaner %s successfully created!\n", nameCleaner.c_str());

    cout << "\nCook name: "; cin >> nameCook;
    cout << "Cook surname: "; cin >> surnameCook;
    Cook Cook1(nameCook, surnameCook);
    printf("\nCook %s successfully created!\n", nameCook.c_str());

    printf("\n\nCreate a Teacher and his class.\n");

    cout << "\nTeacher name: "; cin >> nameTeacher;
    cout << "Teacher surname: "; cin >> surnameTeacher;
    cout << "Number of Teacher's classroom(1-11): "; cin >> numberOfClassroomTeacher;
    cout << "Letter of Teacher's classroom(A, B, C...): "; cin >> letterOfClassroomTeacher;
    Teacher Teacher1(nameTeacher, surnameTeacher, numberOfClassroomTeacher, letterOfClassroomTeacher);
    Classroom Class1(numberOfClassroomTeacher, letterOfClassroomTeacher);
    printf("\nTeacher %s with class %s%s successfully created!\n", nameTeacher.c_str(), numberOfClassroomTeacher.c_str(), letterOfClassroomTeacher.c_str());

    cout << "\nHow many students will be in this class?: "; cin >> quantityOfPupilsClassroom;
    int num;
    num = atoi(quantityOfPupilsClassroom.c_str());
    Student Stud1[num];

    numberOfClassroomStudent = numberOfClassroomTeacher;
    letterOfClassroomStudent = letterOfClassroomTeacher;

    printf("\nCreate a Students\n");
    for (int i = 0; i < num; i++)
    {
        cout << "Student name:"; cin >> nameStudent;
        cout << "Student surname:\n"; cin >> surnameStudent;
        Stud1[i].setNameSurnameClass(nameStudent, surnameStudent, numberOfClassroomStudent, letterOfClassroomStudent);
    }


    for (int i = 0; i < num; i++)
    {
        Class1.setStudentsBall(Stud1[i]);
    }

    for (int i = 0; i < num; i++)
    {
        cout << endl << Stud1[i].getBall() << endl;
    }

}
