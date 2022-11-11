/*
 * Queue.h
 *
 *  Created on: Oct 21, 2022
 *      Author: aya
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#define  Queueelementdatatype int
#define max 5

typedef struct queue
{  Queueelementdatatype front;
Queueelementdatatype rear;
Queueelementdatatype size;

int Queueindex [max];
}Queue ;
void CreateQueue (Queue *pq);
void Append ( Queue *pq, Queueelementdatatype e);
void Serve ( Queue *pq, Queueelementdatatype e);
int Queueempty (Queue *pq);
int IsQueuefull (Queue *pq);
int size (Queue *pq);
void clear (Queue *pq);
void traverse (Queue *pq, (*pf)(Queueindeax));
#endif /* QUEUE_H_ */
