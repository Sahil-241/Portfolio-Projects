SELECT Discount, SUM(Sales) AS Total_Sales, SUM(Profit) AS Total_Profit
FROM ecommerce_sales_data_2024_2025
GROUP BY Discount
ORDER BY Discount DESC;