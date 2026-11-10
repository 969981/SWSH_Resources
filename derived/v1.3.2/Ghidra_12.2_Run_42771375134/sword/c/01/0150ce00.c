/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150ce00; name: FUN_0150ce00
 */


uint FUN_0150ce00(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 local_38 [4];
  undefined4 local_34;
  
  if (param_2 != 0) {
    plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_3 + 6,plVar2[1]);
    if ((uVar4 & 1) != 0) {
      local_38[0] = 5;
      plVar2 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
      plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
      uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,1,plVar2[1]);
      if ((uVar4 & 1) != 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_38,1,0);
      }
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
      local_34 = (undefined4)param_3;
      plVar2 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
      plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
      uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,4,plVar2[1]);
      if ((uVar4 & 1) != 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_34,4,0);
      }
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 4;
      uVar1 = FUN_0150cf80(param_1,param_2,param_3);
      goto LAB_0150cf60;
    }
  }
  uVar1 = 0;
LAB_0150cf60:
  return uVar1 & 1;
}


