#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "error_file.h"

typedef enum 
{
    NOTMARKED,
    MARKED
} Mark;

typedef struct n{
    int id;
    struct n **links;
    int links_size;
    Mark mark;
} Node;

typedef struct Element Element;
struct Element
{
    Element *next;
    Node node;
};

typedef struct{
    Element *premier;
} Queue;



int main(int argc, char* argv[]);
int str_debuts_str(char* str1, char* str2);
void display_nods_nbr(char *filename);
void display_links_nbr(char *filename);
void display_node_start(char *filename);
void display_node_end(char *filename);
int get_nods_nbr(char *filename);
int get_links_nbr(char *filename);
int get_node_start(char *filename);
int get_node_end(char *filename);

int get_node_id_by_index(char *filename, int index);
Node** init_node( char *filename );
Node* get_node_by_id(Node **nodes, int id);
void display_nodes(Node* start);

void enqueue(Queue *queue, Node *node_to_enq);
Node *dequeue(Queue *queue);
void mark(Node *node_to_mark);
Node** get_unconnected_nodes(Node **nodes, Node *head);


#endif //LIBRARY_H