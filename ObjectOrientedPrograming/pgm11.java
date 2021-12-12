class Box
{
    String itemid;
    Box(String itemid)
    {
        this.itemid=itemid;
    }
}
class BoxWeight extends Box
{
    int weight;
    BoxWeight(String itemid,int weight)
    {
        super(itemid);
        this.weight=weight;
    }
}
class Shipment extends BoxWeight
{
    int cost;
    Shipment(String itemid,int weight,int cost)
    {
        super(itemid,weight);
        this.cost=cost;
    }
}
public class pgm11 {
    public static void main(String[] args)
    {
        Shipment newpackage=new Shipment("ABC01", 100, 100);
    }
}
