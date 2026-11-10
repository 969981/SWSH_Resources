/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a09580; name: FUN_00a09580
 */


void FUN_00a09580(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x728))();
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
  uVar4 = (**(code **)(*plVar3 + 0x7f8))(plVar3,uVar1);
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
  uVar2 = (**(code **)(*plVar3 + 0x728))(plVar3,param_3);
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
  uVar5 = (**(code **)(*plVar3 + 0x7f8))(plVar3,uVar2);
  uVar6 = FUN_00a0a290(uVar1);
  local_40 = uVar5;
  local_50 = uVar4;
  if ((uVar6 & 1) == 0) {
    local_40 = uVar4;
    local_50 = uVar5;
  }
  local_48 = 0;
  local_38 = 0;
  FUN_00a1eb50(*(undefined8 *)(param_1 + 0x20),&local_50);
  return;
}


