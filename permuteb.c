#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int num = 0x2453080A;
    unsigned int val = 0x494A7C8E;
    unsigned int final = 0x3265;
    unsigned char byte[32],value[32];
    int count  = 0, cout= 12;
    for (int i = 0;i<4;i++)
    {
        byte[i] = (num >> count) & 0xFF;
        count = count + 8;
    }
    for (int i = 4;i<8;i++)
    {
        byte[i] = (val >> count) & 0xFF;
        count = count + 8;
    }
    for(int i = 0;i<8;i++)
    {
        value[i]= (final >> cout) & 0xF;
        if(value[i]==i)
        {
        printf("%X", byte[i]);
        cout= cout-4;
        i=0;
        
        }
    }
    //printf("%X", byte[5]);
    return 0;
}
