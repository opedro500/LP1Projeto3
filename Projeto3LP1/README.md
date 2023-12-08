# PROJETO UNIDADE 3 - LINGUAGEM DE PROGRAMAÇÃO 2023.2 - BTI (UFRN)


## NOME DO DOCENTE:
JANIHERYSON FELIPE DE OLIVEIRA MARTINS


## NOMES DO DISCENTES:
PEDRO JOSÉ CAVALCANTI CABRAL, MATHEUS EUGENIO DE MOURA, LEONAM MEDEIROS DE SOUSA



# Sobre o projeto:

O projeto consta com um diretório principal "Projeto3LP1", onde nele está contido: um diretório relacionado aos cabeçalhos, um diretório relacionado aos códigos, um diretório relacinado ao armazenamento dos tecnincos administrativos e professores, o arquivo "main.cpp" (onde está a chamada da função main que faz as chamadas de todas as outras funções do programa) e este arquivo README.

No diretório "header" estão contidos os arquivos ".hpp" das classes existentes do programa.

No diretório "src" estão contidos os arquivos ".cpp", onde estão as lógicas de todos os métodos das classes do programa.

No diretório "txt" estão contidos os arquivos ".txt", onde estão armazenados todos os professores e tecnicos administrativos, além de seus atributos previamente cadastrados.

No arquivo "funcionarios.txt" é armazenado todos os funcionários (tanto professores, quanto tecnicos administrativos) ao final do programa.

## Funcionalidades:

Todas as funcionalidades do código são baseadas nas chamadas dos métodos da classe "BancoDAO" realizadas pela função main. Cada método e função possui uma identação presente no cabeçalho da mesma dentro do código, onde é explicado seu propósito e seus parâmentros, seguindo a norma padrão.

## Bugs:

Durante o desenvolvimento do programa foram encontrados 1 problema:

1 - Strings com espaço.

Aparentemente o compilador apresenta um bug quando é passado strings contendo espaçamento pelo método de leitura padrão (std::cin). Poranto, é necessário ter cuidado ao inserir, por exemplo, nomes de pessoas, nomes de ruas, departamentos, etc.

## Como rodar o programa:

* Windows: 

No terminal, entre na pasta "Projeto1LP1" e execute o comando: "g++ .\src\bancoDAO.cpp .\src\endereco.cpp .\src\funcionario.cpp .\src\pessoa.cpp .\src\professor.cpp .\src\tecnicoADM.cpp .\src\autenticacao.cpp .\main.cpp -o .\nomeQualquer.exe".

Depois, execute: ".\nomeQualquer.exe".