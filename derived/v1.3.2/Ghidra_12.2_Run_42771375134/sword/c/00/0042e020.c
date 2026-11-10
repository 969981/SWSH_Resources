/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042e020; name: FUN_0042e020
 */


void FUN_0042e020(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  float fVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_44;
  
  lVar12 = *(long *)(param_1 + 0x140);
  lVar13 = *(long *)(lVar12 + 0x50);
  if (lVar13 == 0) {
    lVar13 = *(long *)PTR_DAT_02712ae8;
    uVar2 = *(uint *)(lVar12 + 0xc);
    pMVar1 = (MutexType *)(lVar13 + 0x150);
    nn::os::LockMutex(pMVar1);
    uVar3 = *(uint *)(lVar13 + 0x178);
    if (uVar3 != 0) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar2 / uVar3;
      }
      for (lVar13 = *(long *)(*(long *)(lVar13 + 0x170) + (ulong)(uVar2 - uVar5 * uVar3) * 8);
          lVar13 != 0; lVar13 = *(long *)(lVar13 + 8)) {
        if (*(uint *)(lVar13 + 0x10) == uVar2) {
          *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar1);
          *(long *)(lVar12 + 0x50) = lVar13;
          bVar4 = *(byte *)(lVar13 + 0xa3);
          goto joined_r0x0042e124;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
    plVar8 = (long *)0x0;
    plVar11 = (long *)0x0;
    *(undefined8 *)(lVar12 + 0x50) = 0;
  }
  else {
    bVar4 = *(byte *)(lVar13 + 0xa3);
joined_r0x0042e124:
    if ((ulong)bVar4 == 0xff) {
      plVar11 = (long *)0x0;
      uVar9 = (ulong)*(byte *)(lVar13 + 0xa4);
      if (uVar9 != 0xff) goto LAB_0042e084;
LAB_0042e138:
      plVar8 = (long *)0x0;
      bVar4 = *(byte *)(lVar13 + 0xa7);
    }
    else {
      plVar8 = (long *)(lVar13 + (ulong)bVar4 * 0x10 + 0x30);
      plVar11 = (long *)0x0;
      if (*plVar8 != 0) {
        plVar11 = plVar8;
      }
      uVar9 = (ulong)*(byte *)(lVar13 + 0xa4);
      if (uVar9 == 0xff) goto LAB_0042e138;
LAB_0042e084:
      plVar10 = (long *)(lVar13 + uVar9 * 0x10 + 0x30);
      plVar8 = (long *)0x0;
      if (*plVar10 != 0) {
        plVar8 = plVar10;
      }
      bVar4 = *(byte *)(lVar13 + 0xa7);
    }
    if ((bVar4 & 1) != 0) {
      fVar18 = *(float *)(lVar12 + 0x14);
      fVar17 = *(float *)(lVar12 + 0x18);
      goto LAB_0042e154;
    }
  }
  fVar17 = 0.0;
  fVar18 = 0.0;
LAB_0042e154:
  puVar7 = PTR_DAT_02712d40;
  fVar6 = DAT_01d4c6b8;
  lVar12 = *param_2;
  lVar13 = lVar12;
  fVar20 = DAT_01d4c6b8;
  fVar19 = DAT_01d4c6b8;
  do {
    if (*(long *)(param_4 + 200) == *(long *)(lVar13 + 0x50)) {
      fVar22 = *(float *)(lVar13 + 0x5c);
      fVar21 = fVar22 * fVar18;
      uVar16 = *(undefined4 *)(lVar13 + 0x24);
      if (plVar11 != (long *)0x0) {
        local_44 = 0;
        fVar14 = (float)FUN_0042e770(uVar16,plVar11,0,&local_44);
        if (fVar21 <= fVar14) {
          fVar21 = fVar14;
        }
      }
      fVar22 = fVar22 * fVar17;
      if (plVar8 != (long *)0x0) {
        local_44 = 0;
        fVar14 = (float)FUN_0042e770(uVar16,plVar8,0,&local_44);
        if (fVar22 <= fVar14) {
          fVar22 = fVar14;
        }
      }
      lVar12 = *(long *)puVar7;
      fVar14 = *(float *)(lVar13 + 0x3c) * fVar6;
      if ((*(char *)(lVar12 + 4) != '\0') && (*(long *)(lVar12 + 0x48) != 0)) {
        local_44 = 0;
        fVar15 = (float)FUN_0042e770(fVar14,lVar12 + 0x48,0,&local_44);
        if (fVar21 <= fVar15) {
          fVar21 = fVar15;
        }
        lVar12 = *(long *)puVar7;
      }
      if ((*(char *)(lVar12 + 5) != '\0') && (*(long *)(lVar12 + 0x58) != 0)) {
        local_44 = 0;
        fVar14 = (float)FUN_0042e770(fVar14,lVar12 + 0x58,0,&local_44);
        if (fVar22 <= fVar14) {
          fVar22 = fVar14;
        }
      }
      if (*(int *)(param_4 + 0x2a0) == 0) {
        lVar12 = *(long *)puVar7;
        fVar14 = *(float *)(lVar13 + 0x40) * fVar6;
        if ((*(char *)(lVar12 + 1) != '\0') && (*(long *)(lVar12 + 0x18) != 0)) {
          local_44 = 0;
          fVar15 = (float)FUN_0042e770(fVar14,lVar12 + 0x18,0,&local_44);
          if (fVar21 <= fVar15) {
            fVar21 = fVar15;
          }
          lVar12 = *(long *)puVar7;
        }
        if ((*(char *)(lVar12 + 2) != '\0') && (*(long *)(lVar12 + 0x28) != 0)) {
          local_44 = 0;
          fVar14 = (float)FUN_0042e770(fVar14,lVar12 + 0x28,0,&local_44);
          if (fVar22 <= fVar14) {
            fVar22 = fVar14;
          }
        }
      }
      fVar20 = (float)NEON_fminnm(fVar20,fVar21);
      fVar19 = (float)NEON_fminnm(fVar19,fVar22);
      lVar12 = *param_2;
    }
    lVar13 = lVar13 + 0x60;
  } while (lVar13 != lVar12 + (ulong)*(uint *)(param_2 + 1) * 0x60);
  fVar17 = *(float *)(param_4 + 0xd0);
  if (*(float *)(param_4 + 0xd0) <= fVar20) {
    fVar17 = fVar20;
  }
  *(float *)(param_4 + 0xd0) = fVar17;
  fVar17 = *(float *)(param_4 + 0xd4);
  if (*(float *)(param_4 + 0xd4) <= fVar19) {
    fVar17 = fVar19;
  }
  *(float *)(param_4 + 0xd4) = fVar17;
  return;
}


