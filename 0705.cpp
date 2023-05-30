/*
Design a HashSet without using any built-in hash table libraries.

Implement MyHashSet class:

void add(key) Inserts the value key into the HashSet.
bool contains(key) Returns whether the value key exists in the HashSet or not.
void remove(key) Removes the value key in the HashSet. If key does not exist in the HashSet, do nothing.
*/

class MyHashSet {
public:
    vector<int> hash;
    MyHashSet() {
        hash= vector<int>(1000001,0);
    }
    
    void add(int key) {
       hash[key]++;
    }
    
    void remove(int key) {
        hash[key]= 0;
    }
    
    bool contains(int key) {
        if(hash[key]) return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
