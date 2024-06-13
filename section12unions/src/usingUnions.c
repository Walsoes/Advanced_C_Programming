#include <stdio.h>
#include <stdlib.h>

union car {
    int i_value;
    float f_value;
}; // car1,car2,*car3;


struct owner {
    char sossecurity[12];
};


struct leaseCompany{
    char name[40];
    char headquarters[40];
};


struct car_data {
    char  make[15];
    int status;  /* 0 = owned, 1 leased*/
    union  {
        struct owner owncar;
        struct leaseCompany leasecar
    };
}

struct
{
    char *name;
    enum symbolType type;
    union {
        int i;
        float f;
        char c;
    } data;

} table [entires];


union{
    int code;
    float cost;
} item, *ptrst;


union number {
    int x;
    double y;
};


int main()
{       
    union number value = {15};
    ptrst = &item;
    ptrst->code = 3451

    union car car1, car2, *car3;

    // Henrik = (union data*)malloc(sizeof(union data));

    printf("Memory size occupied by data %zu \n", sizeof(*car3));

    return 0;
}
