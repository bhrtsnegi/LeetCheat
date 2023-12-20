/*
A teacher is writing a test with n true/false questions, with 'T' denoting true and 'F' denoting false. He wants to confuse the students by maximizing the number of consecutive questions with the same answer (multiple trues or multiple falses in a row).

You are given a string answerKey, where answerKey[i] is the original answer to the ith question. In addition, you are given an integer k, the maximum number of times you may perform the following operation:

Change the answer key for any question to 'T' or 'F' (i.e., set answerKey[i] to 'T' or 'F').
Return the maximum number of consecutive 'T's or 'F's in the answer key after performing the operation at most k times.
*/

class Solution {
public:
    int maxConsecutiveAnswers(string a, int k) {
        int first=0;
        int right=0, wrong=0;
        int maxi = 0;
        for(int i=0; i<a.size();i++){
            if(a[i]=='T') right++;
            else wrong++;
            if(right<=k|| wrong<=k){
                continue;
            }
            else{
                maxi = max(right+wrong-1,maxi);
                while(right>k && wrong>k){
                    if(a[first]=='T') right--;
                    else wrong--;
                    first+=1;
                }
            }
        }
        maxi = max(right+wrong,maxi);
        return maxi;
    }
};
