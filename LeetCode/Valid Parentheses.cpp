class Solution {
public:
    bool isValid(string s) {
        bool result = false;
        int n = s.length();
        int lCounter = 0, rCounter = 0;
        stack<char> sta;
        for(int i = 0; i < n; i++){
            if((s[i] == ')' || s[i] == '}' || s[i] == ']') && sta.size() == 0)
                 return result;
            else{
                if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                    sta.push(s[i]);
                    lCounter++;
                }
                if(s[i] == '}' && !sta.empty() && sta.top() == '{'){
                    sta.pop();
                    rCounter++;
                }
                else if(s[i] == ']' && !sta.empty() && sta.top() == '['){
                    sta.pop();
                    rCounter++;
                }
                else if(s[i] == ')' && sta.top() == '(' && !sta.empty()){
                    sta.pop();
                    rCounter++;
                }
                else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
                    rCounter++;
            }
        }
        if(sta.size() == 0 && lCounter == rCounter)
            result = true;
        return result;
    }
};