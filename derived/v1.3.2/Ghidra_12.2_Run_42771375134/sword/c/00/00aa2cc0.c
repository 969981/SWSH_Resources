/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa2cc0; name: FUN_00aa2cc0
 */


void FUN_00aa2cc0(long param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = param_1 + (param_2 & 0xffffffff) * 8;
  lVar5 = *(long *)(lVar3 + 0x548);
  plVar1 = (long *)(lVar3 + 0x548);
  if (lVar5 == 0) {
    *plVar1 = 0;
    param_1 = param_1 + (ulong)param_3 * 8;
    lVar3 = *(long *)(param_1 + 0x548);
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar3 = *plVar1;
    *plVar1 = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    param_1 = param_1 + (ulong)param_3 * 8;
    lVar3 = *(long *)(param_1 + 0x548);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *plVar1;
  plVar2 = (long *)(param_1 + 0x548);
  *plVar1 = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar3 = *plVar2;
  *plVar2 = lVar5;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00aa2da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


