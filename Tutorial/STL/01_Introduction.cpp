/*
    *) STL
        -> Standard template library
        -> It consist of three components
            1) Containers
                    -> Stores data
                    -> use template classes
                    -> EX: Array, Linked List
                    -> Type:
                        a. Sequence container
                        b. Order container
                        c. Unordered container
            2) Algorithms
                    -> Built in algorithms to perform for container
                    -> Sorting
                    -> Searching
                    -> Reversing
                    -> use template functions
            3) Iterators (object)
                    -> To iterate on the Container
                    -> object points to an element in a container
                    -> handled just like a pointers
                    -> connects algo with containers
                    -> EX: In List we have to iterate one by one to do a traversal
                        -> In Array we can directly iterate to specific element (random access iterator)

        Container:  |1|7|11|18|20|
                      <---|--->     -> using Algorithms
                       iterators
            (moves as instructed by the algorithm)

        *) Container:
            *> Sequence Containers: implement data structures that can be accessed in a sequential manner.
                -> vector
                -> list
                -> deque
                -> arrays
                -> forward_list( Introduced in C++11)
            *> Container Adaptors: provide a different interface for sequential containers.
                -> queue
                -> priority_queue
                -> stack
            *> Associative Containers: implement sorted data structures that can be quickly searched (O(log n) complexity).
                -> set
                -> multiset
                -> map
                -> multimap
            *> Unordered Associative Containers: implement unordered data structures that can be quickly searched
                -> unordered_set (Introduced in C++11)
                -> unordered_multiset (Introduced in C++11)
                -> unordered_map (Introduced in C++11)
                -> unordered_multimap (Introduced in C++11)
*/