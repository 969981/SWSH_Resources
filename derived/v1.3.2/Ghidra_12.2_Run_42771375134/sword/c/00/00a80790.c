/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a80790; name: FUN_00a80790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a80790(long *param_1,undefined4 *param_2,undefined8 *param_3,long *param_4,
                 undefined8 *param_5,uint param_6)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  long *local_80 [3];
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_48;
  
  param_3[1] = 0;
  *param_3 = 0;
  param_4[1] = 0;
  *param_4 = 0;
  uVar10 = _DAT_01d4a130;
  param_5[1] = _UNK_01d4a138;
  *param_5 = uVar10;
  if ((param_2[2] != 0x32) && (param_2[2] != 0x10)) {
    FUN_00a80bf0(local_80,param_1,*param_2);
    if (local_80[0] == (long *)0x0) {
      param_3[1] = *(undefined8 *)(param_2 + 6);
      *param_3 = *(undefined8 *)(param_2 + 4);
      return;
    }
    uVar6 = (**(code **)(*local_80[0] + 400))();
    if ((uVar6 & 1) == 0) {
      param_3[1] = *(undefined8 *)(param_2 + 6);
      *param_3 = *(undefined8 *)(param_2 + 4);
      if (local_80[0] == (long *)0x0) {
        return;
      }
    }
    else {
      FUN_00ac74d0(local_80[0],param_2[2],&local_60);
      uVar6 = *(ulong *)(param_2 + 6);
      uVar10 = *(undefined8 *)(param_2 + 4);
      if ((*(char *)(param_2 + 10) != '\0') &&
         (uVar5 = (**(code **)(*param_1 + 0x748))(param_1,*param_2), (uVar5 & 1) != 0)) {
        uVar10 = CONCAT44((int)((ulong)uVar10 >> 0x20),-(float)uVar10);
      }
      lVar2 = 0x4cc;
      if ((param_6 & 1) == 0) {
        lVar2 = 0x4c8;
      }
      fVar7 = *(float *)((long)local_80[0] + lVar2);
      if (*(char *)((long)param_2 + 0x2a) != '\0') {
        param_4[1] = local_80[0][0x8b];
        *param_4 = local_80[0][0x8a];
      }
      if (*(char *)((long)param_2 + 0x2b) != '\0') {
        fVar8 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
        uVar5 = (ulong)-(*(float *)((long)local_80[0] + 0x454) *
                        (fVar8 / *(float *)PTR_FloatDegree180_027194f0));
        pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar5 >> 0x18 & 0xff) * 0x10);
        fVar8 = (float)((uint)uVar5 & 0xffffff) * DAT_01d4bc78;
        fVar9 = pfVar1[1] + pfVar1[3] * fVar8;
        fVar8 = *pfVar1 + pfVar1[2] * fVar8;
        fVar11 = (float)uVar10;
        uVar10 = CONCAT44((int)((ulong)uVar10 >> 0x20),fVar8 * fVar11 - fVar9 * (float)uVar6);
        uVar6 = (ulong)(uint)(fVar9 * fVar11 + fVar8 * (float)uVar6);
      }
      if (*(char *)((long)param_2 + 0x29) != '\0') {
        uVar10 = CONCAT44(fVar7 * (float)((ulong)uVar10 >> 0x20),fVar7 * (float)uVar10);
        uVar6 = (ulong)(uint)(fVar7 * (float)uVar6);
        param_5[1] = (ulong)(uint)fVar7;
        *param_5 = CONCAT44(fVar7,fVar7);
      }
      param_3[1] = CONCAT44((float)(uVar6 >> 0x20) + (float)((ulong)uStack_58 >> 0x20),
                            (float)uVar6 + (float)uStack_58);
      *param_3 = CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)local_60 >> 0x20),
                          (float)uVar10 + (float)local_60);
    }
    (**(code **)(local_80[0][9] + 0x18))();
    return;
  }
  FUN_00a80bf0(&local_48,param_1,*param_2);
  FUN_00a67970(param_1,*param_2,&local_60,&local_64);
  if (*(char *)((long)param_2 + 0x2a) != '\0') {
    param_4[1] = param_4[1];
    *param_4 = CONCAT44((float)local_64,(int)*param_4);
  }
  uVar6 = *(ulong *)(param_2 + 6);
  uVar10 = *(undefined8 *)(param_2 + 4);
  if (*(char *)(param_2 + 10) == '\0') {
LAB_00a80860:
    cVar4 = *(char *)((long)param_2 + 0x2b);
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x748))(param_1,*param_2);
    if ((uVar5 & 1) != 0) {
      uVar10 = CONCAT44((int)((ulong)uVar10 >> 0x20),-(float)uVar10);
      goto LAB_00a80860;
    }
    cVar4 = *(char *)((long)param_2 + 0x2b);
  }
  if (cVar4 != '\0') {
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
    uVar5 = (ulong)((fVar7 / *(float *)PTR_FloatDegree180_027194f0) * (float)-local_64);
    pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar5 >> 0x18 & 0xff) * 0x10);
    fVar7 = (float)((uint)uVar5 & 0xffffff) * DAT_01d4bc78;
    fVar8 = pfVar1[1] + pfVar1[3] * fVar7;
    fVar7 = *pfVar1 + pfVar1[2] * fVar7;
    fVar9 = (float)uVar10;
    uVar10 = CONCAT44((int)((ulong)uVar10 >> 0x20),fVar7 * fVar9 - fVar8 * (float)uVar6);
    uVar6 = (ulong)(uint)(fVar8 * fVar9 + fVar7 * (float)uVar6);
  }
  if (local_48 != (long *)0x0) {
    uVar5 = (**(code **)(*local_48 + 400))();
    if ((uVar5 & 1) == 0) {
      iVar3 = param_2[2];
      goto joined_r0x00a8097c;
    }
    lVar2 = 0x4cc;
    if ((param_6 & 1) == 0) {
      lVar2 = 0x4c8;
    }
    if (*(char *)((long)param_2 + 0x29) != '\0') {
      fVar7 = *(float *)((long)local_48 + lVar2);
      uVar10 = CONCAT44(fVar7 * (float)((ulong)uVar10 >> 0x20),fVar7 * (float)uVar10);
      uVar6 = (ulong)(uint)(fVar7 * (float)uVar6);
      param_5[1] = (ulong)(uint)fVar7;
      *param_5 = CONCAT44(fVar7,fVar7);
    }
  }
  iVar3 = param_2[2];
joined_r0x00a8097c:
  if (((iVar3 == 0x32) && (local_48 != (long *)0x0)) &&
     (uVar5 = (**(code **)(*local_48 + 400))(), (uVar5 & 1) != 0)) {
    FUN_00ac74d0(local_48,0xf,local_80);
    uVar10 = CONCAT44(*(undefined4 *)((ulong)local_80 | 4),(int)uVar10);
  }
  param_3[1] = CONCAT44((float)(uVar6 >> 0x20) + (float)((ulong)uStack_58 >> 0x20),
                        (float)uVar6 + (float)uStack_58);
  *param_3 = CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)local_60 >> 0x20),
                      (float)uVar10 + (float)local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(local_48[9] + 0x18))();
  }
  return;
}


