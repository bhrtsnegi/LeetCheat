/*
A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
A self-dividing number is not allowed to contain the digit zero.

Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right].
*/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        int num, val;
        for(int i=left; i<=right; i++)
        {
            if(i<=9)
            {
                answer.push_back(i);
            }
            else if(i%10==0)
            {
                continue;
            }
            else
            {
                num=i;
                while(num!=0)
                {
                    val=num%10;
                    if(val==0 || i%val!=0 )
                    {
                        break;
                    }
                    num=num/10;
                }
                if(num==0)
                {
                    answer.push_back(i);
                }
            }
        }
        return answer;
    }
};
