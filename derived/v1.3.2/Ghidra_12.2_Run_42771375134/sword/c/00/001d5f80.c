/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d5f80; name: FUN_001d5f80
 */


void FUN_001d5f80(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar2 = *(uint *)(param_1 + 1) >> 0x1e;
  if ((uVar2 != 3) && ((uVar2 != 2 || (*(char *)(*param_1 + 0x1fb9) == '\0')))) {
    *(undefined8 *)((long)param_1 + 0x114) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0xfc) = 0;
    *(undefined8 *)((long)param_1 + 0x104) = 0;
    *(undefined8 *)((long)param_1 + 0x10c) = 0;
    FUN_003be660(param_1 + 4);
    return;
  }
  *(undefined8 *)((long)param_1 + 0x114) = 0x100000000;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined4 *)((long)param_1 + 0x104) = 0;
  if (uVar2 == 2) {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x1fb9) == '\0') goto LAB_001d604c;
LAB_001d6034:
    FUN_001d1850(lVar1,param_1);
    *(uint *)((long)param_1 + 0x11c) = *(uint *)((long)param_1 + 0x11c) | 0x400000;
  }
  else {
    if (uVar2 == 3) {
      lVar1 = *param_1;
      goto LAB_001d6034;
    }
LAB_001d604c:
    FUN_003bdad0(param_1 + 4,&local_30);
  }
  local_30 = 0;
  local_28 = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (*(uint *)(param_1 + 1) >> 0x1e == 2) {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x1fb9) == '\0') goto LAB_001d60b0;
  }
  else {
    if (*(uint *)(param_1 + 1) >> 0x1e != 3) {
LAB_001d60b0:
      FUN_003bdb20(param_1 + 4,&local_30);
      uVar2 = *(uint *)((long)param_1 + 0x11c);
      goto LAB_001d60c0;
    }
    lVar1 = *param_1;
  }
  FUN_001d1850(lVar1,param_1);
  uVar2 = *(uint *)((long)param_1 + 0x11c) | 0x800000;
  *(uint *)((long)param_1 + 0x11c) = uVar2;
LAB_001d60c0:
  *(uint *)((long)param_1 + 0x11c) = uVar2 & 0xfff07fff;
  FUN_001d1850(*param_1,param_1);
  *(uint *)((long)param_1 + 0x11c) = *(uint *)((long)param_1 + 0x11c) & 0xf8ffffff | 0x3000000;
  return;
}


