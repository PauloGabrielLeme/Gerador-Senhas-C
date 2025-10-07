#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int t = 0; //tamanho da senha
  const char charset[]="abcdefghijklmnopqrstuvwxyz"
                       "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                       "0123456789$@&!#%";

  int charset_len = sizeof(charset) - 1;


  srand(time(NULL));
  //srand() função que usa algum número como seed para a geração de números pseudo aleatórios
  //time(NULL) data atual(incluindo dia, mes, ano, hora, minuto e segundo) convertida para segundos

  scanf("%d",&t);
  char p[t+1];

  for(int i=0;i<t;i++){
    p[i] = charset[(rand() % charset_len)];
    //rand() função que escolhe um número aleatório
    // resto da divisao pelo tamnho do cahrset, faz que seja retornado um valor aleatório dentro do charset
  }

  for(int i=0;i<t;i++){
      printf("%c",p[i]);
  }

  printf("\n");
    
  
  return 0;
}
