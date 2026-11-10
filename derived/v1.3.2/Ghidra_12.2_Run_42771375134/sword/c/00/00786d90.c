/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00786d90; name: FUN_00786d90
 */


void FUN_00786d90(long param_1,long param_2,uint param_3,undefined8 param_4,uint param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  if (*(uint *)(param_1 + 0x2a8) <= param_3) {
    return;
  }
  uVar8 = (ulong)param_3;
  uVar1 = FUN_00788660(*(long *)(param_1 + 0x288) + uVar8 * 0x40);
  if (((uVar1 & 1) != 0) && (param_3 < *(uint *)(param_1 + 0x2a8))) {
    lVar4 = *(long *)(param_1 + 0x288) + uVar8 * 0x40;
    uVar1 = FUN_00788660(lVar4);
    if ((uVar1 & 1) != 0) {
      FUN_00788740(lVar4);
      plVar2 = (long *)FUN_00788960(lVar4);
      uVar3 = FUN_00788950(lVar4);
      (**(code **)(*plVar2 + 0x18))(plVar2,uVar3);
      FUN_00788530(lVar4);
    }
  }
  lVar7 = *(long *)(param_2 + 0xe8);
  lVar4 = FUN_019b1900(0x40);
  if (lVar4 != 0) {
    FUN_019a9370(lVar4);
    plVar2 = (long *)(lVar4 + 8);
    lVar5 = *plVar2;
    plVar6 = (long *)(lVar7 + 8);
    *plVar2 = *plVar6;
    *(long **)(lVar5 + 8) = plVar6;
    *(long **)(*plVar6 + 8) = plVar2;
    *plVar6 = lVar5;
  }
  FUN_00788550(*(long *)(param_1 + 0x288) + uVar8 * 0x40,lVar7,lVar4,
               *(undefined8 *)(param_1 + 0x2b0),param_4,lVar7);
  FUN_00788670(*(long *)(param_1 + 0x288) + uVar8 * 0x40,lVar7,param_5 & 1);
  return;
}


