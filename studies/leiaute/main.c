// O leiaute é a forma como se da disposição do código.
// Um bom leiaute leva em considerção os aspectos entre as palavras e os símbolos e a identação.

// Segue o exemplo de um bom leiaute

int Func(int n, int v[]) {
   int i, j;
   i = 0;
   while (i < n) {
      if (v[i] != 0)
         i = i + 1;
      else {
         for (j = i + 1; j < n; j++)
            v[j-1] = v[j];
         n = n - 1;
      }
   }

   return n;
}

// Segue um mau exemplo de leiaute

int Func ( int n, int v[] ) {
   int i, j;
   i=0;
   while (i<n) {
      if (v[i] !=0)
         i= i +1;
      else 
      {
         for (j = i+1; j<n; j++)
            v[j-1]=v[j];
         n= n -1;
      }
   }

   return n;
}

// Este leiaute é inconsistente, omite espaços e deixa de por espaços onde deveria para se facilitar a leitura do código.

/*
 Algumas convenções para um bom leiaute:

 1. Deixe espaços entre palavras (operadores contam como palavras neste caso).
 2. Deixe um espaço após sinais de pontuação.
 3. Deixe um espaço após fechar um parêntese.
 4. Deixe um espaço antes de abrir um parêntese.

*/

/*
 Resolução do exercício A.3.2:

 Em 1959 e nas décadas seguintes nenhum programador Cobol
 poderia imaginar que os programas de computador que estava
 criando ainda estariam em operação no fim do século. Poucos se
 lembram hoje de que os primeiros PCs possuíam apenas 64 Kbytes
 de memória. Como a quantidade de memória disponível era
 pequena, usavam-se muitos truques para economizar esse recurso.
 Para representar o ano, armazenava-se (por exemplo) "85" em vez
 de "1985". Com a chegada do ano 2000, essa codificação
 econômica transformou-se em um erro em potencial.
*/

/*
 Resolução do exercício A.3.3:

 int separa (int v[], int p, int r){
   int c=v[p], i=p+1, j=r, t;
   while (i <= j) {
      if (v[i] <= c) {
         v[i-1] = v[i];
         ++i;
      }
      else {
         t = v[i];
         v[i] = v[j];
         v[j] = t;
         --j;
      }
   }
   v[j] = c;
   return j;
}
*/

/*
 Resolução do exercício A.3.4:

 esq = 0; 
 dir = N-1;
 i = (esq + dir)/2;
 while (esq <= dir && R[i] != X) {
   if (R[i] < X) 
      esq = i + 1;
   else 
      dir = i - 1;
   i = (esq + dir)/2;
 }

*/
