#include <bits/stdc++.h>
using namespace std;

int main () {
int t;
cin >> t;
while (t--){
 int n,m;
 cin >> n >> m;
 int temp = n + m;
 if (temp % 2 == 0)
 cout << "Tonya" << endl;
 else
 cout << "Burenka" << endl;
}

return 0 ;
}