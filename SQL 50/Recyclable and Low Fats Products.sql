-- Select the product IDs of products that are both low fat and recyclable
SELECT product_id
FROM products
WHERE low_fats = 'Y'  -- Low fat products
  AND recyclable = 'Y';  -- Recyclable products

