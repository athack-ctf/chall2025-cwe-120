# @HACK 2025: CWE 120

> Authored by [Anis](https://github.com/AnixPasBesoin).

- **Category**: `Pwn`
- **Value**: `100 points`
- **Tags**: `beginner` `tcp`

> For this challenge, your goal is to prove your understanding of how buffer overflows work, by logging remotely into a system without
> knowing the password it's asking for.
> 
> You'll be working with a C program called `login.c`, which is the source code for the binary that handles the login process. 
> The code in `login.c` should give you all the info you need, but to make it easier, we're also providing a copy of the binary
> (with a different password) for reference.
> 

## Files
- **[Download: about-CWE-120.txt](https://github.com/athack-ctf/chall2025-cwe-120/raw/refs/heads/main/offline-artifacts/about-CWE-120.txt)**
- **[Download: login-using-dummy-password](https://github.com/athack-ctf/chall2025-cwe-120/raw/refs/heads/main/offline-artifacts/login-using-dummy-password)**
- **[Download: login.c](https://github.com/athack-ctf/chall2025-cwe-120/raw/refs/heads/main/offline-artifacts/login.c)**

## Access a dockerized instance

Run challenge container using docker compose
```
docker compose up -d
```
Connect to the TCP socket (e.g., using nc command)
```
nc localhost 52025 
```
<details>
<summary>
How to stop/restart challenge?
</summary>

To stop the challenge run
```
docker compose stop
```
To restart the challenge run
```
docker compose restart
```

</details>


## Reveal Flag

Did you try solving this challenge?
<details>
<summary>
Yes
</summary>

Did you **REALLY** try solving this challenge?

<details>
<summary>
Yes, I promise!
</summary>

Flag: `ATHACKCTF{seee_d0uble_y0u_eee_0ne_twenty}`

</details>
</details>


---

## About @HACK
[@HACK](https://athackctf.com/) is an annual CTF (Capture The Flag) competition hosted by [HEXPLOIT ALLIANCE](https://hexploit-alliance.com/) and [TECHNATION](https://technationcanada.ca/) at Concordia University in Montreal, Canada.

---
[Check more challenges from @HACK 2025](https://github.com/athack-ctf/AtHackCTF-2025-Challenges).