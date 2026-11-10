/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed3c10; name: FUN_00ed3c10
 */


void FUN_00ed3c10(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  ulong local_40;
  byte *pbStack_38;
  undefined8 local_30;
  long local_28;
  
  pbStack_38 = (byte *)(param_1 + 0xe0);
  bVar1 = *pbStack_38;
  local_40 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    pbVar4 = (byte *)(param_1 + 0xe1);
    do {
      local_40 = (local_40 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  local_28 = 0;
  local_30 = 0x3f;
  if ((long)local_40 < -0x458f6bc6209adb7d) {
    if ((local_40 == 0x83ba7afd742e2995) || (local_40 == 0xb8ec9b35efe9e110)) goto LAB_00ed3d38;
LAB_00ed3cd8:
    uVar3 = FUN_00fc6ad0(&local_40);
    if (((uVar3 & 1) == 0) && (local_40 != 0x237593673ceae561)) {
      FUN_00db7e80(0);
      uVar3 = FUN_00fc6ad0(&local_40);
    }
    else {
      FUN_00db7e80(2);
      uVar3 = FUN_00fc6ad0(&local_40);
    }
  }
  else {
    if ((local_40 != 0xba709439df652483) &&
       ((local_40 != 0x57a22774820f2de5 && (local_40 != 0x23f8a2e146592267)))) goto LAB_00ed3cd8;
LAB_00ed3d38:
    FUN_00db7e80(1);
    uVar3 = FUN_00fc6ad0(&local_40);
  }
  if ((uVar3 & 1) == 0) {
    if (local_40 == 0xd21507a8fafab287) {
      uVar5 = 0x41c80000;
      goto LAB_00ed3db8;
    }
    if (local_40 == 0xf0414696c59d38d) {
      uVar5 = 0x41600000;
      goto LAB_00ed3db8;
    }
    if (local_40 != 0x237593673ceae561) {
      uVar5 = 0x40c00000;
      goto LAB_00ed3db8;
    }
  }
  uVar5 = 0x41a00000;
LAB_00ed3db8:
  FUN_00db7e70(uVar5);
  puVar2 = PTR_DAT_0271e7f0;
  *PTR_DAT_027203b8 = local_40 == 0x237593673ceae561;
  *puVar2 = local_40 == 0x237593673ceae561;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


