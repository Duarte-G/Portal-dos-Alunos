#ifndef MATERIAS_H
#define MATERIAS_H

#include <string>
#include <vector>
#include "Professores.h"
#include "Alunos.h"

using namespace std;

class Materias {
private: 
    string nomeMateria;
    int periodo;
    int maxAlunos = 44;
    Professores professorResponsavel;
    vector<Alunos> alunosMatriculados;
    bool verificarRestricaoPeriodo(int periodoAluno, int periodoMateria) const;

public:
    //Construtor
    Materias(const string& nomeMateria, int periodo, const Professores& professor, const vector<Alunos>& alunos);

    // Funções para trocar as variaveis privadas
    void setNomeMateria(const string& nome);
    void setPeriodo(int periodo);
    void setProfessorResponsavel (const Professores& professor);
    
    // Funções de interações dos alunos
    void matricularAluno (const Alunos& aluno);
    bool verificarAlunoMatriculado(const Alunos& aluno) const;
    void desmatricularAluno (const Alunos& aluno);

    // Funções para ler e devolver os valores das variaveis privadas
    string getNomeMateria() const;
    int getPeriodo() const;
    Professores getProfessorResponsavel() const;
    vector<Alunos> getAlunosMatriculados() const;
    int getMax() const;
    float getPorcentagem() const;

    // Funções de inicialização
    static vector<Materias> inicializarMaterias();
};


#endif