#include<stdio.h>
#include<string.h>
#include<locale.h>


/*==================================================  OBJETOS  =============================================================*/
/*OBEJTO PARA USAR NOS PRODUTOS*/
struct dadosProduto {
	int codigo, posicaoPratileira;
	char nome[15];
	float preco;
};


/*==================================================  FUNCOES  =============================================================*/
/*FUN��O COM O BUBBLE SORT DE ORDEM CRECENTE*/
void ordemCrescentePreco(struct dadosProduto temp[], struct dadosProduto produtos[], int n) {  
	int i, j;
	for(i = 0; i < n - 1; i++){          /*controla passagem pelo arrey no numero de vezes do tamanho do arrey*/
		for(j = 0; j < n - 1 -i; j++){          /*Aqui ele vai andando o arry comparando os valores*/
			if(produtos[j].preco < produtos[j + 1].preco){   /*usei um atributo do obejeto para fazer a compara��o*/
				temp[0] = produtos[j];                /*variavel para quarda a troca dos obejtos*/
				produtos[j] = produtos[j + 1];
				produtos[j + 1] = temp[0];          /*Quarda o objeto que foi foi trocado no arrey*/
			}
		}
	}
}

/*FUN��O COM O BUBBLE SORT DE ORDEM DESCRECENTE*/
void ordemDescrescentePreco(struct dadosProduto temp[], struct dadosProduto produtos[], int n) {
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 -i; j++){          
			if(produtos[j].preco > produtos[j + 1].preco){    /*So mudei o elemento que vai ser a referecia e a condi��o*/
				temp[0] = produtos[j];
				produtos[j] = produtos[j + 1];
				produtos[j + 1] = temp[0];
			}
		}
	}
}

/*FUN��O COM O BUBBLE SORT DE ORDEM CRECENTE*/
void ordemCrescenteCodigo(struct dadosProduto temp[], struct dadosProduto produtos[], int n)  {
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 -i; j++){
			if(produtos[j].codigo < produtos[j + 1].codigo){   /*So mudei o elemento que vai ser a referecia e a condi��o*/
				temp[0] = produtos[j];
				produtos[j] = produtos[j + 1];
				produtos[j + 1] = temp[0];
			}
		}
	}
}

/*FUN��O COM O BUBBLE SORT DE ORDEM DESCRECENTE*/
void ordemDescrecenteCodigo(struct dadosProduto temp[], struct dadosProduto produtos[], int n) {
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 -i; j++){
			if(produtos[j].codigo > produtos[j + 1].codigo){   /*So mudei o elemento que vai ser a referecia e a condi��o*/
				temp[0] = produtos[j];
				produtos[j] = produtos[j + 1];
				produtos[j + 1] = temp[0];
			}
		}
	}
}

/*FUN�AO PARA MOSTRAR LISTA*/
void mensagemUser(struct dadosProduto produtos[], int msgAntigaOuNova) {
	int i;
	char qualMensagem[2][17];
	strcpy(qualMensagem[0], "LISTA ORIGINAL");
	strcpy(qualMensagem[1], "LISTA ORGANIZADA");
	if(msgAntigaOuNova == 0)                    /*O argumento define se foi a lista original ou reorganizada*/
		i = 0;                                       /*usei o if para saber qual foi a escolha e com isso*/
	if(msgAntigaOuNova == 1)                               /*mudar o indece que ta a mensagem */
		i = 1;
	printf("\n");
	printf("=====================================================\n");
	printf("|||||||==========  %s  ==========||||||\n", qualMensagem[i]);  /*pega o valor que foi usado no argumento e seleciona a mensagem*/
	printf("=====================================================\n");
	printf("\n");
	printf("_____________________________________________________\n");
	printf("===================  Produtos  ======================\n");
	printf("____________________________________________________\n");
	for (i = 0; i < 10; i++){             /*loop simples para v� os valores da arrey*/
		printf("\n");
		printf("|%d|          >>>>> %s <<<<<\n", i + 1, produtos[i].nome);
		printf("-C�digo do Produto: %d\n", produtos[i].codigo);
		printf("-Pre�o: R$%.2f\n", produtos[i].preco);
		printf("\n");
		printf("-Posi��o na pratileira do mercado: [%d]\n", produtos[i].posicaoPratileira);
		printf("____________________________________________________\n");

	}
}

/*FUN�AO QUE ARMAZENA AS ARREYS*/
void colocaProdutosArrey(struct dadosProduto produtos[]) {
	produtos[0].codigo = 152;
	strcpy(produtos[0].nome, "Arroz");          /*adicioneis alguns itens na lista manualmente mesmo*/
	produtos[0].preco = 11.5;
	produtos[0].posicaoPratileira = 1;      /*coloquei essa op��o para poder ver em qual local foi quardada na lista*/
	                                                 /*usei pra ter uma no��o de onde tava cada item na lista inicialmente*/
	produtos[1].codigo = 141;
	strcpy(produtos[1].nome, "Feij�o");
	produtos[1].preco = 15.30;
	produtos[1].posicaoPratileira = 2;
	
	produtos[2].codigo = 111;
	strcpy(produtos[2].nome, "Macarr�o");
	produtos[2].preco = 9.53;
	produtos[2].posicaoPratileira = 3;

	produtos[3].codigo = 153;
	strcpy(produtos[3].nome, "�leo");
	produtos[3].preco = 16.35;
	produtos[3].posicaoPratileira = 4;
	
	produtos[4].codigo = 178;
	strcpy(produtos[4].nome, "molho de tomate");
	produtos[4].preco = 5.34;
	produtos[4].posicaoPratileira = 5;
	
	produtos[5].codigo = 181;
	strcpy(produtos[5].nome, "Caf�");
	produtos[5].preco = 25.99;
	produtos[5].posicaoPratileira = 6;
	
	produtos[6].codigo = 133;
	strcpy(produtos[6].nome, "Leite Integral");
	produtos[6].preco = 22.91;
	produtos[6].posicaoPratileira = 7;
	
	produtos[7].codigo = 155;
	strcpy(produtos[7].nome, "Ovos");
	produtos[7].preco = 30;
	produtos[7].posicaoPratileira = 8;

	produtos[8].codigo = 121;
	strcpy(produtos[8].nome, "Farinha");
	produtos[8].preco = 10.99;
	produtos[8].posicaoPratileira = 9;
	
	produtos[9].codigo = 178;
	strcpy(produtos[9].nome, "Cereal");
	produtos[9].preco = 27.11;
	produtos[9].posicaoPratileira = 10;
}

/*FUNCAO CONVERTE LETRA MAIUSCULA PARA MINUSCULA*/
char converteCaracter(char caractere) {
	if(caractere == 'S')
		caractere = 's';                /*usei para minimiozar as condicoes no fulturo*/
	if(caractere == 'N')
		caractere = 'n';
	return caractere;
}

/*Funcao para receber apenas s ou n*/
char opcaoDoUser() {
	char escolha, continuaLoop = 's';  /*reseta a variavel quando for usar novamente*/
	do {                                  /*fica em loop at� o usuario digitar s ou n*/
		printf("sim(S) ou n�o(N)? \n");
		scanf(" %c", &escolha);
		if(escolha == 's' || escolha == 'S' || escolha == 'n' || escolha == 'N'){
			continuaLoop = 'n';			
			escolha = converteCaracter(escolha);
		}
		while(getchar() != '\n');
	}while(continuaLoop != 'n');
	
	return escolha;                   /*vai retorna um valor e depois armazeno em um variavel para usar*/
}

/*fun��o para receber apenas n�meros*/
int recebeNumeroReal(){
	int numero;
	char continuaLoop = 's';
	do {
		continuaLoop = 'n';
		if(scanf(" %d", &numero) != 1){
			while(getchar() != '\n');            /*um loop que so � possivel sair dele se colocar um n�mero*/
			printf("Adicione um numero real\n");
			continuaLoop = 's';
		}
		
		
	}while(continuaLoop == 's');
	
	return numero;
}

/*fun�ao que atenda apenas as op��es forneciadas*/
int filtroOpcao(int condicao) {
	int armazenarOpcao;
	char permaneceLoop;
	do {                             /*permanece em loop ate o usuario digitar uma condi��o v�lida*/
		permaneceLoop = 's';
		armazenarOpcao = recebeNumeroReal();
		if(armazenarOpcao <= condicao)
			break;
		printf("Adicione um op��o v�lida\n");
	}while(permaneceLoop == 's');
	
	return armazenarOpcao;
}

	/*==================================================  ESCOPO PRINCIPAL  =============================================================*/
int main() {
	setlocale(LC_ALL, "Portuguese");   /*perimitir a saida correta de acentua��es*/
	
	/*==================================================  VARIAVEIS  =============================================================*/
	struct dadosProduto produtos[10];     /*arrey com os objetos*/
	int n = sizeof(produtos) / sizeof(produtos[0]);   /*Conta a quantidade de que tem na itens na lista*/
	struct dadosProduto temp[1];     /*lista que cabe apenas um objeto que usa como um um armazem de troca no sitema de organiza��o*/
	char escolhaDoUser, permaneceLoop, principalLoop, pularProcesso;
	int escolhaArmazenada;
	
	
	/*==================================================  MENSAGEM ENTRADA  =============================================================*/
	
	printf("           _____________________________\n");
	printf("-----------|   +++++++++++++++++++++   |-----------\n");
	printf("-----------|  Bem-v�ndo ao G7-armazem  |-----------\n");          /*so aparece quando o programa e iniciado*/
	printf("-----------|       ++++++++++++        |-----------\n");
	printf("           -----------------------------\n");
	printf("\n");
	printf("_____________________________________________________\n");
	printf("App feito para v� sua lista de forma mais organizada\n");
	printf("_____________________________________________________\n");
	
	/*=======================================  CHAMANDO AS FUNC�ES  E ORGANIZANDO  ================================================*/
	do {    /*la�o principal para voltar ao inicio caso receba a condi��o certa*/
		principalLoop = 's';  /*variavel de resete*/
		
		colocaProdutosArrey(produtos);
		escolhaDoUser = 'n';
		if(pularProcesso != 's'){     /*usado para pular a parte inicial, quando o programa inicia ela entra normalmente*/
			printf("Deseja v� a lista original ?\n");
			escolhaDoUser = opcaoDoUser();
			printf("_____________________________________________________\n");
			if(escolhaDoUser == 's')
				mensagemUser(produtos, 0);   /*no argumento falo o objeto usado e o numero para qual mensagem enviar*/
		}

		pularProcesso = 'n';             /*variavel que reseta a etapa da mensagem principal, usado caso ja tenha pulado a etapa uma vez*/
		printf("Deseja organizar a lista ?\n");                                               /*para que a ultima op��o n�o fique salva*/
		escolhaDoUser = opcaoDoUser();   /*armazena o valor da fun��o para usar nas condi��es*/
		printf("_____________________________________________________\n");
		if(escolhaDoUser == 's'){
			printf("Organize a lista de acordo com o numero escolhido\n");
			printf(" ________________________________________\n");
			printf(" |            Tabela de Op��es          |\n");
			printf(" | [1]-Pre�o em ordem descrescente--[1] |\n");
			printf(" | [2]---Pre�o em ordem crescente---[2] |\n");      /*apenas para algo visual no console*/
			printf(" | [3]-C�digo em ordem descrescente-[3] |\n");
			printf(" | [4]- C�digo em ordem crescente---[4] |\n");
			printf(" |______________________________________|\n");
			printf("Adicione uma op��o\n");
			escolhaArmazenada = filtroOpcao(4);   /*armazena o valor da fun��o para usar nas condi��es*/
			if(escolhaArmazenada == 1)
				ordemCrescentePreco(temp, produtos, n);
			if(escolhaArmazenada == 2)                     /*usei ifs pois fica mais organizado e menor que o switch*/
				ordemDescrescentePreco(temp, produtos, n);
			if(escolhaArmazenada == 3)
				ordemCrescenteCodigo(temp, produtos, n);
			if(escolhaArmazenada == 4)
				ordemDescrecenteCodigo(temp, produtos, n);
			printf("Lista organizada, deseja v�-la ?\n");
			escolhaDoUser = opcaoDoUser();
			printf("_____________________________________________________\n");
			if(escolhaDoUser == 's')
				mensagemUser(produtos, 1);	 /*no argumento falo o objeto usado e o numero para qual mensagem enviar*/
		}


		printf("_______________________________________\n");
		printf("|             MENU FINAL              |\n");
		printf("| [1]-Voltar a organizar a listae-[1] |\n");
		printf("| [2]------Voltar ao inicio-------[2] |\n");
		printf("| [3]--------Fechar o app---------[3] |\n");
		printf("|_____________________________________|\n");
		printf("Adicione uma op��o da lista\n");
		escolhaArmazenada = filtroOpcao(3); /*armazena o valor da fun��o para usar nas condi��es. O argumento � de acordo onde sua op��o vai*/
		printf("_____________________________________________________\n");
		if(escolhaArmazenada == 1)
			pularProcesso = 's';         /*usei ifs pois fica mais organizado e menor que o switch*/
		if(escolhaArmazenada == 2)
			printf("Voltando ao inicio...\n");
			printf("_____________________________________________________\n");
		if(escolhaArmazenada == 3)
			principalLoop = 'n';
		
	}while(principalLoop == 's');   /*condi��o do loop principal*/

	
	/*==================================================  MENSAGEM FINAL  =============================================================*/
	
	printf("           _____________________________\n");
	printf("-----------|  Obrigado por acessar o   |-----------\n");
	printf("-----------|    -> (G7-armazem) <-     |-----------\n");    /*so aparece quando a programa � encerrado*/
	printf("-----------|       Volte Sempre        |-----------\n");
	printf("           -----------------------------\n");
	
	return 0;
}
