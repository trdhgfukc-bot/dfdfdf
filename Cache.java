
import java.util.LinkedList;

public class Cache<T>{
    private int size;
    private LinkedList<T> el;
    public Cache(int size)
{
    this.size = size;
    this.el = new LinkedList<>();
}
public void add(T item){
    el.addLast(item);
    if (el.size()>size){
        el.removeFirst();}
    }
public bool remove(T item){
    return el.remove(item);
}  
public bool exist(T item){
    return el.contains(item);
}
public T getFirst(){
    return el.getFirst();
}
public T getLust(){
    return el.getLast();
}

}