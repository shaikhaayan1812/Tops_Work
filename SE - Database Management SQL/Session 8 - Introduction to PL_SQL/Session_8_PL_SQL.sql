-- Output screen par dikhane ke liye

SET SERVEROUTPUT ON;


-- Task 1: Name aur age print karna

DECLARE
    user_name VARCHAR2(50) := 'Ayan';
    user_age NUMBER := 22;
BEGIN
    DBMS_OUTPUT.PUT_LINE('User Name: ' || user_name);
    DBMS_OUTPUT.PUT_LINE('User Age: ' || user_age);
END;
/


-- Task 2: Free delivery check karna

DECLARE
    order_amount NUMBER := 750;
BEGIN
    IF order_amount > 500 THEN
        DBMS_OUTPUT.PUT_LINE('Eligible for free delivery');
    ELSE
        DBMS_OUTPUT.PUT_LINE('Delivery charges apply');
    END IF;
END;
/


-- Task 3: 1 se 5 tak number print karna

DECLARE
    counter NUMBER := 1;
BEGIN
    LOOP
        DBMS_OUTPUT.PUT_LINE(counter);
        counter := counter + 1;
        EXIT WHEN counter > 5;
    END LOOP;
END;
/


-- Task 4: Cursor se product names print karna
-- Isse pehle Products_Setup.sql run karna hai

DECLARE
    CURSOR product_cursor IS
        SELECT PRODUCT_NAME
        FROM PRODUCTS;

    product_name PRODUCTS.PRODUCT_NAME%TYPE;
BEGIN
    OPEN product_cursor;

    LOOP
        FETCH product_cursor INTO product_name;
        EXIT WHEN product_cursor%NOTFOUND;

        DBMS_OUTPUT.PUT_LINE('Product Name: ' || product_name);
    END LOOP;

    CLOSE product_cursor;
END;
/


-- Task 5: Divide by zero error handle karna

DECLARE
    first_number NUMBER := 100;
    second_number NUMBER := 0;
    answer NUMBER;
BEGIN
    answer := first_number / second_number;
    DBMS_OUTPUT.PUT_LINE('Result: ' || answer);

EXCEPTION
    WHEN ZERO_DIVIDE THEN
        DBMS_OUTPUT.PUT_LINE('Cannot divide by zero');
END;
/
