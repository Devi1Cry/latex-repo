function [ count ] = prob1( n )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
count = 0;
i = n;
while i >= 1
    j = i;
    while j <= n
        count = count + 1;
        j = 2*j;
    end
    i = floor(i/2);
end


end

