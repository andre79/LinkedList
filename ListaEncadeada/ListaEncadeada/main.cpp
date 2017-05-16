
#include "LinkedList.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int option = 100;
	int num = 0;

	cout << "::: Linked List ::: 16/05/2017 ::: \n";

	LinkedList* l = new LinkedList(0);

	do
	{
		cout << "1 - Adicionar no Inicio da Lista.........."<< endl;
		cout << "2 - Adicionar no final da Lista..........."<< endl;
		cout << "3 - Verificar se a lista esta vazia......."<< endl;
		cout << "4 - Mostrar o tamanho da Lista............"<< endl;
		cout << "5 - Mostrar elementos da lista............"<< endl;
		cout << "6 - Remover elemeto do final da lista....."<< endl;
		cout << "7 - Pesquisa numero da lista.............." << endl;

		cout << "\n -> Digite sua opção: ";  cin >> option;

		switch (option)
		{
		case 1:
			cout << "\nDigite um valor para adicionar ao incio da lista." << endl;
			cin >> num;
			l->insert_front(num);
			break;
		case 2:
			cout << "\nDigite um valor para adicionar ao fincal da lista." << endl;
			cin >> num;
			l->insert_back(num);
			break;
		case 3:
			if (l->isEmpty()) cout << "Lista esta vazia \n" << endl;
			else cout << "Lista nao esta vazia \n" << endl;
			break;
		case 4:
			cout << "Quantidade de valores inseridos: " << l->size() << endl;
			break;
		case 5:
			l->showElements();
			break;
		case 6:
			l->removeElement();
			break;
		case 7:
			cout << "Digite o numero que deseja pesquisar: ";
			cin >> num;
			if (l->isExist(num))
				cout << "O numero: " << num << " esta na lista";
			else
				cout << "O numero: " << num << " nao está na lista";
			break;
		default:
			cout << "\n******Opção não é valida******\n" << endl;
			break;
		}
	} while (option != 100);	
	return 0;
}
