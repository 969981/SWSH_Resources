/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d44b0; name: FUN_006d44b0
 */


long FUN_006d44b0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = *(int *)(param_1 + 0x158);
  if (iVar2 != 0) {
    uVar3 = 0;
    do {
      if (uVar3 != *(uint *)(param_2 + 0xc)) {
        lVar1 = FUN_006d5f90(*(undefined8 *)(param_1 + 0x10 + uVar3 * 8),param_2);
        if (lVar1 != 0) {
          return lVar1;
        }
        iVar2 = *(int *)(param_1 + 0x158);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(long)iVar2);
  }
  return 0;
}


