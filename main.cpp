#include <iostream>

using namespace std;

//create a class to template of a matrix

class Matrix {

    public:

        int matrix1[3][3];

        int matrix2[3][3];

        int matrix3[3][3];

        void show_matrix(int matrix[3][3]){

            for (int i = 0; i<3; i++) {

                for (int j = 0; j<3; j++) {

                    cout << matrix[i][j] << "\t" ;

                }

                cout << endl;

            }

        }

        void add_matrix(int matrix_1[3][3], int matrix_2[3][3]) {

            
        }
};


int main(){
    cout << "MatRixSimPle" << endl;

    return 0;
}