/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01000360; name: FUN_01000360
 */


void FUN_01000360(long param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  
  param_3 = param_3 & 0xffffffff;
  while( true ) {
    lVar1 = FUN_00fffd10(param_1 + 0x50);
    if (((lVar1 == 0) || (*(long *)(lVar1 + 0x60) != param_2[1])) || (*(long *)*param_2 != 0)) {
      lVar1 = *(long *)(param_1 + 0x78);
    }
    else {
      *(long *)*param_2 = lVar1;
      lVar1 = *(long *)(param_1 + 0x78);
    }
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      lVar1 = *(long *)(param_1 + 0x78);
      if (lVar1 == 0) {
        FUN_01000360(0,param_2,1);
      }
      else {
        plVar2 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_01000360(lVar1,param_2,1);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if (((param_3 & 1) == 0) || (*(long *)(param_1 + 0x70) == 0)) break;
    plVar2 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar1 = *(long *)(param_1 + 0x70);
    param_3 = 1;
    param_1 = 0;
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_01000360(lVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x010004c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


