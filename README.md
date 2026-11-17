# THis is a Gym management system

<p><b>The Gym Membership Management System</b> is a console-based application written entirely in the C
programming language. It is designed to replace the traditional paper register that many small and midsized gyms still use to track their members. Instead of flipping through handwritten pages to find,
update, or remove a member's record, gym staff can run this program and manage every record digitally
through a simple numbered menu.<br><br>
At its core, the system stores each gym member's details — a unique Member ID, full name, age,
membership plan, and phone number — inside a plain text file named members.txt, which acts as the
application's lightweight database. Every feature of the program, from adding a new member to deleting
one, works by reading from and writing to this single file in a predictable format.<br><br>
The application is protected by a login screen, so only someone with the correct staff credentials can
view or modify member data. Once logged in, the user is presented with a persistent main menu offering
seven actions, which loops continuously until the user explicitly chooses to exit.</p>