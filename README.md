Bubble sort is a simple sorting algorithm. This sorting algorithm is comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order. This algorithm is not suitable for large data sets as its average and worst case complexity are of Ο(n2) where n is the number of items.

How Bubble Sort Works?
We take an unsorted array for our example. Bubble sort takes Ο(n2) time so we're keeping it short and precise.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/bubble_sort_0.jpg" alt="image description" style="width:500px; height:600px;">

Bubble sort starts with very first two elements, comparing them to check which one is greater.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/bubble_sort_1.jpg" alt="image description" style="width:500px; height:600px;">

In this case, value 33 is greater than 14, so it is already in sorted locations. Next, we compare 33 with 27.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/bubble_sort_2.jpg" alt="image description" style="width:500px; height:600px;">

We find that 27 is smaller than 33 and these two values must be swapped.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/bubble_sort_3.jpg" alt="image description" style="width:500px; height:600px;">

The new array should look like this 

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/bubble_sort_4.jpg" alt="image description" style="width:500px; height:600px;">

Next we compare 33 and 35. We find that both are in already sorted positions.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/bubble_sort_5.jpg" alt="image description" style="width:500px; height:600px;">

Then we move to the next two values, 35 and 10.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/bubble_sort_6.jpg" alt="image description" style="width:500px; height:600px;">

We know then that 10 is smaller 35. Hence they are not sorted.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/bubble_sort_7.jpg" alt="image description" style="width:500px; height:600px;">

We swap these values. We find that we have reached the end of the array. After one iteration, the array should look like this −

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/bubble_sort_8.jpg" alt="image description" style="width:500px; height:600px;">

To be precise, we are now showing how an array should look like after each iteration. After the second iteration, it should look like this −

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/bubble_sort_9.jpg" alt="image description" style="width:500px; height:600px;">

Notice that after each iteration, at least one value moves at the end.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/bubble_sort_10.jpg" alt="image description" style="width:500px; height:600px;">

And when there's no swap required, bubble sorts learns that an array is completely sorted.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/bubble_sort_11.jpg" alt="image description" style="width:500px; height:600px;">

Now we should look into some practical aspects of bubble sort.