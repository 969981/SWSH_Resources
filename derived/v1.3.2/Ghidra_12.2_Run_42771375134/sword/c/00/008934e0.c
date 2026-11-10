/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008934e0; name: FUN_008934e0
 */


undefined8 FUN_008934e0(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  if ((*param_1 == 0) || (**(char **)(*param_1 + 0x60) == '\0')) {
    uVar1 = 0;
  }
  else if ((int)param_1[1] < 2) {
    if (*(char *)((long)param_1 + 0xc) == '\0') {
      uVar1 = *(undefined8 *)PTR_DAT_02717598;
      FUN_006cf0c0(auStack_50,param_1);
      uVar2 = FUN_00895650(uVar1,auStack_50,0,0,0);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
    else {
      *(undefined1 *)((long)param_1 + 0xd) = 1;
      uVar1 = *(undefined8 *)PTR_DAT_02717598;
      FUN_006cf0c0(auStack_50,param_1);
      uVar2 = FUN_00895650(uVar1,auStack_50,1,PTR_LAB_027175a0,param_1);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
      *(undefined1 *)((long)param_1 + 0xd) = 0;
    }
    else {
      uVar1 = 1;
      *(undefined4 *)(param_1 + 1) = 1;
      *(undefined4 *)(param_1 + 2) = 900;
    }
  }
  else {
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    uVar1 = 1;
  }
  return uVar1;
}


