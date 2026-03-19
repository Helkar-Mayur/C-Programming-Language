#include <stdio.h>

struct singleElementInt
{
    int Int;
};

int main()
{
    struct singleElementInt singleElementIntVar;

    printf("Structure Value with its Size and Address with its Size ::\n");
    printf("Value :: singleElementIntVar : %d\n", singleElementIntVar);
    printf("Address :: &singleElementIntVar : %p\n", &singleElementIntVar);
    printf("Value Size :: sizeof(singleElementIntVar) : %d\n", sizeof(singleElementIntVar));
    printf("Address Size :: sizeof(&singleElementIntVar) : %d\n", sizeof(&singleElementIntVar));

    printf("\n\n");

    printf("Structure Element Value with its Size and Address with its Size ::\n");
    printf("Value :: singleElementIntVar.Int : %d\n", singleElementIntVar.Int);
    printf("Address :: &singleElementIntVar.Int : %d\n", &singleElementIntVar.Int);
    printf("Value Size :: sizeof(singleElementIntVar.Int) : %d\n", sizeof(singleElementIntVar.Int));    
    printf("Address Size :: sizeof(&singleElementIntVar.Int) : %d\n", sizeof(&singleElementIntVar.Int));

    return 0;
}
