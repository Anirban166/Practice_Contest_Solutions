map<string,vector<string>> m;
for(string s:strs)
{ string s2=s;
  sort(s2.begin(),s.end());
  m[s2].push_back(s);
}
vector<vector<string>> v;
for(auto x:m)
{  v.push_back(x.second);
}

// return v;
