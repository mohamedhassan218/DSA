class Solution {
public:
    int strStr(string haystack, string needle) {
        int h_len = haystack.length();
        int n_len = needle.length();
        for(int i = 0; i < h_len; i++){
            bool flag = false;
            if(haystack[i] == needle[0]){
                int cntr = 1;
                for(int j = 1; j < n_len; j++){
                    if(needle[j] != haystack[i+j])
                        break;
                    if(needle[j] == haystack[i+j])
                        cntr++;
                }
                if(cntr == n_len)
                    return i;
            }
        }
        return -1;
    }
    // ANOTHER SOLUTION
// public:
//     int strStr(string haystack, string needle) {
//         size_t indx = haystack.find(needle);
//         if(indx != string::npos)
//             return static_cast<int>(indx);
//         else
//             return -1;
//     }
};