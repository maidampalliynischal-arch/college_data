#include <stdio.h>

int main() {
    int arr[3][10];
    int seatID[3][10] = {0};
    int n, m;
    int count = 30;
    int price;
    int now;
    int nextID = 1001;

    printf("-----------WELCOME TO KMIT THEATER------------\n");

    while (count > 0) {
        printf("\n       1 2 3 4 5 | 6 7 8 9 10\n");

        for (int row = 0; row < 3; row++) {
            printf("Row %d: ", row + 1);

            for (int column = 0; column < 10; column++) {
                if (seatID[row][column] != 0) {
                    arr[row][column] = 'B';
                } else if (row == 2) {
                    arr[row][column] = 'R';
                } else {
                    arr[row][column] = 'U';
                }

                printf("%c ", arr[row][column]);

                if (column == 4) {
                    printf("| ");
                }
            }
            printf("\n");
        }

        printf("\nDo you want to book seats? (1 = yes, 0 = no): ");
        scanf("%d", &n);

        if (n == 0) {
            break;
        }
        if (n != 1) {
            printf("Please enter 1 or 0.\n");
            continue;
        }

        printf("Choose normal seats or reserved seats (0 = normal, 1 = reserved): ");
        scanf("%d", &now);

        if (now != 0 && now != 1) {
            printf("Please enter 0 or 1.\n");
            continue;
        }

        int firstRow = (now == 1) ? 2 : 0;
        int lastRow = (now == 1) ? 3 : 2;
        int available = 0;

        for (int row = firstRow; row < lastRow; row++) {
            for (int column = 0; column < 10; column++) {
                if (seatID[row][column] == 0) {
                    available++;
                }
            }
        }

        if (available == 0) {
            printf("No seats of that type are available.\n");
            continue;
        }

        printf("How many seats do you want? ");
        scanf("%d", &m);

        if (m < 1 || m > available) {
            printf("Enter a number from 1 to %d.\n", available);
            continue;
        }

        int selected[3][10] = {0};

        for (int i = 0; i < m; ) {
            int row, column;

            printf("Enter row (1-3): ");
            scanf("%d", &row);
            printf("Enter seat (1-10): ");
            scanf("%d", &column);

            if (row < 1 || row > 3 || column < 1 || column > 10) {
                printf("Invalid row or seat number. Try again.\n");
                continue;
            }

            if ((now == 1 && row != 3) || (now == 0 && row == 3)) {
                printf("That row does not match the seat type. Try again.\n");
                continue;
            }

            if (seatID[row - 1][column - 1] != 0) {
                printf("That seat is already booked. Choose another.\n");
                continue;
            }

            if (selected[row - 1][column - 1]) {
                printf("You already selected that seat. Choose another.\n");
                continue;
            }

            selected[row - 1][column - 1] = 1;
            i++;
        }

        price = (now == 1) ? 120 * m : 60 * m;
        int id = nextID++;

        for (int row = 0; row < 3; row++) {
            for (int column = 0; column < 10; column++) {
                if (selected[row][column]) {
                    seatID[row][column] = id;
                }
            }
        }

        count -= m;

        printf("Price: %d\n", price);
        printf("Seats confirmed. Your booking ID is %d.\n", id);
    }

    printf("\n-----------FINAL SEAT MAP------------\n");
    printf("       1 2 3 4 5 | 6 7 8 9 10\n");

    for (int row = 0; row < 3; row++) {
        printf("Row %d: ", row + 1);

        for (int column = 0; column < 10; column++) {
            if (seatID[row][column] != 0) {
                arr[row][column] = 'B';
            } else if (row == 2) {
                arr[row][column] = 'R';
            } else {
                arr[row][column] = 'U';
            }

            printf("%c ", arr[row][column]);

            if (column == 4) {
                printf("| ");
            }
        }
        printf("\n");
    }

    printf("\n-----------BOOKED SEATS AND IDS------------\n");

    int foundBooking = 0;

    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 10; column++) {
            if (seatID[row][column] != 0) {
                printf("Booking ID %d: Row %d, Seat %d\n",
                       seatID[row][column], row + 1, column + 1);
                foundBooking = 1;
            }
        }
    }

    if (!foundBooking) {
        printf("No seats were booked.\n");
    }

    return 0;
}