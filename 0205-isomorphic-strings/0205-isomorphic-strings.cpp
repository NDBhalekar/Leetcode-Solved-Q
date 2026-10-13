class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>mapS(256,-1);
        vector<int>mapT(256,-1);
        if(s.size()!=t.size())return false;
        for(int i =0;i<s.size();i++){
            char a = s[i];
            char b = t[i];

            if(mapS[a]!=mapT[b]){
                return false;
            }
            mapS[a] = i;
            mapT[b]=i;
         }
     return true;
    }
};