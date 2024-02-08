#include <stdio.h>

int main() {
    int num_cashiers;
    scanf("%d", &num_cashiers);

    int processing_rates[num_cashiers];
    for (int i = 0; i < num_cashiers; i++) {
        scanf("%d", &processing_rates[i]);
    }

    int num_clients;
    scanf("%d", &num_clients);

    int queue_id, entry_time;
    int queue_times[num_cashiers + 1];
    
    for (int i = 0; i <= num_cashiers; i++) {
        queue_times[i] = 0;
    }

    

    return 0;
}
