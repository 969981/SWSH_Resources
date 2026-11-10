/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150bdc0; name: FUN_0150bdc0
 */


undefined1  [16] FUN_0150bdc0(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
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
    if (((uVar3 & 1) != 0) && (local_34[0] == '\b')) {
      plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      if (param_3 != 0) {
        plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2,plVar1[1]);
        if ((uVar3 & 1) != 0) {
          uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,param_3,param_2,0);
          lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
          *(ulong *)(lVar4 + 8) = *(long *)(lVar4 + 8) + param_2;
          if ((uVar3 & 1) != 0) {
            uVar5 = 1;
            goto LAB_0150bf14;
          }
          goto LAB_0150bf10;
        }
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(ulong *)(lVar4 + 8) = *(long *)(lVar4 + 8) + param_2;
    }
  }
LAB_0150bf10:
  uVar5 = 0;
LAB_0150bf14:
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


