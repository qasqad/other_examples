/******************************************************************************

Дана матрица натуральных чисел размера N x M
Задача – создать консольное приложение, которое обходит матрицу по спирали (по часовой или против часовой стрелке), начиная с элемента [0][0]. Вывести на экран строку чисел

Например, для матрицы:
1 2 3
4 5 6
7 8 9
Ответ будет:
1 2 3 6 9 8 7 4 5

*******************************************************************************/
using System;
class Matrix

{
    static void Main()

    {

        uint N = 0, M = 0;


        // Получение размерности матрицы

        Console.Write("Введите КОЛИЧЕСТВО СТРОК в матрице: ");
        N = Convert.ToUInt32(Console.ReadLine());


        Console.Write("\nВведите ДЛИНУ СТРОКИ в матрице: ");
        M = Convert.ToUInt32(Console.ReadLine());

        uint[,] matr = new uint[N, M];


        Console.WriteLine("\n\nПолученная матрица:\n");


        // Заполнение массива натуральными числами с 1 до N*M
        for (uint i = 0; i < N; i++)
            for (uint j = 0; j < M; j++)
                matr[i, j] = j + 1 + M * i;


        // Отображаем 
        int k = matr[N - 1, M - 1].ToString().Length;
        char space_char = ' ';

        for (uint i = 0; i < N; i++)

        {
            for (uint j = 0; j < M; j++)

                Console.Write(matr[i, j].ToString().PadLeft(k + 1, space_char));


            Console.WriteLine();


        }

    Again:

        // выбор направления обхода
        Console.Write("\n\nОбход матрицы по часовой стрелке(y/n): ");


        uint steps_sum = 0;

        // следующий шаг будет в положительном (true) или в отрицательном/противоположном (false) направлении оси?
        bool bx, bx_2;
        bool by, by_2;


        // отслеживает пройденные стороны
        int dx, dx_2;
        int dy, dy_2;

        uint x_i, x_i_2;
        uint y_i, y_i_2;

        int ans = Console.Read();

        // по часовой
        if ((ans == 89) || (ans == 121))

        {

            Console.WriteLine("\nПо часовой");

            bx = true; // идем вдоль оси x в положительном направлении (вправо)
            by = true; // идем вдоль оси y в положительном направлении (вниз)

            dx = 0;
            dy = 0;

            x_i = 0;
            y_i = 0;

            do

            {


                if (bx && by) // идем вправо сверху

                {
                    while (x_i < (M - dx))

                    {

                        Console.Write(matr[y_i, x_i] + " ");

                        x_i++;
                        steps_sum++;


                    }


                    bx = false;
                    x_i--;
                    y_i++;

                }

                if (!bx && by) // идем вниз справа

                {
                    while (y_i < (N - dy))

                    {

                        Console.Write(matr[y_i, x_i] + " ");

                        y_i++;
                        steps_sum++;

                    }

                    by = false;
                    dy++;
                    y_i--;

                    x_i--;

                }

                if (!bx && !by) // идем влево внизу

                {
                    while ((M - x_i - 1) < (M - dx))

                    {
                        Console.Write(matr[y_i, x_i] + " ");

                        x_i--;
                        steps_sum++;

                    }

                    bx = true;
                    dx++;
                    x_i++;

                    y_i--;

                }

                if (bx && !by) // идем вверх слева

                {
                    while ((N - y_i - 1) < (N - dy))

                    {
                        Console.Write(matr[y_i, x_i] + " ");

                        y_i--;
                        steps_sum++;
                    }

                    by = true;
                    y_i++;

                    x_i++;
                }

            }

            while (N * M > steps_sum);

        }

        //против часовой
        else if ((ans == 78) || (ans == 110))

        {

            Console.WriteLine("\nПротив часовой");

            by_2 = true; // идем вдоль оси y в положительном направлении (вниз)
            bx_2 = true; // идем вдоль оси x в положительном направлении (вправо)

            dx_2 = 0;
            dy_2 = 0;

            x_i_2 = 0;
            y_i_2 = 0;

            do

            {


                if (bx_2 && by_2) // идем вниз слева

                {
                    while (y_i_2 < (N - dy_2))

                    {
                        Console.Write(matr[y_i_2, x_i_2] + " ");

                        y_i_2++;
                        steps_sum++;
                    }

                    by_2 = false;
                    y_i_2--;

                    x_i_2++;


                }

                if (bx_2 && !by_2) // идем вправо снизу

                {
                    while (x_i_2 < (M - dx_2))

                    {

                        Console.Write(matr[y_i_2, x_i_2] + " ");

                        x_i_2++;
                        steps_sum++;


                    }


                    bx_2 = false;
                    x_i_2--;

                    y_i_2--;




                }

                if (!bx_2 && !by_2) // идем вверх справа

                {
                    while ((N - y_i_2 - 1) < (N - dy_2))

                    {
                        Console.Write(matr[y_i_2, x_i_2] + " ");

                        y_i_2--;
                        steps_sum++;
                    }

                    by_2 = true;
                    y_i_2++;
                    dx_2++;
                    
                    x_i_2--;


                }

                if (!bx_2 && by_2) // идем влево сверху

                {

                    while ((M - x_i_2 - 1) < (M - dx_2))

                    {
                        Console.Write(matr[y_i_2, x_i_2] + " ");

                        x_i_2--;
                        steps_sum++;

                    }

                    bx_2 = true;
                    x_i_2++;
                    dy_2++;

                    y_i_2++;



                }

            }

            while (N * M > steps_sum);


        }

        else

        {

            Console.WriteLine("\nОшибка, повторите ввод\n");
            goto Again;
        }
    }


}
