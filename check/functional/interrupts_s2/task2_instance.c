/*Instance of task t2*/

#include "embUnit.h"
#include "tpl_os.h"

/*test case:test the reaction of the system called with 
an activation of a task*/
static void test_t2_instance(void)
{
	SCHEDULING_CHECK_STEP(6);
}

/*create the test suite with all the test cases*/
TestRef InterruptProcessingTest_seq2_t2_instance(void)
{
	EMB_UNIT_TESTFIXTURES(fixtures) {
		new_TestFixture("test_t2_instance",test_t2_instance)
	};
	EMB_UNIT_TESTCALLER(InterruptProcessingTest,"InterruptProcessingTest_sequence2",NULL,NULL,fixtures);

	return (TestRef)&InterruptProcessingTest;
}