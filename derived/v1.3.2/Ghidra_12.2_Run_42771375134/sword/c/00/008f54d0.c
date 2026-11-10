/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f54d0; name: FUN_008f54d0
 */


void FUN_008f54d0(long param_1,long param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  long local_60;
  long local_58;
  undefined *local_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_48 = *(undefined8 *)(param_1 + 0x68);
  pbVar1 = (byte *)(param_2 + 0x3ba);
  if (*(char *)(*(long *)(param_1 + 0x88) + 0x3bb) != '\x01') {
    pbVar1 = (byte *)(param_1 + 0x174);
  }
  uVar2 = *(undefined8 *)(param_1 + (ulong)*pbVar1 * 8 + 0x198);
  uStack_30 = *(undefined8 *)(param_1 + 0x5f0);
  uStack_24 = *(undefined4 *)(param_1 + 0x160);
  local_50 = PTR_DAT_02717cc8 + 0x10;
  lStack_40 = param_1;
  local_38 = uVar2;
  local_28 = param_3;
  FUN_009df030(&local_58,&local_50,local_48,*(undefined8 *)(param_1 + 0x80),&local_48);
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = local_58;
  local_60 = local_58;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_008fe440(uVar2,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  return;
}


