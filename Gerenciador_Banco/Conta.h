//******************************************
//	BIBLIOTECAS E CLASSES UTILIZADAS
//******************************************
#pragma once
#include "Pessoa.h"

//******************************************
//	CLASSE CONTA UTILIZADA NESTE PROJETO
//******************************************
class Conta : public Pessoa
{
	int numero;
	char tipo;
	float saldo;
	

public:

	//******************************************
	//	M�TODO PARA CRIAR UM OBJETO CONTA
	//******************************************
	void criar_conta();

	//******************************************
	//	M�TODO PARA RETORNAR O NUMERO
	//******************************************
	int get_numero();

	//******************************************
	//	M�TODO PARA RETORNAR O SALDO
	//******************************************
	float get_saldo();

	//******************************************
	//	M�TODO PARA RETORNAR O TIPO
	//******************************************
	char get_tipo();

	//******************************************
	//	M�TODO PARA DEPOSITAR VALOR
	//******************************************
	void depositar(float quantidade);

	//******************************************
	//	M�TODO PARA SACAR VALOR
	//******************************************
	void sacar(float quantidade);

	//******************************************
	//	M�TODO PARA VISUALIZAR OS DADOS 
	//******************************************
	void visualizar_conta();

	//******************************************
	//	M�TODO PARA IMPRIMIR UM RELAT�RIO
	//******************************************
	void relatorio_conta();

	//******************************************
	//	M�TODO PARA MODIFICAR OS DADOS
	//******************************************
	void modificar_conta();

};

