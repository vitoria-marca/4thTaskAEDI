
typedef struct work{
    int difficulty;
    int profit;
}Work;

int compare(const void *a, const void *b) {
    Work *workA = (Work *)a;
    Work *workB = (Work *)b;
    return workA->difficulty - workB->difficulty;
}

int maxProfitAssignment(int* difficulty, int difficultySize, int* profit, int profitSize, int* worker, int workerSize) {
    int n = difficultySize;
    Work work[n];

    for (int i = 0; i < n; i++){
        work[i].difficulty = difficulty[i];
        work[i].profit = profit[i];
    }

    qsort(work, n, sizeof(Work), compare);

    int result = 0;
    
    for (int i = 0; i < workerSize; i++) {
        int maxProfit = 0;
        int index = 0;
        while (index < n && worker[i] >= work[index].difficulty) {
            if (work[index].profit > maxProfit) {
                maxProfit = work[index].profit;
            }
            index++; 
        }
        result += maxProfit;
    }
    return result;
}