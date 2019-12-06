Var
n, left, right, index, i, j, count : integer;
s, word : string;
alphabet: array [0..25] of integer;

begin
	Readln(n);
	Readln(S);
	left := 1;
	for i := 1 to n do
	begin
		Readln(word);
		right := left;
		count := 0;
		for j := 1 to length(word) do
		begin
		    alphabet[ord(word[j]) - ord('a')] += 1;
		    count += 1;
		end;
		
		while count > 0 do
		begin
		    if alphabet[ord(S[right]) - ord('a')] > 0 then
		    begin
		        alphabet[ord(S[right]) - ord('a')] -= 1;
		        count -= 1;
		    end;
		right += 1;
		end;
		Writeln(left, ' ', right - 1);
		left := right;
	end
end.
