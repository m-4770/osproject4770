#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "Queue.h"//header file design to implement queue in c
int main(){
printf("Let's Schedule\n");
int n = 10;
int Arrival_time[]={3,5,7,1,5,0,8,11,2,6};// Arrival time for all processes
int Burst_time[]={4,5,9,7,5,3,10,4,8,2}; // Burst time for all processes
int Priority[] ={4,5,9,7,5,3,10,4,8,2}; // Priority for processes high
no will be the one with highest priority(eg:10)
struct Queue* Priority_q = createQueue();// Priority Queue
struct Queue* Ready_q_p = createQueue();// Ready Queue
struct Queue* final_q = createQueue();// Final Queue will have Gantt Chart
int maximum = Max(10,Arrival_time);
int run = -1;
int Temp[maximum+1]; //Temp Queue to maintain idle time of CPU
int j=0;
for(int i=0;i<=maximum;i++)
{ bool check = check_burst(10,Burst_time);//check_burst checks all
process burst time =0 returns true
if(!check)
{
if(run != -1)
{
Burst_time[run] = Burst_time[run] - 1;
}
int sr = search(10,Arrival_time,Ready_q_p,i); // search returns
process id whose arrival time matches.
if(run != -1 && Burst_time[run]==0)
{ deQueue(Priority_q);
enQueue(Ready_q_p,sr);
int Ready[10];

run = maxima;
}
else if(sr==-1 && run != -1)
{
continue;
}
else if(sr<0 && isEmpty(Ready_q_p) && isEmpty(Priority_q))
{
Temp[j] = i;
j++;
}
else{
if(isEmpty(Priority_q)&&isEmpty(Ready_q_p))
{
enQueue(Priority_q,sr);
run = sr;
enQueue(final_q,sr);
}
else {
enQueue(Ready_q_p,sr);
}
}
}
}
Burst_time[run]=0;
int Ready[10];
int len = copy_q(Ready,Ready_q_p);
int k=0;
while(!check_burst(10,Burst_time) )
{
int maxima = Max_q(len,Priority,Ready);
Priority[maxima] = 0;
enQueue(final_q,maxima);
Burst_time[maxima] = 0;
k++;
}
printf("Order in which processes complete their process\n\n");
traverse(10,final_q);
}