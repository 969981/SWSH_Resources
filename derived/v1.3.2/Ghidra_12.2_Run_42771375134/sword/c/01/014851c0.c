/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014851c0; name: FUN_014851c0
 */


void FUN_014851c0(long param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_50 = 0x45912fcbb8dd06c9;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_50);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 & 1;
  local_50 = 0xee6ab743352061a;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_50);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 & 1;
  lVar2 = *(long *)(param_1 + 0x610);
  puVar1 = &DAT_026a3d90;
  if ((param_2 & 1) == 0) {
    puVar1 = &DAT_026a3da8;
  }
  FUN_006cf0a0(&local_50,puVar1);
  lVar4 = local_38;
  *(undefined8 *)(lVar2 + 0x2b0) = local_50;
  *(undefined8 *)(lVar2 + 0x2b8) = local_48;
  *(undefined8 *)(lVar2 + 0x2c0) = local_40;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2c8);
  *(long *)(lVar2 + 0x2c8) = lVar4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x618);
  FUN_006cf0a0(&local_50,puVar1);
  lVar2 = local_38;
  *(undefined8 *)(lVar4 + 0x2b0) = local_50;
  *(undefined8 *)(lVar4 + 0x2b8) = local_48;
  *(undefined8 *)(lVar4 + 0x2c0) = local_40;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar4 + 0x2c8);
  *(long *)(lVar4 + 0x2c8) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


