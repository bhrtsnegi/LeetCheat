/*
Design a system that manages the reservation state of n seats that are numbered from 1 to n.

Implement the SeatManager class:

SeatManager(int n) Initializes a SeatManager object that will manage n seats numbered from 1 to n. All seats are initially available.
int reserve() Fetches the smallest-numbered unreserved seat, reserves it, and returns its number.
void unreserve(int seatNumber) Unreserves the seat with the given seatNumber.
*/

class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>> pq;

    SeatManager(int n) {
        for(int i=1; i<=n; i++)
            pq.push(i);
    }
    
    int reserve() {
        int val= pq.top();
        pq.pop();
        return val;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
