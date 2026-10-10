class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        int top=-1;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='['|| s[i]=='{'){
                stack.push_back(s[i]);
                top++;
            } 
            else{
                if(top==-1)
                return false;
                if((s[i]==')' && stack[top]=='(' ) || (s[i]==']' && stack[top]=='[') || (s[i]=='}' && stack[top]=='{') ){
                    stack.pop_back();
                    top--;
                }
                else
                return false;
            }
        }
      
        if(top==-1)
        return true;
        else 
        return false;
    }
};