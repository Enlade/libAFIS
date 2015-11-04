#ifdef _MSC_VER
	#include <io.h>
#else
	#include <unistd.h>
#endif
#include "unity_fixture.h"

static void RunAllTests(void)
{
    printf("\nPoint tests\n");
    RUN_TEST_GROUP(Point);
    printf("\nArray tests\n");
    RUN_TEST_GROUP(Array);
    printf("\nBinaryMap tests\n");
    RUN_TEST_GROUP(BinaryMap);
    printf("\nPgm tests\n");
    RUN_TEST_GROUP(Pgm);    

    printf("\nVoting filter tests\n");
    RUN_TEST_GROUP(VotingFilter);

    printf("\nLocal histogram tests\n");
    RUN_TEST_GROUP(LocalHistogram);
}

int main(int argc, const char * argv[])
{
    if (argc == 2)      
    {       
        chdir(argv[1]);     
    } 
    return UnityMain(argc, argv, RunAllTests);
}
