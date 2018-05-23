
class Curso
{
    public:

        Curso(int,char*);
        char* get_nombre();
        int get_nota();
        void set_nombre(char*);
        void set_nota(int);
        void obtenerinfo();


        void setearNotas(int);
        void ObtenerNotas();
        float Obtenermayor();
        float ObtenerMenor();
        float Promedio();
        void ordenarnotas();


        int MayorPrim();
        int MenorPrim();
        int SumNotas();
        void invertir();


        /////////////////
        int *notas;
        int nota;
        int cantnotas;
        char* nombre;
    private:
        bool prim(int);

};
