/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f09ee0; name: FUN_00f09ee0
 */


void FUN_00f09ee0(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_2 + 0x68);
  if (lVar1 == 0) {
    FUN_00f09f50(param_1,0);
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_00f09f50(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00f09f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


