SELECT DISTINCT P1.email AS Email
FROM Person AS P1
WHERE (SELECT COUNT(*)
        FROM Person
        WHERE email = P1.email) > 1