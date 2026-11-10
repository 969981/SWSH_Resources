/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a055f0; name: FUN_00a055f0
 */


void FUN_00a055f0(long param_1,void *param_2)

{
  long lVar1;
  long lVar2;
  
  memcpy((void *)(param_1 + 0x5e0),param_2,0xc0);
  lVar2 = *(long *)((long)param_2 + 0xc0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x6a0);
  *(long *)(param_1 + 0x6a0) = lVar2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a05644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  return;
}


