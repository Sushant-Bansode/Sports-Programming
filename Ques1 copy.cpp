#include<bits/stdc++.h>
using namespace std;

int minSwaps(vector<int>&nums, int n,int k )
{

    map<int, int> map;
    for (int i = 0; i < n; i++)
        map[nums[i]] = i; // key ahe num[i] and tyachi value ahe i I guess kalala....
  vector <int> temp = nums;
    sort(nums.begin(),nums.end());

    // To keep track of visited elements. Initialize
    // all elements as not visited or false.
    bool visited[n] = { 0 };

    // Initialize result
    int ans = 0;
    if(k == 1 && temp[0] == nums[0])
    return ans;
    else if (k == 1 && temp[0] != nums[0])
    return ans+1;
    else {
    for (int i = 0; i < k; i++) {

        // already swapped and corrected or
        // already present at correct pos
        if (visited[i] || map[nums[i]] == i)
            continue;

        int j = i, cycle_size = 0;
        while (!visited[j]) {
            visited[j] = true;

            // move to next node
            j = map[nums[j]];
            cycle_size++;
        }

        // Update answer by adding current cycle.
        if (cycle_size > 0) {
            ans += (cycle_size - 1);
        }
    }
    return ans;
    }
}

int main(){
int t;
cin >> t;
while(t--){
int n,k;
cin >> n >> k;
vector <int> arr(n);
for(int i = 0; i < n ; i++)
cin >> arr[i];
int ans = minSwaps(arr,n,k);
cout << ans << endl; 

}

return 0;
}