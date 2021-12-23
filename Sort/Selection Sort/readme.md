# Selection Sort
- Selection sort is a simple sorting algorithm. 
- This sorting algorithm is an in-place comparison-based algorithm 
- In which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. 
- Initially, the sorted part is empty and the unsorted part is the entire list.
- The smallest element is selected from the unsorted array and swapped with the leftmost element, and that element becomes a part of the sorted array. 
- This process continues moving unsorted array boundary by one element to the right.
# Selection Sort Code
![ALT Text](https://github.com/omkara18/Data-Structure/blob/master/Sort/Selection%20Sort/Output/Selection.png)
## Output
![ALT Text](https://github.com/omkara18/Data-Structure/blob/master/Sort/Selection%20Sort/Output/Selection_Output.png)
## Working Of Selection Sort
- Set the first element as minimum(20).
![ALT Text](https://github.com/omkara18/Data-Structure/blob/master/Sort/Selection%20Sort/Output/Selection-sort-0-initial-array.webp)
- Compare minimum with the second element(12). If the second element(12) is smaller than minimum(20), assign the second element as minimum.
  Compare minimum with the third element. Again, if the third element is smaller, then assign minimum to the third element otherwise do nothing. 
  The process goes on until the last element.
![ALT Text](https://github.com/omkara18/Data-Structure/blob/master/Sort/Selection%20Sort/Output/Selection-sort-0-comparision.webp)
- After each iteration, minimum is placed in the front of the unsorted list.
                               Swap the first with minimum
![ALT Text](https://github.com/omkara18/Data-Structure/blob/master/Sort/Selection%20Sort/Output/Selection-sort-0-swapping.webp)
- For each iteration, indexing starts from the first unsorted element. Step 1 to 3 are repeated until all the elements are placed at their correct positions.
## The First Iteration
![ALT Text](https://github.com/omkara18/Data-Structure/blob/master/Sort/Selection%20Sort/Output/Selection-sort-0.webp)
## The second iteration
![ALT Text](https://github.com/omkara18/Data-Structure/blob/master/Sort/Selection%20Sort/Output/Selection-sort-1.webp)
## The Third iteration
![ALT Text](https://github.com/omkara18/Data-Structure/blob/master/Sort/Selection%20Sort/Output/Selection-sort-2.webp)
## The Fourth iteration
![ALT Text](https://github.com/omkara18/Data-Structure/blob/master/Sort/Selection%20Sort/Output/Selection-sort-3_1.webp)

# Selection Sort Complexity
| Time Complexity |         |
| ------ | ------ |
| Best | O(n2)  |
| Worst |  O(n2)   |
| Aaverage | O(n2)|
| Space Complexity | O(n) |
| Stability| No |

# Selection Sort Applications
The selection sort is used when
- a small list is to be sorted
- cost of swapping does not matter
- checking of all the elements is compulsory
- cost of writing to a memory matters like in flash memory (number of writes/swaps is O(n) as compared to O(n2) of bubble sort)



