
unsigned setbits(unsigned x,int p,int n, unsigned y){
    return(x&(~((~(~0<<n))<<(p-n+1))))|((~(~0<<n)&y)<<(p-n+1));
}
