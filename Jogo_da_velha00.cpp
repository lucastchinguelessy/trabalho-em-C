#include <stdio.h>
#include <stdlib.h>
#define JOGADOR_X 'X'
#define JOGADOR_O 'O'
#define linha 3
#define coluna 3
#define CARACTER 1


char tab[linha][coluna] = { { ' ',' ',' '},
                            { ' ',' ',' '},
                            { ' ',' ',' '} 
                                          };



  void escrever_tab(void){
  	printf("\n\n");
      printf("\t  %c | %c | %c \n",tab[0][0],tab[0][1],tab[0][2]);
      printf("\t------------- \n");
      printf("\t  %c | %c | %c \n",tab[1][0],tab[1][1],tab[1][2]);
      printf("\t-------------\n");
      printf("\t  %c | %c | %c \n",tab[2][0],tab[2][1],tab[2][2]);
  }
   char  imp[linha][coluna] = { { '1','2','3'},
                               { '4','5','6'},
                               { '7','8','9'} 
                                            };
    void primeira_tabela(void){
  	  printf("\n\n");
      printf("\t  %c | %c | %c \n",imp[0][0],imp[0][1],imp[0][2]);
      printf("\t------------- \n");
      printf("\t  %c | %c | %c \n",imp[1][0],imp[1][1],imp[1][2]);
      printf("\t-------------\n");
      printf("\t  %c | %c | %c \n",imp[2][0],imp[2][1],imp[2][2]);
  }


int main() {
system("color a");
	
	printf("\n \n");

	int lin;
	int col;
	int posicao, c = 0;
	int d=0,d1 = 0;
    char jogador;
	char jogador_atual;
	int opcao;
    int cont_jogada=0;
	char res;
	int op=0;

	// Menu de Opções;
	do{
		if(op==0){
	printf("\t\t\t\t------------------\n");
	printf("\t\t\t\t  MENU PRINCIPAL \n ");
	printf("\t\t\t\t------------------\n\n");
    printf("\t\t\t------------            -------------- \n");
	printf("\t\t\t  1- JOGAR                 2- AJUDA \n");
	printf("\t\t\t------------            --------------  \n");
	printf("\t\t\t------------            --------------  \n");
	printf("\t\t\t  3- INFO                   4- SAIR\n");
	printf("\t\t\t------------            --------------  \n");
	printf("\n\n");
	printf("\t\t\t\nEscolha uma das opcoes para continuar: ");
	scanf("%d",&opcao);
	  
	// Primeira opcao;
	
	if(opcao==1){
		 system("cls");
  do{
   for( int i = 0; i < 3 ; i++){
	  for( int c = 0; c < 3; c++){
	      tab[i][c] = ' '; 
         }
       }
       char  imp[linha][coluna] = { { '1','2','3'},
                               { '4','5','6'},
                               { '7','8','9'} 
                                            };
	res = 0;
	cont_jogada = 0;
   
	  do{ 
	           
	           printf("\n Qual dos Jogadores Vc prefer X Ou O: ");
               scanf ("%c",&jogador);
               system("cls"); 
               if(jogador=='X'||jogador=='x' ){
                  jogador_atual=JOGADOR_X;
				  d = 0;     
           		}
			  if(jogador=='O'||jogador=='o'){
			     jogador_atual=JOGADOR_O;
			     d1 = 0;
			  }
			  if(jogador!= 'X'  && jogador != 'x' && jogador!='O'  && jogador != 'o'){
			  	d1 = 1;
			  	d = 1;
			  }
			
			   

}while(jogador!= 'X'  && jogador != 'x' && jogador!='O'  && jogador != 'o' );     
		
	
	 
	 do{
     
	 	if( c == 0 ){
	 	        printf("%d",cont_jogada);
	 	    	printf("\n	Digite um posicao para jogar: ");
	 	        primeira_tabela();
	 	        escrever_tab();	
		 }
		
	    printf("Jogador %c sua vez: ", jogador_atual);
	     scanf("%d",&posicao);
     
	 
	       if(posicao < 1 || posicao > 9){
	 	     printf("Posicao Invalida! \n \n");
	 	     c = 1;
	 	    continue;
	 	    system("cls");
	     }else
	 	     c = 0; 
	   
	 
	      if(posicao>= 1 && posicao<=3){
	          if(tab[0][posicao-1] != ' '){
	           printf("Essa posicao ja foi preenchida,digite novamente \n");
	           c = 1;
	             continue;
	          }
            tab[0][posicao-1]=jogador_atual;
            imp[0][posicao-1]= CARACTER;
         
	  }
	   
	     else if(posicao>=4 && posicao<=6){
	            if(tab[0][posicao-1] != ' '){
	             printf("Essa posicao ja foi preenchida,digite novamente\n");
	               c = 1;
	                continue;
	          }
	          
	          tab[1][posicao-4]=jogador_atual;   
              imp[1][posicao-4]= CARACTER;
    	}
	 
	     else if(posicao>=7 && posicao<=9){
	          if(tab[0][posicao-1] == JOGADOR_X || tab[0][posicao-1] == JOGADOR_O){
	             printf("Essa posicao ja foi preenchida,digite novamente \n \n");
	             c = 1;
	                 continue;
	         }
	          tab[2][posicao-7]=jogador_atual;
	          imp[2][posicao-7]= CARACTER;
	      }
	            system("cls");
	    
  cont_jogada++;
    if(jogador=='X'||jogador=='x'){
          if(cont_jogada%2==0)
            jogador_atual=JOGADOR_X;
   else
       jogador_atual=JOGADOR_O;
       
} if(jogador=='O'||jogador=='o'){
     if(cont_jogada%2==0)
       jogador_atual=JOGADOR_O;
   else
         jogador_atual=JOGADOR_X;
    }   
    
      if(tab[0][0] == JOGADOR_X && tab[0][1] == JOGADOR_X && tab[0][2] == JOGADOR_X){cont_jogada=11;}
      if(tab[1][0] == JOGADOR_X && tab[1][1] == JOGADOR_X && tab[1][2] == JOGADOR_X){ cont_jogada=11;}
      if(tab[2][0] == JOGADOR_X && tab[2][1] == JOGADOR_X && tab[2][2] == JOGADOR_X){  cont_jogada=11;}      
      if(tab[0][0] == JOGADOR_X && tab[1][0] == JOGADOR_X && tab[2][0] == JOGADOR_X ){  cont_jogada=11;}
      if(tab[0][1] == JOGADOR_X && tab[1][1] == JOGADOR_X && tab[2][1] == JOGADOR_X ){ cont_jogada=11;}
      if(tab[0][2] == JOGADOR_X && tab[1][2] == JOGADOR_X && tab[2][2] == JOGADOR_X ){  cont_jogada=11;}
      if(tab[0][2] == JOGADOR_X && tab[1][1] == JOGADOR_X && tab[2][0] == JOGADOR_X ){  cont_jogada=11;}
      if(tab[0][0] == JOGADOR_X && tab[1][1] == JOGADOR_X && tab[2][2] == JOGADOR_X ){  cont_jogada=11;}
     
	 
	 if(tab[0][0] == JOGADOR_O && tab[0][1] == JOGADOR_O&& tab[0][2] == JOGADOR_O ){ cont_jogada=12;}
      if(tab[1][0] == JOGADOR_O && tab[1][1] == JOGADOR_O&& tab[1][2] == JOGADOR_O ){ cont_jogada=12;}
      if(tab[2][0] == JOGADOR_O && tab[2][1] == JOGADOR_O&& tab[2][2] == JOGADOR_O ){ cont_jogada=12;}     
      if(tab[0][0] == JOGADOR_O && tab[1][0] == JOGADOR_O&& tab[2][0] == JOGADOR_O ){ cont_jogada=12;}
      if(tab[0][1] == JOGADOR_O && tab[1][1] == JOGADOR_O&& tab[2][1] == JOGADOR_O ){ cont_jogada=12;}
      if(tab[0][2] == JOGADOR_O && tab[1][2] == JOGADOR_O&& tab[2][2] == JOGADOR_O ){ cont_jogada=12;}
      if(tab[0][2] == JOGADOR_O && tab[1][1] == JOGADOR_O&& tab[2][0] == JOGADOR_O ){ cont_jogada=12;}
      if(tab[0][0] == JOGADOR_O && tab[1][1] == JOGADOR_O&& tab[2][2] == JOGADOR_O ){ cont_jogada=12;}
      system("cls");
    
	
}while(cont_jogada < 9);
      if(cont_jogada==9){
      	   printf("JOGO EMPATADO \n");
	  } 
	  else if(cont_jogada==11){
	  	    printf(" JOGADOR %c VENCEU \n",JOGADOR_X);
	  	       escrever_tab();
	  }
	  else if(cont_jogada==12){
	  	    printf("JOGADOR %c VENCEU \n",JOGADOR_O);
	  	     escrever_tab();
	  }
      printf(" DESEJA JOGAR NOVAMENTE? [S/N]:  \n");
      scanf("%s",&res);
      system("cls");
}while(res=='S'||res=='s');
   
   
} else if(opcao==2){
	system("cls");
	printf("\t------------\n");
	printf("\t   AJUDA\n");
	printf("\t------------\n");
	printf("\n\n");
	printf("*Para escolher jogador digite 'X' ou 'O' \n");
	printf("*Para jogar escolha uma posicao de 1 ate 9 \n");
	
}else if (opcao==3){
	system("cls");
 printf("\t\t\t---------------\n");
 printf("\t\t\t#JOGO DA VELHA\n");
 printf("\t\t\t---------------\n");
 printf("DESENVOLVIDO POR: \n\n");
 printf("* VICTOR MAKUKA\n");
 printf("* XXXXXXXXXXXX \n");
 printf("* XXXXXXXXXXXX \n");
 printf("* XXXXXXXXXXXX \n");
  printf("* XXXXXXXXXXXX \n");
  printf("* XXXXXXXXXXXX \n");

 
 
} else if(opcao==4){
		system("cls");
	   printf("\t------------\n");
	   printf("\t A SAIR...\n");
       printf("\t------------\n");
	   system("cls");
   
} else 
    printf("Opcao Invalida!\n");
    op=1;
    continue;
    system("cls");

}else 
   op=0;
	 
}while(opcao!=1 && opcao!=2 && opcao != 3 && opcao !=4);

   return 0;
}