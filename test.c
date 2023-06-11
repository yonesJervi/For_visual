#include <stdio.h>
#include <stdlib.h>

int main() {
    int i=1,j,h=1;
    char A[9]="123456789",r,g,player1[10],player2[10],t;
   while(h==1){
       printf("entrer le non de premier joueur : ");
       fflush(stdin);
       gets(player1);
       printf("entrer le non de deuxieme  joueur : ");
       fflush(stdin);
       gets(player2);
       A[0] = '1';
       A[1] = '2';
       A[2] = '3';
       A[3] = '4';
       A[4] = '5';
       A[5] = '6';
       A[6] = '7';
       A[7] = '8';
       A[8] = '9';
   while(i<10){
   for ( j = 0; j < 9; j++)
   {
      if (j!=2 && j!=5 && j!=8)
      {
          printf("|_%c_|",A[j]);
      }
      
       if (j==2 || j==5  || j==8)
       {
           printf("|_%c_|\n",A[j]);
       }
       
   }
   if (i%2==1 ){
       printf(" le tour de %s choisi la case:\n",player1);
       fflush(stdin);
       scanf("%c",&g);
       }
    else if (i%2==0){
          printf(" le tour de %s choisi la case:\n",player2);
          fflush(stdin);
          scanf("%c",&g);
    }
          for ( j = 0; j < 9; j++)
   {
       if (A[j]==g)
       {
           if (i%2==1){
          A[j]='X';
           }
           if (i%2==0){
               A[j]='O';
           }
          break;
       }
   }
   if ((A[0]=='X'&&A[1]=='X'&&A[2]=='X') || (A[0]=='O'&&A[1]=='O'&&A[2]=='O')){
     if (A[1]=='X'){
        printf("%s a gagner ",player1);
     }
     else
     printf("%s a gagner ",player2);
     break;
   }
   if ((A[0]=='X'&&A[3]=='X'&&A[6]=='X') || (A[0]=='O'&&A[3]=='O'&&A[6]=='O')){
        if (A[0]=='X'){
        printf("%s a gagner ",player1);
     }
     else
     printf("%s a gagner ",player2);
     break;
   }
   if (A[6]=='X'&&A[7]=='X'&&A[8]=='X' || A[6]=='O'&&A[7]=='O'&&A[8]=='O'){
       if (A[6]=='X'){
        printf("%s a gagner ",player1);
     }
     else
     printf("%s a gagner ",player2);
     break;
   }
   if ((A[5]=='X'&&A[2]=='X'&&A[8]=='X') || (A[5]=='O'&&A[2]=='O'&&A[8]=='O')){
     if (A[5]=='X'){
        printf("%s a gagner ",player1);
     }
     else
     printf("%s a gagner ",player2);
     break;  
   }
   if ((A[3]=='X'&&A[4]=='X'&&A[5]=='X') || (A[3]=='O'&&A[4]=='O'&&A[5]=='O')){
     if (A[3]=='X'){
        printf("%s a gagner ",player1);
     }
     else
     printf("%s a gagner ",player2);
     break;  
   }
   if ((A[1]=='X'&&A[4]=='X'&&A[7]=='X') || (A[1]=='O' &&A[4]=='O'&& A[7]=='O')){
     if (A[1]=='X'){
        printf("%s a gagner ",player1);
     }
     else
     printf("^s a gagner ",player2);
     break;  
   }
   if ((A[0]=='X' &&A[4]=='X'&&A[8]=='X') || (A[0]=='O'&&A[4]=='O'&&A[8]=='O')){
       if (A[0]=='X'){
        printf("%s a gagner ",player1);
     }
     else
     printf("%s a gagner ",player2);
     break;
   }
   if (A[2]=='X'&&A[4]=='X'&&A[6]=='X' || (A[2]=='O'&&A[4]=='O'&&A[6]=='O')){
       if (A[2]=='X'){
        printf("%s a gagner ",player1);
     }
     else
     printf("%s a gagner ",player2);
     break;
   }
 i++; 

}
  printf("est ce que tu veux rejouer:Y/N");
  fflush(stdin);
  scanf("%c",&r);
if (r=='Y')
{
    h=1;
}
else if (r=='N')
{
    h=0;
}
i = 1;

}
printf("game over\n");

return 0;
}