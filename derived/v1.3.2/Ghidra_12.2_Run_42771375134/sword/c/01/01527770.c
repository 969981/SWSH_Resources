/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01527770; name: FUN_01527770
 */


undefined1  [16] FUN_01527770(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  char local_34 [4];
  
  param_2 = param_2 & 0xffffffff;
  if (param_2 <= param_4) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,local_34,1,0);
      uVar3 = uVar3 & 0xffffffff;
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    if (((uVar3 & 1) != 0) && (local_34[0] == '\v')) {
      lVar4 = param_2 * 8;
      plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      if (param_3 != 0) {
        plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,lVar4,plVar1[1]);
        if ((uVar3 & 1) != 0) {
          uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,param_3,lVar4,0);
          lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
          *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + lVar4;
          if ((uVar3 & 1) != 0) {
            uVar6 = 1;
            goto LAB_015278c8;
          }
          goto LAB_015278c4;
        }
      }
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + lVar4;
    }
  }
LAB_015278c4:
  uVar6 = 0;
LAB_015278c8:
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = uVar6;
  return auVar7;
}


