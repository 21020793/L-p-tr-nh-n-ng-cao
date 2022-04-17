int** transpose(int** matrix, int nRows, int nCols)
{
    int **trans = new int*[nCols];
    for (int i = 0 ; i < nCols; i++)
    {
        trans[i] = new int [nRows];
    }
    
    for (int i = 0; i < nRows; i++)
        for (int j = 0; j < nCols; j++)
            trans[j][i] = matrix[i][j];
            
    return trans;
}
