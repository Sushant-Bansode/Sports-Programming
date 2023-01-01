#include<iostream>
using namespace std;

int main (){
int a,b,c,d,t;
cin >> t;
while(t--){
cin >> a >> b >> c >> d;
int count = 0;
if (a > b)
count++;
if (a > c)
count++;
if (a > d)
count++;
cout << (3 - count) << endl;

}

}