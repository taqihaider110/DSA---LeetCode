CREATE TABLE Products (
    product_id INT PRIMARY KEY,
    low_fats ENUM('Y', 'N') NOT NULL,
    recyclable ENUM('Y', 'N') NOT NULL
);
