/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150bc40; name: FUN_0150bc40
 */


ulong FUN_0150bc40(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char local_38 [4];
  undefined4 local_34;
  
  if (param_2 != 0) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,local_38,1,0);
      uVar3 = uVar3 & 0xffffffff;
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar5 = 0;
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      goto LAB_0150bda4;
    }
    uVar3 = 0;
    if (local_38[0] != '\x05') goto LAB_0150bda4;
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,4,plVar1[1]);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_34,4,0);
      uVar3 = uVar3 & 0xffffffff;
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
    if ((uVar3 & 1) != 0) {
      uVar5 = FUN_0150bdc0(param_1,local_34,param_2,param_3);
      uVar3 = uVar5 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xff;
      goto LAB_0150bda4;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_0150bda4:
  return uVar3 | uVar5;
}


