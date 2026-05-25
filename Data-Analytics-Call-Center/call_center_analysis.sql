SELECT 
    SLA_Status,
    COUNT(Call_Id) AS Call_Count,
    ROUND((COUNT(Call_Id) * 100.0 / (SELECT COUNT(*) FROM call_records)), 2) AS Percentage_Share
FROM call_records
GROUP BY SLA_Status;