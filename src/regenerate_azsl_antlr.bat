@setlocal
setlocal
cd %~dp0
cd generated
java -cp "../external/antlr-4.7.1-complete.jar" org.antlr.v4.Tool ../azslLexer.g4 -o java
java -cp "../external/antlr-4.7.1-complete.jar" org.antlr.v4.Tool ../azslParser.g4 -o java
java -cp "../external/antlr-4.7.1-complete.jar" org.antlr.v4.Tool ../azslLexer.g4 -Dlanguage=Cpp
java -cp "../external/antlr-4.7.1-complete.jar" org.antlr.v4.Tool ../azslParser.g4 -Dlanguage=Cpp
cd java
@REM for grun
javac -cp "../../external/antlr-4.7.1-complete.jar" azsl*.java