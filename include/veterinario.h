#ifndef _VETERINARIO_
#define _VETERINARIO_
#include <iostream>
#include <string>

#include "funcionario.h"

class Veterinario : public Funcionario{

	protected:
		string m_cmrv;


	public:
		Veterinario(int id, string nome, string cpf, short idade, short tipoSanguineo,
				char fatorRH, string especialidade, string cmrv);

		Veterinario();
		~Veterinario();

};



#endif
