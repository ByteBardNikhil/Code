 for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sum; j++)
        {
            if (i == 0)
                t[i][j] = false;
            if (j == 0)
                t[i][j] = true;
        }
    }