vector<string>v;
for(int i=0;i<words.size();i++)
{
for(int j=0;j<words[i].length();j++)
{
sort(words[i][j].begin(),words[i][j].end());
}
}
sort(words.begin(),words.end());
v.push_back(words[1]);
for(int i=1;i<words.size();i++)
{
if(words[i]!=words[i-1])
v.push_back(wordss[i]);
}
return v;