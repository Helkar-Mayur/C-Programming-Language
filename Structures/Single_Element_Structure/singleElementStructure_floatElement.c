#include <stdio.h>

struct singleElementFloat
{
    float Float;
};

int main()
{
    struct singleElementFloat singleElementFloatVar;

    printf("Structure Value with its Size and Address with its Size ::\n");
    printf("Value :: singleElementFloatVar : %d\n", singleElementFloatVar);
    printf("Address :: &singleElementFloatVar : %d\n", &singleElementFloatVar);
    printf("Value Size :: sizeof(singleElementFloatVar) : %d\n", sizeof(singleElementFloatVar));    
    printf("Address Size :: sizeof(&singleElementFloatVar) : %d\n", sizeof(&singleElementFloatVar));

    printf("\n\n");

    printf("Structure Element Value with its Size and Address with its Size ::\n");
    printf("Value :: singleElementFloatVar.Float : %d\n", singleElementFloatVar.Float);
    printf("Address :: &singleElementFloatVar.Float : %d\n", &singleElementFloatVar.Float);
    printf("Value Size :: sizeof(singleElementFloatVar.Float) : %d\n", sizeof(singleElementFloatVar.Float));    
    printf("Address Size :: sizeof(&singleElementFloatVar.Float) : %d\n", sizeof(&singleElementFloatVar.Float));

    return 0;
}