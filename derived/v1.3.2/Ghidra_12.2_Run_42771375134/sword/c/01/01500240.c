/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01500240; name: FUN_01500240
 */


undefined8 FUN_01500240(long *param_1,undefined2 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined2 local_28 [2];
  undefined1 local_24 [4];
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,3,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  local_24[0] = 9;
  plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1,plVar1[1]);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,local_24,1,0);
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  local_28[0] = *param_2;
  plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,2,plVar1[1]);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,local_28,2,0);
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 2;
  return 1;
}


