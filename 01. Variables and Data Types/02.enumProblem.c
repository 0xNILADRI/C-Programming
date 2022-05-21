#include <stdio.h>
#include <stdlib.h>

int main(){
    // initialize enum data type
    enum company {GOOGLE, META, MICROSOFT = 20, ADOBE, INTEL, NETFLIX};

    // set value for the variable
    enum company google = GOOGLE;
    enum company meta = META;
    enum company adobe = ADOBE;

    // print respective values
    printf("Value of GOOGLE : %d\n",google);
    printf("Value of META : %d\n",meta);
    printf("Value of ADOBE : %d\n",adobe);
    return 0;
}