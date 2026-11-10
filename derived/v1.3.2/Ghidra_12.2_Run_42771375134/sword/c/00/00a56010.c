/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a56010; name: FUN_00a56010
 */


void FUN_00a56010(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  param_2 = param_2 & 0xffffffff;
  while( true ) {
    uVar1 = FUN_016092b0(param_1 + 0x50);
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x142) = 0;
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x78) + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      lVar3 = *(long *)(param_1 + 0x78);
      if (lVar3 == 0) {
        FUN_00a56010(0,1);
      }
      else {
        plVar2 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_00a56010(lVar3,1);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if (((param_2 & 1) == 0) || (*(long *)(param_1 + 0x70) == 0)) break;
    plVar2 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(param_1 + 0x70);
    param_2 = 1;
    param_1 = 0;
    if (lVar3 != 0) {
      plVar2 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_00a56010(lVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00a56134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


