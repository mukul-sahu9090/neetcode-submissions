class Solution {
public:
    bool isFreqSame(int Freq1[],int Freq2[]){
        for(int i=0;i<26;i++){
            if(Freq1[i]!=Freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool isAnagram(string s, string t) {
        int Freq[26]={0};
        int windowFreq[26]={0};
        int n=s.length();
        int m=t.length();
        if(n>m){
            return false;
        }
        for(int i=0;i<n;i++){
            Freq[s[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            windowFreq[t[i]-'a']++;
        }
        if(isFreqSame(Freq,windowFreq)){
            return true;
        }
        return false;
    }
};
