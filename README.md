# Selection Sort Algorithm

Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list.

## Time Complexity
The time complexity of Selection Sort is O(N^2) as there are two nested loops.

## Advantages
1. Simple and easy to understand.
2. Works well with small datasets.

## Disadvantages
1. Selection sort has a time complexity of O(n^2) in the worst and average case.
2. Does not work well on large datasets.
3. Does not preserve the relative order of items with equal keys, which means it is not stable.


# Bubble Sort Algorithm

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

## Time Complexity
- Time Complexity: O(N^2)
- Auxiliary Space: O(1)

## Advantages
1. Easy to understand and implement.
2. Does not require any additional memory space.
3. Stable sorting algorithm, meaning that elements with the same key value maintain their relative order in the sorted output.


# Insertion Sort Algorithm

Insertion sort is a simple sorting algorithm that works similarly to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

## Time Complexity
- Time Complexity: O(N^2)
- Auxiliary Space: O(1)

## Characteristics
1. One of the simplest algorithms with a straightforward implementation.
2. Efficient for small data values.
3. Adaptive in nature, meaning it is appropriate for data sets that are already partially sorted.

### How Insertion Sort Works
The basic idea is to build a sorted array gradually, one element at a time. At each step, the algorithm takes an element from the unsorted part and inserts it into its correct position in the sorted part, shifting other elements if necessary.

## Disadvantages
1. Bubble sort has a time complexity of O(N^2), making it very slow for large data sets.
2. It is a comparison-based sorting algorithm, requiring a comparison operator, which can limit its efficiency in certain cases.

# Merge Sort Algorithm

Merge Sort is a divide-and-conquer algorithm that divides an array into two halves, recursively sorts them, and then merges the sorted halves to produce a sorted array.

## Time Complexity
- Time Complexity: O(N log N)
- Auxiliary Space: O(N)

## Characteristics

1. Efficient and stable sorting algorithm.
2. Guarantees O(N log N) time complexity in all cases.
3. Divides the array into smaller sub-arrays until each sub-array is of length 1, then merges them in a sorted manner.

### How Merge Sort Works 

1. **Divide:** The unsorted array is divided into two halves.
2. **Conquer:** Each half is recursively sorted.
3. **Merge:** The sorted halves are merged to produce a single sorted array.

# Quick Sort Algorithm

Quick Sort is a divide-and-conquer algorithm that works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then recursively sorted.

## Time Complexity

- Average Time Complexity: O(N log N)
- Worst Time Complexity: O(N^2) (uncommon with good pivot selection)
- Auxiliary Space: O(log N) - in-place

## Characteristics

1. Efficient and widely used sorting algorithm.
2. Employs a divide-and-conquer strategy with a pivot element.
3. In-place sorting algorithm, meaning it doesn't require additional memory for sorting.

### How Quick Sort Works

1. **Choose a Pivot:** Select an element from the array to act as the pivot.
2. **Partitioning:** Rearrange the array elements such that elements less than the pivot are on the left, and elements greater than the pivot are on the right.
3. **Recursion:** Apply the same process to the sub-arrays on both sides of the pivot.
4. **Combine:** No additional combining step is needed as the elements are sorted in place.





