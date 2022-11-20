//Code for exercise 4
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool ConcatERemove(char s[100],char t[100],int k); //protype

int main ()
{
    char s [100] = "abvvv";
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
    else printf("resultado nao");
};

bool ConcatERemove(char s[100],char t[100],int k)
{
    int s_1 = 0;
    int result, case_1 = 256;
    char f_1[1], aux_1[2],aux_2[100],aux_t[100];
    aux_1[1]='\0';
    strcpy(aux_t,t);
    while(strlen(s)<strlen(aux_t))
        {
            s_1 = strlen(aux_t)-1;
            aux_t[s_1] = '\0';
        };
    for(int i = 0; i <= k; i++) {
            if (strlen(s)==strlen(t)){ //separate arrays with the same lenght
                    case_1 = strcmp(s,t);
                    if(case_1==0) {return true;} //vectors are equal
                    else if (strlen(s)!= 0){
                        s_1 = strlen(s)-1;
                        s[s_1] = '\0';//remove operation
                        aux_t[s_1] = '\0';//remove operation
                    }
                    else {
                    aux_1[0]=t[strlen(s)+1];//save the next element regarding s
                    strcat(s,aux_1);};
                    }
            else if (strcmp(s,aux_t)) {//arrays with different lenghts
                //remove items from s
                s_1 = strlen(s)-1;
                s[s_1] = '\0';//remove operation
                if(strlen(aux_t)== (s_1+1))aux_t[s_1] = '\0'; //remove operation
                }
            else if(strcmp(s,t))//concatenate until size of t
                {
                    s_1 = strlen(s);
                    aux_1[0]= t[s_1];
                    strcat(s,aux_1); //concatenate
                    strcpy(aux_t,s);    //uses the aux to not re enter the operation of subtract
                };
            int aux_comp= strcmp(s,aux_t);
    }
    return false;
}
