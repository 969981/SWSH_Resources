/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd2a80; name: FUN_00bd2a80
 */


void FUN_00bd2a80(undefined1 param_1 [16],float param_2,long param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_3 + 0x301b) == '\0') {
    lVar4 = 0;
  }
  else if (*(char *)(param_3 + 0x3027) == '\0') {
    lVar4 = 1;
  }
  else if (*(char *)(param_3 + 0x3033) == '\0') {
    lVar4 = 2;
  }
  else if (*(char *)(param_3 + 0x303f) == '\0') {
    lVar4 = 3;
  }
  else if (*(char *)(param_3 + 0x304b) == '\0') {
    lVar4 = 4;
  }
  else if (*(char *)(param_3 + 0x3057) == '\0') {
    lVar4 = 5;
  }
  else if (*(char *)(param_3 + 0x3063) == '\0') {
    lVar4 = 6;
  }
  else if (*(char *)(param_3 + 0x306f) == '\0') {
    lVar4 = 7;
  }
  else if (*(char *)(param_3 + 0x307b) == '\0') {
    lVar4 = 8;
  }
  else if (*(char *)(param_3 + 0x3087) == '\0') {
    lVar4 = 9;
  }
  else if (*(char *)(param_3 + 0x3093) == '\0') {
    lVar4 = 10;
  }
  else {
    if (*(char *)(param_3 + 0x309f) != '\0') {
      return;
    }
    lVar4 = 0xb;
  }
  fVar5 = (float)FUN_0167b760(*(undefined8 *)(param_3 + 0x58),param_3 + 0x2fa8 + (ulong)param_6 * 8)
  ;
  fVar7 = param_2;
  fVar6 = (float)FUN_0167b760(*(undefined8 *)(param_3 + 0x58),param_3 + 0x2fa8 + (ulong)param_7 * 8)
  ;
  puVar1 = (undefined1 *)(param_3 + (ulong)param_4 + 0x2d86);
  *(undefined1 *)(param_3 + lVar4 * 0xc + 0x3019) = *puVar1;
  if (param_4 != param_5) {
    uVar3 = *puVar1;
    *puVar1 = *(undefined1 *)(param_3 + (ulong)param_5 + 0x2d86);
    *(undefined1 *)(param_3 + (ulong)param_5 + 0x2d86) = uVar3;
    uVar2 = *(uint *)(param_3 + 0x30a0);
    *(uint *)(param_3 + 0x30a0) =
         (uVar2 >> (ulong)(param_5 & 0x1f) & 1) << (ulong)(param_4 & 0x1f) |
         uVar2 & ((1 << (ulong)(param_5 & 0x1f) | 1 << (ulong)(param_4 & 0x1f)) ^ 0xffffffffU) |
         (uVar2 >> (ulong)(param_4 & 0x1f) & 1) << (ulong)(param_5 & 0x1f);
  }
  param_3 = param_3 + lVar4 * 0xc;
  *(float *)(param_3 + 0x3010) = (fVar6 - fVar5) * 0.25;
  *(float *)(param_3 + 0x3014) = (fVar7 - param_2) * 0.25;
  *(undefined2 *)(param_3 + 0x301a) = 0x104;
  *(undefined1 *)(param_3 + 0x3018) = 0;
  return;
}


