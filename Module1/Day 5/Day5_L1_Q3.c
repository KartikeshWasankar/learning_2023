#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time startTime, struct Time endTime);

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time (HH MM SS): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (HH MM SS): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    difference = calculateTimeDifference(startTime, endTime);

    printf("\nTime Difference: %d hours, %d minutes, %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}

struct Time calculateTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time difference;

    int startTimeInSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endTimeInSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;
    int differenceInSeconds = endTimeInSeconds - startTimeInSeconds;

    difference.hours = differenceInSeconds / 3600;
    differenceInSeconds %= 3600;
    difference.minutes = differenceInSeconds / 60;
    difference.seconds = differenceInSeconds % 60;

    return difference;
}
