' Brain for Mocab, coded and provided by XFuryus
' Converted to VB.Net Console Application by Dalatexcoder
' Debugged by GPT-o3 Mini, as my VB.net compiler's syntax highlighting is very broken.

Imports System
Module Thing
    Sub Main()
        ' UI displays the current number of active brain cells in Mocab's brain.
        Console.WriteLine("Mocab's currently usning '0' brincels.")
        Dim brainStatus As String
        Console.WriteLine("Do you want to turn on Mocab's brain? Allowed commands: y/n :D")
        Console.Write("-> ")
        brainStatus = Console.ReadLine()

        ' Function that manages Mocab's brain
        If brainStatus = "y" OrElse brainStatus = "Y" Then
            Console.WriteLine(vbNewLine & "How many brincels to activate?")
            Console.Write("-> ")
            Dim braincells As String = Console.ReadLine()
            Try
                Dim braincells_int As Integer = Integer.Parse(braincells)
                Console.WriteLine("")
                If braincells_int <= 0 Then
                    Console.WriteLine("What are you doing!? He already has '0' brincels pls. :(")
                ElseIf braincells_int = 1 Then
                    Console.WriteLine("Mocab's currently usning '1' brincel.")
                    Console.WriteLine("Mocab: Quack!")
                Else
                    Console.WriteLine(vbNewLine & "Sori Mocab doesn't support using more than '1' brincel. ;(")
                End If
            Catch ex As Exception
                Console.WriteLine(vbNewLine & "Error: I don't recognize that command. :(" & vbNewLine)
            End Try
        ElseIf brainStatus = "n" OrElse brainStatus = "N" Then
            Console.WriteLine(vbNewLine & "I see you like your Mocab vanilla. :)")
        Else
            Console.WriteLine(vbNewLine & "Error: I don't recognize that command. :(" & vbNewLine)
        End If

        ' Keep console window open until a key is pressed.
        Console.WriteLine(vbNewLine & "Press any key to exit.")
        Console.ReadKey()
    End Sub
End Module
