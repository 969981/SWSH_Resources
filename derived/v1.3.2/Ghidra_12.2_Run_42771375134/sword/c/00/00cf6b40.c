/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf6b40; name: FUN_00cf6b40
 */


void FUN_00cf6b40(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_28;
  
  uVar1 = FUN_00ff93a0();
  FUN_00ff86a0(&local_28,uVar1,0);
  lVar2 = *(long *)(local_28 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0xbb] != 0) {
    (**(code **)(*(long *)(param_1[0xbb] + 0x48) + 0x18))();
    param_1[0xbb] = 0;
  }
  param_1[0xbb] = lVar2;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  lVar2 = param_1[0x56];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2e0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0xba] != 0) {
    (**(code **)(*(long *)(param_1[0xba] + 0x48) + 0x18))();
    param_1[0xba] = 0;
  }
  param_1[0xba] = lVar3;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  (**(code **)(*param_1 + 0x88))(param_1);
  return;
}


