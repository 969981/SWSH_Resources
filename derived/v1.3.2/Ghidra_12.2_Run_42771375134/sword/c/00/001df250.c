/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001df250; name: FUN_001df250
 */


void FUN_001df250(long *param_1,float *param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 1) >> 0x1e;
  if (uVar2 == 2) {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x1fb9) == '\0') goto LAB_001df33c;
  }
  else if (uVar2 != 3) {
    lVar1 = *param_1;
LAB_001df33c:
    FUN_003bdc60(param_1 + 4,*(undefined8 *)(lVar1 + 0x1178),param_2,param_3);
    return;
  }
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    lVar1 = FUN_001d1a00(*param_1,*(uint *)(param_1 + 1) >> 0x18 & 0xf);
    param_1[2] = lVar1;
  }
  uVar2 = 0;
  if (param_2 != (float *)0x0) {
    *(float *)(lVar1 + 0x11c) = *param_2 + *(float *)(lVar1 + 0x11c);
    *(float *)(lVar1 + 0x120) = param_2[1] + *(float *)(lVar1 + 0x120);
    uVar2 = 0x10000;
    *(float *)(lVar1 + 0x124) = param_2[2] + *(float *)(lVar1 + 0x124);
  }
  if (param_3 != (float *)0x0) {
    *(float *)(lVar1 + 0x128) = *param_3 + *(float *)(lVar1 + 0x128);
    *(float *)(lVar1 + 300) = param_3[1] + *(float *)(lVar1 + 300);
    uVar2 = uVar2 | 0x20000;
    *(float *)(lVar1 + 0x130) = param_3[2] + *(float *)(lVar1 + 0x130);
  }
  FUN_001d1850(*param_1,param_1);
  *(uint *)((long)param_1 + 0x11c) = *(uint *)((long)param_1 + 0x11c) | uVar2;
  return;
}


