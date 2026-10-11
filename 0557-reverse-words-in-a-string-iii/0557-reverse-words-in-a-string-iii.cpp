class Solution {
public:
    string reverseWords(string s) {
        string ans ="";
        string a="";
        int j=0;
      for(int i =0;i<s.size();i++){
        if(s[i]==' '){
            a = s.substr(j,i-j);
             reverse(a.begin(),a.end());
            ans +=a+" ";
             j=i+1;
        }
       

      }  
       a = s.substr(j);
        reverse(a.begin(),a.end());
        ans+=a;
      return ans;
    }
};