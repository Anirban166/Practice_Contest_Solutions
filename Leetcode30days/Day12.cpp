class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    multiset<int>s;
    for(int i:stones) s.insert(i);
    auto popMax = [&]()
    {
        int x = *s.rbegin();
        s.erase(prev(s.end()));
        return x;
    };
    while((int) s.size() >= 2) 
    {
        int y = popMax(), x = popMax();
        if(x!=y) s.insert(y-x);
    }   
        if(s.empty()) return 0;
        return popMax();
        
    }
};
