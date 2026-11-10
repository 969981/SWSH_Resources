/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001df380; name: FUN_001df380
 */


void FUN_001df380(long *param_1,float *param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 1) >> 0x1e;
  if (uVar2 == 2) {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x1fb9) == '\0') goto LAB_001df46c;
  }
  else if (uVar2 != 3) {
    lVar1 = *param_1;
LAB_001df46c:
    FUN_003bdfa0(param_1 + 4,*(undefined8 *)(lVar1 + 0x1178),param_2,param_3);
    return;
  }
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    lVar1 = FUN_001d1a00(*param_1,*(uint *)(param_1 + 1) >> 0x18 & 0xf);
    param_1[2] = lVar1;
  }
  uVar2 = 0;
  if (param_2 != (float *)0x0) {
    *(float *)(lVar1 + 0x134) = *param_2 + *(float *)(lVar1 + 0x134);
    *(float *)(lVar1 + 0x138) = param_2[1] + *(float *)(lVar1 + 0x138);
    uVar2 = 0x40000;
    *(float *)(lVar1 + 0x13c) = param_2[2] + *(float *)(lVar1 + 0x13c);
  }
  if (param_3 != (float *)0x0) {
    *(float *)(lVar1 + 0x140) = *param_3 + *(float *)(lVar1 + 0x140);
    *(float *)(lVar1 + 0x144) = param_3[1] + *(float *)(lVar1 + 0x144);
    uVar2 = uVar2 | 0x80000;
    *(float *)(lVar1 + 0x148) = param_3[2] + *(float *)(lVar1 + 0x148);
  }
  FUN_001d1850(*param_1,param_1);
  *(uint *)((long)param_1 + 0x11c) = *(uint *)((long)param_1 + 0x11c) | uVar2;
  return;
}


