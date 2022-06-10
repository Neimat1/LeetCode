class Solution {
public:
    
int lengthOfLongestSubstring(string s) {
    int frequency[256]={0};
    int maxLen=0, lastCharReached=0,len =s.length();
    for(int i=0;i<len;i++){
        frequency[s[i]]++;
        while(frequency[s[i]]>1){
            //here we reset all the previous char
            frequency[s[lastCharReached]]--;
            lastCharReached++;
        }
        maxLen=max(maxLen,i-lastCharReached+1);
    }

    return maxLen;

}
};