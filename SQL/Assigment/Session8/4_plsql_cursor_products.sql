SET SERVEROUTPUT ON;
DECLARE CURSOR c_prod IS
SELECT product_name
FROM PRODUCTS;
v_prod PRODUCTS.product_name %TYPE;
BEGIN OPEN c_prod;
LOOP FETCH c_prod INTO v_prod;
EXIT
WHEN c_prod %NOTFOUND;
DBMS_OUTPUT.PUT_LINE(v_prod);
END LOOP;
CLOSE c_prod;
END;
/