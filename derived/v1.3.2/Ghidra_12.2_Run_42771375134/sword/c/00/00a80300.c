/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a80300; name: FUN_00a80300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a80300(long *param_1,uint *param_2,undefined8 *param_3,long *param_4,undefined8 *param_5,
                 uint param_6)

{
  float *pfVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auStack_80 [28];
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  param_3[1] = 0;
  *param_3 = 0;
  param_4[1] = 0;
  *param_4 = 0;
  uVar12 = _DAT_01d4a130;
  param_5[1] = _UNK_01d4a138;
  *param_5 = uVar12;
  if ((param_2[2] != 0x32) && (param_2[2] != 0x10)) {
    if ((*param_2 == 0xff) ||
       (plVar8 = (long *)param_1[(ulong)*param_2 + 0xa9], plVar8 == (long *)0x0)) {
      param_3[1] = *(undefined8 *)(param_2 + 6);
      *param_3 = *(undefined8 *)(param_2 + 4);
      return;
    }
    plVar7 = plVar8 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar5 = (**(code **)(*plVar8 + 400))(plVar8);
    if ((uVar5 & 1) == 0) {
      param_3[1] = *(undefined8 *)(param_2 + 6);
      *param_3 = *(undefined8 *)(param_2 + 4);
    }
    else {
      FUN_00ac74d0(plVar8,param_2[2],&local_60);
      uVar5 = *(ulong *)(param_2 + 6);
      uVar12 = *(undefined8 *)(param_2 + 4);
      if (((char)param_2[10] != '\0') &&
         (uVar4 = (**(code **)(*param_1 + 0x748))(param_1,*param_2), (uVar4 & 1) != 0)) {
        uVar12 = CONCAT44((int)((ulong)uVar12 >> 0x20),-(float)uVar12);
      }
      lVar6 = 0x4dc;
      if ((param_6 & 1) == 0) {
        lVar6 = 0x4d8;
      }
      fVar9 = *(float *)((long)plVar8 + lVar6);
      if (*(char *)((long)param_2 + 0x2a) != '\0') {
        param_4[1] = plVar8[0x8b];
        *param_4 = plVar8[0x8a];
      }
      if (*(char *)((long)param_2 + 0x2b) != '\0') {
        fVar10 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
        uVar4 = (ulong)-(*(float *)((long)plVar8 + 0x454) *
                        (fVar10 / *(float *)PTR_FloatDegree180_027194f0));
        pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar4 >> 0x18 & 0xff) * 0x10);
        fVar10 = (float)((uint)uVar4 & 0xffffff) * DAT_01d4bc78;
        fVar11 = pfVar1[1] + pfVar1[3] * fVar10;
        fVar10 = *pfVar1 + pfVar1[2] * fVar10;
        fVar13 = (float)uVar12;
        uVar12 = CONCAT44((int)((ulong)uVar12 >> 0x20),fVar10 * fVar13 - fVar11 * (float)uVar5);
        uVar5 = (ulong)(uint)(fVar11 * fVar13 + fVar10 * (float)uVar5);
      }
      if (*(char *)((long)param_2 + 0x29) != '\0') {
        uVar12 = CONCAT44(fVar9 * (float)((ulong)uVar12 >> 0x20),fVar9 * (float)uVar12);
        uVar5 = (ulong)(uint)(fVar9 * (float)uVar5);
        param_5[1] = (ulong)(uint)fVar9;
        *param_5 = CONCAT44(fVar9,fVar9);
      }
      param_3[1] = CONCAT44((float)(uVar5 >> 0x20) + (float)((ulong)uStack_58 >> 0x20),
                            (float)uVar5 + (float)uStack_58);
      *param_3 = CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)local_60 >> 0x20),
                          (float)uVar12 + (float)local_60);
    }
    lVar6 = *plVar7;
    goto LAB_00a80760;
  }
  uVar5 = (ulong)*param_2;
  if (*param_2 == 0xff) {
    plVar7 = (long *)0x0;
    uVar5 = 0xff;
  }
  else {
    plVar7 = (long *)param_1[uVar5 + 0xa9];
    if (plVar7 != (long *)0x0) {
      (**(code **)(plVar7[9] + 0x10))();
      uVar5 = (ulong)*param_2;
    }
  }
  FUN_00a67970(param_1,uVar5,&local_60,&local_64);
  if (*(char *)((long)param_2 + 0x2a) != '\0') {
    param_4[1] = param_4[1];
    *param_4 = CONCAT44((float)local_64,(int)*param_4);
  }
  uVar5 = *(ulong *)(param_2 + 6);
  uVar12 = *(undefined8 *)(param_2 + 4);
  if ((char)param_2[10] == '\0') {
LAB_00a8058c:
    cVar3 = *(char *)((long)param_2 + 0x2b);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x748))(param_1,*param_2);
    if ((uVar4 & 1) != 0) {
      uVar12 = CONCAT44((int)((ulong)uVar12 >> 0x20),-(float)uVar12);
      goto LAB_00a8058c;
    }
    cVar3 = *(char *)((long)param_2 + 0x2b);
  }
  if (cVar3 != '\0') {
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
    uVar4 = (ulong)((fVar9 / *(float *)PTR_FloatDegree180_027194f0) * (float)-local_64);
    pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar4 >> 0x18 & 0xff) * 0x10);
    fVar9 = (float)((uint)uVar4 & 0xffffff) * DAT_01d4bc78;
    fVar10 = pfVar1[1] + pfVar1[3] * fVar9;
    fVar9 = *pfVar1 + pfVar1[2] * fVar9;
    fVar11 = (float)uVar12;
    uVar12 = CONCAT44((int)((ulong)uVar12 >> 0x20),fVar9 * fVar11 - fVar10 * (float)uVar5);
    uVar5 = (ulong)(uint)(fVar10 * fVar11 + fVar9 * (float)uVar5);
  }
  if (plVar7 == (long *)0x0) {
LAB_00a8071c:
    param_3[1] = CONCAT44((float)(uVar5 >> 0x20) + (float)((ulong)uStack_58 >> 0x20),
                          (float)uVar5 + (float)uStack_58);
    *param_3 = CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)local_60 >> 0x20),
                        (float)uVar12 + (float)local_60);
  }
  else {
    uVar4 = (**(code **)(*plVar7 + 400))(plVar7);
    if ((uVar4 & 1) == 0) {
LAB_00a806d4:
      uVar2 = param_2[2];
    }
    else {
      lVar6 = 0x4dc;
      if ((param_6 & 1) == 0) {
        lVar6 = 0x4d8;
      }
      if (*(char *)((long)param_2 + 0x29) == '\0') goto LAB_00a806d4;
      fVar9 = *(float *)((long)plVar7 + lVar6);
      uVar12 = CONCAT44(fVar9 * (float)((ulong)uVar12 >> 0x20),fVar9 * (float)uVar12);
      uVar5 = (ulong)(uint)(fVar9 * (float)uVar5);
      param_5[1] = (ulong)(uint)fVar9;
      *param_5 = CONCAT44(fVar9,fVar9);
      uVar2 = param_2[2];
    }
    if ((uVar2 != 0x32) || (plVar7 == (long *)0x0)) goto LAB_00a8071c;
    uVar4 = (**(code **)(*plVar7 + 400))(plVar7);
    if ((uVar4 & 1) != 0) {
      FUN_00ac74d0(plVar7,0xf,auStack_80);
      uVar12 = CONCAT44(*(undefined4 *)((ulong)auStack_80 | 4),(float)uVar12);
      goto LAB_00a8071c;
    }
    param_3[1] = CONCAT44((float)(uVar5 >> 0x20) + (float)((ulong)uStack_58 >> 0x20),
                          (float)uVar5 + (float)uStack_58);
    *param_3 = CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)local_60 >> 0x20),
                        (float)uVar12 + (float)local_60);
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
  plVar7 = plVar7 + 9;
  lVar6 = *plVar7;
LAB_00a80760:
  (**(code **)(lVar6 + 0x18))(plVar7);
  return;
}


