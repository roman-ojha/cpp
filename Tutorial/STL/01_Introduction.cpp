/*
    *) STL
        -> Standard template library
        -> It consist of three components
            1) Containers
                    -> Stores data
                    -> use template classes
                    -> EX: Array, Linked List
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
*/