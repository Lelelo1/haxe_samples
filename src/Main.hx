
import cpp.NativeArray;
import cpp.Native;
import cpp.Pointer;
import haxe.Resource;
import xa3.Csv;
import haxe.io.Bytes;
import sys.io.File;
import haxe.io.BytesInput;
import Sys.*;
//@:build(HaxeCBridge.expose())
class Main {

    public static function main(): Void {
        println(takePeople(100));
    }
    //@:build(HaxeCBridge.expose())
    public static function takePeople(count: Int) : Array<String> {
        // Single line comment
        //trace("Hello World");
        /*
        var content: String = null;
        var path = "./people.csv";
        try {
            content = File.getContent(path);
        }
        catch(exc) {
            println(exc);
        }
        */
        var name = "people";
        var content = Resource.getString(name);
        if(content == null) {
            println("could not get resource " + name);
            return null;
        }
        var fieldName = "name";
        var csv = Csv.fromString("people", content);
        var lines = csv.lines.splice(0, count);
        var people = lines.map((cell:Map<String, String>) -> cast (cell[fieldName], String));
        var peopleList = new List();
        for (p in people) {
            peopleList.add(p);
        }
        // > src/Main.hx:15: lines 15-40 : Array<T> is not supported for C export, try using cpp.Pointer<T> instead
        // but can use 
        
        return people;//peopleList;
    }
    // what is '?', why is needed?
    static function handle(map: Map<String, String>): Void {
        
    }
}
