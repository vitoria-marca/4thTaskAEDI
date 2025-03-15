Vitória Marca Santa Lucia

Trabalho 4: Exercício 826 LeetCode

O exercício proposto pressupoe que temos N trabalhos e M trabalhadores. Cada trabalho possui um grau de dificuldade e todos os trabalhadores tem um teto de dificuldade nos trabalhos que conseguem executar.
Esses dados são passados em forma de vetor e, separadamente, temos um vetor de lucro. Para qualquer n, o trabalho[n] tem como lucro correspondente o lucro[n] e assim por diante.
Logo, temos que manipular 3 vetores distintos. Minha primeira solução foi utilizar a força bruta numa tentativa falha de ordenar em ordem crescente o vetor dificuldade[], e simultaneamente, seu par lucro[]. Posteriormente, haveria um loop para verificar se o trabalhador seria capaz de realizar dificuldade[n] e uma variável maxProfit guardaria o lucro[n] (que são correspondentes). 
A variável maxProfit é atualizada toda vez que um lucro[n] para dado trabalho[n] é maior que o maxProfit anterior. Após percorrer todos os possíveis trabalhos, o valor é somado a variável resultado.

O que muda do código feito em aula para o corrigido depois é a maneira cujo vetor é manipulado e ordenado. Foi usada uma struct onde work[n] contém dificuldade[n] e lucro[n]
