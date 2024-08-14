#include <iostream>
using namespace std;
class Car
{
public:
    string model;
    string year;

    void displayDetails()
    {
        cout << "Car model is " << model << endl;
        cout << "Car Year  is " << year << endl;
    }
};
int main()
{
    // creating object named myCar
    cout << "Creating object of Car class named myCar." << endl;
    Car myCar;
    myCar.model = "Honda";
    myCar.year = "2021";

    // cout << endl;
    // creating pointer carPtr pointing to myCar
    Car *carPtr = &myCar;
    cout << endl;
    // Access and printing model with pointer carPtr
    cout << "Model of myCar " << carPtr->model << endl;
    cout << endl;

    // calling the member function displayDetails using pointer
    carPtr->displayDetails();
    cout << endl;

    // declaring and inilizing Car array
    Car carArray[0];
    carArray[0].model = "Ford";
    carArray[0].year = "2024";
    Car *arrayPtr = &carArray[0];

    // print model of car in array using pointer
    cout << "Car Model using pointer is " << arrayPtr->model << endl;

    // object assigng with pointer
    Car anotherCar;
    anotherCar.model = "Toyota";
    anotherCar.year = "2024";

    *carPtr = anotherCar;
    cout << "Model of myCar is " << carPtr->model << endl;
    return 0;
}