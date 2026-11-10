/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a9b4d0; name: FUN_00a9b4d0
 */


void FUN_00a9b4d0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long local_48 [2];
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = FUN_008f35c0(*(long *)(param_1 + 8),0x4000000);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)PTR_DAT_027107a8;
      FUN_0010d170(local_48,"Play_Audience_cheer_riser_long");
      FUN_006cf0c0(local_48 + 1,local_48);
      FUN_008962c0(lVar2 + 0x108,local_48 + 1);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (local_48[0] != 0) {
        (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
        local_48[0] = 0;
      }
    }
    if ((*(long *)(param_1 + 8) != 0) &&
       (uVar1 = FUN_008f35c0(*(long *)(param_1 + 8),0x4000000), (uVar1 & 1) != 0)) {
      local_30 = 0x10;
      local_28 = 0;
      local_48[1] = 0x4e39ea4b54348ed6;
      pcStack_38 = "Audience_Tension";
      FUN_008962a0(DAT_01d4c1d4,*(long *)PTR_DAT_027107a8 + 0x108,local_48 + 1,0);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


