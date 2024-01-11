/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> sortNum;
        int size1=nums1.size();
        int size2=nums2.size();
        int i=0, j=0;
        double med;

        while(i<size1 || j<size2)
        {
            if(i<size1 && j<size2)
            {
                if(nums1[i]<=nums2[j])
                {
                    sortNum.push_back(nums1[i]);
                    i++;
                }
                else if(nums1[i]>nums2[j])
                {
                    sortNum.push_back(nums2[j]);
                    j++;
                }
            }

            else if(j!=size2)
            {
                sortNum.push_back(nums2[j]);
                j++;
            }
            else
            {
                sortNum.push_back(nums1[i]);
                i++;
            }
        }

        int size=sortNum.size();
        int temp=size/2;

        if(size%2==0)
            med=(sortNum[temp-1]+sortNum[temp])/2;
        else
            med=sortNum[temp];

        return med;
    }
};
