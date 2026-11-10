/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115ae00; name: FUN_0115ae00
 */


void FUN_0115ae00(long param_1,byte param_2)

{
  byte bVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x748) != '\0') {
    if (*(byte *)(param_1 + 0x749) < 2) {
      *(byte *)(*(long *)(param_1 + 0x730) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0x730) + 0x58) | 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x708) + 0x60);
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | ~param_2 & 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x708) + 0x68);
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | ~param_2 & 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x708) + 0xb0);
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 & 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x708) + 0xb8);
    }
    else {
      if (*(byte *)(param_1 + 0x749) != 2) {
        return;
      }
      *(byte *)(*(long *)(param_1 + 0x740) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0x740) + 0x58) | 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x708) + 0x70);
      bVar1 = ~param_2;
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1 & 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x708) + 0x78);
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1 & 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x708) + 0x80);
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1 & 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x708) + 0x88);
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1 & 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x708) + 0xc0);
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 & 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x708) + 200);
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 & 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x708) + 0xd0);
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 & 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x708) + 0xd8);
    }
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 & 1;
  }
  return;
}


