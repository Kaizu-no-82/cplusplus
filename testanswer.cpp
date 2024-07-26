#include <stdio.h>
#include <string.h>
int a;
int main()
{
    char str[]="1 Programming \n 2 can be done \n 3 goto 5 \n 4 many ways \n 5 diffrent ways\n  ";
    char str2[]="goto";
    char str3[8];
    char str4[sizeof(str)];
    char *result = strstr(str,str2);
    int position=result-str;
    for(int i=0;result[i]!='\n';i++){
      // if(result[i]==str2[a])
        {
            str3[i]=result[i];
             printf("%c",result[i]);
             a++;
            //  if(result[i]=='\n'){
            //      break;
               
            // }
            //  for(int j=i;str[j]!='\n';j++){
            //  printf("%c",str[j]);
            //a++;
            //}
        }
    } 
  //  printf("\n");
   //printf("%s\n",result);
    result = strstr(result+6,str3+5);
    printf("%c\n",str[39]);
    printf("%d\n",position);
    printf("%s\n",result);
    for(int i=0;i<position-3;i++){
        str4[i]=str[i];
    }
    strncat(str4,result,sizeof(str));
    printf("%s\n",str4);
    
 //  char *result2= strstr(result,)
    return 0;
}