#include <iostream>

using namespace std;

int main()
{
    int n, v[100][100] ;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "v["<<i <<"] ["<< j <<"]=" ;
            cin>> v[i][j] ;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                cout<< v[i][j];
        }
    }
    cout<< endl ;
    return 0;
}
