// Unordered set (need to sort) is faster.

set<int>x;
for(int i:arr)
 x.insert(i);
int count = 0;
for(int i:arr)
 if(x.count(i+1)==1)
  count++;
return count;
