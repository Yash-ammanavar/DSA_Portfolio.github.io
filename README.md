# Food Delivery apps

<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>Yash Ammanavar</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
</dl>


## Introduction
  <img src="https://play-lh.googleusercontent.com/kszbMUpxpU3OU1PAJPdWk68ti21PvRcBX4ynCSFfzDZ5JnuVlOgjh-YDBm-xBjrG-Tw" alt="Operating systems" style="width: 50%; height: auto; margin-right: 50px; margin-left:50px;"/>
In today's day and age, more and more people are relying on online food delivery applications to order food. With this, comes new challenges with respect to storage, networking, delivery, etc. Using of DSA concepts, algorithms and data structures is very useful to tackle these challenges. 

## Functionalities

### Optimal Delivery Route
<img src="https://27089344.fs1.hubspotusercontent-eu1.net/hubfs/27089344/Imported_Blog_Media/10-best-apps-for-delivery-route-planning-roadwarrior-ui.png" alt="Operating systems" style="width: 50%; height: auto; margin-right: 50px; margin-left:50px;"/>

<b>Function:</b> Determines the quickest delivery route for drivers to ensure timely deliveries, enhancing customer satisfaction.

Dijkstra's Algorithm: Finds the shortest path between nodes in a graph, ensuring deliveries are made in the least amount of time possible.[djikstra](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/blob/main/djikstra.c)

Alternative: A* Search Algorithm can be used if you have heuristic information about the distances, which can speed up the search process. [A*](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/blob/main/A*.c)

### Search for Restaurants
![WhatsApp Image 2024-07-08 at 10 37 51_458e8fde](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/assets/105197869/d556b31f-32c8-4fe9-b3ec-0ae5e5536b3d)


Function: Allows users to quickly find restaurants by typing part of the restaurant name. This improves user experience by reducing the time and effort needed to locate a restaurant.

Trie Data Structure: A trie provides efficient searching and auto-completion of restaurant names. It supports fast lookups and insertions, making it ideal for handling large dictionaries of restaurant names.

Time Complexity: O(n), where n is the length of the query.

Alternative: Hash Maps with linked lists can be used for simpler implementation, though they might not be as efficient for prefix-based searches.

### Historical Order Analysis

Function: Analyzes past orders to identify trends and improve future service.

Fenwick Trees: Also known as Binary Indexed Trees, provide efficient methods for cumulative frequency tables, helping in quickly analyzing historical order data.	[Fenwick Tree](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/blob/main/fenwick.cpp) 

Time Complexity: O(n log n) for building and for each query or update its O(log n).

Alternative: Stack- Useful for Last-In-First-Out (LIFO) operations, such as keeping track of the most recent orders.

### Manage Restaurant Menus
Function: Keeps restaurant menus organized and up-to-date, allowing users to easily browse and select items.

Red-Black Trees: These self-balancing binary search trees maintain sorted order and ensure O(log n) time complexity for insertion, deletion, and lookup operations.

Alternative: AVL Trees, another type of self-balancing tree, can be used for similar purposes but may involve more rotations during insertion and deletion.

