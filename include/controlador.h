#ifndef _CONTROLADOR_
#define _CONTROLADOR_
#include <iostream>
#include <string>
#include <map>

#include "funcionario.h"

class Controlador{

	protected:
		map<int, Funcionario *func> lista_funcionarios;

	public:

		Controlador();
		~Controlador();
	
};



#endif