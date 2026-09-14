#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Patient structure
struct Patient {
    string name;
    int priority;
};

// Comparator for priority queue
// Lower priority number = higher priority
struct ComparePriority {
    bool operator()(Patient a, Patient b) {
        return a.priority > b.priority;
    }
};

// Add a patient to the priority queue
void addPatient(priority_queue<Patient, vector<Patient>, ComparePriority>& pq,
                string name, int priority) {
    Patient p;
    p.name = name;
    p.priority = priority;

    pq.push(p);

    cout << "Added: " << name
         << " (Priority " << priority << ")" << endl;
}

// Treat the highest-priority patient
void treatNextPatient(
    priority_queue<Patient, vector<Patient>, ComparePriority>& pq) {

    if (pq.empty()) {
        cout << "No patients waiting." << endl;
        return;
    }

    Patient p = pq.top();
    pq.pop();

    cout << "Treating: " << p.name
         << " (Priority " << p.priority << ")" << endl;
}

int main() {

    priority_queue<Patient, vector<Patient>, ComparePriority> pq;

    // Step 3: Add P1-P6
    addPatient(pq, "P1", 3);
    addPatient(pq, "P2", 1);
    addPatient(pq, "P3", 2);
    addPatient(pq, "P4", 1);
    addPatient(pq, "P5", 3);
    addPatient(pq, "P6", 2);

    cout << "\n--- Treatment Order ---" << endl;

    while (!pq.empty()) {
        treatNextPatient(pq);
    }

    // Emergency patient test
    cout << "\n--- Emergency Patient Test ---" << endl;

    addPatient(pq, "P1", 3);
    addPatient(pq, "P2", 1);
    addPatient(pq, "P3", 2);
    addPatient(pq, "P5", 3);

    cout << "\nTreating 2 patients:" << endl;
    treatNextPatient(pq);
    treatNextPatient(pq);

    // Add new emergency patient
    cout << "\nAdding new Emergency Patient P7:" << endl;
    addPatient(pq, "P7", 1);

    cout << "\n--- Remaining Treatment Order ---" << endl;

    while (!pq.empty()) {
        treatNextPatient(pq);
    }

    return 0;
}
