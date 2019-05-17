#ifndef _TRATADOR_
#define _TRATADOR_
#include <iostream>

#include "funcionario.h"

class Tratador : public Funcionario{

	protected:

		int m_nivelSeguranca;

		
	public:
		Tratador(int id, string nome, string cpf, short idade, short tipoSanguineo,
				char fatorRH, string especialidade, int nivelSeguranca);

		Tratador();
		~Tratador();


	
};



#endif
