/*
 * picture.c
 *
 * Created: 17.12.2015 17:17:24
 *  Author: Ne0n
 */ 

#include "picture.h"

void init_states() {
	for (int i = 0; i < 10; ++i) {
		int cur_pos;
		if (i <= 5) {
			cur_pos = i;
		}
		else {
			cur_pos = 10 - i;
		}
		for (int j = 1; j <= cur_pos; ++j) {
			states[i].states[j].red   = 0;
			states[i].states[j].green = 0;
			states[i].states[j].blue  = 0;	
		}
		for (int j = cur_pos + 11; j <= 15; ++j) {
			states[i].states[j].red   = 0;
			states[i].states[j].green = 0;
			states[i].states[j].blue  = 0;
		}
		states[i].states[1 + cur_pos].red   = 1;
		states[i].states[1 + cur_pos].green = 1;
		states[i].states[1 + cur_pos].blue  = 1;
		states[i].states[2 + cur_pos].red   = 1;
		states[i].states[2 + cur_pos].green = 0;
		states[i].states[2 + cur_pos].blue  = 0;
		states[i].states[3 + cur_pos].red   = 0;
		states[i].states[3 + cur_pos].green = 0;
		states[i].states[3 + cur_pos].blue  = 0;
		states[i].states[4 + cur_pos].red   = 1;
		states[i].states[4 + cur_pos].green = 1;
		states[i].states[4 + cur_pos].blue  = 1;
		states[i].states[5 + cur_pos].red   = 1;
		states[i].states[5 + cur_pos].green = 0;
		states[i].states[5 + cur_pos].blue  = 1;
		states[i].states[6 + cur_pos].red   = 1;
		states[i].states[6 + cur_pos].green = 1;
		states[i].states[6 + cur_pos].blue  = 1;
		states[i].states[7 + cur_pos].red   = 0;
		states[i].states[7 + cur_pos].green = 0;
		states[i].states[7 + cur_pos].blue  = 0;
		states[i].states[8 + cur_pos].red   = 1;
		states[i].states[8 + cur_pos].green = 1;
		states[i].states[8 + cur_pos].blue  = 1;
		states[i].states[9 + cur_pos].red   = 0;
		states[i].states[9 + cur_pos].green = 1;
		states[i].states[9 + cur_pos].blue  = 0;
		states[i].states[10 + cur_pos].red   = 1;
		states[i].states[10 + cur_pos].green = 1;
		states[i].states[10 + cur_pos].blue  = 1;	
	}
}

void load_cyclic_picture() {
	cyclic_picture_size = 48;
	cyclic_picture[0].red   = 1;
	cyclic_picture[0].green = 1;
	cyclic_picture[0].blue  = 1;
	
	cyclic_picture[1].red   = 0;
	cyclic_picture[1].green = 1;
	cyclic_picture[1].blue  = 0;
	
	cyclic_picture[2].red   = 1;
	cyclic_picture[2].green = 1;
	cyclic_picture[2].blue  = 1;
	
	cyclic_picture[3].red   = 0;
	cyclic_picture[3].green = 0;
	cyclic_picture[3].blue  = 0;
	
	cyclic_picture[4].red   = 1;
	cyclic_picture[4].green = 1;
	cyclic_picture[4].blue  = 1;
	
	cyclic_picture[5].red   = 1;
	cyclic_picture[5].green = 1;
	cyclic_picture[5].blue  = 1;
	
	cyclic_picture[6].red   = 1;
	cyclic_picture[6].green = 0;
	cyclic_picture[6].blue  = 1;
	
	cyclic_picture[7].red   = 0;
	cyclic_picture[7].green = 0;
	cyclic_picture[7].blue  = 0;
	
	cyclic_picture[8].red   = 1;
	cyclic_picture[8].green = 1;
	cyclic_picture[8].blue  = 1;
	
	cyclic_picture[9].red   = 1;
	cyclic_picture[9].green = 0;
	cyclic_picture[9].blue  = 0;
	
	cyclic_picture[10].red   = 1;
	cyclic_picture[10].green = 0;
	cyclic_picture[10].blue  = 0;
	
	cyclic_picture[11].red   = 0;
	cyclic_picture[11].green = 0;
	cyclic_picture[11].blue  = 0;
	
	cyclic_picture[12].red   = 1;
	cyclic_picture[12].green = 1;
	cyclic_picture[12].blue  = 1;
	
	cyclic_picture[13].red   = 1;
	cyclic_picture[13].green = 0;
	cyclic_picture[13].blue  = 0;
	
	cyclic_picture[14].red   = 1;
	cyclic_picture[14].green = 0;
	cyclic_picture[14].blue  = 0;
	
	cyclic_picture[15].red   = 0;
	cyclic_picture[15].green = 0;
	cyclic_picture[15].blue  = 0;
	
	cyclic_picture[16].red   = 1;
	cyclic_picture[16].green = 1;
	cyclic_picture[16].blue  = 1;
	
	cyclic_picture[17].red   = 1;
	cyclic_picture[17].green = 0;
	cyclic_picture[17].blue  = 1;
	
	cyclic_picture[18].red   = 1;
	cyclic_picture[18].green = 1;
	cyclic_picture[18].blue  = 1;
	
	cyclic_picture[19].red   = 0;
	cyclic_picture[19].green = 0;
	cyclic_picture[19].blue  = 0;

	/*cyclic_picture[20].red   = 0;
	cyclic_picture[20].green = 0;
	cyclic_picture[20].blue  = 0;

	cyclic_picture[21].red   = 0;
	cyclic_picture[21].green = 0;
	cyclic_picture[21].blue  = 0;

	cyclic_picture[22].red   = 0;
	cyclic_picture[22].green = 1;
	cyclic_picture[22].blue  = 1;

	cyclic_picture[23].red   = 1;
	cyclic_picture[23].green = 0;
	cyclic_picture[23].blue  = 0;

	cyclic_picture[24].red   = 0;
	cyclic_picture[24].green = 1;
	cyclic_picture[24].blue  = 0;

	cyclic_picture[25].red   = 1;
	cyclic_picture[25].green = 0;
	cyclic_picture[25].blue  = 0;

	cyclic_picture[26].red   = 0;
	cyclic_picture[26].green = 1;
	cyclic_picture[26].blue  = 1;

	cyclic_picture[27].red   = 0;
	cyclic_picture[27].green = 0;
	cyclic_picture[27].blue  = 0;

	cyclic_picture[28].red   = 1;
	cyclic_picture[28].green = 1;
	cyclic_picture[28].blue  = 1;

	cyclic_picture[29].red   = 1;
	cyclic_picture[29].green = 0;
	cyclic_picture[29].blue  = 1;

	cyclic_picture[30].red   = 1;
	cyclic_picture[30].green = 1;
	cyclic_picture[30].blue  = 1;

	cyclic_picture[31].red   = 0;
	cyclic_picture[31].green = 0;
	cyclic_picture[31].blue  = 0;

	cyclic_picture[32].red   = 1;
	cyclic_picture[32].green = 1;
	cyclic_picture[32].blue  = 1;

	cyclic_picture[33].red   = 0;
	cyclic_picture[33].green = 0;
	cyclic_picture[33].blue  = 1;

	cyclic_picture[34].red   = 0;
	cyclic_picture[34].green = 0;
	cyclic_picture[34].blue  = 1;

	cyclic_picture[35].red   = 0;
	cyclic_picture[35].green = 0;
	cyclic_picture[35].blue  = 0;

	cyclic_picture[36].red   = 1;
	cyclic_picture[36].green = 1;
	cyclic_picture[36].blue  = 1;

	cyclic_picture[37].red   = 1;
	cyclic_picture[37].green = 0;
	cyclic_picture[37].blue  = 0;

	cyclic_picture[38].red   = 1;
	cyclic_picture[38].green = 0;
	cyclic_picture[38].blue  = 0;

	cyclic_picture[39].red   = 0;
	cyclic_picture[39].green = 0;
	cyclic_picture[39].blue  = 0;

	cyclic_picture[40].red   = 1;
	cyclic_picture[40].green = 1;
	cyclic_picture[40].blue  = 1;

	cyclic_picture[41].red   = 1;
	cyclic_picture[41].green = 0;
	cyclic_picture[41].blue  = 1;

	cyclic_picture[42].red   = 0;
	cyclic_picture[42].green = 1;
	cyclic_picture[42].blue  = 0;

	cyclic_picture[43].red   = 0;
	cyclic_picture[43].green = 0;
	cyclic_picture[43].blue  = 0;

	cyclic_picture[44].red   = 0;
	cyclic_picture[44].green = 0;
	cyclic_picture[44].blue  = 0;*/
	
	cyclic_picture[20].red   = 1;
	cyclic_picture[20].green = 0;
	cyclic_picture[20].blue  = 0;

	cyclic_picture[21].red   = 0;
	cyclic_picture[21].green = 0;
	cyclic_picture[21].blue  = 0;
	
	cyclic_picture[22].red   = 0;
	cyclic_picture[22].green = 0;
	cyclic_picture[22].blue  = 0;

	cyclic_picture[23].red   = 0;
	cyclic_picture[23].green = 1;
	cyclic_picture[23].blue  = 1;

	cyclic_picture[24].red   = 1;
	cyclic_picture[24].green = 0;
	cyclic_picture[24].blue  = 0;

	cyclic_picture[25].red   = 0;
	cyclic_picture[25].green = 1;
	cyclic_picture[25].blue  = 0;

	cyclic_picture[26].red   = 1;
	cyclic_picture[26].green = 0;
	cyclic_picture[26].blue  = 0;

	cyclic_picture[27].red   = 0;
	cyclic_picture[27].green = 1;
	cyclic_picture[27].blue  = 1;

	cyclic_picture[28].red   = 0;
	cyclic_picture[28].green = 0;
	cyclic_picture[28].blue  = 0;

	cyclic_picture[29].red   = 1;
	cyclic_picture[29].green = 1;
	cyclic_picture[29].blue  = 1;

	cyclic_picture[30].red   = 1;
	cyclic_picture[30].green = 0;
	cyclic_picture[30].blue  = 1;

	cyclic_picture[31].red   = 1;
	cyclic_picture[31].green = 1;
	cyclic_picture[31].blue  = 1;

	cyclic_picture[32].red   = 0;
	cyclic_picture[32].green = 0;
	cyclic_picture[32].blue  = 0;

	cyclic_picture[33].red   = 1;
	cyclic_picture[33].green = 1;
	cyclic_picture[33].blue  = 1;

	cyclic_picture[34].red   = 0;
	cyclic_picture[34].green = 0;
	cyclic_picture[34].blue  = 1;

	cyclic_picture[35].red   = 0;
	cyclic_picture[35].green = 0;
	cyclic_picture[35].blue  = 1;

	cyclic_picture[36].red   = 0;
	cyclic_picture[36].green = 0;
	cyclic_picture[36].blue  = 0;

	cyclic_picture[37].red   = 1;
	cyclic_picture[37].green = 1;
	cyclic_picture[37].blue  = 1;

	cyclic_picture[38].red   = 1;
	cyclic_picture[38].green = 0;
	cyclic_picture[38].blue  = 0;

	cyclic_picture[39].red   = 1;
	cyclic_picture[39].green = 0;
	cyclic_picture[39].blue  = 0;

	cyclic_picture[40].red   = 0;
	cyclic_picture[40].green = 0;
	cyclic_picture[40].blue  = 0;

	cyclic_picture[41].red   = 1;
	cyclic_picture[41].green = 1;
	cyclic_picture[41].blue  = 1;

	cyclic_picture[42].red   = 1;
	cyclic_picture[42].green = 0;
	cyclic_picture[42].blue  = 1;

	cyclic_picture[43].red   = 0;
	cyclic_picture[43].green = 1;
	cyclic_picture[43].blue  = 0;

	cyclic_picture[44].red   = 0;
	cyclic_picture[44].green = 0;
	cyclic_picture[44].blue  = 0;
	
	cyclic_picture[45].red   = 0;
	cyclic_picture[45].green = 0;
	cyclic_picture[45].blue  = 0;
	
	cyclic_picture[46].red   = 1;
	cyclic_picture[46].green = 1;
	cyclic_picture[46].blue  = 1;
	
	cyclic_picture[47].red   = 0;
	cyclic_picture[47].green = 0;
	cyclic_picture[47].blue  = 0;
}