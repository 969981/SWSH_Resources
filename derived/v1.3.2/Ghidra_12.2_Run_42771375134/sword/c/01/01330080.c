/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01330080; name: FUN_01330080
 */


void FUN_01330080(long param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x340);
  if (lVar2 == 0) {
    pvVar1 = (void *)FUN_01052d00(0);
    memcpy((void *)(param_1 + 0x650),pvVar1,0x2c0);
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  pvVar1 = (void *)FUN_01052d00(lVar2);
  memcpy((void *)(param_1 + 0x650),pvVar1,0x2c0);
                    /* WARNING: Could not recover jumptable at 0x013300e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


