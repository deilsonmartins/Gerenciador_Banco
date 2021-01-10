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
	//	MÉTODO PARA CRIAR UM OBJETO PESSOA
	//******************************************
	void cadastrar_pessoa();

	//******************************************
	//	MÉTODO PARA RETORNAR O NOME
	//******************************************
	std::string get_nome();

	//******************************************
	//	MÉTODO PARA RETORNAR O CPF
	//******************************************
	std::string get_CPF();

	//******************************************
	//	MÉTODO PARA MODIFICAR OS DADOS
	//******************************************
	void modificar_dados();
};

