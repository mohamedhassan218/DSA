class Solution {
public:
    long long romanToInt(string s) {
        int n = s.length();
        long long result = 0;
        for(int i = 0; i < n; i++){
            switch(s[i]){
                case 'I':
                    if(s[i+1] == 'V' && i != n-1){
                        result += 4;
                        i++;
                    }else if(s[i+1] == 'X' && i != n-1){
                        result += 9;
                        i++;
                    }else{
                        result += 1;
                    }
                    break;
                case 'V':
                    result += 5;
                    break;
                case 'X':
                    if(s[i+1] == 'L' && i != n-1){
                        result += 40;
                        i++;
                    }else if(s[i+1] == 'C' && i != n-1){
                        result += 90;
                        i++;
                    }else{
                        result += 10;
                    }
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'C':
                    if(s[i+1] == 'D' && i != n-1){
                        result += 400;
                        i++;
                    }else if(s[i+1] == 'M' && i != n-1){
                        result += 900;
                        i++;
                    }else{
                        result += 100;
                    }
                    break;
                case 'D':
                    result += 500;
                    break;
                case 'M':
                    result += 1000;
                    break;
                default:
                    result += 0;
            }
        }
        return result;
    }
};