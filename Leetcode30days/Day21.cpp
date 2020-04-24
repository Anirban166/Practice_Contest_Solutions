
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> v = binaryMatrix.dimensions();
        int H = v[0], W = v[1];
        int answer = W;
        for(int row = 0; row < H; ++row)
        { int low = 0, high = W -1; 
          while(low <= high)
          { int mid = low + (high - low)/2;
            if(binaryMatrix.get(row, mid)==1)
            { answer = min(answer, mid); 
               high = mid -1;
            }
            else low = mid +1;
           
           }
        }
        if(answer == W) answer = -1;
        return answer;
    }
