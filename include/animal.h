#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>
#include <string>

class Animal{
	protected:
		int m_id;
		string m_classe;
		string m_nome_cientifico;
		char m_sexo;
		double m_tamanho;
		string m_dieta;
		Veterinario m_veterinario;
		Tratador m_tratador;
		string m_nome_batismo;

	public:

		Animal();
		Animal(int id, string classe, string nome_cientifico,char sexo, 
			double tamanho, string dieta, Veterinario veterinario, Tratador tratador,
			string nome_batismo);
		~Animal();

		int getId();
		string getClasse();
		string getNomeCientifico();
		char getSexo();
		double getTamanho();
		string getDieta();
		string getNomeBatismo();


};


#endif
