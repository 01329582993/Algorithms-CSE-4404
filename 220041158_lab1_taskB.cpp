#include <bits/stdc++.h>
using namespace std;


void customSwap(int& a, int& b)
{
    a = a + b; 
    b = a - b; 
    a = a - b; 
}


int main()
{
    int a,b;
    cin>> a >>b;
    customSwap(a,b);
    cout<< a<< " "<<b;

   
    
  

    return 0;
}