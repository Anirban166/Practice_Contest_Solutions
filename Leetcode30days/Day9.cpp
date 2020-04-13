class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int j = 0;
        for(int i = 0; i < S.size(); i++){
            if(S[i] == '#'){
                j--; 
                if(j < 0) j = 0;
                continue;
            }
            S[j++] = S[i];
        }
        
        int k = 0; 
        for(int i = 0; i < T.size(); i++){
            if(T[i] == '#'){
                k--; 
                if(k < 0) k = 0;
                continue;
            }
            T[k++] = T[i];
        }
        
        return (S.substr(0,j) == T.substr(0, k));
    }
};
