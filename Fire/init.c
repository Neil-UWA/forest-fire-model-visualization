/*
	 a function to initialize a map with width * height sites,
	 and the probability of a site is occupied by a tree
 */

#include "fire.h"

void init_map(int** map, int** new_map, dimension dim,double prob_init_tree, num_tracker* tracker){
	for(int i=0;i<dim.width;i++){
		for(int j=0;j<dim.height;j++){
			if(prob(prob_init_tree)){
				map[i][j] = tree;
				new_map[i][j] = map[i][j];
				tracker->num_total_tree += 1;
			}else{
				map[i][j] = empty;
				new_map[i][j] = map[i][j];
			}
		}
	}
}
