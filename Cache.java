
import java.util.LinkedList;

public class Cache<T>{
    private int size;
    private LinkedList<T> el;
    public Cache(int size)
{
    this.size = size;
    this.el = new LinkedList<>();
}

}