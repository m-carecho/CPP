#include <string>
#include <iostream>
using std::string;
using namespace std;

class Jogo
{
private:
	string nome;
	float preco;
	int horas;
	float custo;

	void calcular() {if (horas > 0) custo = preco / horas;}

public:
	void adquirir(const string& titulo, float valor)
	{
		nome = titulo;
		preco = valor;
		horas = 0;
		custo = 0;
	}


	void atualizar(float valor)
	{
		preco = valor;
		calcular();
	}

	void jogar(int tempo)
	{
		horas += tempo;
		calcular();
	}
	void exibir()
	{
		cout << nome << " R$ " << preco << " "<< horas << "h R$" << custo << "/h" << endl;
	}
};

int main()
{
	Jogo jogo;
	jogo.adquirir("GTA V", 100.5f);
	jogo.exibir();
	jogo.jogar(10);
	jogo.exibir();
	jogo.atualizar(50.5f);
	jogo.exibir();
	return 0;
}


