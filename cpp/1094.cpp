/*
There is a car with capacity empty seats. The vehicle only drives east (i.e., it cannot turn around and drive west).

You are given the integer capacity and an array trips where trips[i] = [numPassengersi, fromi, toi] indicates that the ith trip has numPassengersi passengers and the locations to pick them up and drop them off are fromi and toi respectively. 
The locations are given as the number of kilometers due east from the car's initial location.

Return true if it is possible to pick up and drop off all passengers for all the given trips, or false otherwise.
*/

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> myMap;
        for(vector<int> v: trips){
            myMap[v[1]] += v[0];
            myMap[v[2]] -= v[0]; 
        }

        int sum = 0;
        for(auto it = myMap.begin(); it != myMap.end(); it++){
            sum += it->second;
            if(capacity < sum) return false;
        }
        return true;
    }
};
