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
/*FUNÇÃO COM O BUBBLE SORT DE ORDEM CRECENTE*/
void ordemCrescentePreco(struct dadosProduto temp[], struct dadosProduto produtos[], int n) {  
	int i, j;
	for(i = 0; i < n - 1; i++){          /*controla passagem pelo arrey no numero de vezes do tamanho do arrey*/
		for(j = 0; j < n - 1 -i; j++){          /*Aqui ele vai andando o arry comparando os valores*/
			if(produtos[j].preco < produtos[j + 1].preco){   /*usei um atributo do obejeto para fazer a comparação*/
				temp[0] = produtos[j];                /*variavel para quarda a troca dos obejtos*/
				produtos[j] = produtos[j + 1];
				produtos[j + 1] = temp[0];          /*Quarda o objeto que foi foi trocado no arrey*/
			}
		}
	}
}

/*FUNÇÃO COM O BUBBLE SORT DE ORDEM DESCRECENTE*/
void ordemDescrescentePreco(struct dadosProduto temp[], struct dadosProduto produtos[], int n) {
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 -i; j++){          
			if(produtos[j].preco > produtos[j + 1].preco){    /*So mudei o elemento que vai ser a referecia e a condiçâo*/
				temp[0] = produtos[j];
				produtos[j] = produtos[j + 1];
				produtos[j + 1] = temp[0];
			}
		}
	}
}

/*FUNÇÃO COM O BUBBLE SORT DE ORDEM CRECENTE*/
void ordemCrescenteCodigo(struct dadosProduto temp[], struct dadosProduto produtos[], int n)  {
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 -i; j++){
			if(produtos[j].codigo < produtos[j + 1].codigo){   /*So mudei o elemento que vai ser a referecia e a condiçâo*/
				temp[0] = produtos[j];
				produtos[j] = produtos[j + 1];
				produtos[j + 1] = temp[0];
			}
		}
	}
}

/*FUNÇÃO COM O BUBBLE SORT DE ORDEM DESCRECENTE*/
void ordemDescrecenteCodigo(struct dadosProduto temp[], struct dadosProduto produtos[], int n) {
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 -i; j++){
			if(produtos[j].codigo > produtos[j + 1].codigo){   /*So mudei o elemento que vai ser a referecia e a condiçâo*/
				temp[0] = produtos[j];
				produtos[j] = produtos[j + 1];
				produtos[j + 1] = temp[0];
			}
		}
	}
}

/*FUNÇAO PARA MOSTRAR LISTA*/
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
	for (i = 0; i < 10; i++){             /*loop simples para vê os valores da arrey*/
		printf("\n");
		printf("|%d|          >>>>> %s <<<<<\n", i + 1, produtos[i].nome);
		printf("-Código do Produto: %d\n", produtos[i].codigo);
		printf("-Preço: R$%.2f\n", produtos[i].preco);
		printf("\n");
		printf("-Posição na pratileira do mercado: [%d]\n", produtos[i].posicaoPratileira);
		printf("____________________________________________________\n");

	}
}

/*FUNÇAO QUE ARMAZENA AS ARREYS*/
void colocaProdutosArrey(struct dadosProduto produtos[]) {
	produtos[0].codigo = 152;
	strcpy(produtos[0].nome, "Arroz");          /*adicioneis alguns itens na lista manualmente mesmo*/
	produtos[0].preco = 11.5;
	produtos[0].posicaoPratileira = 1;      /*coloquei essa opção para poder ver em qual local foi quardada na lista*/
	                                                 /*usei pra ter uma noção de onde tava cada item na lista inicialmente*/
	produtos[1].codigo = 141;
	strcpy(produtos[1].nome, "Feijão");
	produtos[1].preco = 15.30;
	produtos[1].posicaoPratileira = 2;
	
	produtos[2].codigo = 111;
	strcpy(produtos[2].nome, "Macarrão");
	produtos[2].preco = 9.53;
	produtos[2].posicaoPratileira = 3;

	produtos[3].codigo = 153;
	strcpy(produtos[3].nome, "Óleo");
	produtos[3].preco = 16.35;
	produtos[3].posicaoPratileira = 4;
	
	produtos[4].codigo = 178;
	strcpy(produtos[4].nome, "molho de tomate");
	produtos[4].preco = 5.34;
	produtos[4].posicaoPratileira = 5;
	
	produtos[5].codigo = 181;
	strcpy(produtos[5].nome, "Café");
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
	do {                                  /*fica em loop até o usuario digitar s ou n*/
		printf("sim(S) ou não(N)? \n");
		scanf(" %c", &escolha);
		if(escolha == 's' || escolha == 'S' || escolha == 'n' || escolha == 'N'){
			continuaLoop = 'n';			
			escolha = converteCaracter(escolha);
		}
		while(getchar() != '\n');
	}while(continuaLoop != 'n');
	
	return escolha;                   /*vai retorna um valor e depois armazeno em um variavel para usar*/
}

/*função para receber apenas números*/
int recebeNumeroReal(){
	int numero;
	char continuaLoop = 's';
	do {
		continuaLoop = 'n';
		if(scanf(" %d", &numero) != 1){
			while(getchar() != '\n');            /*um loop que so é possivel sair dele se colocar um número*/
			printf("Adicione um numero real\n");
			continuaLoop = 's';
		}
		
		
	}while(continuaLoop == 's');
	
	return numero;
}

/*funçao que atenda apenas as opções forneciadas*/
int filtroOpcao(int condicao) {
	int armazenarOpcao;
	char permaneceLoop;
	do {                             /*permanece em loop ate o usuario digitar uma condição válida*/
		permaneceLoop = 's';
		armazenarOpcao = recebeNumeroReal();
		if(armazenarOpcao <= condicao)
			break;
		printf("Adicione um opção válida\n");
	}while(permaneceLoop == 's');
	
	return armazenarOpcao;
}

	/*==================================================  ESCOPO PRINCIPAL  =============================================================*/
int main() {
	setlocale(LC_ALL, "Portuguese");   /*perimitir a saida correta de acentuações*/
	
	/*==================================================  VARIAVEIS  =============================================================*/
	struct dadosProduto produtos[10];     /*arrey com os objetos*/
	int n = sizeof(produtos) / sizeof(produtos[0]);   /*Conta a quantidade de que tem na itens na lista*/
	struct dadosProduto temp[1];     /*lista que cabe apenas um objeto que usa como um um armazem de troca no sitema de organização*/
	char escolhaDoUser, permaneceLoop, principalLoop, pularProcesso;
	int escolhaArmazenada;
	
	
	/*==================================================  MENSAGEM ENTRADA  =============================================================*/
	
	printf("           _____________________________\n");
	printf("-----------|   +++++++++++++++++++++   |-----------\n");
	printf("-----------|  Bem-víndo ao G7-armazem  |-----------\n");          /*so aparece quando o programa e iniciado*/
	printf("-----------|       ++++++++++++        |-----------\n");
	printf("           -----------------------------\n");
	printf("\n");
	printf("_____________________________________________________\n");
	printf("App feito para vê sua lista de forma mais organizada\n");
	printf("_____________________________________________________\n");
	
	/*=======================================  CHAMANDO AS FUNCÕES  E ORGANIZANDO  ================================================*/
	do {    /*laço principal para voltar ao inicio caso receba a condição certa*/
		principalLoop = 's';  /*variavel de resete*/
		
		colocaProdutosArrey(produtos);
		escolhaDoUser = 'n';
		if(pularProcesso != 's'){     /*usado para pular a parte inicial, quando o programa inicia ela entra normalmente*/
			printf("Deseja vê a lista original ?\n");
			escolhaDoUser = opcaoDoUser();
			printf("_____________________________________________________\n");
			if(escolhaDoUser == 's')
				mensagemUser(produtos, 0);   /*no argumento falo o objeto usado e o numero para qual mensagem enviar*/
		}

		pularProcesso = 'n';             /*variavel que reseta a etapa da mensagem principal, usado caso ja tenha pulado a etapa uma vez*/
		printf("Deseja organizar a lista ?\n");                                               /*para que a ultima opção não fique salva*/
		escolhaDoUser = opcaoDoUser();   /*armazena o valor da função para usar nas condições*/
		printf("_____________________________________________________\n");
		if(escolhaDoUser == 's'){
			printf("Organize a lista de acordo com o numero escolhido\n");
			printf(" ________________________________________\n");
			printf(" |            Tabela de Opções          |\n");
			printf(" | [1]-Preço em ordem descrescente--[1] |\n");
			printf(" | [2]---Preço em ordem crescente---[2] |\n");      /*apenas para algo visual no console*/
			printf(" | [3]-Código em ordem descrescente-[3] |\n");
			printf(" | [4]- Código em ordem crescente---[4] |\n");
			printf(" |______________________________________|\n");
			printf("Adicione uma opção\n");
			escolhaArmazenada = filtroOpcao(4);   /*armazena o valor da função para usar nas condições*/
			if(escolhaArmazenada == 1)
				ordemCrescentePreco(temp, produtos, n);
			if(escolhaArmazenada == 2)                     /*usei ifs pois fica mais organizado e menor que o switch*/
				ordemDescrescentePreco(temp, produtos, n);
			if(escolhaArmazenada == 3)
				ordemCrescenteCodigo(temp, produtos, n);
			if(escolhaArmazenada == 4)
				ordemDescrecenteCodigo(temp, produtos, n);
			printf("Lista organizada, deseja vê-la ?\n");
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
		printf("Adicione uma opção da lista\n");
		escolhaArmazenada = filtroOpcao(3); /*armazena o valor da função para usar nas condições. O argumento é de acordo onde sua opção vai*/
		printf("_____________________________________________________\n");
		if(escolhaArmazenada == 1)
			pularProcesso = 's';         /*usei ifs pois fica mais organizado e menor que o switch*/
		if(escolhaArmazenada == 2)
			printf("Voltando ao inicio...\n");
			printf("_____________________________________________________\n");
		if(escolhaArmazenada == 3)
			principalLoop = 'n';
		
	}while(principalLoop == 's');   /*condição do loop principal*/

	
	/*==================================================  MENSAGEM FINAL  =============================================================*/
	
	printf("           _____________________________\n");
	printf("-----------|  Obrigado por acessar o   |-----------\n");
	printf("-----------|    -> (G7-armazem) <-     |-----------\n");    /*so aparece quando a programa é encerrado*/
	printf("-----------|       Volte Sempre        |-----------\n");
	printf("           -----------------------------\n");
	
	return 0;
}
