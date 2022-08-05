
int sum_diagonal(int array[4][4])

{

//Initialize a variable diagTotal to 0.

int diagTotal = 0;

// For loop to traverse all elements of the matrix.

for (int i = 0; i < 4; ++i)

{

// Calculate the sum of the diagonal elements.

diagTotal = diagTotal + array[i][i];

}

//return the sum.

return diagTotal;

}

