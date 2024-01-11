/*
You are given three positive integers: n, index, and maxSum. You want to construct an array nums (0-indexed) that satisfies the following conditions:

nums.length == n
nums[i] is a positive integer where 0 <= i < n.
abs(nums[i] - nums[i+1]) <= 1 where 0 <= i < n-1.
The sum of all the elements of nums does not exceed maxSum.
nums[index] is maximized.
Return nums[index] of the constructed array.

Note that abs(x) equals x if x >= 0, and -x otherwise.
*/

class Solution {
public:
    long SUM(long n)
    {
        return n * (n + 1) / 2;
    }

    int maxValue(int n, int index, int maxSum)
    {
        auto check = [&](int mid)
        {
            long sum = 0;

            // sum for 0 to index will be counted below
            long reqLeft = mid, haveLeft = index + 1;
            if (index == 0)
            {
                sum += mid;
            }
            else
            {
                if (haveLeft >= reqLeft)
                {
                    sum += SUM(mid);
                    sum += haveLeft - reqLeft;
                }
                else
                {
                    sum += SUM(mid) - SUM(reqLeft - haveLeft);
                }
            }

            // sum for index + 1 to n - 1 will be counted below
            if (index != n - 1)
            {
                long reqRight = reqLeft - 1;
                long haveRight = n - index - 1;

                if (haveRight >= reqRight)
                {
                    sum += SUM(mid - 1);
                    sum += haveRight - reqRight;
                }
                else
                {
                    sum += SUM(mid - 1) - SUM(reqRight - haveRight);
                }
            }

            return sum <= maxSum;
        };

        long low = 1, high = maxSum, ans = -1;
        while (low <= high)
        {
            long mid = (low + high) / 2;
            if (check(mid))
                ans = mid, low = mid + 1;
            else
                high = mid - 1;
        }
        return ans;
    }
};
