#include <iostream>
#include <string>
#include <map>
#include <utility>
#include "animal.h"
#include "funcionario.h"
#include "tratador.h"
#include "veterinario.h"
#include "controlador.h"

using namespace std;

Funcionario::Funcionario(int id, string nome, string cpf, short idade, short tipoSanguineo,
					char fatorRH, string especialidade):m_id(id),m_nome(nome), m_cpf(cpf),
					m_idade(idade), m_tipoSanguineo(tipoSanguineo), m_fatorRH(fatorRH),
					m_especialidade(especialidade){

}

Tratador::Tratador(int id, string nome, string cpf, short idade, short tipoSanguineo,
					char fatorRH, string especialidade, int nivelSeguranca):
					Funcionario(int id, string nome, string cpf, short idade, 
					short tipoSanguineo, char fatorRH, string especialidade), 
					m_nivelSeguranca(nivelSeguranca){
}

Veterinario::Veterinario(int id, string nome, string cpf, short idade, short tipoSanguineo,
					char fatorRH, string especialidade, int nivelSeguranca):
					Funcionario(int id, string nome, string cpf, short idade, 
					short tipoSanguineo, char fatorRH, string especialidade), 
					m_cmrv(cmrv){
}

Funcionario::Funcionario(){}
Tratador::Tratador(){}
Veterinario::Veterinario(){}



void addTratador(){
	int id, nivelSeguranca;
	string nome, cpf, especialidade;
	short idade, tipoSanguineo;
	char fatorRH;

	cout << "ID: " << endl;
	cin >> id;

	cout << "Nome: " << endl;
	cin >> nome;

	cout << "CPF: " << endl;
	cin >> cpf;

	cout << "Idade: " << endl;
	cin >> idade;

	cout << "Tipo Sanguineo: " << endl;
	cin >> tipoSanguineo;

	cout << "Fator RH: " << endl;
	cin >> fatorRH;

	cout << "Especialidade: " << endl;
	cin >> especialidade;

	cout << "Nivel de Segurança: " << endl;
	cin >> nivelSeguranca;

	Funfionario* func = Tratador t(id, nome, cpf, idade, tipoSanguineo, fatorRH, especialidade, nivelSeguranca);
	
	lista_funcionarios.insert(pair<int, func>(id, t));
}

void addVeterinario(){
	int id;
	string nome, cpf, especialidade, cmrv;
	short idade, tipoSanguineo;
	char fatorRH;

	cout << "ID: " << endl;
	cin >> id;

	cout << "Nome: " << endl;
	cin >> nome;

	cout << "CPF: " << endl;
	cin >> cpf;

	cout << "Idade: " << endl;
	cin >> idade;

	cout << "Tipo Sanguineo: " << endl;
	cin >> tipoSanguineo;

	cout << "Fator RH: " << endl;
	cin >> fatorRH;

	cout << "Especialidade: " << endl;
	cin >> especialidade;

	cout << "CMRV: " << endl;
	cin >> cmrv;

	Funcionario* func = Veterinario v(id, nome, cpf, idade, tipoSanguineo, fatorRH, especialidade, cmrv);
	
	lista_funcionarios.insert(pair<int, func>(id, t));

}

void removerFuncionario(){
}

void ListarFuncionario(){
}
