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
  TEST_ASSERT_EQUAL(1, add(3456734857, "Yusuf", "punjab", "Yusuf@gmail.com"));
  TEST_ASSERT_EQUAL(1, add(9987876557, "Yash", "assam", "Yash@mynet.com"));
  TEST_ASSERT_EQUAL(1, add(9470018762, "Ravi", "bihar", "ravi123@rocketnet.com"));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, add(6743675464, "ABS", "goa", "abs@gmail.com"));
  //TEST_ASSERT_EQUAL(0, add(9563897653, "happy", "karnataka", "happy@google.com"));

}

void test_Edit_file(void) 
{
  TEST_ASSERT_EQUAL(1, edit(6743484664, "yyaas", "goa", "abs@gmail.com", "yusuf"));
  TEST_ASSERT_EQUAL(1, edit(9087848347, "happy", "west bengal", "yayy@yahoo.com", "happy"));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, edit(9087848347, "happ", "west bengal", "happ@yahu.com", "happy"));
  //TEST_ASSERT_EQUAL(0, edit(8765697653, "ttok", "marine", "tok@allive.com", "ttok"));
}

void test_Search_file(void) 
{
  TEST_ASSERT_EQUAL(0, search("yusuf"));
  TEST_ASSERT_EQUAL(1, search("happ"));
  TEST_ASSERT_EQUAL(1, search("yash"));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, search("arav"));
  //TEST_ASSERT_EQUAL(0, search("hello"));
}

void test_List_file(void) {
  TEST_ASSERT_EQUAL(1, view());
  TEST_ASSERT_EQUAL(1, view());
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, view());
}

void test_Delete_file(void) {
  TEST_ASSERT_EQUAL(1, del("yusuf"));
  TEST_ASSERT_EQUAL(1, del("happy"));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, del("ttok"));
}

void test_Phone_Number(void) 
{
  TEST_ASSERT_EQUAL(1, checkPh(8445976543));
  TEST_ASSERT_EQUAL(1, checkPh(9999955555));
  TEST_ASSERT_EQUAL(1, checkPh(1010293847));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, checkPh(756453));
  //TEST_ASSERT_EQUAL(0, checkPh(1234567890192));
}

void test_Email_ID(void) 
{
  TEST_ASSERT_EQUAL(1, isValid("abc123@gmail.com"));
  TEST_ASSERT_EQUAL(1, isValid("hello@live.com"));
  TEST_ASSERT_EQUAL(1, isValid("wohooo@rocketnet.com"));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, isValid("happy@yahu.com"));
}

void test_State(void) 
{
  TEST_ASSERT_EQUAL(1, validity("karnataka"));
  TEST_ASSERT_EQUAL(1, validity("GOA"));
  TEST_ASSERT_EQUAL(1, validity("Bihar"));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, validity("delhi"));
  //TEST_ASSERT_EQUAL(0, validity("MUMbai"));
}
