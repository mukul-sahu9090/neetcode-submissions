class Solution {
public:
    bool isPalindrome(string s) {
        string str=s;
        int lp=0;
        int rp=str.length()-1;
        for(int i=0;i<str.length();i++){
            str[i]=tolower(str[i]);
        }
        while(lp<rp){
            if(!isalnum(str[lp])){
                lp++;
                continue;
                
            }
            if(!isalnum(str[rp])){
                rp--;
                continue;
            }    
        
            
            if(str[lp]==str[rp]){
                lp++;
                rp--;
            }
            else{
                return false;
            }
        }
        
        return true;
        
    }
};
