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

                cout << '\n';

            }

            cout << '\n';

        }


        //addition method

        void add_matrix(int matrix_1[3][3], int matrix_2[3][3], int matrix_3[3][3]) {

            for (int i = 0; i<3; i++) {

                for (int j = 0; j<3; j++) {
                
                    matrix_3[i][j] = matrix_1[i][j] + matrix_2[i][j];

                }   

            }

        }



        //subtraction method

        void subtract_matrix(int matrix_1[3][3], int matrix_2[3][3], int matrix_3[3][3]) {

            for (int i = 0; i<3; i++) {

                for (int j = 0; j<3; j++) {
                
                    matrix_3[i][j] = matrix_1[i][j] - matrix_2[i][j];

                }   

            }

        }



        //trace calcutor method
        void trace_matrix(int matrix[3][3]){

            trace = matrix[0][0] + matrix[1][1] + matrix[2][2];

        }

        //multiplication of matrix
        void multiply_matrix(int matrix_1[3][3], int matrix_2[3][3], int matrix_3[3][3]){

            for (int i = 0; i<3; i++) {
                
                for(int j = 0; j<3; j++){
                    
                    for (int k = 0; k<3; k++) {
                    
                        matrix_3[i][j] = matrix_1[j][k]*matrix_2[k][j];

                    }

                }

            }

        }
        
};


int main(){
    cout << "MatRixSimPle" << endl;
    
    Matrix m1;
    
    for (int i = 0; i<3; i++) {
        
        for (int j = 0; j<3; j++) {

            m1.matrix1[i][j] = i;

        }
    }


    for (int i = 0; i<3; i++) {
            
            for (int j = 0; j<3; j++) {

                m1.matrix2[i][j] = j+1;

            }
    }


    m1.show_matrix(m1.matrix1);
    m1.show_matrix(m1.matrix2);
    m1.add_matrix(m1.matrix1, m1.matrix2, m1.matrix3);
    m1.show_matrix(m1.matrix3);
    m1.subtract_matrix(m1.matrix1, m1.matrix2, m1.matrix3);
    m1.show_matrix(m1.matrix3);
    m1.trace_matrix(m1.matrix1);
    cout << m1.trace << endl;
    m1.trace_matrix(m1.matrix2);
    cout << m1.trace << endl;
    m1.trace_matrix(m1.matrix3);
    cout << m1.trace << endl;



    return 0;


}