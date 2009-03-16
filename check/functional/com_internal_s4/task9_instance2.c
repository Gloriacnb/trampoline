/*Instance 2 of task t9*/

#include "embUnit.h"
#include "tpl_os.h"

DeclareMessage(rm_newisoutside);

/*test case:test the reaction of the system called with 
 an activation of a task*/
static void test_t9_instance2(void)
{
	int result_inst_1, result_inst_2, result_inst_3;
	
	char received_char;
	
	result_inst_1 = ReceiveMessage(rm_newisoutside, &received_char);
	TEST_ASSERT_EQUAL_INT(E_OK, result_inst_1);
	TEST_ASSERT_EQUAL_INT(12, (int)received_char);
	
	result_inst_3 = TerminateTask();
	TEST_ASSERT_EQUAL_INT(E_OK, result_inst_3);
	
}

/*create the test suite with all the test cases*/
TestRef COMInternalTest_seq4_t9_instance2(void)
{
	EMB_UNIT_TESTFIXTURES(fixtures) {
		new_TestFixture("test_t9_instance2",test_t9_instance2)
	};
	EMB_UNIT_TESTCALLER(COMInternalTest,"COMInternalTest_sequence4",NULL,NULL,fixtures);
	
	return (TestRef)&COMInternalTest;
}