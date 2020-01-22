#include <string>
#include <iostream>
#include<cstdlib>
#include <iomanip>
#include <vector>
#include <stdio.h>

using namespace std;

class Cook
{
//public:
//    string name, surname;

//    void cooking()
 //   {
//        printf("\nStudents successfully ate in the dining room!\n");
 //   }

//    Cook(string name, string surname)
//    {
//        this -> name = name;
//        this -> surname = surname;
 //   }

};

class Security
{
//public:
 //   string name, surname;

 //   void protect()
  //  {
  //      printf("\nThe school is guarded!\n");
   // }

  //  Security(string name, string surname)
  //  {
   //     this -> name = name;
   //     this -> surname = surname;
  //  }

};

class Cleaner
{
//public:
//    string name, surname;

   // void clean()
  //  {
   //     printf("\nSuccessful cleaning!\n");
//    }

//    Cleaner(string name, string surname)
//    {
//        this -> name = name;
//        this -> surname = surname;
//    }

};

class Teacher
{
public:
    string name, surname, numberAndLetterOfClassroom;

    Teacher(string name, string surname, string numberAndLetterOfClassroom)
    {
        this -> name = name;
        this -> surname = surname;
        this -> numberAndLetterOfClassroom = numberAndLetterOfClassroom;
    }

};

class Student
{
public:
    string name, surname;
    float averageBallOfStudent;

    Student()
    {
        name = surname = "None";
    }

    void setBall(float averageBallOfStudent)
    {

    }

    Student(string name, string surname)
    {
        this -> name = name;
        this -> surname = surname;
        this -> averageBallOfStudent = averageBallOfStudent;
    }

};

class Classroom
{
private:
    string classroom;
    string teacher;
    int students;
    double averageBall;

public:
    string numberAndLetterOfClassroom;
    int quantityOfPupils;
    Classroom();
    void getAll();
    void setAll();
    void table();

    void setAverageBallOfClass()
    {
    }

    Classroom(string numberOfClassroom, string letterOfClassroom)
    {
        this -> numberAndLetterOfClassroom = numberAndLetterOfClassroom;
        this -> quantityOfPupils = quantityOfPupils;
    }

};

Classroom::Classroom()
{
    classroom = "1A";
    teacher = "Anna Guseva";
    students = 0;
    averageBall = 0;
}

void Classroom::table()
{
    cout<<endl;
    cout<<"||===========||=================================||================================||=============||"<<endl;
    cout<<"|| Classroom ||             Teacher             ||        Quantity Of Pupils      || AverageBall ||"<<endl;
    cout<<"||===========||=================================||================================||=============||"<<endl;
}

void Classroom::getAll()
{
    cout << "||";
    if (classroom.length()%2==0)
    {
        cout<<setw((11-classroom.length())/2+classroom.length())<<classroom<<setw((11-classroom.length())/2+3)<<"||";
    }
    else
    {
        cout<<setw((11-classroom.length())/2+classroom.length())<<classroom<<setw((11-classroom.length())/2+2)<<"||";
    }
    if (teacher.length()%2==0)
    {
        cout<<setw((33-teacher.length())/2+teacher.length())<<teacher<<setw((32-teacher.length())/2+2)<<"||";
    }
    else
    {
        cout<<setw((33-teacher.length())/2+teacher.length())<<teacher<<setw((32-teacher.length())/2+3)<<"||";
    }
    cout<<setw(32)<<fixed<<setprecision(2)<<students<<"||";
    cout<<setw(13)<<averageBall<<"||";
    cout<<endl<<"||===========||=================================||================================||=============||"<<endl;
}

void Classroom::setAll()
{
    cout << "Classroom Name: "; cin >> classroom;
    cout << "Teacher Of Classroom (Initials and last name): "; cin >> teacher;
    cout << "Quantity Of Pupils: "; cin >> students;
    cout << "Average Ball Of Class(2.00 - 5.00): "; cin >> averageBall;
}

class Administration
{
private:
    string name;
    string surname;
    string status;

public:
    void Menu();

Administration(string name, string surname, string status)
    {
        this -> name = name;
        this -> surname = surname;
        this -> status = status;
    }
};

void Administration::Menu()
{
    cout << "Menu:" << endl;
    cout << "1. View all classes of the school;" << endl;
    cout << "2. Add class;" << endl;
    cout << "3. Delete class;" << endl;
    cout << "4. Leave school." << endl << endl;
}


int main()
{
    system("title The administration of the school");

    string nameAdmin, surnameAdmin, statusAdmin;
    string nameTeacher, surnameTeacher, numberAndLetterOfClassroomTeacher;
    string nameStudent, surnameStudent, numberAndLetterOfClassroomStudent;
    int quantityOfPupils;

    printf("Welcome! Let's create a school!\n");
    printf("First create a Administration.\n\n");

    cout << "Administration name: "; cin >> nameAdmin;
    cout << "Administration surname: "; cin >> surnameAdmin;
    cout << "Administration status(Director or head teacher or supply manager): "; cin >> statusAdmin;
    Administration Admin1(nameAdmin, surnameAdmin, statusAdmin);
    printf("\nAdministrator %s successfully created!\n\n", nameAdmin.c_str());


    vector <Classroom> Classes;
    vector <Student> Students;
    Classroom objClass;
    Student objStudent;
    int enter = 0;
    do
    {
        Admin1.Menu();
        cin >> enter;
        switch(enter)
        {
        case(1):
            if (Classes.size() == 0)
            {
                cout << "\n\nThere is no classes in the school now. Create it!\n\n" << endl;
            }
            else
            {
                objClass.table();
                for (vector <Classroom>::iterator p = Classes.begin();p != Classes.end(); ++p)
                {
                    p -> getAll();
                }
            }
            break;

        case(2):
            objClass.setAll();
            Classes.push_back(objClass);
            cout << "Please, enter again quantity of pupils: "; cin >> quantityOfPupils;
            for (int i = 0; i < quantityOfPupils; i++)
            {
                printf("\n\nCreate a Student.\n");

                cout << "\nTeacher name: "; cin >> nameStudent;
                cout << "Teacher surname: "; cin >> surnameStudent;
                Students.push_back(Student (nameStudent, surnameStudent));
                printf("\Student %s successfully created!\n", nameTeacher.c_str());
            }
            break;

        case(3):
            break;
        }

    }
    while (enter != 4);
    return 0;
}
