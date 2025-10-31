/*
Name:Erick Mburu
Reg: PA106/G/28729/25
Des: 2D array
*/
#include <stdio.h>

int main() {
    int occupancy[5][10];
    int occupied, vacant;

    printf("=== Room Occupancy (One Branch) ===\n");
    printf("Enter 1 for occupied and 0 for vacant.\n");

    // Input occupancy data for each floor
    for (int floor = 0; floor < 5; floor++) {
        printf("\n--- Floor %d ---\n", floor + 1);
        occupied = vacant = 0;

        for (int room = 0; room < 10; room++) {
            printf("Enter status for room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}