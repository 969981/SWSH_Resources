/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00791bd0; name: FUN_00791bd0
 */


undefined8 FUN_00791bd0(long param_1,int param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x78) + 8);
  if (iVar1 < 1) {
    return 0;
  }
  lVar2 = 0;
  puVar3 = (uint *)(*(long *)(*(long *)(param_1 + 0x78) + 0x10) + (long)param_2 * 4 + 8);
  do {
    if ((*puVar3 & param_3) != 0) {
      return 1;
    }
    lVar2 = lVar2 + 1;
    puVar3 = puVar3 + 0x27a;
  } while (lVar2 < iVar1);
  return 0;
}


