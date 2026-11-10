/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009338c0; name: FUN_009338c0
 */


void FUN_009338c0(long param_1,int param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  if ((ulong)*(byte *)(param_1 + 0x38) != 0) {
    uVar2 = 0;
    puVar1 = (undefined1 *)(param_1 + 0x14);
    do {
      if (*(int *)(puVar1 + -4) == param_2) {
        *puVar1 = 1;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 8;
    } while (uVar2 < *(byte *)(param_1 + 0x38));
  }
  return;
}


