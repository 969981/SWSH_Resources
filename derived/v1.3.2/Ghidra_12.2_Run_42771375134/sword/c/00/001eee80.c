/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001eee80; name: FUN_001eee80
 */


void FUN_001eee80(long *param_1,float *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  
  (**(code **)(*param_1 + 0xa8))(&local_70);
  fVar8 = param_2[5] + param_2[5];
  fVar14 = *param_2;
  fVar15 = param_2[1];
  fVar12 = param_2[2];
  fVar13 = param_2[3];
  fVar7 = param_2[4] + param_2[4];
  fVar9 = param_2[6] + param_2[6];
  fVar11 = fStack_64 * fStack_64 + -0.5;
  fVar10 = fVar7 * local_70 + fVar8 * fStack_6c + fVar9 * local_68;
  local_50 = (fStack_64 * fVar14 + local_70 * fVar13 + fStack_6c * fVar12) - local_68 * fVar15;
  local_40 = local_60 +
             local_70 * fVar10 + fVar7 * fVar11 + fStack_64 * (fVar9 * fStack_6c - fVar8 * local_68)
  ;
  fStack_3c = fStack_5c +
              fStack_6c * fVar10 +
              fVar8 * fVar11 + fStack_64 * (fVar7 * local_68 - fVar9 * local_70);
  fStack_4c = (local_68 * fVar14 + fStack_6c * fVar13 + fStack_64 * fVar15) - local_70 * fVar12;
  local_48 = (local_70 * fVar15 + local_68 * fVar13 + fStack_64 * fVar12) - fStack_6c * fVar14;
  fStack_44 = ((fStack_64 * fVar13 - local_70 * fVar14) - fStack_6c * fVar15) - local_68 * fVar12;
  local_38 = local_58 +
             fVar9 * fVar11 + fStack_64 * (fVar8 * local_70 - fVar7 * fStack_6c) + local_68 * fVar10
  ;
  *(float *)(param_1 + 0x28) = local_50;
  *(float *)((long)param_1 + 0x144) = fStack_4c;
  *(float *)(param_1 + 0x29) = local_48;
  *(float *)((long)param_1 + 0x14c) = fStack_44;
  *(float *)(param_1 + 0x2a) = local_40;
  *(float *)((long)param_1 + 0x154) = fStack_3c;
  *(float *)(param_1 + 0x2b) = local_38;
  plVar1 = param_1 + 0xc;
  if ((*(uint *)(param_1 + 0xd) >> 0x1e == 3) ||
     ((*(uint *)(param_1 + 0xd) >> 0x1e == 2 && (*(char *)(*plVar1 + 0x1fb9) != '\0')))) {
    if ((*(uint *)((long)param_1 + 0x17c) >> 0x14 & 1) == 0) {
      *(uint *)((long)param_1 + 0x17c) = *(uint *)((long)param_1 + 0x17c) | 0x200000;
    }
    FUN_001d1850(param_1[0xc],plVar1);
    *(uint *)((long)param_1 + 0x17c) = *(uint *)((long)param_1 + 0x17c) | 0x100000;
    uVar3 = *(uint *)(param_1 + 0xd);
    uVar5 = uVar3 >> 0x1e;
    if (uVar5 == 2) goto LAB_001ef0fc;
LAB_001ef068:
    if (uVar5 != 3) {
LAB_001ef070:
      FUN_003bdb70(param_1 + 0x10,param_2);
      lVar6 = param_1[4];
      goto joined_r0x001ef178;
    }
  }
  else {
    FUN_003bda40(param_1 + 0x10,&local_50);
    uVar3 = *(uint *)(param_1 + 0xd);
    uVar5 = uVar3 >> 0x1e;
    if (uVar5 != 2) goto LAB_001ef068;
LAB_001ef0fc:
    if (*(char *)(*plVar1 + 0x1fb9) == '\0') goto LAB_001ef070;
  }
  lVar6 = param_1[0xe];
  if (lVar6 == 0) {
    lVar6 = FUN_001d1a00(param_1[0xc],uVar3 >> 0x18 & 0xf);
    param_1[0xe] = lVar6;
  }
  *(float *)(lVar6 + 0xd0) = *param_2;
  *(float *)(lVar6 + 0xd4) = param_2[1];
  *(float *)(lVar6 + 0xd8) = param_2[2];
  *(float *)(lVar6 + 0xdc) = param_2[3];
  *(float *)(lVar6 + 0xe0) = param_2[4];
  *(float *)(lVar6 + 0xe4) = param_2[5];
  *(float *)(lVar6 + 0xe8) = param_2[6];
  FUN_001d1850(param_1[0xc],plVar1);
  *(uint *)((long)param_1 + 0x17c) = *(uint *)((long)param_1 + 0x17c) | 0x200;
  lVar6 = param_1[4];
joined_r0x001ef178:
  if ((lVar6 != 0) && (uVar3 = *(uint *)(lVar6 + 0x50), uVar3 != 0)) {
    lVar6 = *(long *)(lVar6 + 0x48);
    uVar4 = 0;
    do {
      while (uVar5 = (int)uVar4 + 1, *(char *)(lVar6 + uVar4 * 0x10) != '\0') {
        uVar4 = (ulong)uVar5;
        if (uVar3 <= uVar5) {
          return;
        }
      }
      lVar2 = *(long *)(lVar6 + uVar4 * 0x10 + 8);
      if (lVar2 == 0) {
        return;
      }
      FUN_001e0660(lVar2,param_1);
      uVar4 = (ulong)uVar5;
    } while (uVar5 < uVar3);
  }
  return;
}


