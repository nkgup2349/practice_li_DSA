class Solution {
public:
    bool isPalindrome(int x) {
        int l =x ;
        string s = to_string(l);
        string k ;
        for(int i = s.length()-1 ; i >= 0 ; i--){
            k = k+s[i];
        }
        bool value = true;
        for(int i = 0 ; i < k.length() ; i++){
            if(s[i] != k[i]){
                value = false;
            }
        }
        if(value == true){
            return true;
        }
        else{
            return false ;
        }
    }
};