/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b28c0; name: FUN_014b28c0
 */


void FUN_014b28c0(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = FUN_009e3950(auStack_50,param_1);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (DAT_02a748d0 != 0) {
    (**(code **)(*(long *)(DAT_02a748d0 + 0x48) + 0x18))();
  }
  DAT_02a748d0 = lVar1;
  FUN_006cf0a0(auStack_50,&DAT_026a57c0);
  FUN_014bc440(lVar1,auStack_50,1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar1 = FUN_009e3950(auStack_50,param_1);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (DAT_02a748d8 != 0) {
    (**(code **)(*(long *)(DAT_02a748d8 + 0x48) + 0x18))();
  }
  DAT_02a748d8 = lVar1;
  FUN_006cf0a0(auStack_50,&DAT_026a57d8);
  FUN_014bc440(lVar1,auStack_50,1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar1 = FUN_009e3950(auStack_50,param_1);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (DAT_02a748e0 != 0) {
    (**(code **)(*(long *)(DAT_02a748e0 + 0x48) + 0x18))();
  }
  DAT_02a748e0 = lVar1;
  FUN_006cf0a0(auStack_50,&DAT_026a57f0);
  FUN_014bc440(lVar1,auStack_50,1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar1 = FUN_009e3950(auStack_50,param_1);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (DAT_02a748e8 != 0) {
    (**(code **)(*(long *)(DAT_02a748e8 + 0x48) + 0x18))();
  }
  DAT_02a748e8 = lVar1;
  FUN_006cf0a0(auStack_50,&DAT_026a5808);
  FUN_014bc440(lVar1,auStack_50,1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


