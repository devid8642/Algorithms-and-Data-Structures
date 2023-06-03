#include <iostream>

using namespace std;

int main() {
  string nome, sexo;
  int idade, maior = 0, menor = 0, tot_i = 0, tot_m = 0, tot_f = 0;
  float s = 0;

  while (true) {
    // ENTRADA DE DADOS
    cout << "Digite um nome para um aluno [Digite sair para sair]: ";
    cin >> nome;

    if (nome[0] == 'S' || nome[0] == 's')
      break;
    
    cout << "Digite a idade desse aluno: ";
    cin >> idade;
    cout << "Digite o sexo [M/F]: ";
    cin >> sexo;
    
    // PROCESSAMENTO
    if (tot_i == 0)
      maior = menor = idade;
    s += idade;
    tot_i++;
    if (idade > maior)
      maior = idade;
    else if (idade < menor)
      menor = idade;

    if (sexo[0] == 'M' || sexo[0] == 'm')
      tot_m++;
    else if (sexo[0] == 'F' || sexo[0] == 'f')
      tot_f++;
    else
      cout << "Sexo Inválido!";
  }

  // SAIDA DE DADOS
  cout << "Total de alunos: " << tot_i << endl;
  cout << "Total do sexo masculino: " << tot_m << endl;
  cout << "Total do sexo feminino: " << tot_f << endl;
  cout << "Média de idade: " << s/tot_i << endl;
  cout << "Maior idade: " << maior << endl;
  cout << "Menor idade: " << menor << endl;
  
  return 0;

}
