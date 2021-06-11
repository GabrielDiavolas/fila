# fila
<strong>Descrição do programa</strong></br>
Sua principal função é permitir ao administrador do sistema (usuário) o armazenamento das informações que o sistema acadêmico necessita para realizar as correções de cada atividade, a saber:
o RA do aluno;
o Nome do arquivo;
o Extensão do arquivo;
o Matrícula do professor responsável pela correção.
Ou seja, toda vez que o usuário cadastrar uma nova atividade, suas informações são adicionadas ao final da fila. Ainda, sempre que o usuário desejar remover uma atividade da fila, seu programa deve ser capaz de excluir o elemento do início da fila, mantendo a estrutura de dados organizada.

<strong>Estruturação dos requisitos</strong></br>
O programa deve ter um menu principal em forma de laço de repetição que atenda aos seguintes requisitos:
•	O menu sempre deve imprimir o conteúdo da fila (do início em direção ao fim);
•	Após a impressão do conteúdo da fila, o usuário deve ser informado de que pode realizar a seguintes operações:
1.	Inserir um elemento na fila;
2.	Remover um elemento da fila;
3.	Esvaziar a fila;
4.	Encerrar o programa.

<strong>Operação de Inserir</strong></br>
A operação “Inserir um elemento na fila” deve verificar se a fila já está cheia. Se não houver mais espaço na fila, o usuário deve ser informado, e o programa volta para o menu inicial. Caso não esteja cheia, o programa deve pedir para que o usuário informe o RA do(a) aluno(a), nome do arquivo contendo a solução da atividade, a extensão do arquivo e a matrícula do professor responsável pela correção, inserindo essas informações no fim da fila.

<strong>Operação de Remover</strong></br>
A operação “Remover um elemento da fila” deve retirar a atividade que está na primeira posição da fila. Caso haja elemento para ser removido, todos os dados da respectiva atividade que será removido devem ser impressos na tela: RA do(a) estudante, nome do arquivo, extensão do arquivo e nome do(a) professor(a). Se a fila estiver vazia, o usuário deve ser informado e o programa simplesmente retorna ao menu principal.
 
<strong>Operação de Esvaziar</strong></br>
A operação “Esvaziar a fila” deve remover todos os elementos da fila.

<strong>Operação de Encerrar</strong></br>
A operação “Encerrar programa” deve finalizar o processo.

<em>Observação:</em></br> 
O código-fonte deve ser escrito de forma a implementar estruturas de dados estáticas. Nesse caso, nossa fila deverá ter, no máximo, 5 posições para armazenar elementos (tamanho igual a 5).

