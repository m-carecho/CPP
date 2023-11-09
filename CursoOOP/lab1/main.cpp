#include <iostream>
using namespace std;

struct Jogo
{
	string nome;
	float preco;
	int horas;
	float custo;
};

Jogo adquirir(const string& titulo, float valor)
{
	Jogo jogo;
	jogo.nome = titulo;
	jogo.preco = valor;
	jogo.horas = 0;
	jogo.custo = 0;
	return jogo;
}

void atualizar(Jogo& jogo, float valor)
{
	jogo.preco = valor;

	if (jogo.horas > 0)
		jogo.custo = jogo.preco / jogo.horas;
}
void jogar(Jogo& jogo, int tempo)
{
	jogo.horas += tempo;
	if (jogo.preco > 0)
		jogo.custo = jogo.preco / jogo.horas;
}
void exibir(const Jogo& jogo)
{
	cout << "Nome: " << jogo.nome << endl;
	cout << "Preco: " << jogo.preco << endl;
	cout << "Horas: " << jogo.horas << endl;
	cout << "Custo: " << jogo.custo << endl;
	cout << endl;
}

int main()
{
	Jogo jogo = adquirir("The Witcher 3", 100.3f);
	exibir(jogo);
	jogar(jogo, 10);
	exibir(jogo);
	atualizar(jogo, 50.0f);
	exibir(jogo);
	jogar(jogo, 10);
	exibir(jogo);
	return 0;

}
