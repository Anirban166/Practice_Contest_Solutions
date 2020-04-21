
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        list<int> dimension = binaryMatrix.dimensions();
        int row = dimension.get(0);
        int col = dimension.get(1);
        int i=0, j = col-1, minIndex = -1;
        while(i< row && j>=0)
        {
            if(binaryMatrix.get(i,j)==0) i++;
            else { minIndex =j; --j; }
        }
        return minIndex;
    }
