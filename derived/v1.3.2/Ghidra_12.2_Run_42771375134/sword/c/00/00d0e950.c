/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d0e950; name: FUN_00d0e950
 */


void FUN_00d0e950(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long local_28;
  
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar5)(puVar5);
  lVar2 = FUN_00cf3e00();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  local_28 = puVar5[0xe];
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  lVar2 = FUN_00cf2f70(&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar2 != 0) {
    uVar3 = FUN_00d0bd10(lVar2);
    uVar4 = 1;
    if ((uVar3 & 1) != 0) {
      uVar4 = 2;
    }
    *(undefined4 *)(lVar2 + 0x68) = uVar4;
  }
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x198),1,1);
  *(undefined4 *)(param_1 + 400) = 0xb;
  return;
}


