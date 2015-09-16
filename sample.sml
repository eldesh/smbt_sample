
structure Main =
struct
  fun exp2 x =
    prim ("myexp2", x) : int

  fun echo msg =
    prim ("myecho", (msg, Size))

  fun main (name, args) =
    (print (concat["$", name, " ", String.concatWith "/" args, "\n"]);
     print (Int.toString (exp2 5)^"\n");
     echo (name ^ "\n");
     OS.Process.exit OS.Process.success
    )
end
val _ = Main.main(CommandLine.name(), CommandLine.arguments())


