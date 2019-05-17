#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_
#include <iostream>
#include <string>
#include <map>


class Funcionario{

	protected:
		int m_id;
		string m_nome;
		string m_cpf;
		short m_idade;
		short m_tipoSanguineo;
		char m_fatorRH;
		string m_especialidade;
		map<int, Funcionario *func> lista_funcionarios;

	public:

		Funcionario();
		Funcionario(int id, string nome, string cpf, short idade, short tipoSanguineo,
					char fatorRH, string especialidade);
		~Funcionario();
	
};



#endif
