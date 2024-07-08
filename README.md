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

## System Design
![Screenshot (150)](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/assets/105197869/e184e668-a474-455e-ae2c-0b003eb5c34d)

Frontend Applications: User App, Restaurant App, Delivery Partner App

Backend Services: API Gateway, User Service, Restaurant Service, Order Service, Delivery Service, Payment Service, Notification Service

Databases: User Database, Restaurant Database, Order Database, Delivery Database, Payment Database

Third-Party Integrations: Payment Gateway, Maps and GPS, SMS/Email Service

### Services
<b>Frontend Applications:</b> Interfaces for users, restaurants, and delivery partners to interact with the system.

<b>API Gateway:</b> The entry point for all external requests, routing them to appropriate backend services.

<b>Backend Services:</b> Handle business logic and processing.

<b>User Service:</b> Manages user-related information.

<b>Restaurant Service:</b> Manages restaurant-related information.

<b>Order Service:</b> Manages order processing.

<b>Delivery Service:</b> Manages delivery logistics.

<b>Payment Service:</b> Manages payment processing.

<b>Notification Service:</b> Manages notifications.

<b>Databases:</b> Store persistent data for each service.

<b>Third-Party Integrations:</b> Integrations with external services such as payment gateways, mapping services, and communication services for notifications.

## Functionalities

### Optimal Delivery Route
<img src="https://27089344.fs1.hubspotusercontent-eu1.net/hubfs/27089344/Imported_Blog_Media/10-best-apps-for-delivery-route-planning-roadwarrior-ui.png" alt="Operating systems" style="width: 50%; height: auto; margin-right: 50px; margin-left:50px;"/>

<b>Function:</b> Determines the quickest delivery route for drivers to ensure timely deliveries, enhancing customer satisfaction.

Dijkstra's Algorithm: Finds the shortest path between nodes in a graph, ensuring deliveries are made in the least amount of time possible.[djikstra](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/blob/main/djikstra.c)

Alternative: A* Search Algorithm can be used if you have heuristic information about the distances, which can speed up the search process. [A*](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/blob/main/A*.c)

### Search for Restaurants
<img src="https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/assets/105197869/d556b31f-32c8-4fe9-b3ec-0ae5e5536b3d" alt="Image" width="300" height="200">


Function: Allows users to quickly find restaurants by typing part of the restaurant name. This improves user experience by reducing the time and effort needed to locate a restaurant.

[Trie](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/blob/main/trie.cpp) Data Structure: A trie provides efficient searching and auto-completion of restaurant names. It supports fast lookups and insertions, making it ideal for handling large dictionaries of restaurant names.

Time Complexity: O(n), where n is the length of the query.

Alternative: Hash Maps with linked lists can be used for simpler implementation, though they might not be as efficient for prefix-based searches and also not suitable for red black trees.

### Historical Order Analysis

Function: Analyzes past orders to identify trends and improve future service.

Fenwick Trees: Also known as Binary Indexed Trees, provide efficient methods for cumulative frequency tables, helping in quickly analyzing historical order data.	[Fenwick Tree](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/blob/main/fenwick.cpp) 

Time Complexity: O(n log n) for building and for each query or update its O(log n).

Alternative: [Segment](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/blob/main/segment.cpp) trees.

### Manage Restaurant Menus
Function: Keeps restaurant menus organized and up-to-date, allowing users to easily browse and select items.

[Red-Black](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/blob/main/red_black.cpp) Trees: These self-balancing binary search trees maintain sorted order and ensure O(log n) time complexity for insertion, deletion, and lookup operations.

Alternative: AVL Trees, another type of self-balancing tree, can be used for similar purposes but may involve more rotations during insertion and deletion.

### Sorting results based on filters
![WhatsApp Image 2024-07-08 at 14 45 07_0800e13a](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/assets/105197869/866806d1-6baf-4119-a33e-d30dc147350d)


Function: The search results can be sorted based on filters like alphabetical  order/price/etc

Quicksort: Quick Sort is a commonly used sorting algorithm that operates by choosing a 'pivot' element from an array. It then partitions the array into two sections: elements less than the pivot and elements greater than the pivot. These sub-arrays are then sorted recursively. This process continues until the entire array is sorted, efficiently organizing the elements.

Time Complexity:
Worst-case: O(n^2)
Best-case: O(n log n)
Average-case: O(n log n)

### Order Processing System
Function: An order processing system keeps track of incoming orders and manages their processing efficiently.

Data Structure: Priority Queue (Heap) to maintain incoming orders

Time complexity: O(log n) for insertions and deletions.

Alternative Data Structure: Skip List, although the implementation could be challenging, it offers a time complexity of O(log n).

Code: [Skip List](https://github.com/Yash-ammanavar/DSA_Portfolio.github.io/blob/main/skip.cpp)

Source: GeeksforGeeks

### Time and Space Complexities

| **Algorithm**                         | **Time Complexity**                            | **Space Complexity**                          |
|---------------------------------------|------------------------------------------------|-----------------------------------------------|
| **Trie Data Structure**               | Insert/Search: O(m)                            | O(m) per node                                 |
| **Hash Tables**                       | Insert/Delete/Search: O(1) avg                 | O(n)                                          |
| **Fenwick Trees**                     | Build: O(n log n), Update/Query: O(log n)      | O(n)                                          |
| **Segment Trees**                     | Build: O(n log n), Query/Update: O(log n)      | O(n)                                          |
| **Red-Black Trees**                   | Insert/Delete/Search: O(log n)                 | O(n)                                          |
| **Dijkstra's Algorithm**              | O((V + E) log V)                               | O(V^2)                                        |
| **A* Search Algorithm**               | O(E)                                           | O(E)                                          |
| **Skip List**                         | Insert/Delete/Search: O(log n)                 | O(n)                                          |
| **Heap Data Structure**               | Insert/Delete/Extract-Min: O(log n)            | O(n)                                          |
| **Ant Colony Optimization Algorithm** | O(n^3) per iteration                           | O(n^2)                                        |



