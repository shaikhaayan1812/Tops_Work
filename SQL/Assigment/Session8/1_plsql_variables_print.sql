SET SERVEROUTPUT ON;
DECLARE v_name VARCHAR2(100) := 'Amit';
v_age NUMBER := 28;
BEGIN DBMS_OUTPUT.PUT_LINE('Name: ' || v_name);
DBMS_OUTPUT.PUT_LINE('Age: ' || v_age);
END;
/