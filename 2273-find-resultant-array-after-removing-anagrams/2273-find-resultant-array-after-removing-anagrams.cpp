class Solution {
public:
    bool annagram(string& a,string& b)
    {
        int hash[26]={};
        for(char ch:a) hash[ch-'a']++;
        for(char ch:b) hash[ch-'a']--;
        for(int i=0;i<26;i++)
        {
            if(hash[i]!=0)
                return false;
        }
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        stack<string>st;
        st.push(words[0]);
        for(int i=1;i<words.size();i++)
        {
            if(!annagram(st.top(),words[i]))
                st.push(words[i]);
        }
        vector<string>v(st.size());
        for(int i=st.size()-1;i>=0;i--)
        {
            v[i]=st.top();
            st.pop();
        }
        return v;
    }
};