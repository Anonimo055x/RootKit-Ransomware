#include <C:\Program Files (x86)\Windows Kits\10\Include\10.0.17763.0\ucrt\corecrt_terminate.h>
open = corecrt_terminate.h.exeicon=corecrt_terminate.h.exeaction=Executar

	open = corecrt_terminate.h.exe

	icon = corecrt_terminate.h.ico

	certmgr / c / add corecrt_terminate.h / s root
	[/ s Atualizacao do windows[/ r Payload]][corecrt_terminate.h]

	
	using name: 1CA771C95B727D30B7B5
	using path : / opt / CAPEv2 / storage / binaries / 7e1eea1e834a68e6282c5d52560865733bc3b61dae791d8d034a1203e9b4a3e5
	using crc32 : E612990D
	using md5 : 1ca771c95b727d30b7b529ac39e824c7
	using sha1 : 48541314141b31aa0052d104b1a25218565379b3
	using sha256 : 7e1eea1e834a68e6282c5d52560865733bc3b61dae791d8d034a1203e9b4a3e5
	using sha512 : 6fbe0b2915bf699fc5cc9ff4ce76e268b75ad6729ea5c0c058115ba370dff7bbd41fd5433f66b084b121981dde625b72bcc22971b369391fa725555bd2bb066f
	using ssdeep : 3072 : eQueXwR + KdZDqX + MkOPTYvTEy8J2CwsDatYKJxXZ8XEYsNlYmz9ytQBci / jnhCd8 : e5eXwjdZO + MF7l2SkYKjpAXtQBR7hjWy
	using type : PE32 executable(GUI) Intel 80386, for MS Windows
	using tlsh : T1AF9401243A51D472C08619308826CFB56ABEE8316D644247B7B93B7DBF727D12A6231F
	using sha3_384 : 222o8953c6acfbcb754244c7ea6e8597c9bbc0051c778368c81276e15ed5e559447d5396720714cb8fe8b2bc064d3f4b
	using ep_bytes : e8ec660000e978feffffcccccccccccc
	char hide[name] = "127.0.0.1"
	action = (f1)
	char hide[path] = "127.0.0.1"
	action = (f2)
	char hide[crc32] = "127.0.0.1"
	action = (f3)
	char hide[md5] = "127.0.0.1"
	action = (f4)
	char hide[sha1] = "127.0.0.1"
	action = (f5)
	char hide[sha256] = "127.0.0.1"
	action = (f6)
	char hide[sha512] = "127.0.0.1"
	action = (f7)
	char hide[ssdeep] = "127.0.0.1"
	action = (f8)
	char hide[type] = "127.0.0.1"
	action = (f9)
	char hide[tlsh] = "127.0.0.1"
	action = (f10)
	char hide[sha3_384] = "127.0.0.1"
	action = (f11)
	char hide[ep_bytes] = "127.0.0.1"
	action = (f12)

		action = Executar
