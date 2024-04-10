/*
You are given an integer array cards where cards[i] represents the value of the ith card. A pair of cards are matching if the cards have the same value.

Return the minimum number of consecutive cards you have to pick up to have a pair of matching cards among the picked cards. If it is impossible to have matching cards, return -1
*/

class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
       unordered_map<int, int> myMap;
       int ans = INT_MAX;
       for(int i = 0; i < cards.size(); i++){
            if(myMap.count(cards[i]))
                ans = min(ans, i-myMap[cards[i]]+1);
            myMap[cards[i]] = i;
       } 
       if(ans == INT_MAX) return -1;
       return ans;
    }
};
