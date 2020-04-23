   int rangeBitwiseAnd(int m, int n) {
        long sum=0,diff=n-m;long i=1,cnt=0;
        while(max(m,n))
        {
            if(diff>i) sum+=0;
            else 
            {
                if(m&1 and n&1) sum+=pow(2,cnt);
            }
            cnt++;i*=2;
            n>>=1;m>>=1;
        }
        return sum;
    }
