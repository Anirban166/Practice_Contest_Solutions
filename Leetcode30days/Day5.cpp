// DP Stock buy sell one:
int maxProfit(vector<int>&prices)
{ int stock=0, nostock=-(1e5+5);
  for(int i:prices)
  nostock=max(nostock,stock-i);
  stock=max(stock,nostock+i);
}
// return (stock) to class.
