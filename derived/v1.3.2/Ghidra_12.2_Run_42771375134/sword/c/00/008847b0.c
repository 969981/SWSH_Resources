/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008847b0; name: FUN_008847b0
 */


uint FUN_008847b0(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 != 0) {
    uVar3 = 0;
    do {
      lVar2 = (**(code **)(*param_1 + 0x58))(param_1,uVar3);
      if (lVar2 == param_2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < bVar1);
  }
  return 6;
}


