class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t m=0;
        for(int i=0;i<32;i++){
            int lsb = n & 1;
            uint32_t revlsb= lsb << (31-i);
            m = m | revlsb;
            n = n >> 1;  
            
        }
        return m;
    }
};