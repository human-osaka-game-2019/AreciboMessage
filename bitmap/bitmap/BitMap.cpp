#include "BitMap.h"

BitMap::Color BitMap::ChangeColor(int j,int i)
{
#define Return(width,height,color) {if(width == j && height == i){return color;}}

	//一行目
	for (int col = scale * 0; col < scale * 1; col++)
	{
		for (int row = 0;row < scale;row++)
		{
			Return(col, 22 * scale + row, White);
			//
			Return(col, 43 * scale + row, Green);
			//
			Return(col, 48 * scale + row, Green);
			//
			Return(col, 49 * scale + row, Green);
			//
			Return(col, 50 * scale + row, Green);
			//
			Return(col, 51 * scale + row, Green);
			//
			Return(col, 53 * scale + row, Green);
			//
			Return(col, 58 * scale + row, Green);
			//
			Return(col, 59 * scale + row, Green);
			//
			Return(col, 60 * scale + row, Green);
			//
			Return(col, 61 * scale + row, Green);
			//
			Return(col, 69 * scale + row, White);
			//
			Return(col, 70 * scale + row, White);
		}

	}
	//二行目
	for (int col = scale * 1; col < scale * 2; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, Blue);
			//
			Return(col, 5 * scale + row, Purple);
			//
			Return(col, 6 * scale + row, Purple);
			//
			Return(col, 7 * scale + row, Purple);
			//
			Return(col, 31 * scale + row, Blue);
			//
			Return(col, 32 * scale + row, Blue);
			//
			Return(col, 43 * scale + row, Green);
			//
			Return(col, 48 * scale + row, Green);
			//
			Return(col, 49 * scale + row, Green);
			//
			Return(col, 51 * scale + row, Green);
			//
			Return(col, 53 * scale + row, Green);
			//
			Return(col, 58 * scale + row, Green);
			//
			Return(col, 59 * scale + row, Green);
			//
			Return(col, 61 * scale + row, Green);
		}	
	}
	//三行目
	for (int col = scale * 2; col < scale * 3; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, Blue);
			//
			Return(col, 7 * scale + row, Purple);
			//
			Return(col, 8 * scale + row, Purple);
			//
			Return(col, 14 * scale + row, Yellow);
			//
			Return(col, 15 * scale + row, Yellow);
			//
			Return(col, 16 * scale + row, Yellow);
			//
			Return(col, 18 * scale + row, Blue);
			//
			Return(col, 19 * scale + row, Blue);
			//
			Return(col, 20 * scale + row, Blue);
			//
			Return(col, 22 * scale + row, White);
			//
			Return(col, 24 * scale + row, Blue);
			//
			Return(col, 25 * scale + row, Blue);
			//
			Return(col, 26 * scale + row, Blue);
			//
			Return(col, 27 * scale + row, Blue);
			//
			Return(col, 30 * scale + row, Blue);
			//
			Return(col, 33 * scale + row, Blue);
			//
			Return(col, 40 * scale + row, Blue);
			//
			Return(col, 43 * scale + row, Green);
			//
			Return(col, 48 * scale + row, Green);
			//
			Return(col, 53 * scale + row, Green);
			//
			Return(col, 58 * scale + row, Green);
			//
			Return(col, 69 * scale + row, White);
			//
			Return(col, 71 * scale + row, White);
		}
	}
	//四行目
	for (int col = scale * 3; col < scale * 4; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, Blue);
			//
			Return(col, 8 * scale + row, Purple);
			//
			Return(col, 9 * scale + row, Purple);
			//
			Return(col, 14  * scale + row, Yellow);
			//
			Return(col, 15 * scale + row, Yellow);
			//				 
			Return(col, 16 * scale + row, Yellow);
			//				 
			Return(col, 22 * scale + row, White);
			//				 
			Return(col, 29 * scale + row, Blue);
			//				 
			Return(col, 34 * scale + row, Blue);
			//				 
			Return(col, 40 * scale + row, Blue);
			//				 
			Return(col, 43 * scale + row, Green);
			//				 
			Return(col, 46 * scale + row, Green);
			//				 
			Return(col, 48 * scale + row, Green);
			//				 
			Return(col, 49 * scale + row, Green);
			//				 
			Return(col, 53 * scale + row, Green);
			//				 
			Return(col, 56 * scale + row, Green);
			//				 
			Return(col, 58 * scale + row, Green);
			//				 
			Return(col, 59 * scale + row, Green);

		}
	}
	//五行目
	for (int col = 4 * scale; col < scale * 5; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, Blue);
			//
			Return(col, 9* scale + row, Purple);
			//
			Return(col, 10* scale + row, Purple);
			//
			Return(col, 14* scale + row, Yellow);
			//
			Return(col, 15* scale + row, Yellow);
			//
			Return(col, 16* scale + row, Yellow);
			//
			Return(col, 22* scale + row, White);
			//
			Return(col, 28* scale + row, Blue);
			//
			Return(col, 35* scale + row, Blue);
			//
			Return(col, 39* scale + row, Blue);
			//
			Return(col, 43* scale + row, Green);
			//
			Return(col, 44* scale + row, Green);
			//
			Return(col, 48* scale + row, Green);
			//
			Return(col, 53* scale + row, Green);
			//
			Return(col, 54* scale + row, Green);
			//
			Return(col, 58* scale + row, Green);
			//
			Return(col, 69* scale + row, White);
			//
			Return(col, 70* scale + row, White);
			//
			Return(col, 71* scale + row, White);
		}
	}
	//六行目
	for (int col = scale * 5; col < scale * 6; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 2 *scale+ row, Purple);
			//			  
			Return(col, 3 *scale+ row, Purple);
			//			  
			Return(col, 4 *scale+ row, Purple);
			//			  
			Return(col, 5 *scale+ row, Purple);
			//			  
			Return(col, 6 *scale+ row, Purple);
			//			   
			Return(col, 7 *scale+ row, Purple);
			//			   
			Return(col, 8 *scale+ row, Purple);
			//			   
			Return(col, 10 *scale + row, Purple);
			//			   
			Return(col, 28 *scale + row, Blue);
			//			   
			Return(col, 35 *scale + row, Blue);
			//			   
			Return(col, 39 *scale + row, Blue);
		}
	}
	//七行目
	for (int col = scale * 6; col < scale * 7; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 7 * scale + row, Purple);
			//
			Return(col, 10 * scale + row, Purple);
			//			     
			Return(col, 11 * scale + row, Purple);
			//			     
			Return(col, 15 * scale + row, Yellow);
			//			     
			Return(col, 23 * scale + row, Red);
			//			     
			Return(col, 27 * scale + row, Blue);
			//			     
			Return(col, 36 * scale + row, Blue);
			//			     
			Return(col, 38 * scale + row, Blue);
			//			     
			Return(col, 48 * scale + row, Green);
			//			     
			Return(col, 51 * scale + row, Green);
			//			     
			Return(col, 58 * scale + row, Green);
			//			     
			Return(col, 61 * scale + row, Green);
			//			     
			Return(col, 69 * scale + row, White);
			//			     
			Return(col, 72 * scale + row, White);
		}
	}
	//八行目
	for (int col = scale * 7; col < scale * 8; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0* scale + row, White);
			//
			Return(col, 1* scale + row, White);
			//
			Return(col, 6 * scale + row, Purple);
			//
			Return(col, 11 * scale + row, Purple);
			//
			Return(col, 24 * scale + row, Red);
			//
			Return(col, 27 * scale + row, Blue);
			//
			Return(col, 36 * scale + row, Blue);
			//
			Return(col, 38 * scale + row, Blue);
			//
			Return(col, 48 * scale + row, Green);
			//
			Return(col, 51 * scale + row, Green);
			//
			Return(col, 58 * scale + row, Green);
			//
			Return(col, 59 * scale + row, Green);
			//
			Return(col, 61 * scale + row, Green);
		}

	}
	//九行目
	for (int col = scale * 8; col < scale * 9; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, White);
			//
			Return(col, 5 * scale + row, Purple);
			//
			Return(col, 11 * scale + row, Purple);
			//				 
			Return(col, 12 * scale + row, Purple);
			//				 
			Return(col, 15 * scale + row, Yellow);
			//				 
			Return(col, 18 * scale + row, Red);
			//				 
			Return(col, 25 * scale + row, Red);
			//				 
			Return(col, 27 * scale + row, Blue);
			//				 
			Return(col, 48 * scale + row, Green);
			//				 
			Return(col, 49 * scale + row, Green);
			//				 
			Return(col, 50 * scale + row, Green);
			//				 
			Return(col, 58 * scale + row, Green);
			//				 
			Return(col, 59 * scale + row, Green);
			//				 
			Return(col, 61 * scale + row, Green);
			//				 
			Return(col, 69 * scale + row, White);
			//				 
			Return(col, 70 * scale + row, White);
			//				 
			Return(col, 72 * scale + row, White);
		
		}

	}
	//十行目
	for (int col = scale * 9; col < scale * 10; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, White);
			//
			Return(col, 4 * scale + row, Purple);
			//
			Return(col, 11 * scale + row, Purple);
			//				 
			Return(col, 12 * scale + row, Purple);
			//				 
			Return(col, 18 * scale + row, Red);
			//				 
			Return(col, 19 * scale + row, Red);
			//				 
			Return(col, 20 * scale + row, Red);
			//				 
			Return(col, 21 * scale + row, Red);
			//				 
			Return(col, 22 * scale + row, Red);
			//				 
			Return(col, 23 * scale + row, Red);
			//				 
			Return(col, 24 * scale + row, Red);
			//				 
			Return(col, 25 * scale + row, Red);
			//				 
			Return(col, 48 * scale + row, Green);
			//				 
			Return(col, 49 * scale + row, Green);
			//				 
			Return(col, 58 * scale + row, Green);
			//				 
			Return(col, 63 * scale + row, Purple);
			//				 
			Return(col, 64 * scale + row, Purple);
		}
	}
	//十一行目
	for (int col = scale * 10; col < scale * 11; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, White);
			//
			Return(col, 1 * scale + row, White);
			//
			Return(col, 3 * scale + row, Purple);
			//
			Return(col, 11 * scale + row, Purple);
			//
			Return(col, 12 * scale + row, Purple);
			//
			Return(col, 16 * scale + row, Yellow);
			//
			Return(col, 22 * scale + row, Red);
			//
			Return(col, 23 * scale + row, Red);
			//
			Return(col, 24 * scale + row, Red);
			//
			Return(col, 25 * scale + row, Red);
			//
			Return(col, 26 * scale + row, Red);
			//
			Return(col, 27 * scale + row, Red);
			//
			Return(col, 30 * scale + row, White);
			//
			Return(col, 32 * scale + row, White);
			//
			Return(col, 33 * scale + row, White);
			//
			Return(col, 34 * scale + row, White);
			//
			Return(col, 35 * scale + row, White);
			//
			Return(col, 37 * scale + row, White);
			//
			Return(col, 39 * scale + row, White);
			//
			Return(col, 40 * scale + row, White);
			//
			Return(col, 42 * scale + row, White);
			//
			Return(col, 43 * scale + row, White);
			//
			Return(col, 44 * scale + row, White);
			//
			Return(col, 45 * scale + row, White);
			//
			Return(col, 46 * scale + row, White);
			//
			Return(col, 48 * scale + row, Green);
			//
			Return(col, 58 * scale + row, Green);
			//
			Return(col, 63 * scale + row, Purple);
			//
			Return(col, 65 * scale + row, Purple);
			//
			Return(col, 66 * scale + row, Purple);
			//
			Return(col, 69 * scale + row, White);
			//
			Return(col, 71 * scale + row, White);
			//
			Return(col, 72 * scale + row, White);
		}
	}
	//十二行目
	for (int col = scale * 11; col < scale * 12; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, White);
			//
			Return(col, 4 * scale + row, Purple);
			//
			Return(col, 11 * scale + row, Purple);
			//
			Return(col, 12 * scale + row, Purple);
			//
			Return(col, 18 * scale + row, Red);
			//
			Return(col, 19 * scale + row, Red);
			//
			Return(col, 20 * scale + row, Red);
			//
			Return(col, 21 * scale + row, Red);
			//
			Return(col, 22 * scale + row, Red);
			//
			Return(col, 23 * scale + row, Red);
			//
			Return(col, 24 * scale + row, Red);
			//
			Return(col, 25 * scale + row, Red);
			//
			Return(col, 31 * scale + row, White);
			//
			Return(col, 32 * scale + row, White);
			//
			Return(col, 33 * scale + row, White);
			//
			Return(col, 35 * scale + row, White);
			//
			Return(col, 36 * scale + row, White);
			//
			Return(col, 37 * scale + row, White);
			//
			Return(col, 38 * scale + row, White);
			//
			Return(col, 39 * scale + row, White);
			//
			Return(col, 40 * scale + row, White);
			//
			Return(col, 41 * scale + row, White);
			//
			Return(col, 42 * scale + row, White);
			//
			Return(col, 43 * scale + row, White);
			//
			Return(col, 44 * scale + row, White);
			//
			Return(col, 45 * scale + row, White);
			//
			Return(col, 46 * scale + row, White);
			//
			Return(col, 63 * scale + row, Purple);
			//
			Return(col, 64 * scale + row, Purple);
			//
			Return(col, 65 * scale + row, Purple);
			//
			Return(col, 66 * scale + row, Purple);
		}
	}
	//十三行目
	for (int col = scale * 12; col < scale * 13; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 1 * scale+ row, White);
			//				 
			Return(col, 5 * scale+ row, Purple);
			//				 
			Return(col, 11 * scale + row, Purple);
			//				 
			Return(col, 12 * scale + row, Purple);
			//				 
			Return(col, 15 * scale + row, Yellow);
			//				 
			Return(col, 18 * scale + row, Red);
			//				 
			Return(col, 25 * scale + row, Red);
			//				 
			Return(col, 27 * scale + row, Blue);
			//				 
			Return(col, 48 * scale + row, Green);
			//				 
			Return(col, 51 * scale + row, Green);
			//				 
			Return(col, 58 * scale + row, Green);
			//				 
			Return(col, 59 * scale + row, Green);
			//				 
			Return(col, 61 * scale + row, Green);
			//				 
			Return(col, 63 * scale + row, Purple);
			//				 
			Return(col, 67 * scale + row, Purple);
			//				 
			Return(col, 69 * scale + row, White);
			//				 
			Return(col, 70 * scale + row, White);
			//				 
			Return(col, 71 * scale + row, White);
			//				 
			Return(col, 72 * scale + row, White);
							 
		}
	}
	//十四行目
	for (int col = scale * 13; col < scale * 14; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, White);
			//				 
			Return(col, 6 * scale + row, Purple);
			//			
			Return(col, 11 * scale + row, Purple);
			//				 
			Return(col, 24 * scale + row, Red);
			//				 
			Return(col, 27 * scale + row, Blue);
			//				 
			Return(col, 48 * scale + row, Green);
			//				 
			Return(col, 49 * scale + row, Green);
			//				 
			Return(col, 51 * scale + row, Green);
			//				 
			Return(col, 58 * scale + row, Green);
			//				 
			Return(col, 59 * scale + row, Green);
			//				 
			Return(col, 61 * scale + row, Green);
			//				 
			Return(col, 63 * scale + row, Purple);
			//				 
			Return(col, 64 * scale + row, Purple);
			//				 
			Return(col, 65 * scale + row, Purple);
			//				 
			Return(col, 66 * scale + row, Purple);
			//				 
			Return(col, 67 * scale + row, Purple);
		}
	}
	//十五行目
	for (int col = scale * 14; col < scale * 15; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 7 * scale + row, Purple);
			//				 
			Return(col, 10 * scale + row, Purple);
			//				 
			Return(col, 11 * scale + row, Purple);
			//				 
			Return(col, 13 * scale + row, Yellow);
			//				 
			Return(col, 14 * scale + row, Yellow);
			//				 
			Return(col, 15 * scale + row, Yellow);
			//				 
			Return(col, 23 * scale + row, Red);
			//				 
			Return(col, 28 * scale + row, Blue);
			//
			Return(col, 37 * scale + row, Blue);
			//
			Return(col, 48 * scale + row, Green);
			//				 
			Return(col, 49 * scale + row, Green);
			//				 
			Return(col, 51 * scale + row, Green);
			//				 
			Return(col, 58 * scale + row, Green);
			//				 
			Return(col, 60 * scale + row, Green);
			//				 
			Return(col, 69 * scale + row, White);
		}
	}
	//十六行目
	for (int col = scale * 15; col < scale * 16; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 2 * scale + row, Purple);
			//				 
			Return(col, 3 * scale + row, Purple);
			//				 
			Return(col, 4 * scale + row, Purple);
			//				 
			Return(col, 5 * scale + row, Purple);
			//				 
			Return(col, 6 * scale + row, Purple);
			//				 
			Return(col, 7 * scale + row, Purple);
			//			 
			Return(col, 8 * scale + row, Purple);
			//				 
			Return(col, 10 * scale + row, Purple);
			//
			Return(col, 28 * scale + row, Blue);
			//
			Return(col, 37 * scale + row, Blue);
			//				 
			Return(col, 48 * scale + row, Green);
			//				 
			Return(col, 49 * scale + row, Green);
			//				 
			Return(col, 58 * scale + row, Green);
			//				 
			Return(col, 60 * scale + row, Green);
			//				 
			Return(col, 70 * scale + row, White);
		}
	}
	//十七行目
	for (int col = scale * 16; col < scale * 17; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, Blue);
			//				 
			Return(col, 9 * scale + row, Purple);
			//				 
			Return(col, 10 * scale + row, Purple);
			//				 
			Return(col, 13 * scale + row, Yellow);
			//				 
			Return(col, 14 * scale + row, Yellow);
			//				 
			Return(col, 15 * scale + row, Yellow);
			//			 
			Return(col, 24 * scale + row, White);
			//				 
			Return(col, 29 * scale + row, Blue);
			//
			Return(col, 28 * scale + row, Blue);
			//
			Return(col, 36 * scale + row, Blue);
			//				 
			Return(col, 38 * scale + row, Blue);
			//
			Return(col, 48 * scale + row, Green);
			//
			Return(col, 58 * scale + row, Green);


		}
	}
	//十八行目
	for (int col = scale * 17; col < scale * 18; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, Blue);
			//				 
			Return(col, 8 * scale + row, Purple);
			//				 
			Return(col, 9 * scale + row, Purple);
			//				 
			Return(col, 19 * scale + row, White);
			//				 
			Return(col, 20 * scale + row, White);
			//				 
			Return(col, 21 * scale + row, White);
			//
			Return(col, 22 * scale + row, White);
			//				 
			Return(col, 23 * scale + row, White);
			//
			Return(col, 29 * scale + row, Blue);
			//
			Return(col, 36 * scale + row, Blue);
			//
			Return(col, 38 * scale + row, Blue);
			//
			Return(col, 69 * scale + row, White);
			//
			Return(col, 70 * scale + row, White);
		}
	}
	//十九行目
	for (int col = scale * 18; col < scale * 19; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, Blue);
			//				 
			Return(col, 7 * scale + row, Purple);
			//				 
			Return(col, 8 * scale + row, Purple);
			//
			Return(col, 14 * scale + row, Yellow);
			//				 
			Return(col, 15 * scale + row, Yellow);
			//				 
			Return(col, 19 * scale + row, White);
			//				 
			Return(col, 20 * scale + row, White);
			//				 
			Return(col, 21 * scale + row, White);
			//
			Return(col, 22 * scale + row, White);
			//				 
			Return(col, 23 * scale + row, White);
			//				 
			Return(col, 24 * scale + row, White);
			//				 
			Return(col, 30 * scale + row, Blue);
			//				 
			Return(col, 35 * scale + row, Blue);
			//
			Return(col, 39 * scale + row, Blue);
			//				 
			Return(col, 43 * scale + row, Green);
			//				 
			Return(col, 48 * scale + row, Green);
			//				 
			Return(col, 49 * scale + row, Green);
			//				 
			Return(col, 50 * scale + row, Green);
			//				 
			Return(col, 51 * scale + row, Green);
			//				 
			Return(col, 53 * scale + row, Green);
			//				 
			Return(col, 58 * scale + row, Green);
			//				 
			Return(col, 59 * scale + row, Green);
			//				 
			Return(col, 60 * scale + row, Green);
			//
			Return(col, 61 * scale + row, Green);
			//
			Return(col, 70 * scale + row, White);
		}
	}
	//二十行目
	for (int col = scale * 19; col < scale * 20; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 0 * scale + row, Blue);
			//				 
			Return(col, 5 * scale + row, Purple);
			//				 
			Return(col, 6 * scale + row, Purple);
			//
			Return(col, 7 * scale + row, Purple);
			//				 
			Return(col, 20 * scale + row, White);
			//				 
			Return(col, 21 * scale + row, White);
			//				 
			Return(col, 23 * scale + row, White);
			//				 
			Return(col, 24 * scale + row, White);
			//
			Return(col, 31 * scale + row, Blue);
			//				 
			Return(col, 34 * scale + row, Blue);
			//				 
			Return(col, 40 * scale + row, Blue);
			//				 
			Return(col, 43 * scale + row, Green);
			//
			Return(col, 48 * scale + row, Green);
			//
			Return(col, 49 * scale + row, Green);
			//				 
			Return(col, 51 * scale + row, Green);
			//
			Return(col, 53 * scale + row, Green);
			//				 
			Return(col, 58 * scale + row, Green);
			//
			Return(col, 59 * scale + row, Green);
			//
			Return(col, 61 * scale + row, Green);
			}
	}
	//二十一行目
	for (int col = scale * 20; col < scale * 21; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 14 * scale + row, Yellow);
			//				 
			Return(col, 15 * scale + row, Yellow);
			//
			Return(col, 20 * scale + row, White);
			//				 
			Return(col, 22 * scale + row, White);
			//
			Return(col, 23 * scale + row, White);
			//				 
			Return(col, 32 * scale + row, Blue);
			//
			Return(col, 33 * scale + row, Blue);
			//				 
			Return(col, 41 * scale + row, Blue);
			//
			Return(col, 43 * scale + row, Green);
			//				 
			Return(col, 48 * scale + row, Green);
			//
			Return(col, 53 * scale + row, Green);
			//				 
			Return(col, 58 * scale + row, Green);
			//
			Return(col, 69 * scale + row, White);
			//
			Return(col, 71 * scale + row, White);
		}
	}
	//二十二行目
	for (int col = scale * 21; col < scale * 22; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 20 * scale + row, White);
			//				 
			Return(col, 21 * scale + row, White);
			//
			Return(col, 22 * scale + row, White);
			//
			Return(col, 23 * scale + row, White);
			//
			Return(col, 24 * scale + row, White);
			//
			Return(col, 43 * scale + row, Green);
			//
			Return(col, 46 * scale + row, Green);
			//
			Return(col, 48 * scale + row, Green);
			//
			Return(col, 49 * scale + row, Green);
			//
			Return(col, 53 * scale + row, Green);
			//
			Return(col, 56 * scale + row, Green);
			//
			Return(col, 58 * scale + row, Green);
			//
			Return(col, 59 * scale + row, Green);
			//
			Return(col, 70 * scale + row, White);

		}
	}
	//二十三行目
	for (int col = scale * 22; col < scale * 23; col++)
	{
		for (int row = 0; row < scale; row++)
		{
			Return(col, 15 * scale + row, Yellow);
			//
			Return(col, 20 * scale + row, White);
			//				 
			Return(col, 21 * scale + row, White);
			//
			Return(col, 22 * scale + row, White);
			//
			Return(col, 23 * scale + row, White);
			//
			Return(col, 24 * scale + row, White);
			//
			Return(col, 43 * scale + row, Green);
			//
			Return(col, 44 * scale + row, Green);
			//
			Return(col, 48 * scale + row, Green);
			//
			Return(col, 53 * scale + row, Green);
			//
			Return(col, 54 * scale + row, Green);
			//
			Return(col, 58 * scale + row, Green);
			//
		}
	}

	return Black;

}


void BitMap::CreateFile()
{

	std::ofstream outputfile("test.bmp");


	// ファイル形式
	FileContent[0] = 0x42;
	FileContent[1] = 0x4D;

	// ファイルサイズ
	FileContent[2] = (FileSize & 0x000000ff) >> 0;
	FileContent[3] = (FileSize & 0x0000ff00) >> 8;
	FileContent[4] = (FileSize & 0x00ff0000) >> 16;
	FileContent[5] = (FileSize & 0xff000000) >> 24;

	// 予約領域(常に[ 0 ])
	FileContent[6] = 0x00;
	FileContent[7] = 0x00;

	// 予約領域(常に[ 0 ])
	FileContent[8] = 0x00;
	FileContent[9] = 0x00;

	// オフセット
	FileContent[10] = header_section;
	FileContent[11] = 0x00;
	FileContent[12] = 0x00;
	FileContent[13] = 0x00;

	// 情報ヘッダサイズ
	FileContent[14] = 0x28;
	FileContent[15] = 0x00;
	FileContent[16] = 0x00;
	FileContent[17] = 0x00;

	//LittleEndian

	// 幅
	FileContent[18] = (picture_width & 0x000000ff) >> 0;
	FileContent[19] = (picture_width & 0x0000ff00) >> 8;
	FileContent[20] = (picture_width & 0x00ff0000) >> 16;
	FileContent[21] = (picture_width & 0xff000000) >> 24;

	//LittleEndian

	// 高さ
	FileContent[22] = (picture_height & 0x000000ff) >> 0;
	FileContent[23] = (picture_height & 0x0000ff00) >> 8;
	FileContent[24] = (picture_height & 0x00ff0000) >> 16;
	FileContent[25] = (picture_height & 0xff000000) >> 24;

	// プレーン数(常に[ 1 ])
	FileContent[26] = 0x01;
	FileContent[27] = 0x00;

	// 色ビット数
	FileContent[28] = 0x18;
	FileContent[29] = 0x00;

	// 圧縮形式
	FileContent[30] = 0x00;
	FileContent[31] = 0x00;
	FileContent[32] = 0x00;
	FileContent[33] = 0x00;


	// 画像データサイズ
	FileContent[34] = (picture_data_size & 0x000000ff) >> 0;
	FileContent[35] = (picture_data_size & 0x0000ff00) >> 8;
	FileContent[36] = (picture_data_size & 0x00ff0000) >> 16;
	FileContent[37] = (picture_data_size & 0xff000000) >> 24;

	// 水平解像度
	FileContent[38] = 0x00;
	FileContent[39] = 0x00;
	FileContent[40] = 0x00;
	FileContent[41] = 0x00;

	// 垂直解像度
	FileContent[42] = 0x00;
	FileContent[43] = 0x00;
	FileContent[44] = 0x00;
	FileContent[45] = 0x00;

	// 格納パレット数
	FileContent[46] = 0x00;
	FileContent[47] = 0x00;
	FileContent[48] = 0x00;
	FileContent[49] = 0x00;

	// 重要色数
	FileContent[50] = 0x00;
	FileContent[51] = 0x00;
	FileContent[52] = 0x00;
	FileContent[53] = 0x00;


	if (BitmapColor == true)
	{
		ColorBitMap();
	}
	else if (BitmapColor == false)
	{
		Monochrome();
	}

	for (int i = 0; i < data_start; i++)
	{
		outputfile << FileContent[i];
	}

	outputfile.close();

}

void BitMap::ColorBitMap()
{
	// 画像データ(高さ)
	for (int i = 0; i < picture_height; i++)
	{
		// 画像データ(幅)
		for (int j = 0; j < picture_width; j++)
		{
			for (int k = 0; k < color_number; k++)
			{
				switch (ChangeColor(j, i))
				{
				case Black:
					RGB = 0x000000;
					break;
				case Yellow:
					RGB = 0xffff00;
					break;
				case Blue:
					RGB = 0x0000ff;
					break;
				case White:
					RGB = 0xffffff;
					break;
				case Red:
					RGB = 0xff0000;
					break;
				case Purple:
					RGB = 0xff00ff;
					break;
				case Green:
					RGB = 0x00ff00;
					break;
				}
			
				//リトルエンディアンなので逆
				if (k == Blue)
				{
					FileContent[DataStart] = (RGB & 0x0000ff) >> 0;
				}
				if (k == Green)
				{
					FileContent[DataStart] = (RGB & 0x00ff00) >> 8;
				}
				if (k == Red)
				{
					FileContent[DataStart] = (RGB & 0xff0000) >> 16;
				}

				DataStart++;
			}
		}

		for (int j = 0; j < pading; j++)
		{
			FileContent[DataStart] = 0x00;
			DataStart++;
		}
	}

	data_start = DataStart;
}



void BitMap::Monochrome()
{


	for (int i = 0;i <53 ; i++)
	{
		binary[i * 4 + 3] = (hex[i] & 0x000000ff) >> 0;
		binary[i * 4 + 2] = (hex[i] & 0x0000ff00) >> 8;
		binary[i * 4 + 1] = (hex[i] & 0x00ff0000) >> 16;
		binary[i * 4 + 0] = (hex[i] & 0xff000000) >> 24;
	}
	for (int i = 0;i< 53 * 4;i++)
	{
		inverse_array[i * 8    ] = (binary[i] >> 7 ) & 0x01;
		inverse_array[i * 8 + 1] = (binary[i] >> 6 ) & 0x01;
		inverse_array[i * 8 + 2] = (binary[i] >> 5 ) & 0x01;
		inverse_array[i * 8 + 3] = (binary[i] >> 4 ) & 0x01;
		inverse_array[i * 8 + 4] = (binary[i] >> 3 ) & 0x01;
		inverse_array[i * 8 + 5] = (binary[i] >> 2 ) & 0x01;
		inverse_array[i * 8 + 6] = (binary[i] >> 1 ) & 0x01;
		inverse_array[i * 8 + 7] = (binary[i] >> 0 ) & 0x01;
	}

	int inverse_count = 72;

	for (int i= 0;i<73;i++)
	{
		for (int j = 0; j < 23; j++)
		{
			array[(i * 23) + j] = inverse_array[(inverse_count * 23) + j];
		}
		inverse_count--;
	}



	// 画像データ(高さ)
	for (int i = 0; i < 73 ; i++)
	{
		for (int height_scale = 0; height_scale < scale; height_scale++)
		{
			for (int j = 0; j < 23; j++)
			{
				for (int width_scale = 0;width_scale < scale;width_scale++)
				{
					for (int k = 0; k < color_number; k++)
					{
						switch (array[(i * 23) + j])
						{
						case 0x0:
							RGB = 0xffffff;
							break;
						case 0x1:
							RGB = 0x000000;
							break;
						}
						if (k == Blue)
						{
							FileContent[DataStart] = (RGB & 0x0000ff) >> 0;
						}
						if (k == Green)
						{
							FileContent[DataStart] = (RGB & 0x00ff00) >> 8;
						}
						if (k == Red)
						{
							FileContent[DataStart] = (RGB & 0xff0000) >> 16;
						}
						DataStart++;
					}
				}
			}
			if (BitmapColor == false)
			{
				for (int j = 0; j < 2; j++)
				{
					FileContent[DataStart] = 0x00;
					DataStart++;
				}
			}
		}
		
		
	}

	data_start = DataStart;

}

