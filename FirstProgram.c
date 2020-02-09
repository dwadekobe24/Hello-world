#include<stdio.h>
#include<string.h>
int main(int argc,char** argv)
{
    int chineseCoverToInterger(char s[10]);
    int calculate(char s[10],int m,int n);
    char intergerCoverToChinese(int k);
    // 初始化各项参数
    char a[10],b[10],c[10],d[10],ab[10], bb[10], cc[10], dd[10];
    int result,FInterger;
    scanf("%s %s %s %s",&a,&b,&c,&d);
    result = chineseCoverToInterger(d);
    int flag = 1 ;
    
    
    while(flag)
    {
        
  
        scanf("%s", &bb);


        
        if(strcmp(bb,"看看")== 0)
        {
            
                intergerCoverToChinese(result);
                if (result > 8) {
                    printf("\n你好，世界");
                }else {
                    printf("\n冻死我了");
                    
              
                break;
            }
        }

        else // 气温
        {
            scanf("%s %s", cc, dd);

            FInterger = chineseCoverToInterger(dd);
            result = calculate(cc,result,FInterger);
//            B(x);
   
            
        }
        
    }
    return 0;
}

char zhengshu[100][100]= {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九", "十"};
int chineseCoverToInterger(char a[]) {
    int i;
    for (i = 0; i < 11; i++) {
        if (strcmp(zhengshu[i], a) == 0) {
            return i;
        }
    }
    return 0;
}

char intergerCoverToChinese(int k)
{
    switch (k) {
        case 0:
            printf("零");
            break;
        case 1:
            printf("一");
            break;
        case 2:
            printf("二");
            break;
        case 3:
            printf("三");
            break;
        case 4:
            printf("四");
            break;
        case 5:
            printf("五");
            break;
        case 6:
            printf("六");
            break;
        case 7:
            printf("七");
            break;
        case 8:
            printf("八");
            break;
        case 9:
            printf("九");
            break;
        case 10:
            printf("十");
            break;
    }
    return 0;
    
}


int calculate(char s[10],int m,int n)
{
    int result;
    if(strcmp(s,"增加")==0)
        result=m+n;
    if(strcmp(s,"减少")==0)
        result=m-n;
    return result;
    
}
