/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01087200; name: FUN_01087200
 */


void FUN_01087200(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  long local_28;
  
  local_38 = FUN_007959b0(*(undefined8 *)(param_1 + 0x88),&local_28);
  lVar1 = FUN_00c754c0(*(undefined8 *)(param_1 + 0x88),&local_28);
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    lVar1 = FUN_00c89a80(&local_28,*(undefined8 *)(param_1 + 8),&local_38);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_28 = lVar1;
    FUN_006d9640(uVar3,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = lVar1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      lVar1 = *(long *)(param_1 + 0x90);
    }
    FUN_0069c550(0x3f800000,lVar1);
  }
  return;
}


