#include <iostream>

using namespace std;

void menu(){
	int opc_Menu_Principal, opc_Menu_Animal, opc_Menu_Animal_Listagem, opc_Menu_Funcionario, opc_Menu_Funcionario_add, opc_Menu_Funcionario_Listagem;

	cout << "--------- PetFera ----------\n 
			1 - Setor de Animais\n 
			2 - Setor Funcionários" << endl;
	cin >> opc_Menu_Principal;

	switch (opc_Menu_Principal){
		case 1:
			cout << "--------- Animais ----------\n
					1- Adicionar Animal\n
					2- Remover Animal\n
					3- Consultar Animal\n
					4- Listagem de Animais" << endl;
			cin >> opc_Menu_Animal;
			switch (opc_Menu_Animal){
				case 1:
					cout << "--------- Adicionar animal ----------\n
						Informe os dados sobre o seu animal:" << endl;
						
				break;
				case 2:
					cout << "--------- Remover animal ----------\n
						Insira o id do animal a ser removido:" << endl;
				break;
				case 3:
					cout << "--------- Consultar animal ----------\n
						Insira o id do animal a ser consultado:" << endl;
				break;
				case 4:
					cout << "--------- Listagem de animais ----------\n
						1- Listagem por classe\n
						2- Listagem por sexo\n
						3- Listagem por tamanho médio" << endl;
					cin >> opc_Menu_Animal_Listagem;
					switch (opc_Menu_Animal_Listagem){
						case 1:
							cout << "--------- Listagem por classe ----------\n
								Insira a classe dos animais a serem listados:" << endl;
						break;
						case 2:
							cout << "--------- Listagem por sexo ----------\n
								Insira o sexo dos animais a serem listados:" << endl;
						break;
						case 3:
							cout << "--------- Listagem por tamanho médio ----------\n
								Insira o tamanho médio dos animais a serem listados:" << endl;
						break;
						default:
							cout << "Não existe essa opção no menu." << endl;
							menu();
					}
				default:
					cout << "Não existe essa opção no menu." << endl;
					menu();
			}
		break;

		case 2:
			cout << "--------- Funcionários ----------\n
					1- Adicionar funcionário\n
					2- Remover funcionário\n
					3- Consultar funcionário\n
					4- Listagem de funcionários" << endl;
			cin >> opc_Menu_Funcionario;

			switch (opc_Menu_Funcionario){
				case 1:
					cout << "--------- Adicionar funcionário ----------\n
						1- Adicionar tratador\n
						2- Adicionar veterinário" << endl;
					cin >> opc_Menu_Funcionario_add;
					switch (opc_Menu_Funcionario_add){
						case 1:
							cout << "--------- Adicionar tratador ----------\n
								Insira os dados sobre o tratador:" << endl;
								addTratador();
						break;
						
						case 2:
							cout << "--------- Adicionar veterinário----------\n
								Insira os dados sobre o veterinário:" << endl;
								addVeterinario();
						break;
						
						default:
							cout << "Não existe essa opção no menu." << endl;
							menu();
					}
				break;
				case 2:
					cout << "--------- Remover funcionário ----------\n
						Insira o id do funcionário a ser removido:" << endl;
				break;
				case 3:
					cout << "--------- Consultar funcionário ----------\n
						Insira o id do funcionário a ser consultado:" << endl;
				break;
				case 4:
					cout << "--------- Listagem de funcionários ----------\n
						1- Listagem por função\n
						2- Listagem por especialidade" << endl;
					cin >> opc_Menu_Funcionario_Listagem;

					switch (opc_Menu_Funcionario_Listagem){
						case 1:
							cout << "--------- Listagem por função ----------\n
								Insira a função dos funcionários a serem listados:" << endl;
						break;
						case 2:
							cout << "--------- Listagem por especialidade ----------\n
								Insira a especialidade dos funcionários a serem listados:" << endl;
						break;

						default:
							cout << "Não existe essa opção no menu." << endl;
					}
				default:
					cout << "Não existe essa opção no menu." << endl;
					menu();
			}

		break;
		
		default:
			cout << "Não existe essa opção no menu." << endl;
			menu();
	}
		
}