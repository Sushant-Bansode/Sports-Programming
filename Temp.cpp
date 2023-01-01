#include<bits/stdc++.h> 
using namespace std; 

void min_swaps(){ 
      int n,k;
      cin>>n>>k; 
      vector <int> arr1(n);
      vector <int> arr2(n);
      int count=0; 
      for(int i=0; i<n; i++){ 
       cin>>arr1[i];
      }     
       
      arr2 = arr1; 
      sort(arr2.begin(),arr2.end()); 
      for(int i=0; i<k; i++){  
       if(arr2[i]!=arr1[i]){ 
        count++; 
       } 
      } 
      cout<<count << endl; 

} 
int main( ){ 
 int t; cin>>t; 
 while(t--){ 
 min_swaps(); 
 } 
}