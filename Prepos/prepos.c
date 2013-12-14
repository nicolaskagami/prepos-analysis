//Nicolas Silveira Kagami

#include "def.h"

void main()
{
    aagRead("../benchmark/b1/b1.aag");
    defRead("../benchmark/b1/b1.def");
    aagStatsPrint();
    defStatsPrint();
}
