#include <iostream>

using namespace std;

//create a class to template of a matrix

class Matrix {

    public:

        int matrix1[3][3];

        int matrix2[3][3];

        int matrix3[3][3];

        int trace = 0;


        //show the matrix


        void show_matrix(int matrix[3][3]){

            for (int i = 0; i<3; i++) {

                for (int j = 0; j<3; j++) {

                    cout << matrix[i][j] << "\t" ;

                }

                cout << endl;

            }

        }


        //addition method

        void add_matrix(int matrix_1[3][3], int matrix_2[3][3], int matrix3[3][3]) {

            for (int i = 0; i<3; i++) {

                for (int j = 0; j<3; j++) {
                
                    matrix3[i][j] = matrix1[i][j] + matrix2[i][j];

                }   

            }

        }



        //subtraction method

        void subtract_matrix(int matrix_1[3][3], int matrix_2[3][3], int matrix3[3][3]) {

            for (int i = 0; i<3; i++) {

                for (int j = 0; j<3; j++) {
                
                    matrix3[i][j] = matrix1[i][j] - matrix2[i][j];

                }   

            }

        }



        //trace calcutor method
        void trace_matrix(int matrix[3][3]){

            trace = matrix[0][0] + matrix[1][1] + matrix[2][2];

        }
};


int main(){
    cout << "MatRixSimPle" << endl;

    return 0;
}