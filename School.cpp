#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

class workerOfSchool
{
public:
    string name, surname, status;

    workerOfSchool(string name, string surname, string status)
    {
        this -> name = name;
        this -> surname = surname;
        this -> status = status;
    }

};

void dataPrint(string name, string surname, string status)
{
    printf("Name: %s\n", name.c_str());
    printf("Surname: %s\n", surname.c_str());
    printf("Status: %s\n\n", status.c_str());
}


int workersOfSchool()
{
    workerOfSchool Oksana("Oksana", "Victorovna", "Director");
    workerOfSchool Elena("Elena", "Anatolievna", "supplyManager");
    workerOfSchool Marina("Marina", "Ilinichna", "headTeacher");
    workerOfSchool Svetlana("Svetlana", "Gluhova", "Teacher");
    workerOfSchool Anna("Anna", "Vladimirovna", "Teacher");
    workerOfSchool Anton("Anton", "Valerievich", "Teacher");
    workerOfSchool Vova("Vova", "Shamaev", "Student");
    workerOfSchool Daria("Daria", "Volkova", "Student");
    workerOfSchool Danil("Danil", "Sorokin", "Student");

    const int amount = 9;

    workerOfSchool listOfWorkers[amount] = {Oksana, Elena, Marina, Svetlana, Anna, Anton, Vova, Daria, Danil};

    printf("Administration:\n");
    for (int i = 0; i < amount; i++) // на отлично
    {
        if (listOfWorkers[i].status == "Teacher")
            dataPrint(listOfWorkers[i].name, listOfWorkers[i].surname, listOfWorkers[i].status);
    }
}