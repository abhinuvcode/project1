//READ DATA FROM FILE USING fgets()
#include<stdio.h>
main()
{
char s[100];
int i;
FILE *fp;
fp=fopen("f1.txt","r");
if(fp==NULL)
  {
    printf("error");
    exit(1);
  }
  while(fgets(s,10,fp)!=NULL)
  {
      printf("%s",s);
  }
  fclose(fp);
  getch();
}
