/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044fe70; name: FUN_0044fe70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0044fe70(long param_1,uint param_2,void *param_3)

{
  uint uVar1;
  long lVar2;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x40) == 0) {
    lVar2 = 0;
    uVar1 = _DAT_00000050;
  }
  else {
    lVar2 = **(long **)(*(long *)(param_1 + 0x10) + 0x38);
    uVar1 = *(uint *)(lVar2 + 0x50);
  }
  if (param_2 < uVar1) {
    memcpy(param_3,(void *)(*(long *)(lVar2 + 0x48) + (ulong)param_2 * 0x60),0x58);
    return 1;
  }
  return 2;
}


