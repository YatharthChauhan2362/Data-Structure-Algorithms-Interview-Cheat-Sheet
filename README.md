# Data-Structure-Algorithms-Interview-Cheat-Sheet
 Interview Preparation For Technical Round

This list is meant to be both a quick guide and reference for further research into these topics. It's basically a summary of that comp sci course you never took or forgot about, so there's no way it can cover everything in depth.
4
​
5
## Contributing
6
This is an open source, community project, and I am grateful for all the help I can get. If you find a mistake make a PR and please have a source so I can confirm the correction. If you have any suggestions feel free to open an issue.
7
​
8
## Challenges
9
This project now has actual code challenges! This challenges are meant to cover the topics you'll read below. Maybe you'll see them in an interview and maybe you won't. Either way you'll probably learn something new. [Click here for more](./challenges/README.md)
10
​
11
# Table of Content
12
- [Asymptotic Notation](#asymptotic-notation)
13
- [Data Structures](#data-structures)
14
  - [Array](#array)
15
  - [Linked List](#linked-list)
16
  - [Hash Table or Hash Map](#hash)
17
  - [Binary Tree](#binary-tree)
18
- [Algorithms](#algorithms)
19
  - [Algorithm Basics](#algorithm-basics)
20
  - [Search Algorithms](#search-algorithms)
21
    - [Breadth First Search](#breadth-first-search)
22
    - [Depth First Search](#depth-first-search)
23
  - [Sorting Algorithms](#sorting-algorithms)
24
    - [Selection Sort](#selection-sort)
25
    - [Insertion Sort](#insertion-sort)
26
    - [Merge Sort](#merge-sort)
27
    - [Quick Sort](#quick-sort)
28
- [Additional Resources](#additional-resources)
29
​
30
​
31
# <a id="asymptotic-notation"></a>Asymptotic Notation
32
### Definition:
33
Asymptotic Notation is the hardware independent notation used to tell the time and space complexity of an algorithm. Meaning it's a standardized way of measuring how much memory an algorithm uses or how long it runs for given an input.
34
​
35
#### Complexities
36
The following are the Asymptotic rates of growth from best to worst:
37
- constant growth - ``O(1)`` Runtime is constant and does not grow with `n`
38
- logarithmic growth – ``O(log n)`` Runtime grows logarithmically in proportion to `n`
39
- linear growth – ``O(n)`` Runtime grows directly in proportion to `n`
40
- superlinear growth – ``O(n log n)`` Runtime grows in proportion _and_ logarithmically to `n`
41
- polynomial growth – `O(n^c)` Runtime grows quicker than previous all based on `n`
42
- exponential growth – `O(c^n)` Runtime grows even faster than polynomial growth based on `n`
43
- factorial growth – `O(n!)` Runtime grows the fastest and becomes quickly unusable for even
44
small values of `n`
45
​
46
[(source: Soumyadeep Debnath, _Analysis of Algorithms | Big-O analysis_)](https://www.geeksforgeeks.org/analysis-algorithms-big-o-analysis/)
47
​
48
Visualized below; the x-axis representing input size and the y-axis representing complexity:
49
​
50
![#](https://upload.wikimedia.org/wikipedia/commons/thumb/7/7e/Comparison_computational_complexity.svg/400px-Comparison_computational_complexity.svg.png)
51
​
52
[(source: Wikipedia, _Computational Complexity of Mathematical Operations_)](https://en.wikipedia.org/wiki/Computational_complexity_of_mathematical_operations)
53
​
54
#### Big-O notation
55
Big-O refers to the upper bound of time or space complexity of an algorithm, meaning it worst case runtime scenario. An easy way to think of it is that runtime could be better than Big-O but it will never be worse.
56
#### Big-Ω (Big-Omega) notation
57
Big-Omega refers to the lower bound of time or space complexity of an algorithm, meaning it is the best runtime scenario. Or runtime could worse than Big-Omega, but it will never be better.
58
#### Big-θ (Big-Theta) notation
59
Big-Theta refers to the tight bound of time or space complexity of an algorithm. Another way to think of it is the intersection of Big-O and Big-Omega, or more simply runtime is guaranteed to be a given complexity, such as `n log n`.
60
​
61
#### What you need to know
62
- Big-O and Big-Theta are the most common and helpful notations
63
- Big-O does _not_ mean Worst Case Scenario, Big-Theta does _not_ mean average case, and Big-Omega does _not_ mean Best Case Scenario. They only connote the algorithm's performance for a particular scenario, and all three can be used for any scenario.
64
- Worst Case means given an unideal input, Average Case means given a typical input, Best case means a ideal input. Ex. Worst case means given an input the algorithm performs particularly bad, or best case an already sorted array for a sorting algorithm.
65
- Best Case and Big Omega are generally not helpful since Best Cases are rare in the real world and lower bound might be very different than an upper bound.
66
- Big-O isn't everything. On paper merge sort is faster than quick sort, but in practice quick sort is superior.
67
​
68
# <a id="data-structures"></a>Data Structures
69
### <a id="array"></a> Array
70
#### Definition
71
- Stores data elements based on an sequential, most commonly 0 based, index.
72
- Based on [tuples](http://en.wikipedia.org/wiki/Tuple) from set theory.
73
- They are one of the oldest, most commonly used data structures.
No file chosen
Attach files by dragging & dropping, selecting or pasting them.
@YatharthChauhan2362
Propose changes
Commit summary
Create README.md
Optional extended description
Add an optional extended description…
 
© 2022 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
