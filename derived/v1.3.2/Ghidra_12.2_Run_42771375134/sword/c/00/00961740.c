/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00961740; name: FUN_00961740
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_00961740(undefined8 *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  uVar3 = FUN_00931920(*param_1);
  lVar4 = FUN_008df7f0(uVar3,0);
  if (((lVar4 == 0) || (*(char *)(param_1 + 2) == '\0')) ||
     (uVar5 = FUN_008e1600(), (uVar5 & 1) != 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_008e12a0(lVar4,0x11);
    fVar10 = SQRT((float)uVar7);
    if (NAN(fVar10)) {
      fVar10 = sqrtf((float)uVar7);
    }
    fVar11 = SQRT(fVar10);
    if (NAN(fVar11)) {
      fVar11 = sqrtf(fVar10);
    }
    uVar7 = (uint)(fVar11 * DAT_01d4c6b8);
  }
  uVar3 = FUN_00931920(*param_1);
  lVar4 = FUN_008df7f0(uVar3,1);
  if (((lVar4 == 0) || (*(char *)((long)param_1 + 0x11) == '\0')) ||
     (uVar5 = FUN_008e1600(), (uVar5 & 1) != 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_008e12a0(lVar4,0x11);
    fVar10 = SQRT((float)uVar8);
    if (NAN(fVar10)) {
      fVar10 = sqrtf((float)uVar8);
    }
    fVar11 = SQRT(fVar10);
    if (NAN(fVar11)) {
      fVar11 = sqrtf(fVar10);
    }
    uVar8 = (uint)(fVar11 * DAT_01d4c6b8);
  }
  uVar3 = FUN_00931920(*param_1);
  lVar4 = FUN_008df7f0(uVar3,2);
  if (((lVar4 == 0) || (*(char *)((long)param_1 + 0x12) == '\0')) ||
     (uVar5 = FUN_008e1600(), (uVar5 & 1) != 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_008e12a0(lVar4,0x11);
    fVar10 = SQRT((float)uVar9);
    if (NAN(fVar10)) {
      fVar10 = sqrtf((float)uVar9);
    }
    fVar11 = SQRT(fVar10);
    if (NAN(fVar11)) {
      fVar11 = sqrtf(fVar10);
    }
    uVar9 = (uint)(fVar11 * DAT_01d4c6b8);
  }
  uVar3 = FUN_00931920(*param_1);
  lVar4 = FUN_008df7f0(uVar3,3);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)*(byte *)((long)param_1 + 0x13);
    if (*(byte *)((long)param_1 + 0x13) != 0) {
      uVar5 = FUN_008e1600();
      if ((uVar5 & 1) == 0) {
        uVar6 = FUN_008e12a0(lVar4,0x11);
        fVar10 = SQRT((float)uVar6);
        if (NAN(fVar10)) {
          fVar10 = sqrtf((float)uVar6);
        }
        fVar11 = SQRT(fVar10);
        if (NAN(fVar11)) {
          fVar11 = sqrtf(fVar10);
        }
        uVar6 = (uint)(fVar11 * DAT_01d4c6b8);
        cVar1 = *(char *)((long)param_1 + 0x15);
      }
      else {
        uVar6 = 0;
        cVar1 = *(char *)((long)param_1 + 0x15);
      }
      goto joined_r0x0096180c;
    }
  }
  cVar1 = *(char *)((long)param_1 + 0x15);
joined_r0x0096180c:
  if (cVar1 != '\0') {
    uVar7 = (uint)(uVar7 != 0);
    uVar8 = (uint)(uVar8 != 0);
    uVar9 = (uint)(uVar9 != 0);
    uVar6 = (uint)(uVar6 != 0);
  }
  uVar9 = uVar9 + uVar8 + uVar7;
  uVar6 = uVar6 + uVar9;
  uVar2 = FUN_008ed5b0(param_1[1],uVar6);
  if (uVar2 < uVar7) {
    lVar4 = 0;
  }
  else if (uVar2 < uVar8 + uVar7) {
    lVar4 = 1;
  }
  else if (uVar2 < uVar9) {
    lVar4 = 2;
  }
  else {
    if (uVar6 <= uVar2) {
      return 0;
    }
    lVar4 = 3;
  }
  return (&DAT_01d4bea4)[lVar4];
}


