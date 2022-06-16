# CPP_DS
c++ data structure


for_each  f=for_each(b,e ,f) Do f(x) for each x in [b:e); return f

all_of(b,e,f) Is f(x) true for all x in [b:e)?
any_of(b,e ,f) Is f(x) true for any x in [b:e)?
none_of(b,e,f) Is f(x) false for all x in [b:e)?

find()
p=find(b,e,v) p points to the first element in [b:e) such that ∗p==v
p=find_if(b,e,f) p points to the first element in [b:e) such that f(∗p)
p=find_if_not(b,e,f) p points to the first element in [b:e) such that !f(∗p)
p=find_first_of(b,e ,b2,e2) p points to the first element in [b:e) such that ∗p==∗q
for some q in [b2:e2)
p=find_first_of(b,e ,b2,e2,f) p points to the first element in [b:e) such that f(∗p,∗q)
for some q in [b2:e2)
p=adjacent_find(b,e) p points to the first element in [b:e) such that ∗p==∗(p+1)
p=adjacent_find(b,e,f) p points to the first element in [b:e) such that f(∗p,∗(p+1))
p=find_end(b,e,b2,e2) p points to the last ∗p in [b:e) such that ∗p==∗q for
an element ∗q in [b2:e2)
p=find_end( b,e,b2,e2,f) p points to the last ∗p in [b:e) such that f(∗p,∗q) for
an element ∗q in [b2:e2)

equal and mismatch()
equal(b,e,b2) Is v==v2 for all corresponding elements of
[b:e) and [b2:b2+(e−b))?
equal(b,e,b2,f) Is f(v,v2) for all corresponding elements of
[b:e) and [b2:b2+(e−b))?
pair(p1,p2)=mismatch(b,e ,b2) p1 points to the first element in [b:e) and
p2 points to the first element in [b2:b2+(e−b))
such that !(∗p1==∗p2) or p1==e
pair(p1,p2)=mismatch(b,e ,b2,f) p1 points to the first element in [b:e) and
p2 points to the first element in [b2:b2+(e−b))
such that !f(∗p1,∗p2) or p1==e

search()
p=search(b,e ,b2,e2) p points to the first ∗p in [b:e) such that
[p:p+(e−b)) equals [b2:e2)
p=search(b.e ,b2,e2,f) p points to the first ∗p in [b:e) such that
[p:p+(e−b)) equals [b2:e2), using f for element comparison
p=search_n(b,e ,n,v) p points to the first element of [b:e) such that
each element of [p:p+n) has the value v
p=search_n(b,e ,n,v,f) p points to the first element of [b:e) such that
for each element ∗q in [p:p+n) we hav e f(∗p,v)

transform()
p=transform(b,e ,out,f) Apply ∗q=f(∗p1) to every ∗p1 in [b:e), writing to
the corresponding ∗q in [out:out+(e−b)); p=out+(e−b)
p=transform(b,e ,b2,out,f) Apply ∗q=f(∗p1,∗p2) to every element in ∗p1 in [b:e) and
the corresponding ∗p2 in [b2:b2+(e−b)), writing to
the corresponding ∗q in [out:out+(e−b)); p=out+(e−b)

copy()
p=copy(b,e ,out) Copy all elements in [b:e) to [out:p); p=out+(e−b)
p=copy_if(b,e ,out,f) Copy elements x in [b:e) for which f(x) to [out:p)
p=copy_n(b,n,out) Copy the first n elements in [b:b+n) to [out:p); p=out+n
p=copy_backward(b,e ,out) Copy all elements in [b:e) to [out:p),
starting with its last element; p=out+(e−b)
p=move(b,e ,out) Move all elements in [b:e) to [out:p); p=out+(e−b)
p=move_backward(b,e ,out) Move all elements in [b:e) to [out:p),
starting with its last element; p=out+(e−b)

unique()
p=unique(b,e) Move elements in [b:e) such that [b:p) has no adjacent duplicates
p=unique(b,e,f) Move elements in [b:e) such that [b:p) has no adjacent duplicates;
f(∗p,∗(p+1)) defines ‘‘duplicate’’
p=unique_copy(b,e ,out) Copy [b:e) to [out:p); don’t copy adjacent duplicates
p=unique_copy(b,e ,out,f) Copy [b:e) to [out:p); don’t copy adjacent duplicates;
f(∗p,∗(p+1)) defines ‘‘duplicate’’

remove() and replace()
p=remove(b,e ,v) Remove elements with value v from [b:e),
such that [b:p) becomes the elements for which !(∗q==v)
p=remove_if(b,e ,v,f) Remove elements ∗q from [b:e),
such that [b:p) becomes the elements for which !f(∗q)
p=remove_copy(b,e ,out,v) Copy elements from [b:e) for which !(∗q==v) to [out:p)
p=remove_copy_if(b,e ,out,f) Copy elements from [b:e) for which !f(∗q) to [out:p)
reverse(b,e) Reverse the order of elements in [b:e)
p=reverse_copy(b,e ,out) Copy [b:e) into [out:p) in reverse order

replace(b,e,v,v2) Replace elements ∗p in [b:e) for which ∗p==v with v2
replace_if(b,e,f,v2) Replace elements ∗p in [b:e) for which f(∗p) with v2
p=replace_copy(b,e ,out,v,v2) Copy [b:e) to [out:p),
replacing elements for which ∗p==v with v2
p=replace_copy_if(b,e ,out,f,v2) Copy [b:e) to [out:p),
replacing elements for which f(∗p,v) with v2

rotate(), random_shuffle(), and partition()

p=rotate(b,m,e) Left-rotate elements: treat [b:e) as a circle
with the first element right after the last;
move ∗(b+i) to ∗((b+(i+(e−m))%(e−b));
note: ∗b moves to ∗m; p=b+(e−m)
p=rotate_copy(b,m,e ,out) Copy [b:e) into a rotated sequence [out:p)

random_shuffle(b,e) Shuffle elements of [b:e), using
the default random number generator
random_shuffle(b,e,f) Shuffle elements of [b:e), using
the random number generator f
shuffle(b,e,f) Shuffle elements of [b:e), using
the uniform random number generator f

partition()
p=partition(b,e,f) Place elements for which f(∗p1) in [b:p)
and other elements in [p:e)
p=stable_par tition(b,e,f) Place elements for which f(∗p1) in [b:p)
and other elements in [p:e);
preserve relative order
pair(p1,p2)=partition_copy(b,e ,out1,out2,f) Copy elements of [b:e) for which f(∗p)
into [out1:p1) and elements of [b:e)
for which !f(∗p) into [out2:p2)
p=partition_point(b,e,f) For [b:e) p is the point
such that all_of(b,p,f) and none_of(p,e,f)
is_partitioned(b,e,f) Does every element of [b:e) for which f(∗p)
precede every element for which !f(∗p)?

Permutations
x=next_permutation(b,e) Make [b:e) the next permutation in lexicographical order
x=next_permutation(b,e ,f) Make [b:e) the next permutation, using f for comparison
x=prev_permutation(b,e) Make [b:e) the previous permutation in lexicographical order
x=prev_permutation(b,e ,f) Make [b:e) the previous permutation, using f for comparison
is_permutation(b,e ,b2) Is there a permutation of [b2:b2+(e−b)) that compares equal
to [b,e)?
is_permutation(b,e ,b2,f) Is there a permutation of [b2:b2+(e−b)) that compares equal
to [b,e), using f(∗p,∗q) as the element comparison?

fill()
fill(b,e,v) Assign v to each element of [b:e)
p=fill_n(b,n,v) Assign v to each element of [b:b+n); p=b+n
generate(b,e ,f) Assign f() to each element of [b:e)
p=generate_n(b,n,f) Assign f() to each element of [b:b+n); p=b+n
uninitialized_fill(b,e,v) Initialize each element in [b:e) with v
p=uninitialized_fill_n(b,n,v) Initialize each element in [b:b+n) with v; p=b+n
p=uninitialized_copy(b,e ,out) Initialize each element of [out:out+(e−b)); p=b+n
with its corresponding element from [b:e)
p=uninitialized_copy_n(b,n,out) Initialize each element of [out:out+n)
with its corresponding element from [b:b+n); p=b+n

swap()
swap(x,y) Exchange the values of x and y
p=swap_rang es(b,e,b2) swap(v,v2) corresponding elements in [b:e) and [b2,b2+(e−b))
iter_swap(p,q) swap(∗p,∗q)

Sorting and Searching
sort(b,e) Sort [b:e)
sort(b,e,f) Sort [b:e), using f(∗p,∗q) as the sorting criterion
stable_sor t(b,e) Sort [b:e) maintaining order of equal elements
stable_sor t(b,e,f) Sort [b:e), using f(∗p,∗q) as the sorting criterion,
maintaining order of equal elements
partial_sort(b,m,e) Sort enough of [b:e) to get [b:m) into order;
[m:e) need not be sorted
partial_sort(b,m,e,f) Sort enough of [b:e) to get [b:m) into order, using
f(∗p,∗q) as the sorting criterion; [m:e) need not be sorted
p=partial_sort_copy(b,e ,b2,e2) Sort enough of [b:e) to copy the first e2−b2 elements
into [b2:e2);
p is the smaller of b2 and b2+(e−b)
p=partial_sort_copy(b,e ,b2,e2,f) Sort enough of [b:e) to copy the first e2−b2 elements
into [b2:e2), using f for comparison;
p is the smaller of b2 and b2+(e−b)
is_sorted(b,e) Is [b:e) sorted?
is_sorted(b,e,f) Is [b:e) sorted, using f for comparison?
p=is_sorted_until(b,e) p points to the first element in [b:e) that is not in order
p=is_sorted_until(b,e,f) ppoints to the first element in [b:e) that is not in order,
using f for comparison
nth_element(b,n,e) ∗n is in the position it would be in if [b:e) was sorted;
elements in [b:n) are <= ∗n and ∗n <= elements in [n:e)
nth_element(b,n,e,f) ∗n is in the position it would be in if [b:e) was sorted;
elements in [b:n) are <= ∗n and ∗n <= elements in [n:e),
using f for comparison

Set Algorithms

includes(b,e ,b2,e2) Are all elements of [b:e) also in [b2:e2)?
includes(b,e ,b2,e2,f) Are all elements of [b:e) also in [b2:e2),
using f for comparison?
p=set_union(b,e,b2,e2,out) Construct a sorted sequence [out:p)
of elements that are in either [b:e) or [b2:e2)
p=set_union(b,e,b2,e2,out,f) Construct a sorted sequence [out:p)
of elements that are in either [b:e) or [b2:e2),
using f for comparison
p=set_intersection(b,e ,b2,e2,out) Construct a sorted sequence [out:p)
of elements that are in both [b:e) and [b2:e2)
p=set_intersection(b,e ,b2,e2,out,f) Construct a sorted sequence [out:p)
of elements that are in both [b:e) and [b2:e2),
using f for comparison
p=set_difference(b,e ,b2,e2,out) Construct a sorted sequence [out:p)
of elements that are in [b:e) but not in [b2:e2)
p=set_difference(b,e ,b2,e2,out,f) Construct a sorted sequence [out:p)
of elements that are in [b:e) but not in [b2:e2),
using f for comparison
p=set_symmetric_difference(b,e ,b2,e2,out) Construct a sorted sequence [out:p)
of elements that are in [b:e) or [b2:e2)
but not in both
p=set_symmetric_difference(b,e ,b2,e2,out,f) Construct a sorted sequence [out:p)
of elements that are in [b:e) or [b2:e2)
but not in both, using f for comparison

Heaps
make_heap(b,e) Make [b:e) ready to be used as a heap
make_heap(b,e,f) Make [b:e) ready to be used as a heap, using f for comparison
push_heap(b,e) Add ∗(e−1) to the heap [b:e−1); afterward [b:e) is a heap
push_heap(b,e,f) Add an element to the heap [b:e−1), using f for comparison
pop_heap(b,e) Remove ∗(e−1) from the heap [b:e); afterward, [b:e−1) is a heap
pop_heap(b,e,f) Remove element from the heap [b:e), using f for comparison
sort_heap(b,e) Sort the heap [b:e)
sort_heap(b,e,f) Sort the heap [b:e), using f for comparison
is_heap(b,e) Is [b:e) a heap?
is_heap(b,e,f) Is [b:e) a heap, using f for comparison?
p=is_heap_until(b,e) p is the largest p such that [b:p) is a heap
p=is_heap_until(b,e,f) p is the largest p such that [b:p) is a heap, using f for comparison

Min and Max
x=min(a,b) xis the smaller of a and b
x=min(a,b,f) xis the smaller of a and b, using f for comparison
x=min({elem}) x is the smallest element in {elem}
x=min({elem},f) x is the smallest element in {elem},
using f for the element comparison

x=max(a,b) xis the larger of a and b
x=max(a,b,f) xis the larger of a and b, using f for comparison
x=max({elem}) x is the largest element in {elem}
x=max({elem},f) x is the largest element in {elem},
using f for the element comparison

pair(x,y)=minmax(a,b) x is min(a,b) and y is max(a,b)
pair(x,y)=minmax(a,b,f) x is min(a,b,f) and y is max(a,b,f)
pair(x,y)=minmax({elem}) x is min({elem}) and y is max({elem})
pair(x,y)=minmax({elem},f) x is min({elem},f) and y is max({elem},f)

p=min_element(b,e) p points to the smallest element of [b:e) or e
p=min_element(b,e,f) p points to the smallest element of [b:e) or e,
using f for the element comparison

p=max_element(b,e) p points to the largest element of [b:e) or e
p=max_element(b,e,f) p points to the largest element of [b:e) or e,
using f for the element comparison

pair(x,y)=minmax_element(b,e) x is min_element(b,e) and y is max_element(b,e)
pair(x,y)=minmax_element(b,e,f) x is min_element(b,e,f) and y is max_element(b,e,f)
