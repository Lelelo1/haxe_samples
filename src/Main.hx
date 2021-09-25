
import haxe.Resource;
import xa3.Csv;
import haxe.io.Bytes;
import sys.io.File;
import haxe.io.BytesInput;
import Sys.*;

class Main {

    public static function main(): Void {
        println(takePeople(100));
    }

    static function takePeople(count: Int) : Array<String> {
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

        return people;
    }
    // what is '?', why is needed?
    static function handle(map: Map<String, String>): Void {
        
    }
}
