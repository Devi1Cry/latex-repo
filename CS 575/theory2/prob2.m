function [ count ] = prob2( n )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
count = 0;
j=1;
while j <= n/2
    i = 1;
    while i <= j
        count = count + 1;
        i=i+1;
    end
    j=j+1;
end


end

