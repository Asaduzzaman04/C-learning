#include <stdio.h>

int main()
{
    int a = 1;        // Create a intizer variable usng int variable keyword
    float b = 3.1416; // Create a floating variable usng float variable keyword
    char name = 'A';  // Create a chracter variable using char keyword (char value  allows in single code)

    // -----Array----- \\
//syntex => datatype ArrayName[ArraySize]
    int id[10] = {29, 23, 18, 23, 12, 22, 23, 23, 12, 87};
    // printf("the array value is %d  %d", id[8], id[0]);
    int age[2];
    age[0] = 10;
    age[1] = 20;
    // printf("total age is %d", age[0] + age[1]);


    return 0;
}
/*
1.to print initger number = '%d'
1.to print floting number = '%f'
1.to print chracter = '%c'
*/

/*
1.intiger number takes space in memory => 4Byte
1.floting number takes space in memory => 4Byte
1.Chracter  takes space in memory => 1Byte
----> 1Byte => (8bit) <---
NB=> [it will take different space in different OS,]
*/
