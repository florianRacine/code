<h1> 3 Sum </h1>

<h2> Problem </h2>

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

<h2> Brute Force </h2>

<h3> Solution </h3>

We iterate with three nested loop.

<h3> Complexity </h3>

* Time : O(n³)
* Space : O(1)

<h3> Implementation </h3>

```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = (int) nums.size();
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    if( nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> curr_ans = {nums[i], nums[j], nums[k]};
                        sort(curr_ans.begin(), curr_ans.end());
                        bool cond = false;
                        for (int l = 0; l < (int) ans.size(); l++) {
                            if (curr_ans == ans[l]) {
                                cond = true;
                            }
                        }
                        if (!cond) {
                            ans.push_back(curr_ans);
                        }
                    }
                }
            }
        }
        return ans;
    }
};
```

<h2> Sort and 2 Sum </h2>

<h3> Solution </h3>

* We sort nums.
* We iterate to get the first element.
* We use 2 Sum algorithm to find the two last.

<h3> Complexity </h3>

* Time : O(n²)
* Space : O(n)

<h3> Implementation </h3>

```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int, int> mp1;
        int n = (int) nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++) {
            if (mp1[nums[i]] == 0) {
                int left = i + 1, right = n - 1;
                while (left != right) {
                    if (nums[i] + nums[left] + nums[right] < 0) {
                        left ++;
                    } else if (nums[i] + nums[left] + nums[right] > 0) {
                        right --;
                    } else {
                        ans.push_back({nums[i], nums[left], nums[right]});
                        left++;
                        while (nums[left-1] == nums[left] && left != right) {
                            left++;
                        }
                    }
                }
                mp1[nums[i]] = 1;
            }
        }
        return ans;
    }
};
```
