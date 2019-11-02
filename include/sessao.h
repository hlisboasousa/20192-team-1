#ifndef sessao_h
#define sessao_h
#include <iostream>
#include <map>
#include <iterator>
#include <string>
#include "sala.h"
#include "filme.h"
#include "assento.h"


class Sessao {
    private:
        Sala sala;
        std::string data; // formato anomesdia ex: 20191131 ou 20191102
        std::string filme;
        std::multimap <std::string,Assento> mapa_assentos;
    public:
        Sessao(Sala sala, std::string filme, std::string data);
        Sessao();
        ~Sessao();
        void imprimirMapaAssentos();
        std::string getData();
        std::string getChaveSessao();
        std::string getFilme();
        Sala getSala();
};
#endif