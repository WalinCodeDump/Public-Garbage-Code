// This code will multiply two 2D matrices.
// It sucks and is unoptimized. Use at your own risk.
// If you're here for laughs or for education, though, welcome!
// Enjoy your time reading this.

#include <iostream>
#include <fstream>

**int matmul(int** matrixA, int** matrixB);

int main(int argc, char** argv) {

bool outToFile = true; // Declared true because it's assumed this will write to a file.
if (argc < 2) {
  std::cout << "No output file found. Output will be written to the terminal."
  outToFile = false;
}
if (argc < 1) {
  std::cout << "No input file found. Input will be read from the terminal."
  // Place the input step here

  //int** result = matmul(A,B);
  return 0;
}

// Writing from a file to a file.
// More code will be here.

// int** result = matmul(A,B);
return 0;
}
