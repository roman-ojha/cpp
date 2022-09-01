// FIFO Page Replacement
/*
Enter the number of Pages:      5

Enter reference string values:
Value No. [1]:  5
Value No. [2]:  4
Value No. [3]:  3
Value No. [4]:  2
Value No. [5]:  1

 What are the total number of frames:   4
*/

/*
Generally, most operating systems use the method of paging for memory management. These algorithms are needed to make a decision of which page needs to be replaced when a new page comes into the picture or is demanded.

The need for the demand occurs when the Operating Systems need any page for the processing which is not actually present in the main memory. This situation is also called Page Fault.

Page Fault: The page fault takes place when the main program accesses the memory page which is mapped into a virtual address space but is not loaded in physical memory.

When the Physical Memory is much smaller than the Virtual Memory in such a situation Page Fault happens.

What is FIFO Page Replacement Algorithm in C?
FIFO which is also called First In First Out is one of the types of Replacement Algorithms. This algorithm is used in a situation where an Operating system replaces an existing page with the help of memory by bringing a new page from the secondary memory.

FIFO is the simplest among all algorithms which are responsible for maintaining all the pages in a queue for an operating system and also keeping track of all the pages in a queue.

The older pages are kept in the front and the newer ones are kept at the end of the queue. Pages that are in the front are removed first and the pages which are demanded are added.

Example of FIFO Replacement Algorithm
Now consider a page reference string 1, 3, 0, 3, 5, 6 with 3-page frames. So find the number of page faults?

fifo page replacement algorithm in c
Initially, all the slots are empty so the first 3 elements 1, 3, 0 are allocated to the empty slots. So Page Faults = 3

After 1, 3, 0 element 3 comes. But 3 is already in memory So Page Faults = 0

Now element 5 comes. It is not present in memory so the oldest page slot 1 is replaced. So Page Faults = 1

After 5 element 6 comes, It is also not available in the memory so it gets replaced with the oldest page slot 3. So Page Faults = 1

At last element 3 comes which is not available in memory so it replaces element 0. So page faults = 1

FIFO Page Replacement Algorithm
Start traversing the pages.
Now declare the size w.r.t length of the Page.
Check need of the replacement from the page to memory.
Similarly, Check the need of the replacement from the old page to new page in memory.
Now form the queue to hold all pages.
Insert Require page memory into the queue.
Check bad replacemets and page faults.
Get no of processes to be inserted.
Show the values.
Stop
*/
#include <stdio.h>
int main()
{
    int referenceString[10], pageFaults = 0, m, n, s, pages, frames;
    printf("\nEnter the number of Pages:\t");
    scanf("%d", &pages);
    printf("\nEnter reference string values:\n");
    for (m = 0; m < pages; m++)
    {
        printf("Value No. [%d]:\t", m + 1);
        scanf("%d", &referenceString[m]);
    }
    printf("\n What are the total number of frames:\t");
    {
        scanf("%d", &frames);
    }
    int temp[frames];
    for (m = 0; m < frames; m++)
    {
        temp[m] = -1;
    }
    for (m = 0; m < pages; m++)
    {
        s = 0;
        for (n = 0; n < frames; n++)
        {
            if (referenceString[m] == temp[n])
            {
                s++;
                pageFaults--;
            }
        }
        pageFaults++;
        if ((pageFaults <= frames) && (s == 0))
        {
            temp[m] = referenceString[m];
        }
        else if (s == 0)
        {
            temp[(pageFaults - 1) % frames] = referenceString[m];
        }
        printf("\n");
        for (n = 0; n < frames; n++)
        {
            printf("%d\t", temp[n]);
        }
    }
    printf("\nTotal Page Faults:\t%d\n", pageFaults);
    return 0;
}