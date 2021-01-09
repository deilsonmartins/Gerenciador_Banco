#pragma once
#include <string>

class Pessoa
{
	std::string nome;
	std::string cpf;

public:

	void cadastrar_pessoa();

	std::string get_nome();

	std::string get_CPF();
};

