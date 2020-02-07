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

            
            dx = 0;
            dy = 0;

            x_i = 0;
            y_i = 0;



            do

                {
                    
                    while (x_i < (M - dx))

                        {

                            Console.Write(matr[y_i, x_i] + " ");

                            x_i++;
                            steps_sum++;

                            if (N * M <= steps_sum)
                                goto Finish_1;

                        }

                    x_i--;
                    y_i++;


                    while (y_i < (N - dy))

                        {

                            Console.Write(matr[y_i, x_i] + " ");

                            y_i++;
                            steps_sum++;

                            if (N * M <= steps_sum)
                                goto Finish_1;


                        }
                                       

                    dy++;
                    y_i--;

                    x_i--;
                



                    while ((M - x_i - 1) < (M - dx))

                        {
                        
                            Console.Write(matr[y_i, x_i] + " ");

                            x_i--;
                            steps_sum++;


                            if (N * M <= steps_sum)
                                goto Finish_1;


                        }


                    dx++;
                    x_i++;

                    y_i--;


                    while ((N - y_i - 1) < (N - dy))

                        {
                    
                            Console.Write(matr[y_i, x_i] + " ");

                            y_i--;
                            steps_sum++;
                    
                        }

    Finish_1:
                
                    y_i++;
                    x_i++;

            
            
                }
    
            while (N * M > steps_sum);

            


        }

        //против часовой
        else if ((ans == 78) || (ans == 110))

        {

            Console.WriteLine("\nПротив часовой");

            dx_2 = 0;
            dy_2 = 0;

            x_i_2 = 0;
            y_i_2 = 0;

            do

            {


               while (y_i_2 < (N - dy_2))

                    {
                        Console.Write(matr[y_i_2, x_i_2] + " ");

                        y_i_2++;
                        steps_sum++;

                        if (N * M <= steps_sum)
                            goto Finish_2;

                    }



                y_i_2--;
                x_i_2++;


                while (x_i_2 < (M - dx_2))

                    {

                        Console.Write(matr[y_i_2, x_i_2] + " ");

                        x_i_2++;
                        steps_sum++;

                        if (N * M <= steps_sum)
                            goto Finish_2;

                    }

                    x_i_2--;
                    y_i_2--;




               while ((N - y_i_2 - 1) < (N - dy_2))

                    {
                        Console.Write(matr[y_i_2, x_i_2] + " ");

                        y_i_2--;
                        steps_sum++;

                        if (N * M <= steps_sum)
                            goto Finish_2;

                    }

                    y_i_2++;
                    dx_2++;

                    x_i_2--;


                

                while ((M - x_i_2 - 1) < (M - dx_2))

                    {
                        Console.Write(matr[y_i_2, x_i_2] + " ");

                        x_i_2--;
                        steps_sum++;

                    }

                    
                    x_i_2++;
                    dy_2++;

    Finish_2:

                    y_i_2++;

                

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
