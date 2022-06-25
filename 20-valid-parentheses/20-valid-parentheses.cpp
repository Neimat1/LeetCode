class Solution {
public:
   
    

bool isValid(string s) {
    stack<char>list;
    for(int i =0;i<s.length();i++){
       if(s[i]=='('||s[i]=='{'||s[i]=='[')
           list.push(s[i]);
       else{
           if(list.empty()) return false;
           if((list.top()=='('&& s[i]==')')||(list.top()=='['&&s[i]==']')||(list.top()=='{'&&s[i]=='}' )) list.pop();
           else return false;
       }
    }

    return list.empty();


}
};