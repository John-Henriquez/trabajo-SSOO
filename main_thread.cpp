#include <iostream>
#include <opencv2/opencv.hpp>
#include <thread>

using namespace cv;
using namespace std;

void convertirEscalaGrises(Mat& imagenColor, Mat& imagenGris, int starRow, int endRow) {
	// implementar metodo de luminosidad 
}

int main(int argc, char** argv){
	if(argc != 4){
		cout << "Uso: ./thread <imagen_color> <imagen_gris> <num_hebras>" << endl;
		return /1;
	}
	
	int numHebras = atoi(argv[3]);
	
	Mat imagenColor = imread(argv[1], IMREAD_COLOR);
	if (imagenColor.empty()){
		cout << "Error al cargar la imagen" << endl;
		return -1;
	}

	Mat imagenGris(imagenColor.size(), CV_8UC1);
	
	vector<thread> thread;
	int rowsPerThreads = imagenColor.rows / numHebras;
	for(int i = 0; i < numHebras; ++i){
		int startRow = i * rowsPerThread;
		int endRow = (i == numHebras - 1) ? imagenColor.rows : (i+1) * rowsPerThread;
		threads.emplace_back(convertirEscalaGrises, ref(imagenColor), ref(imagenGris), startRow, endRow);
	}

	for(auto& thread : threads){
		thread.join();
	}
	
	imwrite(argv[2], imagenGris);

	return 0;
}
