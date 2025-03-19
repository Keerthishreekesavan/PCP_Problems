int minCostClimbingStairs(int* cost, int costSize) {

   int a = cost[0];
   int b = cost[1];
   int result;

   for(int i=2;i<costSize;i++)
   {
    result=cost[i]+(a<b?a:b);
    a = b;
    b = result;
   }
   return(a<b?a:b);
}
