/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d4900; name: FUN_014d4900
 */


undefined8 FUN_014d4900(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  long local_38;
  
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_38 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_0077eb10(lVar2,&DAT_02172048,*(undefined8 *)(param_1 + 0x18b0));
  FUN_0077eb10(lVar2,&DAT_02172050,*(undefined8 *)(param_1 + 0x18b8));
  if (param_2 == 0) {
    FUN_0077eb10(lVar2,&DAT_02172048,*(undefined8 *)(param_1 + 0x18b0));
    *(undefined4 *)(param_1 + 0x18a8) = 1;
    FUN_0077eb10(lVar2,&DAT_02172050,*(undefined8 *)(param_1 + 0x18b8));
    uVar1 = 2;
  }
  else if (param_2 == 1) {
    FUN_0077eb10(lVar2,&DAT_02172048,*(undefined8 *)(param_1 + 0x18b0));
    *(undefined4 *)(param_1 + 0x18a8) = 3;
    FUN_0077eb10(lVar2,&DAT_02172050,*(undefined8 *)(param_1 + 0x18b8));
    uVar1 = 4;
  }
  else {
    if (param_2 != 2) goto LAB_014d4a34;
    FUN_0077eb10(lVar2,&DAT_02172048,*(undefined8 *)(param_1 + 0x18b0));
    *(undefined4 *)(param_1 + 0x18a8) = 5;
    FUN_0077eb10(lVar2,&DAT_02172050,*(undefined8 *)(param_1 + 0x18b8));
    uVar1 = 6;
  }
  *(undefined4 *)(param_1 + 0x18ac) = uVar1;
LAB_014d4a34:
  FUN_014d46a0(param_1,param_2);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return 2;
}


