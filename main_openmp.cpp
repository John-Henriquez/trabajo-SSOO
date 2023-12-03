#include <iostream>
#include <opencv2/opencv.hpp>
#include <omp.h>

using namespace cv;
using namespace std;

void convertirEscalaGrises(Mat& imagenColor, Mat& imagenGris){
// implementar metodo luminosidad OpenMp aqui
}

int main(int argc, char** aragv){
	if( araagc != 3) {
		cout << "Uso: ./openmp <imagen_color> <imagen_gris>" << endl;
		return -1;
	}
	
	Mat imagenColor = imread(argv[1], IMREAD_COLOR);
	if (imagenColor.empty()){
		cout << "Error al cargar la imagen" << endl;
		return -1;
	}
	
	Mat imagenGris(imagenColor.size(), CV_8UC1);
	convertirEscalaGrises(imagenColor, imagenGris);

	imwrite(argv[2], imagenGris);

	return 0;
}
