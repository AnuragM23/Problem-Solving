#include<bits/stdc++.h>
using namespace std;

int powerPositive(int n, int e){
    if(e==0) return 1;
    if(e==1) return n;
    if(n%2==0){
        return powerPositive(n, e/2)*powerPositive(n,e/2);
    }else{
        return n*powerPositive(n-1, e/2)*powerPositive(n-1,e/2);
    }
}

double power(int n, int e){
    if(e<0){
        return 1/power(n, -1*e);
    } else{
        return power(n, e);
    }
}

int main(){
    cout << pow(2, -2) << endl;
    return 0;
}