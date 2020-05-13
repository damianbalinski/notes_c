#include <windows.h>
#include <stdio.h>
#include <psapi.h>

int main(void)
{

    PROCESS_MEMORY_COUNTERS pmc;
    int* t = (int*)malloc(500000 * sizeof(int));
    if (GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc)))
    {
        printf("PageFaultCount            : %d\n", pmc.PageFaultCount);
        printf("PeakWorkingSetSize        : %d\n", pmc.PeakWorkingSetSize);
        printf("WorkingSetSize            : %d\n", pmc.WorkingSetSize);
        printf("QuotaPeakPagedPoolUsage   : %d\n", pmc.QuotaPeakPagedPoolUsage);
        printf("QuotaPagedPoolUsage       : %d\n", pmc.QuotaPagedPoolUsage);
        printf("QuotaPeakNonPagedPoolUsage: %d\n", pmc.QuotaPeakNonPagedPoolUsage);
        printf("QuotaNonPagedPoolUsage    : %d\n", pmc.QuotaNonPagedPoolUsage);
        printf("PagefileUsage             : %d\n", pmc.PagefileUsage);
        printf("PeakPagefileUsage         : %d\n", pmc.PeakPagefileUsage);
    }
}