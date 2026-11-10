/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00423320; name: FUN_00423320
 */


undefined8 FUN_00423320(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  FUN_0042b1b0(param_1 + 0x17);
  FUN_0042b1b0(param_1 + 0x1a,param_2);
  FUN_0042b1b0(param_1 + 0x1d,param_2);
  FUN_0042b1b0(param_1 + 0x20,param_2);
  if ((*(char *)(param_1 + 0x27) != '\0') && (param_1[0x2a] != 0)) {
    FUN_004289f0(param_1[0x2a],param_2);
    if (param_1[0x2a] != 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
    }
    param_1[0x2a] = 0;
  }
  if (param_1[0x29] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[0x29] = 0;
  }
  lVar1 = param_1[0x28];
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x25) != 0) {
      FUN_004291d0(lVar1,param_2);
      FUN_0042b1b0(param_1[0x28] + 0x90,param_2);
      if (1 < *(uint *)(param_1 + 0x25)) {
        uVar2 = 1;
        lVar1 = 0xa8;
        do {
          FUN_004291d0(param_1[0x28] + lVar1,param_2);
          FUN_0042b1b0(param_1[0x28] + lVar1 + 0x90,param_2);
          uVar2 = uVar2 + 1;
          lVar1 = lVar1 + 0xa8;
        } while (uVar2 < *(uint *)(param_1 + 0x25));
      }
      lVar1 = param_1[0x28];
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar1);
    param_1[0x28] = 0;
  }
  FUN_0042acc0(param_1 + 1,param_2);
  FUN_0042acc0(param_1 + 4,param_2);
  FUN_0042acc0(param_1 + 7,param_2);
  FUN_0042acc0(param_1 + 10,param_2);
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    if (*(int *)((long)param_1 + 300) != 0) {
      FUN_0042acc0(lVar1,param_2);
      if (1 < *(uint *)((long)param_1 + 300)) {
        uVar2 = 1;
        lVar1 = 0x18;
        do {
          FUN_0042acc0(param_1[0xd] + lVar1,param_2);
          uVar2 = uVar2 + 1;
          lVar1 = lVar1 + 0x18;
        } while (uVar2 < *(uint *)((long)param_1 + 300));
      }
      lVar1 = param_1[0xd];
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar1);
    param_1[0xd] = 0;
    *(undefined4 *)((long)param_1 + 300) = 0;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return 1;
}


