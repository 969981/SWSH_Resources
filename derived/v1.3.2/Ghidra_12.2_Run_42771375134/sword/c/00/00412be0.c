/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00412be0; name: FUN_00412be0
 */


void FUN_00412be0(long *param_1,int param_2,undefined8 *param_3,int *param_4,int *param_5,
                 long param_6,int param_7,long param_8,byte param_9,undefined8 param_10)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  long *plVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  
  lVar7 = FUN_004188e0(param_6,0);
  lVar11 = param_1[0x12];
  if ((*(byte *)(lVar11 + 0x50) & 6) == 4) {
    uVar5 = (int)param_8 - param_2;
    uVar6 = param_2 - *(int *)(lVar11 + 0x38);
    if (uVar5 <= uVar6) {
      uVar6 = uVar5;
    }
    dVar13 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
    dVar13 = ((double)(int)uVar6 * DAT_01cd51e8) / dVar13;
    dVar12 = 0.5;
    if (dVar13 <= 0.0) {
      dVar12 = -0.5;
    }
    local_70 = (int)(dVar12 + dVar13);
    local_6c = *(undefined4 *)(lVar11 + 0x44);
    uStack_68 = 0;
    FUN_004091c0(*(undefined8 *)(lVar11 + 8),&local_70);
    bVar9 = *(byte *)(lVar11 + 0x50);
  }
  else {
    bVar9 = *(byte *)(lVar11 + 0x50) & 0xfd;
    *(byte *)(lVar11 + 0x50) = bVar9;
  }
  *(byte *)(lVar11 + 0x50) = bVar9 & 0xfb;
  *(undefined1 *)(lVar11 + 0x18) = 0;
  iVar2 = *param_4;
  if ((lVar7 == 0) || (iVar2 < 1)) {
    if (((*(byte *)(param_4 + 4) >> 5 & 1) == 0) ||
       (uVar8 = FUN_00418cd0(param_6,param_8), (uVar8 & 1) == 0)) {
      bVar1 = true;
      lVar7 = param_8;
    }
    else {
      uVar8 = FUN_0040eab0(lVar7);
      bVar1 = true;
      lVar7 = param_8 + (uVar8 & 0xffffffff);
    }
  }
  else {
    auVar4 = SEXT816((long)((ulong)*(uint *)PTR_DAT_02712b38 * (long)iVar2)) *
             SEXT816(0x20c49ba5e353f7cf);
    bVar1 = param_4[2] < 1;
    lVar7 = param_8 - (((int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f)) - param_4[2]);
  }
  iVar3 = param_4[1];
  *(long *)(lVar11 + 0x38) = lVar7;
  *(int *)(lVar11 + 0x40) = iVar2;
  *(int *)(lVar11 + 0x44) = iVar3;
  *(byte *)(lVar11 + 0x50) = *(byte *)(lVar11 + 0x50) | 6;
  if ((bVar1) && ((param_9 & 1) == 0)) {
    if (*(char *)(lVar11 + 0x18) == '\0') {
      *(long *)(lVar11 + 0x10) = param_8;
      *(undefined1 *)(lVar11 + 0x18) = 1;
    }
    else if (param_8 < *(long *)(lVar11 + 0x10)) {
      *(long *)(lVar11 + 0x10) = param_8;
    }
  }
  FUN_0040b7f0(*(undefined8 *)(param_6 + 0x108),*(byte *)(param_4 + 4) >> 5 & 1);
  *(long *)(param_3[1] + 0x68) = param_8;
  param_3[4] = param_8 - param_7;
  *(int *)(param_3 + 6) = param_5[2];
  param_3[5] = *(undefined8 *)param_5;
  lVar7 = (**(code **)(*(long *)param_3[1] + 0xb0))();
  if (lVar7 == 0) {
    *(undefined4 *)(param_3 + 5) = 0;
  }
  if (0 < *param_5) {
    *(int *)(param_3 + 6) = *(int *)(param_3 + 6) + param_7;
  }
  *(byte *)(param_3 + 10) = *(byte *)(param_3 + 10) | 1;
  while (FUN_00418dc0(param_6,param_10,param_8), *(char *)(param_6 + 0x128) == '\0') {
    (**(code **)(*param_1 + 0x98))(param_1,param_6,1);
  }
  *param_3 = 0;
  plVar10 = param_1 + 0x13;
  if (*plVar10 != 0) {
    plVar10 = (long *)param_1[0x12];
  }
  *plVar10 = (long)param_3;
  param_1[0x12] = (long)param_3;
  return;
}


