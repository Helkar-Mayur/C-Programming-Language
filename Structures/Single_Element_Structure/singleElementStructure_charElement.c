#include <stdio.h>

struct singleElementChar
{
    char Char;
};

int main()
{
    struct singleElementChar singleElementCharVar;

    printf("Structure Value with its Size and Address with its Size ::\n");
    printf("Value :: singleElementCharVar : %d\n", singleElementCharVar);
    printf("Address :: &singleElementCharVar : %p\n", &singleElementCharVar);
    printf("Value Size :: sizeof(singleElementCharVar) : %d\n", sizeof(singleElementCharVar));
    printf("Address Size :: sizeof(&singleElementCharVar) : %d\n", sizeof(&singleElementCharVar));

    printf("\n\n");

    printf("Structure Element Value with its Size and Address with its Size ::\n");
    printf("Value :: singleElementCharVar.Char : %d\n", singleElementCharVar.Char);
    printf("Address :: &singleElementCharVar.Char : %p\n", &singleElementCharVar.Char);
    printf("Value Size :: sizeof(singleElementCharVar.Char) : %d\n", sizeof(singleElementCharVar.Char));
    printf("Address Size :: sizeof(&singleElementCharVar.Char) : %d\n", sizeof(&singleElementCharVar.Char));

    return 0;
}
