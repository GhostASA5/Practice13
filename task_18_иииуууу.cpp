#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;
//проверка симметричности матрицы
int main(){ 
    int n;
    int a[100][100]; bool b=true;
    cin>>n;
 
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            cin>>a[i][j];
 
    for (int i=0;i<n;i++)
        for (int j=0; j<n;j++)
        if (a[i][j] !=a[n-j-1][n-i-1]) b=false;
    if (b) cout<<"YES";
    else cout <<"NO";
 return 0;
}