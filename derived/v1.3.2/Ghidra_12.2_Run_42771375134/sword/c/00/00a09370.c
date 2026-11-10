/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a09370; name: FUN_00a09370
 */


void FUN_00a09370(long param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x728))();
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
  uVar4 = (**(code **)(*plVar3 + 0x7f8))(plVar3,uVar2);
  uVar5 = FUN_00a0a290(uVar2);
  bVar1 = (uVar5 & 1) == 0;
  local_50 = uVar4;
  if (bVar1) {
    local_50 = 0;
  }
  local_40 = 0;
  if (bVar1) {
    local_40 = uVar4;
  }
  local_48 = param_3;
  local_38 = param_3;
  FUN_00a1eb50(*(undefined8 *)(param_1 + 0x20),&local_50);
  return;
}


