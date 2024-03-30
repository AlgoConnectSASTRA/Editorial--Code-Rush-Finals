int solution( long no_of_days, vector<long> tshirts_sold)
{
    int sum=0, result=0;
    for( long i=0; i<no_of_days; i++)
    {
        sum+=tshirts_sold[i];
        if( sum==i+1 )
            result++;
    }

    return result;
}
