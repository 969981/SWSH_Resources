/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041c960; name: FUN_0041c960
 */


long FUN_0041c960(long *param_1,long param_2,long param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined4 local_68;
  int local_64;
  
  if (param_3 == 0) {
    lVar13 = 0;
    lVar12 = 0;
    local_64 = 0;
    if (param_4 != 0) goto LAB_0041caa4;
LAB_0041cb10:
    lVar12 = FUN_004195b0(param_1,lVar12 + lVar13,0);
    lVar9 = 0;
  }
  else {
    local_68 = *(undefined4 *)(param_2 + 0x2c);
    lVar12 = *(long *)(param_3 + 8);
    uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x78);
    FUN_0040e550(uVar10,0,*(byte *)(param_2 + 0x30) & 0x1f,&local_68,1,&local_64);
    lVar13 = (long)local_64;
    iVar11 = *(int *)(param_2 + 0x20);
    auVar4 = SEXT816((long)((ulong)*(uint *)PTR_DAT_02712b38 * (long)iVar11)) *
             SEXT816(0x20c49ba5e353f7cf);
    iVar5 = *(int *)(param_2 + 0x28) - ((int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f));
    if (iVar5 < -local_64) {
      dVar14 = ((double)(*(int *)(param_2 + 0x28) + local_64) * DAT_01cd51e8) /
               (double)*(uint *)PTR_DAT_02712b38;
      dVar15 = 0.5;
      if (dVar14 <= 0.0) {
        dVar15 = -0.5;
      }
      iVar11 = (int)(dVar15 + dVar14);
      iVar5 = -local_64;
    }
    if ((iVar11 == 0 && iVar5 == 0) && ((*(byte *)(param_2 + 0x30) >> 5 & 1) != 0)) {
      iVar5 = FUN_0040eab0(uVar10);
    }
    iVar6 = FUN_0040ead0(uVar10);
    FUN_0040b770(param_3,iVar11,*(undefined4 *)(param_2 + 0x24),iVar6 + iVar5);
    local_64 = 0;
    if (param_4 == 0) goto LAB_0041cb10;
LAB_0041caa4:
    local_64 = 0;
    plVar7 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,param_4,0);
    if (plVar7 == (long *)0x0) {
      *(undefined1 *)(param_1 + 0x18) = 0;
      goto LAB_0041cb10;
    }
    FUN_0040e880(plVar7,param_2 + 0x34,0,0,&local_68,&local_64);
    lVar9 = param_1[0xc];
    lVar9 = FUN_0040e250(plVar7,param_1,*(undefined8 *)(lVar9 + 0x30),lVar9 + 0x18,
                         *(undefined1 *)(lVar9 + 0x38));
    if (lVar9 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
    else {
      *(undefined4 *)(lVar9 + 0x98) = param_5;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar12 = FUN_004195b0(param_1,lVar12 + lVar13,lVar9);
    if (lVar9 != 0) {
      FUN_00408b50(lVar9);
      bVar8 = true;
      iVar11 = local_64;
      goto joined_r0x0041cbd0;
    }
  }
  bVar8 = false;
  iVar11 = local_64;
joined_r0x0041cbd0:
  local_64 = iVar11;
  if (lVar12 == 0) {
    lVar12 = (**(code **)(*param_1 + 0x100))(param_1);
  }
  else if (bVar8) {
    iVar2 = *(int *)(param_2 + 0x34);
    iVar5 = *(int *)(param_2 + 0x3c);
    bVar3 = *(byte *)(param_2 + 0x48);
    iVar6 = FUN_0040eaa0(*(undefined8 *)(lVar9 + 0x78));
    if ((bVar3 & 8) == 0) {
      iVar6 = 0;
    }
    iVar5 = iVar5 + iVar11;
    iVar1 = iVar5;
    if ((bVar3 & 8) == 0) {
      iVar1 = 0;
    }
    if (-1 < iVar5) {
      iVar1 = iVar5;
    }
    iVar11 = iVar11 - iVar6;
    if (0 < iVar2) {
      iVar11 = iVar1;
    }
    iVar11 = FUN_0040b6f0(lVar12,local_64,iVar11);
    FUN_0040b750(lVar12,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
                 *(int *)(param_2 + 0x3c) + iVar11);
  }
  return lVar12;
}


