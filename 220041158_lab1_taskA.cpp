#include <iostream>

using namespace std;

int main(){
int l,w,a,b;
float area;
    cin>> l>>w>>a>>b;
    
    area = l*w - ((0.5*b*a) +(0.5*0.25*3.14159*(a*a + b*b)))  ;
    cout<< area;
    return 0;
}