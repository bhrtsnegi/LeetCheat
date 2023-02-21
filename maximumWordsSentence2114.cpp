/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

You are given an array of strings sentences, where each sentences[i] represents a single sentence.

Return the maximum number of words that appear in a single sentence.
*/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int k=1, count=0, result=0;
        for(int i=0; i<size(sentences); i++)
        {
            while(k!=sentences[i].length())
            {
                if(sentences[i][k]==' ')
                {
                    count ++;
                }
                k++;
            }
            k=1;
            if(count>result)
            {
                result=count;
            }
            count=0;
        }
        return result+1;
        // result + 1 because it will not going to count the last word.
    }
};