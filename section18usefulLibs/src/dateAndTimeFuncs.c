#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int Debug = 0;

#ifdef DEBON
#define DEBUG(level, fmt, ...)                                                                                         \
    if (Debug >= level)                                                                                                \
    fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level, fmt, ...) /* Nothing */
#endif

void print_tm(struct tm *timeptr)
{
    printf("tm_sec: %d\n", timeptr->tm_sec);
    printf("tm_min: %d\n", timeptr->tm_min);
    printf("tm_hour: %d\n", timeptr->tm_hour);
    printf("tm_mday: %d\n", timeptr->tm_mday);
    printf("tm_mon: %d\n", timeptr->tm_mon);
    printf("tm_year: %d\n", timeptr->tm_year);
    printf("tm_wday: %d\n", timeptr->tm_wday);
    printf("tm_yday: %d\n", timeptr->tm_yday);
    printf("tm_isdst: %d\n", timeptr->tm_isdst);
}

/* clock_t clock(void);
time_t time(time_t *returnedValue);
char *ctime(const time_t *timer);

accepts a pointer to a time:t variable as an argyemnt that contains a calender time value returned by the time( function
returns a pointer to a 26-character string containing the day, the date, the time ,and the yerar, which is terminated by
a newline and '\0') " Mon aug 25 10:45:56 2003\n\0"

ctime has no knowledge of the length of the sting you have allocated to store the result: MAKES THIS AN UNSAFE OPERATION

you might use the ctime function like this
char time_str[30] = {'\0};
time_t calender = time(NULL);


double difftime(time_t tm1, time_t tm2);
char *asctime(struct tm const *tm_ptr);

struct tm *localtime(const time_t *time_value);     return NULL if timer cannot be converted

struct tm {
    int tm_sec;    // Seconds [0, 60] (60 allows for a leap second)
    int tm_min;    // Minutes [0, 59]
    int tm_hour;   // Hours [0, 23]
    int tm_mday;   // Day of the month [1, 31]
    int tm_mon;    // Month of the year [0, 11] (January = 0)
    int tm_year;   // Years since 1900 (e.g., 2023 corresponds to 123)
    int tm_wday;   // Day of the week [0, 6] (Sunday = 0)
    int tm_yday;   // Day of the year [0, 365] (January 1 = 0)
    int tm_isdst;  // Daylight Saving Time flag (positive if DST is in effect, zero if not, negative if information is
not available)
};


struct tm *gmtime(time_t const *time_value); */

// localtime() retyrbs stryctyre if tyoe struct tm : can be passed as an argyment to asctime() function
// asctime() and ctime() funcs returns current date and time of day
// the ctime() function may vall asctime() to perform its work

int main()
{

    /*   BLOCK for elapsed time

        time_t calenderStart = time(NULL);
        clock_t cpuStart = clock();
        int count = 0;

        const long long iterations = 1000000000LL;
        char answer = 'y';
        double x = 0.0;

        printf("Initial clock time = %lld Initial calender time = %lld\n", (long long)cpuStart, (long long)count);

        while (tolower(answer) == 'y')
        {
            for (long long i = 0LL; i < iterations; ++i)
                x = sqrt(3.14159265);
            printf("%lld square roots completed.\n", iterations * (++count));
            printf("Do you want to run some more(y or n)? \n");

            scanf("\n%c", &answer);
        }

        clock_t cpuEnd = clock();        // final cpu time
        time_t calenderEnd = time(NULL); // Final calender time

        printf("Final clock time = %lld Final calender time = %lld\n", (long long)cpuEnd, (long long)calenderEnd);
        printf("CPU time for %lld iterations is %.2lf seconds\n", count * iterations,
               ((double)(cpuEnd - cpuStart)) / CLOCKS_PER_SEC);
        printf("Elapsed calender time to execute the program is %8.2lf seconds.\n", difftime(calenderEnd,
       calenderStart)); END BLOCK
     */
    /*     time_t calendar = time(NULL);
        struct tm *timeinfo;
        timeinfo = localtime(&calendar); // Convert to local time representation

        printf("Today is %s %s %d %d\n", days[timeinfo->tm_wday], months[timeinfo->tm_mon], timeinfo->tm_mday,
               timeinfo->tm_year + 1900);

        time_t time_ptr;

        time(&time_ptr);
        printf("Current date and time = %s\n", asctime(localtime(&time_ptr)));

          print_tm(timeinfo);   */
    struct tm birthday = {0};
    char name[30] = {'\0'};

    const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    const char *months[] = {"January", "February", "March",     "April",   "May",      "June",
                            "July",    "August",   "September", "October", "November", "December"};
    const char *suffix[] = {"st", "nd", "rd", "th"};

    enum sufindex
    {
        st,
        nd,
        rd,
        th
    } sufsel = th;

    printf("Enter a name: ");
    scanf("%s", name);

    printf("Enter the birthday for %s as day month year integers separated by space. \n e.g Enter 1st February 1985 as "
           "1 2 1985 : ",
           name);
    scanf("%d %d %d", &birthday.tm_mday, &birthday.tm_mon, &birthday.tm_year);

    birthday.tm_mon -= 1;
    birthday.tm_year -= 1900;

    if (mktime(&birthday) == -1)
    {
        fprintf(stderr, "Operation failed.\n");
        return -1;
    }

    switch (birthday.tm_mday)
    {
    case 1:
    case 21:
    case 31:
        sufsel = st;
        break;
    case 2:
    case 22:
        sufsel = nd;
        break;
    case 3:
    case 23:
        sufsel = rd;
        break;
    default:
        sufsel = th;
        break;
    }

    printf("%s was born on the %d%s %s %d, which was a %s.\n", name, birthday.tm_mday,
           suffix[sufsel],          // Use suffix array
           months[birthday.tm_mon], // Use months array
           birthday.tm_year, // Adjust year back to full year
           days[birthday.tm_wday]); // Use days array

    return 0;
}
