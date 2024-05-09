//
//  main.c
//  实验一 词法分析程序
//
//  Created by 李家玺 on 2022/11/13.
//

#include <stdio.h>
#include <stdlib.h>

int error-constantname=0; //常量名错误
int error-constantvalue=0;//常量值错误

int intCnt;
int floatCnt;
int charCnt;
int stringCnt;

string constantName;//存放常量名
string constantType;//存放常量类型
string constantValue;//存放常量的值
string errorInfo;//存放错误的值

int checkName(char str[],int i){
    //判断是否是合法常量名
    constantName="";
    //以数字开头
    if(str[0]>='0' && str[0]<='9'){
        printf("常量名%s不合法"，str);
        error-constantname=0;
    }
    if(str[i]!='='){
        constantName+=str[i];
        i++;
    }
    //分割
    constantName=separate(constantName);
    string regex = "[a-zA-Z_][a-zA-Z0-9_]*";
    bool result=regcomp(constantName,regex);
    if(result){
        error-constantname=1;
    }else{
        error-constantname=0;
    }
    return i;
}

int checkType(char str[],int i){
    //判断值的合法性以及类型
    value="";
    errorInfo="";
    while (str[i]!=',' && str[i]!=';') {
            value+=str[i];
            i++;
        }
}

char *separate(char *str)
{
         char *p = str;
         char *p1;
         if(p)
         {
                 p1 = p + strlen(str) - 1;
                 while(*p && isspace(*p)) p++;
                 while(p1 > p && isspace(*p1)) *p1-- = '/0';
         }
         return p;
}
 
bool checkValue(){
    
}
int main()
{
    
}
