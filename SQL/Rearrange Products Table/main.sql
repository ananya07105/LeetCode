# Write your MySQL query statement below
SELECT * FROM(
  select product_id,'store1' store, store1 price FROM Products
    union
   select product_id, 'store2' store, store2 price FROM Products
    union
    select product_id, 'store3' store, store3 price FROM Products
)t
WHERE price is NOT NULL;
