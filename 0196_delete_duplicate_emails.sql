DELETE p1 FROM person AS p1
INNER JOIN person AS p2   
WHERE p1.id > p2.id 
AND p1.email = p2.email;