/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd2130; name: FUN_00bd2130
 */


void FUN_00bd2130(undefined1 param_1 [16],float param_2,long param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8)

{
  byte *pbVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_70;
  undefined8 local_68;
  
  if (param_5 == 1) {
    lVar6 = 0x2fa8;
  }
  else {
    lVar6 = 0x2dc8;
  }
  local_68 = *(undefined8 *)(param_3 + (long)param_6 * 8 + lVar6);
  fVar8 = (float)FUN_0167b760(*(undefined8 *)(param_3 + 0x58),&local_68);
  if (*(char *)(param_3 + 0x301b) == '\0') {
    lVar6 = 0;
  }
  else if (*(char *)(param_3 + 0x3027) == '\0') {
    lVar6 = 1;
  }
  else if (*(char *)(param_3 + 0x3033) == '\0') {
    lVar6 = 2;
  }
  else if (*(char *)(param_3 + 0x303f) == '\0') {
    lVar6 = 3;
  }
  else if (*(char *)(param_3 + 0x304b) == '\0') {
    lVar6 = 4;
  }
  else if (*(char *)(param_3 + 0x3057) == '\0') {
    lVar6 = 5;
  }
  else if (*(char *)(param_3 + 0x3063) == '\0') {
    lVar6 = 6;
  }
  else if (*(char *)(param_3 + 0x306f) == '\0') {
    lVar6 = 7;
  }
  else if (*(char *)(param_3 + 0x307b) == '\0') {
    lVar6 = 8;
  }
  else if (*(char *)(param_3 + 0x3087) == '\0') {
    lVar6 = 9;
  }
  else if (*(char *)(param_3 + 0x3093) == '\0') {
    lVar6 = 10;
  }
  else {
    if (*(char *)(param_3 + 0x309f) != '\0') {
      return;
    }
    lVar6 = 0xb;
  }
  if (param_5 == 1) {
    lVar3 = 0x2dc2;
  }
  else {
    lVar3 = 0x2d68;
  }
  lVar3 = param_3 + lVar3;
  lVar7 = (long)param_6;
  uVar4 = (ulong)*(byte *)(lVar3 + lVar7);
  pbVar1 = (byte *)(param_3 + lVar6 * 0xc + 0x3019);
  *pbVar1 = *(byte *)(lVar3 + lVar7);
  if (param_4 == 1) {
    if (param_8 < 1) {
      fVar9 = *(float *)(param_3 + 0x30a4);
      fVar10 = *(float *)(param_3 + 0x30a8);
    }
    else {
      fVar9 = *(float *)(param_3 + 0x30ac);
      fVar10 = *(float *)(param_3 + 0x30b0);
    }
  }
  else {
    if (param_4 != 0) {
      return;
    }
    fVar10 = param_2;
    if (param_7 == 1) {
      local_70 = *(undefined8 *)(param_3 + (long)param_8 * 8 + 0x2fa8);
      fVar9 = (float)FUN_0167b760(*(undefined8 *)(param_3 + 0x58),&local_70);
      lVar5 = 0x2dc2;
    }
    else {
      local_70 = *(undefined8 *)(param_3 + (long)param_8 * 8 + 0x2dc8);
      fVar9 = (float)FUN_0167b760(*(undefined8 *)(param_3 + 0x58),&local_70);
      lVar5 = 0x2d68;
    }
    uVar2 = *(undefined1 *)(lVar3 + lVar7);
    *(undefined1 *)(lVar3 + lVar7) = *(undefined1 *)(param_3 + lVar5 + (long)param_8);
    *(undefined1 *)(param_3 + lVar5 + (long)param_8) = uVar2;
    uVar4 = (ulong)*pbVar1;
  }
  lVar6 = param_3 + lVar6 * 0xc;
  *(float *)(lVar6 + 0x3010) = (fVar9 - fVar8) * 0.25;
  *(float *)(lVar6 + 0x3014) = (fVar10 - param_2) * 0.25;
  *(char *)(lVar6 + 0x3018) = (char)param_4;
  *(undefined2 *)(lVar6 + 0x301a) = 0x104;
  FUN_0167c250(*(undefined8 *)(param_3 + 0x58),param_3 + 0x68 + uVar4 * 0x78);
  local_70 = 0x26c7d6c10402e197;
  FUN_0167c0b0(*(undefined8 *)(param_3 + 0x58),&local_70,param_3 + 0x68 + (ulong)*pbVar1 * 0x78);
  return;
}


