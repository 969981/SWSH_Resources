/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da4cc0; name: FUN_00da4cc0
 */


void FUN_00da4cc0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0xa118);
  if (*plVar1 == 0) {
    *plVar1 = 0;
    lVar2 = *(long *)(param_1 + 0xa008);
  }
  else {
    FUN_006e2100(*plVar1,param_1 + 0xa110);
    lVar2 = *plVar1;
    *plVar1 = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(param_1 + 0xa008);
  }
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0xa008) = 0;
  }
  else {
    FUN_006e2100(lVar2,param_1 + 0xa000);
    lVar2 = *(long *)(param_1 + 0xa008);
    *(long *)(param_1 + 0xa008) = 0;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00da4d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


