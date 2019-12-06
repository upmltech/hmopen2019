Var
delta, n, i : integer;
factorial : int64;
temp : integer;

begin
	Readln(n);
	factorial := 1;
	delta := 0;
	for i := 2 to n do
	begin
		temp := i;
		while (temp mod 2 = 0) do
		begin
			delta += 1;
			temp := temp div 2;
		end;
		while (temp mod 5 = 0) do
		begin
			delta -= 1;
			temp := temp div 5;
		end;
		factorial *= temp;
		factorial := factorial mod 10;
	end;
	for i:= 1 to delta do
	begin
		factorial *= 2;
		factorial := factorial mod 10;
	end;
	Writeln(factorial);
end.
