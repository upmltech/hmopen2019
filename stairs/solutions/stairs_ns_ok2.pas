var
    n, x, ans, i: longint;
    a: array[1..100000] of longint;
begin
    read(n, x);
    
    for i := 1 to n do begin
        read(a[i]);
    end;
    
    ans := 0;
    
    for i := 1 to n - 1 do begin
        ans := ans + (a[i + 1] - a[i] - 1) div x;
    end;
    
    writeln(ans);
end.
