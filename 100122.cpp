/*
There are n balls on a table, each ball has a color black or white.

You are given a 0-indexed binary string s of length n, where 1 and 0 represent black and white balls, respectively.

In each step, you can choose two adjacent balls and swap them.

Return the minimum number of steps to group all the black balls to the right and all the white balls to the left.
*/

class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.length();
    int whiteBallsCount = 0;
    long long minSteps = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            whiteBallsCount++;
        } else {
            minSteps += whiteBallsCount;
        }
    }

    return minSteps;
    }
};
