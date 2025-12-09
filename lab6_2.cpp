#include <iostream>
#include<math.h>
using namespace std;

double deg2rad(double Deg){
    return Deg*(M_PI/180.0);
}

double rad2deg(double Rad){
    return Rad*(180.0/M_PI);
}

double findXComponent(double lenA,double lenB,double degA,double degB){
    return (lenA*cos(degA))+(lenB*cos(degB));
}

double findYComponent(double lenA,double lenB,double degA,double degB){
    return (lenA*sin(degA))+(lenB*sin(degB));
}

double pythagoras(double A,double B){
    return sqrt(pow(A,2)+pow(B,2));
}

void showResult(double ANSWER1,double ANSWER2){
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout<<"Length of the resultant vector = "<<ANSWER1<<"\n";
    cout<<"Direction of the resultant vector (deg) = "<<ANSWER2<<"\n";
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"; 
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}