#include "BitMap.h"

BitMap::Color BitMap::ChangeColor(int j,int i)
{
#define Return(width,height,color) {if(width == j && height == i){return color;}}

	//一行目
	for (int col = scall * 0; col < scall * 1; col++)
	{
		for (int row = 0;row < scall;row++)
		{
			Return(col, 22 * scall + row, White);
			//
			Return(col, 43 * scall + row, Green);
			//
			Return(col, 48 * scall + row, Green);
			//
			Return(col, 49 * scall + row, Green);
			//
			Return(col, 50 * scall + row, Green);
			//
			Return(col, 51 * scall + row, Green);
			//
			Return(col, 53 * scall + row, Green);
			//
			Return(col, 58 * scall + row, Green);
			//
			Return(col, 59 * scall + row, Green);
			//
			Return(col, 60 * scall + row, Green);
			//
			Return(col, 61 * scall + row, Green);
			//
			Return(col, 69 * scall + row, White);
			//
			Return(col, 70 * scall + row, White);
		}

	}
	//二行目
	for (int col = scall * 1; col < scall * 2; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, Blue);
			//
			Return(col, 5 * scall + row, Purple);
			//
			Return(col, 6 * scall + row, Purple);
			//
			Return(col, 7 * scall + row, Purple);
			//
			Return(col, 31 * scall + row, Blue);
			//
			Return(col, 32 * scall + row, Blue);
			//
			Return(col, 43 * scall + row, Green);
			//
			Return(col, 48 * scall + row, Green);
			//
			Return(col, 49 * scall + row, Green);
			//
			Return(col, 51 * scall + row, Green);
			//
			Return(col, 53 * scall + row, Green);
			//
			Return(col, 58 * scall + row, Green);
			//
			Return(col, 59 * scall + row, Green);
			//
			Return(col, 61 * scall + row, Green);
		}	
	}
	//三行目
	for (int col = scall * 2; col < scall * 3; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, Blue);
			//
			Return(col, 7 * scall + row, Purple);
			//
			Return(col, 8 * scall + row, Purple);
			//
			Return(col, 14 * scall + row, Yellow);
			//
			Return(col, 15 * scall + row, Yellow);
			//
			Return(col, 16 * scall + row, Yellow);
			//
			Return(col, 18 * scall + row, Blue);
			//
			Return(col, 19 * scall + row, Blue);
			//
			Return(col, 20 * scall + row, Blue);
			//
			Return(col, 22 * scall + row, White);
			//
			Return(col, 24 * scall + row, Blue);
			//
			Return(col, 25 * scall + row, Blue);
			//
			Return(col, 26 * scall + row, Blue);
			//
			Return(col, 27 * scall + row, Blue);
			//
			Return(col, 30 * scall + row, Blue);
			//
			Return(col, 33 * scall + row, Blue);
			//
			Return(col, 40 * scall + row, Blue);
			//
			Return(col, 43 * scall + row, Green);
			//
			Return(col, 48 * scall + row, Green);
			//
			Return(col, 53 * scall + row, Green);
			//
			Return(col, 58 * scall + row, Green);
			//
			Return(col, 69 * scall + row, White);
			//
			Return(col, 71 * scall + row, White);
		}
	}
	//四行目
	for (int col = scall * 3; col < scall * 4; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, Blue);
			//
			Return(col, 8 * scall + row, Purple);
			//
			Return(col, 9 * scall + row, Purple);
			//
			Return(col, 14  * scall + row, Yellow);
			//
			Return(col, 15 * scall + row, Yellow);
			//				 
			Return(col, 16 * scall + row, Yellow);
			//				 
			Return(col, 22 * scall + row, White);
			//				 
			Return(col, 29 * scall + row, Blue);
			//				 
			Return(col, 34 * scall + row, Blue);
			//				 
			Return(col, 40 * scall + row, Blue);
			//				 
			Return(col, 43 * scall + row, Green);
			//				 
			Return(col, 46 * scall + row, Green);
			//				 
			Return(col, 48 * scall + row, Green);
			//				 
			Return(col, 49 * scall + row, Green);
			//				 
			Return(col, 53 * scall + row, Green);
			//				 
			Return(col, 56 * scall + row, Green);
			//				 
			Return(col, 58 * scall + row, Green);
			//				 
			Return(col, 59 * scall + row, Green);

		}
	}
	//五行目
	for (int col = 4 * scall; col < scall * 5; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, Blue);
			//
			Return(col, 9* scall + row, Purple);
			//
			Return(col, 10* scall + row, Purple);
			//
			Return(col, 14* scall + row, Yellow);
			//
			Return(col, 15* scall + row, Yellow);
			//
			Return(col, 16* scall + row, Yellow);
			//
			Return(col, 22* scall + row, White);
			//
			Return(col, 28* scall + row, Blue);
			//
			Return(col, 35* scall + row, Blue);
			//
			Return(col, 39* scall + row, Blue);
			//
			Return(col, 43* scall + row, Green);
			//
			Return(col, 44* scall + row, Green);
			//
			Return(col, 48* scall + row, Green);
			//
			Return(col, 53* scall + row, Green);
			//
			Return(col, 54* scall + row, Green);
			//
			Return(col, 58* scall + row, Green);
			//
			Return(col, 69* scall + row, White);
			//
			Return(col, 70* scall + row, White);
			//
			Return(col, 71* scall + row, White);
		}
	}
	//六行目
	for (int col = scall * 5; col < scall * 6; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 2 *scall+ row, Purple);
			//			  
			Return(col, 3 *scall+ row, Purple);
			//			  
			Return(col, 4 *scall+ row, Purple);
			//			  
			Return(col, 5 *scall+ row, Purple);
			//			  
			Return(col, 6 *scall+ row, Purple);
			//			   
			Return(col, 7 *scall+ row, Purple);
			//			   
			Return(col, 8 *scall+ row, Purple);
			//			   
			Return(col, 10 *scall + row, Purple);
			//			   
			Return(col, 28 *scall + row, Blue);
			//			   
			Return(col, 35 *scall + row, Blue);
			//			   
			Return(col, 39 *scall + row, Blue);
		}
	}
	//七行目
	for (int col = scall * 6; col < scall * 7; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 7 * scall + row, Purple);
			//
			Return(col, 10 * scall + row, Purple);
			//			     
			Return(col, 11 * scall + row, Purple);
			//			     
			Return(col, 15 * scall + row, Yellow);
			//			     
			Return(col, 23 * scall + row, Red);
			//			     
			Return(col, 27 * scall + row, Blue);
			//			     
			Return(col, 36 * scall + row, Blue);
			//			     
			Return(col, 38 * scall + row, Blue);
			//			     
			Return(col, 48 * scall + row, Green);
			//			     
			Return(col, 51 * scall + row, Green);
			//			     
			Return(col, 58 * scall + row, Green);
			//			     
			Return(col, 61 * scall + row, Green);
			//			     
			Return(col, 69 * scall + row, White);
			//			     
			Return(col, 72 * scall + row, White);
		}
	}
	//八行目
	for (int col = scall * 7; col < scall * 8; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0* scall + row, White);
			//
			Return(col, 1* scall + row, White);
			//
			Return(col, 6 * scall + row, Purple);
			//
			Return(col, 11 * scall + row, Purple);
			//
			Return(col, 24 * scall + row, Red);
			//
			Return(col, 27 * scall + row, Blue);
			//
			Return(col, 36 * scall + row, Blue);
			//
			Return(col, 38 * scall + row, Blue);
			//
			Return(col, 48 * scall + row, Green);
			//
			Return(col, 51 * scall + row, Green);
			//
			Return(col, 58 * scall + row, Green);
			//
			Return(col, 59 * scall + row, Green);
			//
			Return(col, 61 * scall + row, Green);
		}

	}
	//九行目
	for (int col = scall * 8; col < scall * 9; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, White);
			//
			Return(col, 5 * scall + row, Purple);
			//
			Return(col, 11 * scall + row, Purple);
			//				 
			Return(col, 12 * scall + row, Purple);
			//				 
			Return(col, 15 * scall + row, Yellow);
			//				 
			Return(col, 18 * scall + row, Red);
			//				 
			Return(col, 25 * scall + row, Red);
			//				 
			Return(col, 27 * scall + row, Blue);
			//				 
			Return(col, 48 * scall + row, Green);
			//				 
			Return(col, 49 * scall + row, Green);
			//				 
			Return(col, 50 * scall + row, Green);
			//				 
			Return(col, 58 * scall + row, Green);
			//				 
			Return(col, 59 * scall + row, Green);
			//				 
			Return(col, 61 * scall + row, Green);
			//				 
			Return(col, 69 * scall + row, White);
			//				 
			Return(col, 70 * scall + row, White);
			//				 
			Return(col, 72 * scall + row, White);
		
		}

	}
	//十行目
	for (int col = scall * 9; col < scall * 10; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, White);
			//
			Return(col, 4 * scall + row, Purple);
			//
			Return(col, 11 * scall + row, Purple);
			//				 
			Return(col, 12 * scall + row, Purple);
			//				 
			Return(col, 18 * scall + row, Red);
			//				 
			Return(col, 19 * scall + row, Red);
			//				 
			Return(col, 20 * scall + row, Red);
			//				 
			Return(col, 21 * scall + row, Red);
			//				 
			Return(col, 22 * scall + row, Red);
			//				 
			Return(col, 23 * scall + row, Red);
			//				 
			Return(col, 24 * scall + row, Red);
			//				 
			Return(col, 25 * scall + row, Red);
			//				 
			Return(col, 48 * scall + row, Green);
			//				 
			Return(col, 49 * scall + row, Green);
			//				 
			Return(col, 58 * scall + row, Green);
			//				 
			Return(col, 63 * scall + row, Purple);
			//				 
			Return(col, 64 * scall + row, Purple);
		}
	}
	//十一行目
	for (int col = scall * 10; col < scall * 11; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, White);
			//
			Return(col, 1 * scall + row, White);
			//
			Return(col, 3 * scall + row, Purple);
			//
			Return(col, 11 * scall + row, Purple);
			//
			Return(col, 12 * scall + row, Purple);
			//
			Return(col, 16 * scall + row, Yellow);
			//
			Return(col, 22 * scall + row, Red);
			//
			Return(col, 23 * scall + row, Red);
			//
			Return(col, 24 * scall + row, Red);
			//
			Return(col, 25 * scall + row, Red);
			//
			Return(col, 26 * scall + row, Red);
			//
			Return(col, 27 * scall + row, Red);
			//
			Return(col, 30 * scall + row, White);
			//
			Return(col, 32 * scall + row, White);
			//
			Return(col, 33 * scall + row, White);
			//
			Return(col, 34 * scall + row, White);
			//
			Return(col, 35 * scall + row, White);
			//
			Return(col, 37 * scall + row, White);
			//
			Return(col, 39 * scall + row, White);
			//
			Return(col, 40 * scall + row, White);
			//
			Return(col, 42 * scall + row, White);
			//
			Return(col, 43 * scall + row, White);
			//
			Return(col, 44 * scall + row, White);
			//
			Return(col, 45 * scall + row, White);
			//
			Return(col, 46 * scall + row, White);
			//
			Return(col, 48 * scall + row, Green);
			//
			Return(col, 58 * scall + row, Green);
			//
			Return(col, 63 * scall + row, Purple);
			//
			Return(col, 65 * scall + row, Purple);
			//
			Return(col, 66 * scall + row, Purple);
			//
			Return(col, 69 * scall + row, White);
			//
			Return(col, 71 * scall + row, White);
			//
			Return(col, 72 * scall + row, White);
		}
	}
	//十二行目
	for (int col = scall * 11; col < scall * 12; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, White);
			//
			Return(col, 4 * scall + row, Purple);
			//
			Return(col, 11 * scall + row, Purple);
			//
			Return(col, 12 * scall + row, Purple);
			//
			Return(col, 18 * scall + row, Red);
			//
			Return(col, 19 * scall + row, Red);
			//
			Return(col, 20 * scall + row, Red);
			//
			Return(col, 21 * scall + row, Red);
			//
			Return(col, 22 * scall + row, Red);
			//
			Return(col, 23 * scall + row, Red);
			//
			Return(col, 24 * scall + row, Red);
			//
			Return(col, 25 * scall + row, Red);
			//
			Return(col, 31 * scall + row, White);
			//
			Return(col, 32 * scall + row, White);
			//
			Return(col, 33 * scall + row, White);
			//
			Return(col, 35 * scall + row, White);
			//
			Return(col, 36 * scall + row, White);
			//
			Return(col, 37 * scall + row, White);
			//
			Return(col, 38 * scall + row, White);
			//
			Return(col, 39 * scall + row, White);
			//
			Return(col, 40 * scall + row, White);
			//
			Return(col, 41 * scall + row, White);
			//
			Return(col, 42 * scall + row, White);
			//
			Return(col, 43 * scall + row, White);
			//
			Return(col, 44 * scall + row, White);
			//
			Return(col, 45 * scall + row, White);
			//
			Return(col, 46 * scall + row, White);
			//
			Return(col, 63 * scall + row, Purple);
			//
			Return(col, 64 * scall + row, Purple);
			//
			Return(col, 65 * scall + row, Purple);
			//
			Return(col, 66 * scall + row, Purple);
		}
	}
	//十三行目
	for (int col = scall * 12; col < scall * 13; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 1 * scall+ row, White);
			//				 
			Return(col, 5 * scall+ row, Purple);
			//				 
			Return(col, 11 * scall + row, Purple);
			//				 
			Return(col, 12 * scall + row, Purple);
			//				 
			Return(col, 15 * scall + row, Yellow);
			//				 
			Return(col, 18 * scall + row, Red);
			//				 
			Return(col, 25 * scall + row, Red);
			//				 
			Return(col, 27 * scall + row, Blue);
			//				 
			Return(col, 48 * scall + row, Green);
			//				 
			Return(col, 51 * scall + row, Green);
			//				 
			Return(col, 58 * scall + row, Green);
			//				 
			Return(col, 59 * scall + row, Green);
			//				 
			Return(col, 61 * scall + row, Green);
			//				 
			Return(col, 63 * scall + row, Purple);
			//				 
			Return(col, 67 * scall + row, Purple);
			//				 
			Return(col, 69 * scall + row, White);
			//				 
			Return(col, 70 * scall + row, White);
			//				 
			Return(col, 71 * scall + row, White);
			//				 
			Return(col, 72 * scall + row, White);
							 
		}
	}
	//十四行目
	for (int col = scall * 13; col < scall * 14; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, White);
			//				 
			Return(col, 6 * scall + row, Purple);
			//			
			Return(col, 11 * scall + row, Purple);
			//				 
			Return(col, 24 * scall + row, Red);
			//				 
			Return(col, 27 * scall + row, Blue);
			//				 
			Return(col, 48 * scall + row, Green);
			//				 
			Return(col, 49 * scall + row, Green);
			//				 
			Return(col, 51 * scall + row, Green);
			//				 
			Return(col, 58 * scall + row, Green);
			//				 
			Return(col, 59 * scall + row, Green);
			//				 
			Return(col, 61 * scall + row, Green);
			//				 
			Return(col, 63 * scall + row, Purple);
			//				 
			Return(col, 64 * scall + row, Purple);
			//				 
			Return(col, 65 * scall + row, Purple);
			//				 
			Return(col, 66 * scall + row, Purple);
			//				 
			Return(col, 67 * scall + row, Purple);
		}
	}
	//十五行目
	for (int col = scall * 14; col < scall * 15; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 7 * scall + row, Purple);
			//				 
			Return(col, 10 * scall + row, Purple);
			//				 
			Return(col, 11 * scall + row, Purple);
			//				 
			Return(col, 13 * scall + row, Yellow);
			//				 
			Return(col, 14 * scall + row, Yellow);
			//				 
			Return(col, 15 * scall + row, Yellow);
			//				 
			Return(col, 23 * scall + row, Red);
			//				 
			Return(col, 28 * scall + row, Blue);
			//
			Return(col, 37 * scall + row, Blue);
			//
			Return(col, 48 * scall + row, Green);
			//				 
			Return(col, 49 * scall + row, Green);
			//				 
			Return(col, 51 * scall + row, Green);
			//				 
			Return(col, 58 * scall + row, Green);
			//				 
			Return(col, 60 * scall + row, Green);
			//				 
			Return(col, 69 * scall + row, White);
		}
	}
	//十六行目
	for (int col = scall * 15; col < scall * 16; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 2 * scall + row, Purple);
			//				 
			Return(col, 3 * scall + row, Purple);
			//				 
			Return(col, 4 * scall + row, Purple);
			//				 
			Return(col, 5 * scall + row, Purple);
			//				 
			Return(col, 6 * scall + row, Purple);
			//				 
			Return(col, 7 * scall + row, Purple);
			//			 
			Return(col, 8 * scall + row, Purple);
			//				 
			Return(col, 10 * scall + row, Purple);
			//
			Return(col, 28 * scall + row, Blue);
			//
			Return(col, 37 * scall + row, Blue);
			//				 
			Return(col, 48 * scall + row, Green);
			//				 
			Return(col, 49 * scall + row, Green);
			//				 
			Return(col, 58 * scall + row, Green);
			//				 
			Return(col, 60 * scall + row, Green);
			//				 
			Return(col, 70 * scall + row, White);
		}
	}
	//十七行目
	for (int col = scall * 16; col < scall * 17; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, Blue);
			//				 
			Return(col, 9 * scall + row, Purple);
			//				 
			Return(col, 10 * scall + row, Purple);
			//				 
			Return(col, 13 * scall + row, Yellow);
			//				 
			Return(col, 14 * scall + row, Yellow);
			//				 
			Return(col, 15 * scall + row, Yellow);
			//			 
			Return(col, 24 * scall + row, White);
			//				 
			Return(col, 29 * scall + row, Blue);
			//
			Return(col, 28 * scall + row, Blue);
			//
			Return(col, 36 * scall + row, Blue);
			//				 
			Return(col, 38 * scall + row, Blue);
			//
			Return(col, 48 * scall + row, Green);
			//
			Return(col, 58 * scall + row, Green);


		}
	}
	//十八行目
	for (int col = scall * 17; col < scall * 18; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, Blue);
			//				 
			Return(col, 8 * scall + row, Purple);
			//				 
			Return(col, 9 * scall + row, Purple);
			//				 
			Return(col, 19 * scall + row, White);
			//				 
			Return(col, 20 * scall + row, White);
			//				 
			Return(col, 21 * scall + row, White);
			//
			Return(col, 22 * scall + row, White);
			//				 
			Return(col, 23 * scall + row, White);
			//
			Return(col, 29 * scall + row, Blue);
			//
			Return(col, 36 * scall + row, Blue);
			//
			Return(col, 38 * scall + row, Blue);
			//
			Return(col, 69 * scall + row, White);
			//
			Return(col, 70 * scall + row, White);
		}
	}
	//十九行目
	for (int col = scall * 18; col < scall * 19; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, Blue);
			//				 
			Return(col, 7 * scall + row, Purple);
			//				 
			Return(col, 8 * scall + row, Purple);
			//
			Return(col, 14 * scall + row, Yellow);
			//				 
			Return(col, 15 * scall + row, Yellow);
			//				 
			Return(col, 19 * scall + row, White);
			//				 
			Return(col, 20 * scall + row, White);
			//				 
			Return(col, 21 * scall + row, White);
			//
			Return(col, 22 * scall + row, White);
			//				 
			Return(col, 23 * scall + row, White);
			//				 
			Return(col, 24 * scall + row, White);
			//				 
			Return(col, 30 * scall + row, Blue);
			//				 
			Return(col, 35 * scall + row, Blue);
			//
			Return(col, 39 * scall + row, Blue);
			//				 
			Return(col, 43 * scall + row, Green);
			//				 
			Return(col, 48 * scall + row, Green);
			//				 
			Return(col, 49 * scall + row, Green);
			//				 
			Return(col, 50 * scall + row, Green);
			//				 
			Return(col, 51 * scall + row, Green);
			//				 
			Return(col, 53 * scall + row, Green);
			//				 
			Return(col, 58 * scall + row, Green);
			//				 
			Return(col, 59 * scall + row, Green);
			//				 
			Return(col, 60 * scall + row, Green);
			//
			Return(col, 61 * scall + row, Green);
			//
			Return(col, 70 * scall + row, White);
		}
	}
	//二十行目
	for (int col = scall * 19; col < scall * 20; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 0 * scall + row, Blue);
			//				 
			Return(col, 5 * scall + row, Purple);
			//				 
			Return(col, 6 * scall + row, Purple);
			//
			Return(col, 7 * scall + row, Purple);
			//				 
			Return(col, 20 * scall + row, White);
			//				 
			Return(col, 21 * scall + row, White);
			//				 
			Return(col, 23 * scall + row, White);
			//				 
			Return(col, 24 * scall + row, White);
			//
			Return(col, 31 * scall + row, Blue);
			//				 
			Return(col, 34 * scall + row, Blue);
			//				 
			Return(col, 40 * scall + row, Blue);
			//				 
			Return(col, 43 * scall + row, Green);
			//
			Return(col, 48 * scall + row, Green);
			//
			Return(col, 49 * scall + row, Green);
			//				 
			Return(col, 51 * scall + row, Green);
			//
			Return(col, 53 * scall + row, Green);
			//				 
			Return(col, 58 * scall + row, Green);
			//
			Return(col, 59 * scall + row, Green);
			//
			Return(col, 61 * scall + row, Green);
			}
	}
	//二十一行目
	for (int col = scall * 20; col < scall * 21; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 14 * scall + row, Yellow);
			//				 
			Return(col, 15 * scall + row, Yellow);
			//
			Return(col, 20 * scall + row, White);
			//				 
			Return(col, 22 * scall + row, White);
			//
			Return(col, 23 * scall + row, White);
			//				 
			Return(col, 32 * scall + row, Blue);
			//
			Return(col, 33 * scall + row, Blue);
			//				 
			Return(col, 41 * scall + row, Blue);
			//
			Return(col, 43 * scall + row, Green);
			//				 
			Return(col, 48 * scall + row, Green);
			//
			Return(col, 53 * scall + row, Green);
			//				 
			Return(col, 58 * scall + row, Green);
			//
			Return(col, 69 * scall + row, White);
			//
			Return(col, 71 * scall + row, White);
		}
	}
	//二十二行目
	for (int col = scall * 21; col < scall * 22; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 20 * scall + row, White);
			//				 
			Return(col, 21 * scall + row, White);
			//
			Return(col, 22 * scall + row, White);
			//
			Return(col, 23 * scall + row, White);
			//
			Return(col, 24 * scall + row, White);
			//
			Return(col, 43 * scall + row, Green);
			//
			Return(col, 46 * scall + row, Green);
			//
			Return(col, 48 * scall + row, Green);
			//
			Return(col, 49 * scall + row, Green);
			//
			Return(col, 53 * scall + row, Green);
			//
			Return(col, 56 * scall + row, Green);
			//
			Return(col, 58 * scall + row, Green);
			//
			Return(col, 59 * scall + row, Green);
			//
			Return(col, 70 * scall + row, White);

		}
	}
	//二十三行目
	for (int col = scall * 22; col < scall * 23; col++)
	{
		for (int row = 0; row < scall; row++)
		{
			Return(col, 15 * scall + row, Yellow);
			//
			Return(col, 20 * scall + row, White);
			//				 
			Return(col, 21 * scall + row, White);
			//
			Return(col, 22 * scall + row, White);
			//
			Return(col, 23 * scall + row, White);
			//
			Return(col, 24 * scall + row, White);
			//
			Return(col, 43 * scall + row, Green);
			//
			Return(col, 44 * scall + row, Green);
			//
			Return(col, 48 * scall + row, Green);
			//
			Return(col, 53 * scall + row, Green);
			//
			Return(col, 54 * scall + row, Green);
			//
			Return(col, 58 * scall + row, Green);
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
		for (int j = 0; j < 23; j++)
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
		
		for (int j = 0; j < pading; j++)
		{
			FileContent[DataStart] = 0x00;
			DataStart++;
		}
		
		
	}

	data_start = DataStart;

}

