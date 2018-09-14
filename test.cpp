#include <stdio.h>
int main(int argc, const char * argv[])
{
  if(strcmp(argv[1],"-c")==0) printf("字符数\n");
  else if(strcmp(argv[1],"-w")==0) printf("单词数\n");
  else if(strcmp(argv[1],"-l")==0) printf("行数\n");
  return 0;
}
