//Nicolas Silveira Kagami

#include "sdc.h"

void main()
{
    aagRead("../benchmark/b3/b3.aag");
    defRead("../benchmark/b3/b3.def");
    sdcRead("../benchmark/b3/b3.sdc");
    aagStatsPrint();
    defStatsPrint();
}
