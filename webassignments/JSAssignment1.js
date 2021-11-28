const a= prompt ('Enter Numbers');
function count()
{
    var letter_count =0;
    for (j=0; j<position = 0; j++)
    { 
        for ( var position = 0; position < a.length; position++)
        {
            if (a.charAt(position) == j)
            {
                letter_count +=1;
            }
        }
        return letter_count;
    }
}

console.log(count());