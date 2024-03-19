#define _USE_MATH_DEFINES
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;
void display(int , int); //Function Prototype

void display(int h, int w) //Function Heading
{//body

    cout << "Height = " << h << " Width = " << w << endl;
}
int areaOfRectangle(int h=0,int w=0){
    return h*w;
}

double areaOfCircle(double radius){
    return M_PI * radius * radius;
}
double circumferenceOfCircle(double radius){
    return M_PI * radius * 2;
}
int main()
{
    display(100,100);
    display(14,20);
    int height, width;
    cout << "Enter Height and Width...\n: ";
    cin >> height >> width;
    int area;
    area = areaOfRectangle(height,width);
    cout << "area =\t\t" << area << endl;
    cout << "Enter Circle radius...\n: ";
    double r;
    cin >> r;
    cout << "Radius:\t\t" << setprecision(10000) << r << "\n";
    cout << "Area:\t\t" << setprecision(10000) << areaOfCircle(r) << "\n";
    cout << "circumference:\t" <<  setprecision(10000) << circumferenceOfCircle(r) << "\n";
    cout << "When pi:\t" << setprecision(10000) << M_PI;
    return 0;
}
