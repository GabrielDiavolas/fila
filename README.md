# <h1>Fila de trabalhos para correção</h1>
<h3><strong>Descrição do programa</strong></br></h3>
<p>Sua principal função é permitir ao administrador do sistema (usuário) o armazenamento das informações que o sistema acadêmico necessita para realizar as correções de cada atividade, a saber:</br>

<ul type="square">
 <li>RA do aluno;</li>
 <li>Nome do arquivo;</li>
 <li>Extensão do arquivo;</li>
 <li>Matrícula do professor responsável pela correção.</li>
</ul>
 
Ou seja, toda vez que o usuário cadastrar uma nova atividade, suas informações são adicionadas ao final da fila. Ainda, sempre que o usuário desejar remover uma atividade da fila, seu programa deve ser capaz de excluir o elemento do início da fila, mantendo a estrutura de dados organizada.
</p>

<h3><strong>Estruturação dos requisitos</strong></br></h3>
<p>O programa deve ter um menu principal em forma de laço de repetição que atenda aos seguintes requisitos:</p>
<ul>
  <li>O menu sempre deve imprimir o conteúdo da fila (do início em direção ao fim);</li>
  <li>Após a impressão do conteúdo da fila, o usuário deve ser informado de que pode realizar a seguintes operações:</li>
  <ul>
    <li>Inserir um elemento na fila;</li>
    <li>Remover um elemento da fila;</li>
    <li>Esvaziar a fila;</li>
    <li>Encerrar o programa.</li>
  </ul>
</ul>

<h3><strong>Operação de Inserir</strong></br></h3>
<p>A operação “Inserir um elemento na fila” deve verificar se a fila já está cheia. Se não houver mais espaço na fila, o usuário deve ser informado, e o programa volta para o menu inicial. Caso não esteja cheia, o programa deve pedir para que o usuário informe o RA do(a) aluno(a), nome do arquivo contendo a solução da atividade, a extensão do arquivo e a matrícula do professor responsável pela correção, inserindo essas informações no fim da fila.</p>

<h3><strong>Operação de Remover</strong></br></h3>
<p>A operação “Remover um elemento da fila” deve retirar a atividade que está na primeira posição da fila. Caso haja elemento para ser removido, todos os dados da respectiva atividade que será removido devem ser impressos na tela: RA do(a) estudante, nome do arquivo, extensão do arquivo e nome do(a) professor(a). Se a fila estiver vazia, o usuário deve ser informado e o programa simplesmente retorna ao menu principal.</p>

<h3><strong>Operação de Esvaziar</strong></br></h3>
<p>A operação “Esvaziar a fila” deve remover todos os elementos da fila.</p>

<h3><strong>Operação de Encerrar</strong></br></h3>
<p>A operação “Encerrar programa” deve finalizar o processo.</p></br>

<p><em>Observação:</em></br> 
O código-fonte deve ser escrito de forma a implementar estruturas de dados estáticas. Nesse caso, nossa fila deverá ter, no máximo, 5 posições para armazenar elementos (tamanho igual a 5).
</p>

