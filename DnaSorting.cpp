#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,m;
    cin>> n>> m;
    vector<pair<int, string>> DNA;
    vector<string> D;
    string dna;
    int loop = m;
    while(loop--)
    {
        cin>> dna;
        D.push_back(dna);
    }

    int Count =0;

    for(int i =0; i< m; i++)
    {
        for(int j= 0; j<n-1 ; j++)
        {
            if(D[i][j]> D[i][j+1])
            {
                Count ++;
            }
        }
        DNA.push_back(make_pair(Count, D[i]));
        //cout<< Count<< endl;
    }

    sort(DNA.begin(), DNA.end());
    cout<< "\n\n";
    for(int i = 0; i< m; i++){
        cout<<DNA[i].second<< endl;
    }
    return 0;
}
