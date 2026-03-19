#include <stdio.h>

struct singleElementDouble
{
    double Double;
};

int main()
{
    struct singleElementDouble singleElementDoubleVar;

    printf("Structure Value with its Size and Address with its Size ::\n");
    printf("Value :: singleElementDoubleVar : %d\n", singleElementDoubleVar);
    printf("Address :: &singleElementDoubleVar : %p\n", &singleElementDoubleVar);
    printf("Value Size :: sizeof(singleElementDoubleVar) : %d\n", sizeof(singleElementDoubleVar));
    printf("Address Size :: sizeof(&singleElementDoubleVar) : %d\n", sizeof(&singleElementDoubleVar));

    printf("\n\n");

    printf("Structure Element Value with its Size and Address with its Size ::\n");
    printf("Value :: singleElementDoubleVar.Double : %d\n", singleElementDoubleVar.Double);
    printf("Address :: &singleElementDoubleVar.Double : %p\n", &singleElementDoubleVar.Double);
    printf("Value Size :: sizeof(singleElementDoubleVar.Double) : %d\n", sizeof(singleElementDoubleVar.Double));
    printf("Address Size :: sizeof(&singleElementDoubleVar.Double) : %d\n", sizeof(&singleElementDoubleVar.Double));

    return 0;
}
