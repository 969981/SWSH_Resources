/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088ba20; name: FUN_0088ba20
 */


void FUN_0088ba20(uint *param_1,long param_2,uint param_3,void *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 local_88;
  int iStack_84;
  
  if ((char)param_1[0x15] == '\0') {
    uVar4 = *param_1;
  }
  else {
    uVar4 = *param_1;
    if (param_1[0x14] < uVar4) {
      return;
    }
  }
  fVar17 = (float)param_1[1];
  fVar18 = (1.0 / ABS(fVar17)) * (float)uVar4;
  fVar14 = (float)(uVar4 * uVar4);
  fVar13 = (float)param_3;
  lVar9 = *(long *)(param_1 + (ulong)param_5 * 2 + 8);
  if (fVar13 < (fVar14 + fVar18 * 0.5) / fVar18) {
    fVar18 = (fVar14 + fVar14) / (float)(param_3 * 2 - 1);
  }
  if (fVar13 < fVar18) goto LAB_0088bd10;
  if (((DAT_02a4c7a8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_02a4c7a8), iVar5 != 0)) {
    DAT_02a4c798 = 1;
    __cxa_guard_release(&DAT_02a4c7a8);
  }
  local_88 = 0;
  iStack_84 = (int)(fVar13 - fVar18);
  uVar4 = FUN_0088f7d0(&local_88,&DAT_02a4c798,&local_88);
  if (param_4 != (void *)0x0) {
    uVar11 = (uint)fVar18;
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar4 + uVar11 <= uVar1) {
      if (uVar4 == 0) {
        uVar10 = *(uint *)(param_2 + 0x10);
        bVar12 = 1;
        uVar6 = uVar10;
      }
      else {
        if (*(char *)(param_2 + 9) != '\0') goto LAB_0088bbc4;
        uVar10 = *(uint *)(param_2 + 0x10);
        if (uVar1 < uVar4) {
          bVar12 = 1;
          uVar6 = uVar10;
        }
        else {
          uVar6 = *(uint *)(param_2 + 0xc);
          uVar3 = 0;
          if (uVar6 != 0) {
            uVar3 = (uVar10 + uVar4) / uVar6;
          }
          bVar12 = 0;
          *(uint *)(param_2 + 0x18) = uVar1 - uVar4;
          uVar6 = (uVar10 + uVar4) - uVar3 * uVar6;
          *(uint *)(param_2 + 0x10) = uVar6;
        }
      }
      uVar2 = *(int *)(param_2 + 0xc) - uVar6;
      uVar3 = uVar11;
      if (uVar2 <= uVar11) {
        uVar3 = uVar2;
      }
      if (uVar3 != 0) {
        memcpy(param_4,(void *)(*(long *)(param_2 + 0x20) + (ulong)uVar6 * 4),(ulong)(uVar3 << 2));
      }
      if (uVar11 - uVar3 != 0) {
        memcpy((void *)((long)param_4 + (ulong)uVar3 * 4),*(void **)(param_2 + 0x20),
               (ulong)((uVar11 - uVar3) * 4));
      }
      if (!(bool)(bVar12 | uVar4 == 0)) {
        *(uint *)(param_2 + 0x10) = uVar10;
        *(uint *)(param_2 + 0x18) = uVar1;
      }
    }
  }
LAB_0088bbc4:
  uVar7 = (ulong)*param_1;
  if (*param_1 != 0) {
    fVar13 = 1.0 / (float)(int)(fVar18 * DAT_01d4c4d4 * (float)param_1[2]);
    fVar14 = 1.0 / (float)(int)(fVar18 * DAT_01d4c4d4 * (float)param_1[3]);
    if (0.0 <= fVar17) {
      fVar17 = 0.0;
      fVar15 = 1.0;
      uVar8 = 0;
      do {
        fVar16 = (fVar18 * 0.5 + (float)(uint)((int)uVar7 * (int)uVar8)) * (1.0 / fVar18);
        fVar19 = *(float *)((long)param_4 + (ulong)(uint)(int)fVar16 * 4);
        *(float *)(lVar9 + uVar8 * 4) =
             fVar15 * fVar17 * (float)param_1[4] *
             (fVar19 + fVar19 * ((float)(int)fVar16 - fVar16) +
             (fVar16 - (float)(int)fVar16) *
             *(float *)((long)param_4 + (ulong)(uint)(int)fVar16 * 4));
        if (fVar17 < 1.0) {
          fVar17 = fVar17 + fVar13;
        }
        uVar7 = (ulong)*param_1;
        uVar8 = uVar8 + 1;
        if (0.0 < fVar15) {
          fVar15 = fVar15 - fVar14;
        }
      } while (uVar8 < uVar7);
    }
    else {
      fVar17 = 0.0;
      iVar5 = -1;
      fVar15 = 1.0;
      uVar4 = 0;
      do {
        fVar16 = (fVar18 * 0.5 + (float)((int)uVar7 * uVar4)) * (1.0 / fVar18);
        fVar19 = *(float *)((long)param_4 + (ulong)(uint)(int)fVar16 * 4);
        *(float *)(lVar9 + (ulong)(uint)((int)uVar7 + iVar5) * 4) =
             fVar15 * fVar17 * (float)param_1[4] *
             (fVar19 + fVar19 * ((float)(int)fVar16 - fVar16) +
             (fVar16 - (float)(int)fVar16) *
             *(float *)((long)param_4 + (ulong)(uint)(int)fVar16 * 4));
        uVar7 = (ulong)*param_1;
        if (fVar17 < 1.0) {
          fVar17 = fVar17 + fVar13;
        }
        if (0.0 < fVar15) {
          fVar15 = fVar15 - fVar14;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (uVar4 < *param_1);
    }
  }
LAB_0088bd10:
  *(undefined1 *)(param_1 + 0x15) = 1;
  return;
}


