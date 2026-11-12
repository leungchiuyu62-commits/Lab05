#include <stdio.h>
#include <string.h>
void copy(char *psource, char *ptarget, unsigned num_char)
{
    while (num_char > 0 && *psource != '\0')
    {
        *ptarget = *psource;
        psource++;
        ptarget++;
        num_char--;
    }
   
    *ptarget = '\0';
    // TODO: write your code here
}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    copy(psrc1, ptarget, buffer_size);
    while (*ptarget != '\0')
    {
        ptarget++;
    }

    unsigned remain = buffer_size - (ptarget - ptarget);
   
    remain = buffer_size - (ptarget - &ptarget[0]);
    copy(psrc2, ptarget, remain);
    // TODO: write your code here
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above