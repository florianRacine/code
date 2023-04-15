<h1> Container With Most Water </h1>

<h2> Problem </h2>

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

<h2> Brute Force </h2>

<h3> Solution </h3>

We find the area for each pair of height.

<h3> Complexity </h3>

* Time : O(n²)
* Space : O(1)

<h3> Implementation </h3>

```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        int n = (int) height.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int currRes = min(height[i], height[j]) * abs(i - j);
                if (currRes > max) {
                    max = currRes;
                }
            }
        }
        return max;
    }
};
```

<h2> Optimal solution </h2>

<h3> Solution </h3>

* One pointer "left" at the beginning and one pointer "right" at the end.
* If height[left] > height[right]
  * right --
* If height[left] < height[right]
  * left ++
* If height[left] == height[right]
  * Move one pointer

<h3> Complexity </h3>

* Time : O(n)
* Space : O(n)

<h3> Implementation </h3>

```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = (int) height.size();
        int left = 0, right = n - 1;
        vector<int> area;
        while (right - left >= 1) {
            area.push_back(min(height[left], height[right]) * (right - left));
            if (height[left] > height[right]) {
                right --;
            } else if(height[left] < height[right]) {
                left ++;
            } else {
                left ++;
                // or right --;
            }
        }
        int max = 0;
        for (int i = 0; i < n - 1; i++) {
            if (area[i] > max) {
                max = area[i];
            }
        }
        return max;
    }
};
```
