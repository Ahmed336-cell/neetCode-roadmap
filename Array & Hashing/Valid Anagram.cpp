class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
       

        if(s.length() == t.length()){
             for(int i=0;i<t.size();i++)
        {
            if(s[i]!=t[i])
            return false;
        }


        }else{
            return false;
        }


        return true;
      
    


    }
};
