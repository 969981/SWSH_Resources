/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6a230; name: FUN_00d6a230
 */


void FUN_00d6a230(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 != 0) {
    FUN_006cf0a0(auStack_40,PTR_DAT_02716510);
    FUN_01053350(*(undefined4 *)(param_1 + 0xe8),lVar1,auStack_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    FUN_006cf0a0(auStack_40,PTR_DAT_02716518);
    FUN_01053350(*(undefined4 *)(param_1 + 0xec),uVar2,auStack_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    FUN_006cf0a0(auStack_40,PTR_DAT_02716520);
    FUN_01053350(*(undefined4 *)(param_1 + 0xf0),uVar2,auStack_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    FUN_006cf0a0(auStack_40,PTR_DAT_02716528);
    FUN_01053350(*(undefined4 *)(param_1 + 0xf4),uVar2,auStack_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    FUN_006cf0a0(auStack_40,PTR_DAT_02716530);
    FUN_01053350(*(undefined4 *)(param_1 + 0xf8),uVar2,auStack_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    FUN_006cf0a0(auStack_40,PTR_DAT_02716538);
    FUN_01053350(*(undefined4 *)(param_1 + 0xfc),uVar2,auStack_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    FUN_006cf0a0(auStack_40,PTR_DAT_02716540);
    FUN_01053350(*(undefined4 *)(param_1 + 0x100),uVar2,auStack_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


