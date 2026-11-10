/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00950d90; name: FUN_00950d90
 */


void FUN_00950d90(long param_1,char param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0xd);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(char *)(param_1 + 8 + uVar2) == param_2) {
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  *(char *)(param_1 + uVar1 + 8) = param_2;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return;
}


