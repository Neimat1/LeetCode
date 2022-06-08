class Solution {
public:
   bool palindrome(string s){
    int len = s.length()-1;
    for(int i=0,j=len;i<=len;i++,j--)
        if(s[i]!=s[j])
            return false;

    return true;

}

int removePalindromeSub(string s) {
    return palindrome(s)?1:2;
}
};