SEARCH ALGORITHMS
Algorithms which solve search problems; ie. help retrieve information stored in some data structure.
They check and retrieve elements from data structures by looking for the target key.
LINEAR SEARCH ALGORITHM
Sequentially iterates through the whole list/array from end to end until it reaches the target element. It returns the element or -1 if the element is not in the data structure. 
Time Complexity
Best Case: Target is first element in list O(1)
Average Case: Target is in middle of list O(n)
Worst Case: Target is at the end of the array O(N)
BINARY SEARCH ALGORITHM
Applies the divide and conquer rule for elements in a sorted data structure. Divides structure by two and checks the middle number to determine if the key is in the left or right side of the array, continuing until the element is found.
Time Complexity
Best Case: element at the middle O(N)
Average case: Somwhere in the middle O(LogN)
Worst Case: object far from middle or absent O(LogN)
NB: Space comlexity is total space taken by an algorithm w.r.t input size while Auxilary space is the extra or temporary space used by an algorithm. Space complexity is parallel to time complexity.

CONTENTS
This repository will contain some exercises and programs on search algorithms implemented in C
