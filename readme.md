# Time-slot merging data-structure

There occurs a problem especially in shift total work hour calculation when you need to ensure that the total shift times at a given time range needs to be calculated without any overlap or double-counting.

To do this, we simple maintain an array of fixed size, with each index of the array corresponding to a minute.

The number on that array index, records which minute of the day is occupied by a shift, and which minute is not.

That way any overlap between two shifts, are ignored and merged together.

This uses the aggregate function 'add' to append shifts to the data-structure, and the entire behavior is encapsulated.

The 'add' function modifies the data-structure. The time complexity is O(n). The space complexity is O(1) as the array only needs 24 * 60 * 2 + 1 integers in memory, and isn't a function of the input.

The implementations are in ruby & c.


## Timings

C:

~~~
real	0m0.002s 
user	0m0.001s
sys	0m0.002s
~~~

Ruby:

~~~
real	0m0.063s
user	0m0.047s
sys	0m0.016s
~~~

