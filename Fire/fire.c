#include "fire.h"

int main(int argc, char** argv){

	dimension	dim;   		// store the width and height  

	probabilities	prob; // store all required probabilities

	// check whether all required data are entered
	if(argc!=6){
		printf("\n");
		printf("usage of this program\n");
		printf("./fire [width] [height] [prob_init_tree(q)] [prob_to_tree(p)] [prob_lightning(f)]\n");
		printf("to get correct simulation results, please run several times\n");
		printf("to exit, just press ctrl-c\n");
		printf("\n");
		exit(1);
	} else{
		dim.width = atoi(argv[1]);
		dim.height = atoi(argv[2]);
		prob.prob_init_tree= atof(argv[3]);
		prob.prob_to_tree = atof(argv[4]);
		prob.prob_lightning = atof(argv[5]);		
	}

	// if needed, comment this to get reproduceable results 
	srand(time(NULL));

	// start the simulation
	simulate(dim,prob);

	return 0;
}
