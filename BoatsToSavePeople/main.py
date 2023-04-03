class Solution:
    def numRescueBoats(self, people: list[int], limit: int) -> int:
        count = 0
        i = 0;
        j = len(people) -1;
        people.sort()
        while j >= i:
            if people[i] + people[j] <= limit:
                i = i+1;
                j = j -1;
            else:
                j=j-1;
            count = count + 1;
        return count;

