/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146bb90; name: FUN_0146bb90
 */


void FUN_0146bb90(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long local_28;
  
  uVar4 = *(undefined8 *)(param_1 + 0x1c8);
  local_28 = *(long *)(param_1 + 0x18);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_016a8fb0(uVar4,&local_28,*(undefined1 *)(param_1 + 0x30));
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_016a89f0(*(undefined8 *)(param_1 + 0x1e8));
  iVar1 = FUN_0087b3e0(*(undefined8 *)(param_1 + 0x18));
  iVar2 = FUN_0087b490(*(undefined8 *)(param_1 + 0x18));
  iVar3 = FUN_0087b350(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(**(long **)(param_1 + 0x1f0) + 0x28))
            ((float)(uint)(iVar3 - iVar1),*(long **)(param_1 + 0x1f0),iVar2 - iVar1);
  FUN_0087b180(*(undefined8 *)(param_1 + 0x18));
  FUN_0146c4e0(param_1);
  return;
}


