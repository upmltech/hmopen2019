Var
n, i, j: int64;
flag : boolean;
begin
	Readln(n);
	i := n + 1;
	while i <= 2 * n - 1 do
	begin
		j := 2;
		flag := false;
		while j * j <= i do
		begin
		    if (i mod j = 0) then
		        flag := true;
		    j += 1;
		end;
		if flag = false then
		begin
		    Writeln('YES');
		    Write(i);
		    exit;
		end;
		i := i + 1;
	end;
	Write('NO');
end.
