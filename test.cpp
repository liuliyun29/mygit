#include <stdio.h>
int main(int argc, const char * argv[])
{
  if(strcmp(argv[1],"-c")==0) printf("�ַ���\n");
  else if(strcmp(argv[1],"-w")==0) printf("������\n");
  else if(strcmp(argv[1],"-l")==0) printf("����\n");
  return 0;
}
