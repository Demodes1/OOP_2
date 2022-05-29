using namespace std;

class Video {
    private:
        string tipoVideo, nombreVideo, genero;
        int calificacion, annoLanzamiento, duracion;
    public:        
        // Constructor
        
        Video(string _tipoVideo, string _nombreVideo, string _genero,int _duracion, int _annoLanzamiento,  int _calificacion){
            tipoVideo = _tipoVideo;
            nombreVideo = _nombreVideo;
            genero = _genero;
            annoLanzamiento = _annoLanzamiento;
            calificacion = _calificacion;
            duracion = _duracion;
        }
        
        Video(string _tipoVideo, string _nombreVideo, string _genero, int _duracion, int _annoLanzamiento){
            tipoVideo = _tipoVideo;
            nombreVideo = _nombreVideo;
            genero = _genero;
            annoLanzamiento = _annoLanzamiento;
            duracion = _duracion;
        }

        // Method definition
        void setCalificaVideo(int _calificacion);
        void getCalificaVideo();

        void setMuestraDatos(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _annoLanzamiento, int _duracion);
        void getMuestraDatos();
};