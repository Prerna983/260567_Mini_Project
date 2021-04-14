#include "unity.h"
#include "header.h"

#define PROJECT_NAME    "Contact_Management_System"

/* Prototypes for all the test functions */
void test_Add_file(void);
void test_Edit_file(void);
void test_List_file(void);
void test_Search_file(void);
void test_Delete_file(void);
void test_Phone_Number(void);
void test_Email_ID(void);
void test_State(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Add_file);
  RUN_TEST(test_Edit_file);
  RUN_TEST(test_List_file);
  RUN_TEST(test_Delete_file);
  RUN_TEST(test_Search_file);
  RUN_TEST(test_Phone_Number);
  RUN_TEST(test_Email_ID);
  RUN_TEST(test_State);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_Add_file(void) 
{
  TEST_ASSERT_EQUAL(1, Add_file(3456734857, "Yusuf", "punjab", "Yusuf@gmail.com"));
  TEST_ASSERT_EQUAL(1, Add_file(9987876557, "Yash", "assam", "Yash@mynet.com"));
  TEST_ASSERT_EQUAL(1, Add_file(9470018762, "Ravi", "bihar", "ravi123@rocketnet.com"));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, Add_file(6743675464, "ABS", "goa", "abs@gmail.com"));
  //TEST_ASSERT_EQUAL(0, Add_file(9563897653, "happy", "karnataka", "happy@google.com"));

}

void test_Edit_file(void) 
{
  TEST_ASSERT_EQUAL(1, Edit_file(6743484664, "yyaas", "goa", "abs@gmail.com", "yusuf"));
  TEST_ASSERT_EQUAL(1, Edit_file(9087848347, "happy", "west bengal", "yayy@yahoo.com", "happy"));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, Edit_file(9087848347, "happ", "west bengal", "happ@yahu.com", "happy"));
  //TEST_ASSERT_EQUAL(0, Edit_file(8765697653, "ttok", "marine", "tok@allive.com", "ttok"));
}

void test_Search_file(void) 
{
  TEST_ASSERT_EQUAL(1, Search_file("yusuf"));
  TEST_ASSERT_EQUAL(1, Search_file("happ"));
  TEST_ASSERT_EQUAL(1, Search_file("yash"));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, Search_file("arav"));
  //TEST_ASSERT_EQUAL(0, Search_file("hello"));
}

void test_List_file(void) {
  TEST_ASSERT_EQUAL(1, List_file());
  TEST_ASSERT_EQUAL(1, List_file());
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, List_file());
}

void test_Delete_file(void) {
  TEST_ASSERT_EQUAL(1, Delete_file("yusuf"));
  TEST_ASSERT_EQUAL(1, Delete_file("happy"));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, Delete_file("ttok"));
}

void test_Phone_Number(void) 
{
  TEST_ASSERT_EQUAL(1, Check_Ph(8445976543));
  TEST_ASSERT_EQUAL(1, Check_Ph(9999955555));
  TEST_ASSERT_EQUAL(1, Check_Ph(1010293847));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, Check_Ph(756453));
  //TEST_ASSERT_EQUAL(0, Check_Ph(1234567890192));
}

void test_Email_ID(void) 
{
  TEST_ASSERT_EQUAL(1, Check_Email("abc123@gmail.com"));
  TEST_ASSERT_EQUAL(1, Check_Email("hello@live.com"));
  TEST_ASSERT_EQUAL(1, Check_Email("wohooo@rocketnet.com"));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, Check_Email("happy@yahu.com"));
}

void test_States(void) 
{
  TEST_ASSERT_EQUAL(1, Check_city("karnataka"));
  TEST_ASSERT_EQUAL(1, Check_city("GOA"));
  TEST_ASSERT_EQUAL(1, Check_city("Bihar"));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, Check_city("delhi"));
  //TEST_ASSERT_EQUAL(0, Check_city("MUMbai"));
}
