<!-- 1. Initialize Square Parameters -->
<!-- ********************************************* -->
<!-- Square parameters -->
SET width to 50
SET height to 50
<!-- Coordinates -->
SET x-coordinate to 0
SET y coordinate to 0

<!-- 2 Loop and create 64 squares -->
<!-- ********************************************* -->
SET alpha as an array with letters "a" to "h"
SET numeric as an array with string integers from "1" to "8"
FOR every count from 0 to 64:
	CREATE a variable name by combining the elements of both the alpha and numeric array to act a coordinate which will be used as a pointer to point to the square
	CREATE a square
	IF the count is even or is 0
		CREATE a white square
	ELSE
		CREATE a black square
	ENDIF
	IF the count is a multiple of 8:
		SET the x-coordinate to 0
		SET the y-coordinate to +50
	ELSE
		SET the x-coordinate to +50
	ENDIF
ENDFOR
