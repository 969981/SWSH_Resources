/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077d680; name: FUN_0077d680
 */


void FUN_0077d680(short *param_1)

{
  ushort *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    while (*param_1 == 0x10) {
      puVar1 = (ushort *)(param_1 + 1);
      param_1 = param_1 + (ulong)*puVar1 + 2;
      uVar2 = (int)((ulong)*puVar1 + 2) + uVar2;
      if (0x7ff < uVar2) {
        return;
      }
    }
    if (*param_1 == 0) {
      return;
    }
    param_1 = param_1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x800);
  return;
}


