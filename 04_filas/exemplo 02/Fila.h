
//  Implemente uma fila que gerencie uma fila de processos. 
//  Cada processo deve ter:
//  - um id �nico e sequencial, o comando a ser executado, o usu�rio, o tempo estimado de execu��o e a quantidade de mem�ria necess�ria.

// Implementar m�todos que:

// - liste a fila de processos;
// - mostre o total de tempo estimado para concluir a atual fila de processos

class Fila {
  private:
    struct elemento {
      int pid;
      string comando;
      string usuario;
      int tempo;
      int memoria;
      elemento *proximoElemento;
    };
    typedef elemento *PonteiroElemento;
    PonteiroElemento inicio;
    PonteiroElemento fim;
    int contPid;
  public:
    Fila();
    bool vazia();
    bool cheia();
    bool inserir(string auxComando, string auxUsuario, int auxTempo, int auxMemoria);
    bool remover(int &auxPid, string &auxComando, string &auxUsuario, int &auxTempo, int &auxMemoria);
    string listar();
    int tempoTotal();
};
