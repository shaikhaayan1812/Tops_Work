SET SERVEROUTPUT ON;
DECLARE a NUMBER := 10;
b NUMBER := 0;
-- change to non-zero to see normal division
result NUMBER;
BEGIN BEGIN result := a / b;
DBMS_OUTPUT.PUT_LINE('Result: ' || result);
EXCEPTION
WHEN ZERO_DIVIDE THEN DBMS_OUTPUT.PUT_LINE('Cannot divide by zero');
END;
END;
/