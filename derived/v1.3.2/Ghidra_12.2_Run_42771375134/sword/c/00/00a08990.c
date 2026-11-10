/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a08990; name: FUN_00a08990
 */


void FUN_00a08990(long param_1,byte param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x8b0))();
  if ((uVar2 & 1) != 0) {
    local_28 = 1;
    local_26 = 1;
    FUN_00a19190(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x380),
                 2,&local_28);
    return;
  }
  local_2c = (uint)CONCAT12(param_2 & 1,1);
  FUN_00a242b0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x380),2,
               &local_2c);
  iVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x870))();
  if (iVar1 == 2) {
    FUN_00a0db80(*(undefined8 *)(param_1 + 0x28),2,1);
  }
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x30),1,1);
  return;
}


