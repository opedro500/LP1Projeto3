#include <iostream>
#include <fstream>
#include "../header/bancoDAO.hpp"

std::vector<Professor> professores;
std::vector<TecnicoADM> tecnicosADM;

std::string s;
int i;
float f = 0.25;

Nivel level;
Formacao training;

BancoDAO::BancoDAO()
{
}

BancoDAO::~BancoDAO()
{
}

/**
 * Função para converter um tipo Nivel para uma string.
 * @param numNivel Tipo Nivel a ser convertido.
 */
std::string nivelParaString(Nivel numNivel)
{
    switch (numNivel)
    {
    case 0:
        return "I";
    case 1:
        return "II";
    case 2:
        return "III";
    case 3:
        return "IV";
    case 4:
        return "V";
    case 5:
        return "VI";
    case 6:
        return "VII";
    case 7:
        return "VIII";
    }
}

/**
 * Função para converter um tipo Formacao para uma string.
 * @param numFormacao Tipo Formacao a ser convertido em string.
 */
std::string formacaoParaString(Formacao numFormacao)
{
    switch (numFormacao)
    {
    case 0:
        return "ESPECIALIZACAO";
    case 1:
        return "MESTRADO";
    case 2:
        return "DOUTORADO";
    }
}

/**
 * Função para converter uma string para um tipo Formacao.
 * @param nivelString string a ser convertida em um tipo Nivel.
 */
Nivel stringParaNivel(std::string nivelString)
{
    if (nivelString == "I")
        return I;
    if (nivelString == "II")
        return II;
    if (nivelString == "III")
        return III;
    if (nivelString == "IV")
        return IV;
    if (nivelString == "V")
        return V;
    if (nivelString == "VI")
        return VI;
    if (nivelString == "VII")
        return VII;
    if (nivelString == "VIII")
        return VIII;
}

/**
 * Função para converter uma string para um tipo Formacao.
 * @param formacaoString string a ser convertida em um tipo Formacao.
 */
Formacao stringParaFormacao(std::string formacaoString)
{
    if (formacaoString == "ESPECIALIZACAO")
        return ESPECIALIZACAO;
    if (formacaoString == "MESTRADO")
        return MESTRADO;
    if (formacaoString == "DOUTORADO")
        return DOUTORADO;
}

void BancoDAO::cadastrarProfessor()
{
    std::cout << "#####################################" << std::endl;
    std::cout << "Digite o numero equivalente ao nivel do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cout << "1 - I" << std::endl;
    std::cout << "2 - II" << std::endl;
    std::cout << "3 - III" << std::endl;
    std::cout << "4 - IV" << std::endl;
    std::cout << "5 - V" << std::endl;
    std::cout << "6 - VI" << std::endl;
    std::cout << "7 - VII" << std::endl;
    std::cout << "8 - VIII" << std::endl;
    std::cin >> i;
    level = static_cast<Nivel>(i - 1);

    std::cout << "Digite o numero equivalente a formacao do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cout << "1 - ESPECIALIZACAO" << std::endl;
    std::cout << "2 - MESTRADO" << std::endl;
    std::cout << "3 - DOUTORADO" << std::endl;
    std::cin >> i;
    training = static_cast<Formacao>(i - 1);

    std::cout << "Digite a disciplina do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;

    Professor *professor = new Professor(level, training, s);

    std::cout << "Digite o nome do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    professor->setNome(s);

    std::cout << "Digite o cpf do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    professor->setCpf(s);

    std::cout << "Digite a data de nascimento do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    professor->setDataNascimento(s);

    std::cout << "Digite o genero do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    professor->setGenero(s);

    std::cout << "Digite a rua do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    professor->setRua(s);

    std::cout << "Digite o numero do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> i;
    professor->setNumero(i);

    std::cout << "Digite o bairro do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    professor->setBairro(s);

    std::cout << "Digite a cidade do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    professor->setCidade(s);

    std::cout << "Digite o cep do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    professor->setCep(s);

    std::cout << "Digite a matricula do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    professor->setMatricula(s);

    std::cout << "Digite o salario do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> f;
    professor->setSalario(f);

    std::cout << "Digite o departamento do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    professor->setDepartamento(s);

    std::cout << "Digite a carga horaria do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> i;
    professor->setCargaHoraria(i);

    std::cout << "Digite a data de ingresso do(a) professor(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    professor->setDataIngresso(s);

    professores.push_back(*professor);

    std::cout << "#####################################" << std::endl;
    std::cout << "Professor(a) cadastrado(a) com sucesso!!:" << std::endl;
    std::cout << "#####################################" << std::endl;
}

void BancoDAO::cadastrarTecnicoADM()
{
    char resposta;

    std::cout << "#####################################" << std::endl;
    std::cout << "Digite a funcao do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;

    std::cout << "Deseja alterar o adicional de produtividade padrao (0.25) do(a) tecnico(a) administrativo(a) a ser cadastrado(a)? R: S/N" << std::endl;
    std::cin >> resposta;

    if (resposta == 'S')
    {
        std::cout << "Digite o novo adicional de produtividade em ponto flutuante do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
        std::cin >> f;
    }
    else
    {
        std::cout << "Adicional de produtividade esta como padrao (0.25):" << std::endl;
    }

    TecnicoADM *tecnicoADM = new TecnicoADM(f, s);

    std::cout << "Digite o nome do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    tecnicoADM->setNome(s);

    std::cout << "Digite o cpf do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    tecnicoADM->setCpf(s);

    std::cout << "Digite a data de nascimento do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    tecnicoADM->setDataNascimento(s);

    std::cout << "Digite o genero do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    tecnicoADM->setGenero(s);

    std::cout << "Digite a rua do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    tecnicoADM->setRua(s);

    std::cout << "Digite o numero do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> i;
    tecnicoADM->setNumero(i);

    std::cout << "Digite o bairro do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    tecnicoADM->setBairro(s);

    std::cout << "Digite a cidade do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    tecnicoADM->setCidade(s);

    std::cout << "Digite o cep do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    tecnicoADM->setCep(s);

    std::cout << "Digite a matricula do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    tecnicoADM->setMatricula(s);

    std::cout << "Digite o salario do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> f;
    tecnicoADM->setSalario(f);

    std::cout << "Digite o departamento do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    tecnicoADM->setDepartamento(s);

    std::cout << "Digite a carga horaria do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> i;
    tecnicoADM->setCargaHoraria(i);

    std::cout << "Digite a data de ingresso do(a) tecnico(a) administrativo(a) a ser cadastrado(a):" << std::endl;
    std::cin >> s;
    tecnicoADM->setDataIngresso(s);

    tecnicosADM.push_back(*tecnicoADM);

    std::cout << "#####################################" << std::endl;
    std::cout << "Tecnico(a) administrativo(a) cadastrado(a) com sucesso!!:" << std::endl;
    std::cout << "#####################################" << std::endl;
}

void BancoDAO::listarProfessores()
{
    std::cout << "#####################################" << std::endl;
    std::cout << "Lista dos professores cadastrados:" << std::endl;

    for (int i = 0; i < professores.size(); i++)
    {
        std::cout << "Nome: " << professores[i].getNome() << " // Disciplina: " << professores[i].getDisciplina() << std::endl;
    }
}

void BancoDAO::listarTecnicosADM()
{
    std::cout << "#####################################" << std::endl;
    std::cout << "Lista dos tecnicos cadastrados:" << std::endl;

    for (int i = 0; i < tecnicosADM.size(); i++)
    {
        std::cout << "Nome: " << tecnicosADM[i].getNome() << " // Funcao: " << tecnicosADM[i].getFuncaoDesepenhada() << std::endl;
    }
}

void BancoDAO::deletarProfessor(int matricula)
{
    int encontrou = 0;

    std::cout << "#####################################" << std::endl;

    for (i = 0; i < professores.size(); i++)
    {
        if (matricula == stoi(professores[i].getMatricula()))
        {
            professores.erase(professores.begin() + i);

            std::cout << "Professor(a) removido(a) com sucesso!" << std::endl;

            encontrou++;
        }
    }

    if (encontrou == 0)
    {
        std::cout << "Erro! Professor(a) inexistente!" << std::endl;
    }
}

void BancoDAO::deletarTecnicoADM(int matricula)
{
    int encontrou = 0;

    std::cout << "#####################################" << std::endl;

    for (int i = 0; i < tecnicosADM.size(); i++)
    {
        if (matricula == stoi(tecnicosADM[i].getMatricula()))
        {
            tecnicosADM.erase(tecnicosADM.begin() + i);

            std::cout << "Tecnico(a) removido(a) com sucesso!" << std::endl;

            encontrou++;
        }
    }

    if (encontrou == 0)
    {
        std::cout << "Erro! Tecnico(a) inexistente!" << std::endl;
    }
}

void BancoDAO::buscarProfessor(int matricula)
{
    int encontrou = 0;

    std::cout << "#####################################" << std::endl;

    for (i = 0; i < professores.size(); i++)
    {
        if (matricula == stoi(professores[i].getMatricula()))
        {
            std::cout << "DADOS PESSOAIS: " << std::endl;
            std::cout << "Nome: " << professores[i].getNome() << std::endl;
            std::cout << "CPF: " << professores[i].getCpf() << std::endl;
            std::cout << "Data de nascimento: " << professores[i].getDataNascimento() << std::endl;
            std::cout << "Genero: " << professores[i].getGenero() << std::endl;

            std::cout << "\nDADOS DE ENDERECO: " << std::endl;
            std::cout << "Rua: " << professores[i].getRua() << std::endl;
            std::cout << "Numero: " << professores[i].getNumero() << std::endl;
            std::cout << "Bairro: " << professores[i].getBairro() << std::endl;
            std::cout << "Cidade: " << professores[i].getCidade() << std::endl;
            std::cout << "CEP: " << professores[i].getCep() << std::endl;

            std::cout << "\nDADOS DE PROFISSAO: " << std::endl;
            std::cout << "Matricula: " << professores[i].getMatricula() << std::endl;
            std::cout << "Salario: " << professores[i].getSalario() << std::endl;
            std::cout << "Departamento: " << professores[i].getDepartamento() << std::endl;
            std::cout << "Carga horaria: " << professores[i].getCargaHoraria() << std::endl;
            std::cout << "Data ingresso: " << professores[i].getDataIngresso() << std::endl;
            std::cout << "Nivel: " << nivelParaString(professores[i].getNivelProfessor()) << std::endl;
            std::cout << "Formacao: " << formacaoParaString(professores[i].getFormacaoProfessor()) << std::endl;
            std::cout << "Disciplina: " << professores[i].getDisciplina() << std::endl;

            std::cout << "\nSTATUS: " << std::endl;
            Professor::estaTrabalhando();

            encontrou++;
        }
    }

    if (encontrou == 0)
    {
        std::cout << "Erro! Professor(a) inexistente!" << std::endl;
    }
}

void BancoDAO::buscarTecnicoADM(int matricula)
{
    int encontrou = 0;

    std::cout << "#####################################" << std::endl;

    for (i = 0; i < tecnicosADM.size(); i++)
    {
        if (matricula == stoi(tecnicosADM[i].getMatricula()))
        {
            std::cout << "DADOS PESSOAIS: " << std::endl;
            std::cout << "Nome: " << tecnicosADM[i].getNome() << std::endl;
            std::cout << "CPF: " << tecnicosADM[i].getCpf() << std::endl;
            std::cout << "Data de nascimento: " << tecnicosADM[i].getDataNascimento() << std::endl;
            std::cout << "Genero: " << tecnicosADM[i].getGenero() << std::endl;

            std::cout << "\nENDERECO: " << std::endl;
            std::cout << "Rua: " << tecnicosADM[i].getRua() << std::endl;
            std::cout << "Numero: " << tecnicosADM[i].getNumero() << std::endl;
            std::cout << "Bairro: " << tecnicosADM[i].getBairro() << std::endl;
            std::cout << "Cidade: " << tecnicosADM[i].getCidade() << std::endl;
            std::cout << "CEP: " << tecnicosADM[i].getCep() << std::endl;

            std::cout << "\nDADOS DE PROFISSAO: " << std::endl;
            std::cout << "Matricula: " << tecnicosADM[i].getMatricula() << std::endl;
            std::cout << "Salario: " << tecnicosADM[i].getSalario() << std::endl;
            std::cout << "Departamento: " << tecnicosADM[i].getDepartamento() << std::endl;
            std::cout << "Carga horaria: " << tecnicosADM[i].getCargaHoraria() << std::endl;
            std::cout << "Data ingresso: " << tecnicosADM[i].getDataIngresso() << std::endl;
            std::cout << "Acional de produtividade: " << tecnicosADM[i].getAdicionalProdutividade() << std::endl;
            std::cout << "Funcao desempenhada: " << tecnicosADM[i].getFuncaoDesepenhada() << std::endl;

            std::cout << "\nSTATUS: " << std::endl;
            TecnicoADM::estaTrabalhando();

            encontrou++;
        }
    }

    if (encontrou == 0)
    {
        std::cout << "Erro! Tecnico(a) inexistente!" << std::endl;
    }
}

void BancoDAO::ajustaSalario(int cargo, int matricula, float novoSal)
{
    int encontrou = 0;

    if (cargo == 1)
    {
        std::cout << "#####################################" << std::endl;

        for (i = 0; i < professores.size(); i++)
        {
            if (matricula == stoi(professores[i].getMatricula()))
            {
                professores[i].setSalario(novoSal);

                encontrou++;
            }
        }

        if (encontrou == 0)
        {
            std::cout << "Erro! Professor(a) inexistente!" << std::endl;
        }
    }
    else
    {

        std::cout << "#####################################" << std::endl;

        for (i = 0; i < tecnicosADM.size(); i++)
        {
            if (matricula == stoi(tecnicosADM[i].getMatricula()))
            {
                tecnicosADM[i].setSalario(novoSal);

                encontrou++;
            }
        }

        if (encontrou == 0)
        {
            std::cout << "Erro! Tecnico(a) inexistente!" << std::endl;
        }
    }
}

void BancoDAO::ajustaSalario(int cargo, int matricula, int operacao, float percentual)
{
    float novoSal;
    int encontrou = 0;

    if (cargo == 1)
    {
        std::cout << "#####################################" << std::endl;

        for (i = 0; i < professores.size(); i++)
        {
            if (matricula == stoi(professores[i].getMatricula()))
            {
                if (operacao == 2)
                {
                    novoSal = professores[i].getSalario() + (professores[i].getSalario() * percentual) / 100;
                    professores[i].setSalario(novoSal);
                }
                else
                {
                    novoSal = professores[i].getSalario() - (professores[i].getSalario() * percentual) / 100;
                    professores[i].setSalario(novoSal);
                }

                encontrou++;
            }
        }

        if (encontrou == 0)
        {
            std::cout << "Erro! Professor(a) inexistente!" << std::endl;
        }
    }
    else
    {

        std::cout << "#####################################" << std::endl;

        for (i = 0; i < tecnicosADM.size(); i++)
        {
            if (matricula == stoi(tecnicosADM[i].getMatricula()))
            {

                if (operacao == 2)
                {
                    novoSal = tecnicosADM[i].getSalario() + (tecnicosADM[i].getSalario() * percentual) / 100;
                    tecnicosADM[i].setSalario(novoSal);
                }
                else
                {
                    novoSal = tecnicosADM[i].getSalario() - (tecnicosADM[i].getSalario() * percentual) / 100;
                    tecnicosADM[i].setSalario(novoSal);
                }

                encontrou++;
            }
        }

        if (encontrou == 0)
        {
            std::cout << "Erro! Tecnico(a) inexistente!" << std::endl;
        }
    }
}

void BancoDAO::lerProfessores()
{
    std::fstream arquivo;
    std::string temp;
    std::vector<std::string> linhas;

    arquivo.open("./txt/professores.txt", std::ios::in);

    while (getline(arquivo, temp))
    {
        linhas.push_back(temp);
    }

    arquivo.close();

    if (linhas.empty())
    {
        std::cout << "Arquivo vazio!" << std::endl;
    }
    else
    {
        for (int i = 0; i < linhas.size(); i += 17)
        {
            level = stringParaNivel(linhas[i]);
            training = stringParaFormacao(linhas[i + 1]);

            Professor *professor = new Professor(level, training, linhas[i + 2]);

            professor->setNome(linhas[i + 3]);
            professor->setCpf(linhas[i + 4]);
            professor->setDataNascimento(linhas[i + 5]);
            professor->setGenero(linhas[i + 6]);
            professor->setRua(linhas[i + 7]);
            professor->setNumero(stoi(linhas[i + 8]));
            professor->setBairro(linhas[i + 9]);
            professor->setCidade(linhas[i + 10]);
            professor->setCep(linhas[i + 11]);
            professor->setMatricula(linhas[i + 12]);
            professor->setSalario(stof(linhas[i + 13]));
            professor->setDepartamento(linhas[i + 14]);
            professor->setCargaHoraria(stoi(linhas[i + 15]));
            professor->setDataIngresso(linhas[i + 16]);

            professores.push_back(*professor);
        }
    }
}

void BancoDAO::lerTecnicosADM()
{
    std::fstream arquivo;
    std::string temp;
    std::vector<std::string> linhas;

    arquivo.open("./txt/tecnicosADM.txt", std::ios::in);

    while (getline(arquivo, temp))
    {
        linhas.push_back(temp);
    }

    arquivo.close();

    if (linhas.empty())
    {
        std::cout << "Arquivo vazio!" << std::endl;
    }
    else
    {
        for (int i = 0; i < linhas.size(); i += 16)
        {
            TecnicoADM *tecnicoADM = new TecnicoADM(stof(linhas[i]), linhas[i + 1]);

            tecnicoADM->setNome(linhas[i + 2]);
            tecnicoADM->setCpf(linhas[i + 3]);
            tecnicoADM->setDataNascimento(linhas[i + 4]);
            tecnicoADM->setGenero(linhas[i + 5]);
            tecnicoADM->setRua(linhas[i + 6]);
            tecnicoADM->setNumero(stoi(linhas[i + 7]));
            tecnicoADM->setBairro(linhas[i + 8]);
            tecnicoADM->setCidade(linhas[i + 9]);
            tecnicoADM->setCep(linhas[i + 10]);
            tecnicoADM->setMatricula(linhas[i + 11]);
            tecnicoADM->setSalario(stof(linhas[i + 12]));
            tecnicoADM->setDepartamento(linhas[i + 13]);
            tecnicoADM->setCargaHoraria(stoi(linhas[i + 14]));
            tecnicoADM->setDataIngresso(linhas[i + 15]);

            tecnicosADM.push_back(*tecnicoADM);
        }
    }
}

void BancoDAO::salvarProfessores()
{
    std::fstream arquivoProfessores;
    arquivoProfessores.open("./txt/professores.txt", std::ios::out);

    for (int i = 0; i < professores.size(); i++)
    {
        arquivoProfessores << nivelParaString(professores[i].getNivelProfessor()) << std::endl;
        arquivoProfessores << formacaoParaString(professores[i].getFormacaoProfessor()) << std::endl;
        arquivoProfessores << professores[i].getDisciplina() << std::endl;
        arquivoProfessores << professores[i].getNome() << std::endl;
        arquivoProfessores << professores[i].getCpf() << std::endl;
        arquivoProfessores << professores[i].getDataNascimento() << std::endl;
        arquivoProfessores << professores[i].getGenero() << std::endl;
        arquivoProfessores << professores[i].getRua() << std::endl;
        arquivoProfessores << professores[i].getNumero() << std::endl;
        arquivoProfessores << professores[i].getBairro() << std::endl;
        arquivoProfessores << professores[i].getCidade() << std::endl;
        arquivoProfessores << professores[i].getCep() << std::endl;
        arquivoProfessores << professores[i].getMatricula() << std::endl;
        arquivoProfessores << professores[i].getSalario() << std::endl;
        arquivoProfessores << professores[i].getDepartamento() << std::endl;
        arquivoProfessores << professores[i].getCargaHoraria() << std::endl;
        arquivoProfessores << professores[i].getDataIngresso() << std::endl;
    }
}

void BancoDAO::salvarTecnicosADM()
{
    std::fstream arquivoTecnicoADM;
    arquivoTecnicoADM.open("./txt/tecnicosADM.txt", std::ios::out);

    for (int i = 0; i < tecnicosADM.size(); i++)
    {
        arquivoTecnicoADM << tecnicosADM[i].getAdicionalProdutividade() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getFuncaoDesepenhada() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getNome() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getCpf() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getDataNascimento() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getGenero() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getRua() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getNumero() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getBairro() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getCidade() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getCep() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getMatricula() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getSalario() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getDepartamento() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getCargaHoraria() << std::endl;
        arquivoTecnicoADM << tecnicosADM[i].getDataIngresso() << std::endl;
    }
}

void BancoDAO::salvarFuncionarios()
{
    std::fstream arquivoFuncionarios;
    arquivoFuncionarios.open("./funcionarios.txt", std::ios::out);

    for (int i = 0; i < professores.size(); i++)
    {
        arquivoFuncionarios << nivelParaString(professores[i].getNivelProfessor()) << std::endl;
        arquivoFuncionarios << formacaoParaString(professores[i].getFormacaoProfessor()) << std::endl;
        arquivoFuncionarios << professores[i].getDisciplina() << std::endl;
        arquivoFuncionarios << professores[i].getNome() << std::endl;
        arquivoFuncionarios << professores[i].getCpf() << std::endl;
        arquivoFuncionarios << professores[i].getDataNascimento() << std::endl;
        arquivoFuncionarios << professores[i].getGenero() << std::endl;
        arquivoFuncionarios << professores[i].getRua() << std::endl;
        arquivoFuncionarios << professores[i].getNumero() << std::endl;
        arquivoFuncionarios << professores[i].getBairro() << std::endl;
        arquivoFuncionarios << professores[i].getCidade() << std::endl;
        arquivoFuncionarios << professores[i].getCep() << std::endl;
        arquivoFuncionarios << professores[i].getMatricula() << std::endl;
        arquivoFuncionarios << professores[i].getSalario() << std::endl;
        arquivoFuncionarios << professores[i].getDepartamento() << std::endl;
        arquivoFuncionarios << professores[i].getCargaHoraria() << std::endl;
        arquivoFuncionarios << professores[i].getDataIngresso() << std::endl;
    }

    for (int i = 0; i < tecnicosADM.size(); i++)
    {
        arquivoFuncionarios << tecnicosADM[i].getAdicionalProdutividade() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getFuncaoDesepenhada() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getNome() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getCpf() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getDataNascimento() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getGenero() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getRua() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getNumero() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getBairro() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getCidade() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getCep() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getMatricula() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getSalario() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getDepartamento() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getCargaHoraria() << std::endl;
        arquivoFuncionarios << tecnicosADM[i].getDataIngresso() << std::endl;
    }

    std::cout << "#####################################" << std::endl;
    std::cout << "Funcionarios salvos em (funcionarios.txt)!" << std::endl;
    std::cout << "#####################################" << std::endl;
}