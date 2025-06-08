uint32_t reverseBits(uint32_t n) {
        long int r=0;
    for(int i=1;i<=32;i++)
    {
        r=r+(n&1);
        n=n >> 1;
        if(i<=31)
          r=r << 1;
    }
    return r;
}