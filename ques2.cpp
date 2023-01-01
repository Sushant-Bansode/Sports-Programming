#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){
int t;
cin >> t;
while(t--){
int num;
string arr;
cin >> num; 
cin >>arr;
unordered_map<char, int> mp;
for (int i = 0; i < arr.size(); i++)
mp[arr[i]]++;

int total = 0;
for (auto x : mp)
total += x.second; 

int unique = mp.size();

cout << total + unique << endl;

}

}   


