/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010004d0; name: FUN_010004d0
 */


void FUN_010004d0(long param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  param_3 = param_3 & 0xffffffff;
  while( true ) {
    uVar1 = FUN_01000640(param_1 + 0x50);
    if ((((uVar1 & 1) == 0) || (*(long *)(param_1 + 0x60) != param_2[1])) ||
       (*(long *)*param_2 != 0)) {
      lVar2 = *(long *)(param_1 + 0x78);
    }
    else {
      *(long *)*param_2 = param_1;
      lVar2 = *(long *)(param_1 + 0x78);
    }
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      lVar2 = *(long *)(param_1 + 0x78);
      if (lVar2 == 0) {
        FUN_010004d0(0,param_2,1);
      }
      else {
        plVar3 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_010004d0(lVar2,param_2,1);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    if (((param_3 & 1) == 0) || (*(long *)(param_1 + 0x70) == 0)) break;
    plVar3 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(param_1 + 0x70);
    param_3 = 1;
    param_1 = 0;
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_010004d0(lVar2,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x0100063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}


