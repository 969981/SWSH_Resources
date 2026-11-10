/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01526260; name: FUN_01526260
 */


void FUN_01526260(long param_1,undefined2 *param_2)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  
  *(undefined2 *)(param_1 + 0xac0) = *param_2;
  lVar3 = 0;
  do {
    lVar1 = param_1 + lVar3;
    if (*(long *)(lVar1 + 0x60) == 0xcf9069c673b98d1) {
      uVar2 = *(ushort *)(lVar1 + 0x72) & 0xff00;
      if (*(short *)(param_1 + 0xac0) == 0) {
        *(ushort *)(lVar1 + 0x72) = uVar2;
      }
      else {
        *(ushort *)(lVar1 + 0x72) = uVar2 | 6;
        *(undefined1 *)(lVar1 + 0x70) = 4;
      }
    }
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0xa50);
  return;
}


