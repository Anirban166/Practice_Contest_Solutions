
    bool checkValidString(string s) {
        int st=0;
        int cnt=0;
        for (char c:s){
            if (c=='('){
                cnt++;
                st=min(cnt-1, st);  
            }
            else if (c=='*'){
                if (st<cnt) st++;
            }
            else{
                if (cnt>0) cnt--;
                else if (st>0) st--;
                else return false;
            }
        }
        if (cnt<=st) return true;
        return false;        
    }
