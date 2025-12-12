#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double d){
    double r=(d/180)*M_PI;
    return r;
}
double rad2deg(double r){
     double d=((r/(M_PI))*180);
    return d;
}
double findXComponent(double w1,double w2,double m1,double m2){
    double x=((w1*cos(m1)))+(w2*cos(m2));
    return x;
}
double findYComponent(double l1,double l2,double d1,double d2){
    double y=((l1*sin(d1)))+(l2*sin(d2));
    return y;
}
double pythagoras(double x,double y){
    double p=sqrt((pow(x,2)+pow(y,2)));
    return p;
}
void showResult(double p,double c){
    cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<"\n";
    cout <<"Length of the resultant vector = "<<p<<"\n";
    cout <<"Direction of the resultant vector (deg) = "<<c<<"\n";
    cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<"\n";
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

