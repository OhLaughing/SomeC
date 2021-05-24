unsigned invert(unsigned x,int p,int n){
   return(x&(~((~(~0<<n))<<(p-n+1))))|
   ((~(~0<<n))<<(p-n+1) ^ ( x &((~(~0<<n))<<(p-n+1))));
}
