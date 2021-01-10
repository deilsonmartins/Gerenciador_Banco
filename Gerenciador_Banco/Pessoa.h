//******************************************
//	BIBLIOTECAS E CLASSES UTILIZADAS
//******************************************

#pragma once
#include <string>

//******************************************
//	CLASSE PESSOA UTILIZADA NESTE PROJETO
//******************************************
class Pessoa
{
	std::string nome;
	std::string cpf;

public:

	//******************************************
	//	M�TODO PARA CRIAR UM OBJETO PESSOA
	//******************************************
	void cadastrar_pessoa();

	//******************************************
	//	M�TODO PARA RETORNAR O NOME
	//******************************************
	std::string get_nome();

	//******************************************
	//	M�TODO PARA RETORNAR O CPF
	//******************************************
	std::string get_CPF();

	//******************************************
	//	M�TODO PARA MODIFICAR OS DADOS
	//******************************************
	void modificar_dados();
};

