program test;

const
tickets = 10;

var
people, total, day: integer;

begin

{Get People}
while True do
begin
writeln('People');
readln(people);
if (people >= 0) then
break;
end;

{Get Day}
while True do
begin
writeln('Day');
readln(day);
if (day > 0) and (day <= 7) then
break;
end;

{Check if weekend}
if day = 6 or 7 then
total := tickets * people
else 
total := (tickets - 2) * people;

writeln(total);
end.