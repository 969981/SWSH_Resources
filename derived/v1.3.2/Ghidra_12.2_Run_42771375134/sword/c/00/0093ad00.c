/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093ad00; name: FUN_0093ad00
 */


void FUN_0093ad00(long param_1,byte param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 < 0x1e) {
    bVar1 = *(byte *)(param_1 + 8);
    uVar2 = (ulong)bVar1;
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        if (*(byte *)(param_1 + 9 + uVar3) == param_2) {
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    *(byte *)(param_1 + uVar2 + 9) = param_2;
    *(byte *)(param_1 + 8) = bVar1 + 1;
  }
  return;
}


