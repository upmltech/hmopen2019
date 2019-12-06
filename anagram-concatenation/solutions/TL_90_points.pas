Var
n, left, right, index, i, j : integer;
s, word : string;
begin
	Readln(n);
	Readln(S);
	left := 1;
	for i := 1 to n do
	begin
		Readln(word);
		right := 0;
		for j := 1 to length(word) do
		begin
			index := left;
			while not(s[index] = word[j]) do
				index := index + 1;
			s[index] := '-';
			if right < index then
				right := index;
		end;
		Write(left, ' ', right, ' ');
		left := right + 1;
	end
end.
