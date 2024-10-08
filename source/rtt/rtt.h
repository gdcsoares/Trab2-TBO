#ifndef _RTT_H_
#define _RTT_H_

typedef struct rtt RTT;

RTT* rtt_create(int server, int client, double razao);

void rtt_aprox_add(RTT ** rtt, double rtt_aprox);

void rtt_destroy(RTT * rtt);

int compare_rtt(const void *a, const void *b);
////////////////////////////////
void print_rtts(RTT ** rtts, int n_rtts, char *filename);

#endif