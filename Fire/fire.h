// 
//  fire.h
//  Fire
//  
//  Created by JINANG LU on 2012-06-12.
//  Copyright 2012 __Computer Science of UWA__. All rights reserved.
// 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/*
	 a structure to store width and height of the forest lattice
 */
typedef struct{
	int 	width;
	int		height;
}dimension;

/*
   a structure to store probabilities
 */
typedef struct{
	double  prob_init_tree; // the probability of a site is a tree initially 
	double 	prob_to_tree;   // probability that an empty site becomes a tree 
	double  prob_lightning; //probability that a tree is ignited by lightning
}probabilities;

/*
	 a structure to store forest fire status
 */
 typedef struct{
 	int		num_growing_tree; 
	int		num_burning_tree;
	int		num_total_tree;
 }num_tracker;

/*
	 State ={empty, tree, burning}

	 Ash (i.e. empty site) is used to track the trajectory of the fire in percolation simulation. 
 */
enum {empty = 0, tree = 1, burning = 2, ash = 3};

/*
	 a function to simulate probability
 */
bool prob(double x);

/*
	 a function to initialize a map with width * height sites,
	 and certain probability of a site is occupied by a tree
 */
void init_map(int** map, int** new_map, dimension dim, double probability,num_tracker* tracker);

/*
	 update the state of each site with the probability of prob_to_tree and 
	 prob_lightning, also track the statistics of the forest  
 */
void update_map(int** map, int** new_map, dimension dim, double prob_to_tree, double prob_lightning, num_tracker* tracker); 

/*
	 a function using gnuplot to visualize simulation data
 */
void plot(FILE* fp, FILE* pipe, FILE* pipe_1, int** map, dimension dim,int count,double ratio, num_tracker tracker);

/*
	 a function to simulate the forest fire model process.
	 this function invokes all the above functions
 */
void simulate(dimension dim,probabilities prob);
