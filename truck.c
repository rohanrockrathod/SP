public class Truckloads
{
  public int numTrucks(int numCrates,int loadSize)
  {
    int T[]=new int[numCrates+1];
    for(int i=1;i<numCrates+1;i++)
    {
      if(i<=loadSize) T[i]=1;
      else if(i%2==0)
      {
        if(i/2<=loadSize)
          T[i]=2;
        else T[i]=2*T[i/2];        
      }
      else
      {        
        if(i/2+1<=loadSize)
          T[i]=2;
        else if( i/2+1>loadSize && i/2<loadSize)
          T[i]=1+T[i/2+1];
        else T[i]=T[i/2]+T[i/2+1];
      }
    }
    return T[numCrates];
  }
  public static void main(String[] args)
  {
    Truckloads t=new Truckloads();
    System.out.println(t.numTrucks(1024,5));
  }
 
