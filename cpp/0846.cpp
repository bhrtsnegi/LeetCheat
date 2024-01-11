/*
Alice has some number of cards and she wants to rearrange the cards into groups so that each group is of size groupSize, and consists of groupSize consecutive cards.

Given an integer array hand where hand[i] is the value written on the ith card and an integer groupSize, return true if she can rearrange the cards, or false otherwise.
*/

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize != 0)  return false;
        sort(hand.begin(), hand.end());
        map<int, int> myMap;
        for(int i=0; i<hand.size(); i++)
        {
            myMap[hand[i]]++;
            if(myMap.size()==groupSize)
            {
                for(int j= hand[i]; j>hand[i]-groupSize; j--)
                {
                    myMap[j]--;
                    if(myMap[j]==0)
                        myMap.erase(j);
                }
            }
        }
        if(myMap.size()) return false;
        return true;
    }
};
