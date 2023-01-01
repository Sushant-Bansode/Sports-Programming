#include<iostream>
using namespace std;

int main (){  
long long int n;
cin >> n;
string n1 = to_string(n);
int count;
for(int i = 0; i < n1.length(); i++){
if(n1[i] == 55 || n1[i] == 52 )
count++;
}
if(count % 7 == 0 || count % 4 == 0 )
cout << "YES" << endl;
else
cout << "NO" << endl;

}