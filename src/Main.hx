
//import sys.db.Sqlite;
//import models.Person.Person; // use haxe class



//import src.models.Person;

import src.models.Person;

import haxe.Resource;
//import xa3.Csv;
import haxe.io.Bytes;
import sys.io.File;
import haxe.io.BytesInput;
import Sys.*;


// haxe-cbrige Main.hx
import cpp.Callable;

//@:build(HaxeCBridge.expose())
//@:include("./models/Person.h")
class Main {

    public static function main(): Void {
        //println(takePeopleFromCSV(100));
        //println(takePeopleFromDatabase(80));
    }
    
    public static function takePeopleFromCSV(count: Int) : Array<Person> {
        var name = "people";
        var content = Resource.getString(name);
        
        if(content == null) {
            println("could not get resource " + name);
            return null;
        }

// typedef void* HaxeObject;
        var fieldName = "name";
        var csv = Csv.fromString("people", content);
        var lines = csv.lines.splice(0, count);
        var names = lines.map((cell:Map<String, String>) -> cast (cell[fieldName], String));
        var people = names.map((n) -> new Person(name, 27));
        // {name: "Andy", age: 45}
        
     

        return people;//peopleList;
    }

/*
    public static function takePeopleFromDatabase(count: Int): Array<Person> {
        var name = "peopleDatabase";
        var content = Resource.getString(name);
        var connection = Sqlite.open(content);
        var resultSet = connection.request("SELECT * FROM peopleDatabase");
        var takeResults = new Array<Person>();
        var i = 0;
        for (item in resultSet.results()) {
            takeResults.push(item);
            i++;
            if(count == i) {
                break;
            }
        }
        return takeResults;
    }
    */
    // what is '?', why is needed?
    static function handle(map: Map<String, String>): Void {
        
    }
}
