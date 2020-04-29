class FirstUnique {
    unordered_map<int,int> occurence;
    queue<int>q;
public:
    FirstUnique(vector<int>& nums) {
        for(int i:nums) add(i);
    }
    
    int showFirstUnique() 
    { 
       while(!q.empty() && occurence[q.front()] >=2) q.pop();
       if(q.empty()) return -1;
       return q.front();
    }
    
    void add(int value) {
        occurence[value]++;
        q.push(value);
    }
};
