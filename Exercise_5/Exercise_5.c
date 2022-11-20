#include "unity.h"
#include "ConcatERemove.h"

void setUp  (){};

void tearDown(){};

void test_false(){
    char s [100] = "abvvv";
    char t [100] = "abc"; //vector desired
    int k = 1;
    TEST_ASSERT_EQUAL(false, ConcatERemove(s,t,k));//test for analyzing false cases (string 1 with 5 elements and string 2 with 3 elements)

    char s2 [100] = "ab";
    char t2 [100] = "abchtgj"; //vector desired
    int k2 = 2;
    TEST_ASSERT_EQUAL(false, ConcatERemove(s2,t2,k2));//test for analyzing false cases (string 1 with 2 elements and string 2 with 7 elements)

    char s4 [100] = "ba";
    char t4 [100] = "jgthcba"; //vector desired
    int k4 = 4;
    TEST_ASSERT_EQUAL(false, ConcatERemove(s4,t4,k4));//test for analyzing false cases (string 1 with 2 elements and string 2 with 7 elements)

    char s6 [100] = "uhevrlfijj";
    char t6 [100] = "lknmb"; //vector desired
    int k6 = 6;
    TEST_ASSERT_EQUAL(false, ConcatERemove(s6,t6,k6));//test for analyzing false cases (string 1 with 2 elements and string 2 with 7 elements)

   }
void test_true(){
    char s1[100]="gfry";
    char t1[100]="gch";
    int k1=5;

    TEST_ASSERT_EQUAL(true, ConcatERemove(s1,t1,k1));//test for analyzing false cases (string 1 with 4 elements and string 2 with 4 elements)


    char s3[100]="gf";
    char t3[100]="gch";
    int k3=3;

    TEST_ASSERT_EQUAL(true, ConcatERemove(s3,t3,k3));//test for analyzing false cases (string 1 with 2 elements and string 2 with 4 elements)

    char s5[100]="fg";
    char t5[100]="gih";
    int k5=5;

    TEST_ASSERT_EQUAL(true, ConcatERemove(s5,t5,k5));//test for analyzing false cases (string 1 with 2 elements and string 2 with 3 elements)

    char s7[100]="fyol";
    char t7[100]="ytg";
    int k7=7;

    TEST_ASSERT_EQUAL(true, ConcatERemove(s7,t7,k7));//test for analyzing false cases (string 1 with 4 elements and string 2 with 3 elements)

  }


int main (void){

   /* char s [100] = "abvvv";
    char t [100] = "abc"; //vector desired
    int k;
    bool resultado;
    printf("Digite a string s \n");
    gets(s);
    printf("Digite a string t de referencia \n");
    gets(t);
    printf("por favor digite a quantidade de operacoes \n");
    scanf("%i", &k);
    resultado = ConcatERemove(s,t,k);
    if(resultado) printf("resultado sim");
    else printf("resultado nao");*/

    UNITY_BEGIN();
    RUN_TEST(test_true);
    RUN_TEST(test_false);
    return UNITY_END();

}
