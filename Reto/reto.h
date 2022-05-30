using namespace std;

class Video {
    public:  
        string tipoVideo, nombreVideo, genero;
        int calificacion, annoLanzamiento, duracion;      
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

class Pelicula: public Video {
    public:
        Pelicula(string _tipoVideo, string _nombreVideo, string _genero,int _duracion, int _annoLanzamiento,  int _calificacion): Video(_tipoVideo, _nombreVideo, _genero,_duracion,_annoLanzamiento,_calificacion){
            tipoVideo = _tipoVideo;
            nombreVideo = _nombreVideo;
            genero = _genero;
            annoLanzamiento = _annoLanzamiento;
            calificacion = _calificacion;
            duracion = _duracion;
        }
        
        Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _duracion, int _annoLanzamiento):Video(_tipoVideo, _nombreVideo, _genero, _duracion, _annoLanzamiento){
            tipoVideo = _tipoVideo;
            nombreVideo = _nombreVideo;
            genero = _genero;
            annoLanzamiento = _annoLanzamiento;
            duracion = _duracion;
        }
};

class Serie: public Video { 
    public:
        Serie(string _tipoVideo, string _nombreVideo, string _genero,int _duracion, int _annoLanzamiento,  int _calificacion): Video(_tipoVideo, _nombreVideo, _genero,_duracion,_annoLanzamiento,_calificacion){
            tipoVideo = _tipoVideo;
            nombreVideo = _nombreVideo;
            genero = _genero;
            annoLanzamiento = _annoLanzamiento;
            calificacion = _calificacion;
            duracion = _duracion;
        }

        Serie(string _tipoVideo, string _nombreVideo, string _genero, int _duracion, int _annoLanzamiento):Video(_tipoVideo, _nombreVideo, _genero, _duracion, _annoLanzamiento){
            tipoVideo = _tipoVideo;
            nombreVideo = _nombreVideo;
            genero = _genero;
            annoLanzamiento = _annoLanzamiento;
            duracion = _duracion;
        }
};
