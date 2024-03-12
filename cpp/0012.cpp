/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.
*/

class Solution
{
    public:
        string intToRoman(int nums)
        {
            string ans = "";

            while (nums >= 1000)
            {
                ans += "M";
                nums -= 1000;
            }
            if (nums >= 900)
            {
                ans += "CM";
                nums -= 900;
            }
            if (nums >= 500)
            {
                ans += 'D';
                nums -= 500;
            }
            if (nums >= 400)
            {
                ans += "CD";
                nums -= 400;
            }
            while (nums >= 100)
            {
                ans += 'C';
                nums -= 100;
            }
            if (nums >= 90)
            {
                ans += "XC";
                nums -= 90;
            }
            if (nums >= 50)
            {
                ans += 'L';
                nums -= 50;
            }
            if (nums >= 40)
            {
                ans += "XL";
                nums -= 40;
            }
            while (nums >= 10)
            {
                ans += 'X';
                nums -= 10;
            }
            if (nums >= 9)
            {
                ans += "IX";
                nums -= 9;
            }
            if (nums >= 5)
            {
                ans += 'V';
                nums -= 5;
            }
            if (nums >= 4)
            {
                ans += "IV";
                nums -= 4;
            }
            while (nums >= 1)
            {
                ans += 'I';
                nums -= 1;
            }
            return ans;
        }
};
