#include <stdio.h>
#include "vlist.h"


void main()
{
    typedef struct Something Something;
    struct Something { int i; double d; char *str; };
    Something smth = {999, 999.312312, "POP#"};

    vlist* list = vlist_new_void();

}
