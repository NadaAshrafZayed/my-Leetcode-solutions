class Solution {
public:
    int strStr(string haystack, string needle) {
        bool inProgress=0;
        int i, j=0, curr=0, ans=-1;
        for(i=0; i<haystack.length()+1; i++){
            if(j == needle.length()){
                ans = (i-1) - (needle.length()) + 1;
                break;
            }else if (j<needle.length() && haystack[i] == needle[j]){
                if(!inProgress){ // lsa awl harf w bbd2 aktshf el klma htng7 wla fa w22f el curr hna
                    curr = i;
                    inProgress = 1;
                }
                j++;
            }else{ // s[i] != trgt[j]
                j=0;
                if(inProgress){
                    i = curr; // w htt-inc fl loop so +1
                }
                inProgress = 0; // el klma bazet
            }
        }
        return ans;
    }
};