/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01504df0; name: FUN_01504df0
 */


undefined8 FUN_01504df0(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_28;
  undefined1 local_24 [4];
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,5,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  local_24[0] = 10;
  plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1,plVar1[1]);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,local_24,1,0);
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  local_28 = *param_2;
  plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,4,plVar1[1]);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,4,0);
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
  return 1;
}


