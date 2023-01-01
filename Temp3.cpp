#include <bits/stdc++.h>
using namespace std;

int main () {
int t;
cin >> t;
while (t--){
 int n,k;
 cin >> n >> k;
 if (k %4 == 0) {
 cout << "NO" << endl;
 }
 if (k %4 == 1) {
 cout << "YES" << endl;
  for(int i = 1; i < n; i+=2)
   cout << i << " " << i+1 << endl;
 continue;
 }
 if (k %4 == 2) {
 cout << "YES" << endl;
 for(int i = 1; i < n; i+=2){
  if (i % 4 == 1)
   cout << i+1 << " " << i << endl;
  else
  cout << i << " " << i+1 << endl;
    }
 continue;
 }
 if (k %4 == 3) {
 cout << "YES" << endl;
 for(int i = 1; i < n; i+=2)
   cout << i << " " << i+1 << endl;
 continue;
 }
 
}

return 0 ;
}