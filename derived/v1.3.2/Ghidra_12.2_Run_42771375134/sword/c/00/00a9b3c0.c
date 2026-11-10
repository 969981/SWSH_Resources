/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a9b3c0; name: FUN_00a9b3c0
 */


void FUN_00a9b3c0(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  switch(param_2) {
  case 0:
    if ((*(long *)(param_1 + 8) != 0) &&
       (uVar1 = FUN_008f35c0(*(long *)(param_1 + 8),0x4000000), (uVar1 & 1) != 0)) {
      local_30 = 0x10;
      local_28 = 0;
      local_40 = 0x4e39ea4b54348ed6;
      pcStack_38 = "Audience_Tension";
      FUN_008962a0(DAT_01d4c47c,*(long *)PTR_DAT_027107a8 + 0x108,&local_40,0);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0x32;
    *(undefined8 *)(param_1 + 0x20) = 0x96;
    break;
  case 1:
    FUN_00a9b4d0(param_1);
    break;
  case 2:
    FUN_00a9b5f0(param_1);
    break;
  case 3:
    FUN_00a9b710(param_1);
    break;
  case 4:
    FUN_00a9b830(param_1);
    break;
  case 5:
    FUN_00a9b950(param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


