#include<bits/stdc++.h> 
using namespace std; 
void swaps(){ 
      int n,k;cin>>n>>k; 
      int arr[n]; 
      int arr2[n]; 
      int count=0; 
      for(int i=0; i<n; i++){ 
       cin>>arr[i]; 
       arr2[i]=arr[i]; 
      }     
       
      sort(arr2,arr2+n); 
      for(int i=0; i<k; i++){ 
       
       if(arr2[i]!=arr[i]){ 
        count++; 
       } 
      } 
      cout<<count<<endl; 
 
       
} 
int main(void){ 
 ios_base::sync_with_stdio(false); 
 cin.tie(NULL); 
 
 int t; cin>>t; 
 while(t--){ 
  swaps(); 
 } 
}