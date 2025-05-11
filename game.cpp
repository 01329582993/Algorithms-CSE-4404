#include <bits/stdc++.h>

using namespace std;


void BubbleSort(vector<int> &v, int n){
    for(int i = 0; i< n; i++){
        for(int j= 0; j< n-1-i; j++){
            if(v[j]< v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    cin>> n;
    vector<int> v(n);
    for(int i=0; i< n; i++)
    {
        cin >> v[i];
    }
    BubbleSort(v, n);
    //sort(v.begin(), v.end());
    cout<< v[n/2];

}
