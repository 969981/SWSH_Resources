/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fc400; name: FUN_009fc400
 */


void FUN_009fc400(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar2 = *param_2;
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      return;
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar1 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x009fc458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


