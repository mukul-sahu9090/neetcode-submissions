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
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(n>m){
            return false;
        }
        int Freq[26]={0};
        int windowFreq[26]={0};
        for(int i=0;i<n;i++){
            Freq[s1[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            windowFreq[s2[i]-'a']++;
        }
        if(isFreqSame(Freq,windowFreq)){
            return true;
        }
        for(int i=n;i<m;i++){
            windowFreq[s2[i-n]-'a']--;
            windowFreq[s2[i]-'a']++;
            if(isFreqSame(Freq,windowFreq)){
                return true;
            }
        }
        return false;
        
    }
};
