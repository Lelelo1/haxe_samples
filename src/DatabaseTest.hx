
import sys.db.Sqlite;
import sys.db.*;
import Sys.*;

class DatabaseTest {
    public static function print(): Void {
        var connection = Sqlite.open("");
        var set = connection.request("*");
        var list = set.results();
        var array = Lambda.array(list);
        
        for(value in array) {
            println(value);
        }
        
    }
}