# hospital_priority_queue
Hospital Patient Priority Queue

Challenge 09 – Data Structures and Algorithms

Activity Name

Hospital Patient Priority Queue – Code Submission Challenge

Objective

This project implements a hospital patient priority queue using C++. The program determines which patient should be treated next based on their priority.

Priority Rules

* Priority 1 – Emergency
* Priority 2 – Urgent
* Priority 3 – Routine

The patient with the lowest priority number is treated first.

Features

The program provides two main functions:

1. Add Patient – Adds a patient with their name and priority number.
2. Treat Next Patient – Removes and displays the patient who should be treated next.

A C++ priority queue is used to maintain the patients according to their priority.

Test Case

The following patients are added in order:

Patient	Priority
P1	3
P2	1
P3	2
P4	1
P5	3
P6	2

Treatment Order

P2 → P4 → P3 → P6 → P1 → P5

Emergency patients (Priority 1) are treated before Urgent (Priority 2) and Routine (Priority 3) patients.

Emergency Patient Test

After treating some patients, a new Emergency patient P7 with priority 1 is added.

The priority queue places P7 ahead of the remaining Urgent and Routine patients, demonstrating that Emergency patients are always given higher treatment priority.

Technologies Used

* C++
* Priority Queue
* Data Structures and Algorithms

File

hospital_priority_queue.cpp

Conclusion

The project demonstrates how a priority queue can be used to manage hospital patients efficiently. The test cases confirm that patients with higher urgency are treated before patients with lower urgency.
