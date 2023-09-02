#include <iostream>
using namespace std;
struct Car {
    string brand;
    string model;
    int year;
    float distance; 
    float time;
    double speed(Car car, int distance, int time) {
    return (double)distance / time;
}
};
int main() {
    Car c1, c2;
    // Get user input for car 1
   cout << "Enter the brand of car 1: " << endl;
   cin>>c1.brand;
   cout << "Enter the model of car 1: " << endl;
   cin>>c1.model;
   cout << "Enter the year of car 1: " << endl;
   cin>> c1.year;
    // Get user input for car 2
    cout << "Enter the brand of car 2: " <<endl;
    cin>>c2.brand;
    cout << "Enter the model of car 2: " <<endl;
    cin>>c2.model;
    cout<< "Enter the year of car 2: " <<endl;
    cin>> c2.year;
    cout << "enter the distance by kilometers per hour of car 1:";
    cin>> c1.distance;
    cout << "enter the distance by kilometers per hour of car 2:";
    cin>>c2.distance;
    cout << "enter the time in hours of car 1:";
    cin>> c1.time;
    cout << "enter the time in hours of car 2:";
    cin>>c2.time;
    double speed1 = c1.speed(c1, c1.distance, c1.time);
    double speed2 = c2.speed(c2, c2.distance, c2.time);
    /* Compare the speeds of the two cars*/
    if (speed1 > speed2) {
        cout << "Car 1 is faster than Car 2." <<endl;
    }
    else if (speed1 < speed2) {
        cout << "Car 2 is faster than Car 1."<<endl;
    }
    else {
        cout << "Car 1 and Car 2 are the same speed." <<endl;
    }
    return 0;
}