<h1> Contains Duplicate </h1>

<h2> Brute force solution </h2>

<h3> Solution </h3>

We can iterate through each pair of elements and check if they are equal.

* If two elements are equal, return true.
* If no elements are found to be equal, return false.

<h3> Complexity </h3>

* Time : O(n²)
* Space : O(1)

<h2> Sort solution </h2>

<h3> Solution </h3>

First, we sort the list. Then we iterate through the list and check if two adjacent elements are equal.
*If two adjacent elements are equal, return true.
*If no adjacent elements are found to be equal, return false.

<h3> Complexity </h3>

* Time : O(nlog(n))
* Space : O(1)

<h2> Hash map solution </h2>

<h3> Solution </h3>

We iterate through the list and add each element to a hash map. If an element has already been added to the hash map, we return true.
  
* If an element is found that has already been added to the hash map, return true.
* If no duplicates are found, return false.

<h3> Complexity </h3>

* Time : O(n)
* Space : O(n)
