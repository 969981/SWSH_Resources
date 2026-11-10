/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00799a50; name: FUN_00799a50
 */


void FUN_00799a50(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  
  lVar14 = *(long *)(param_1 + 0x68);
  if (((((*(long *)(lVar14 + 0x278) != 0) &&
        (lVar13 = *(long *)(*(long *)(lVar14 + 0x278) + 0x60), lVar13 != 0)) &&
       (uVar10 = FUN_00731b60(lVar13), (uVar10 & 1) != 0)) &&
      ((lVar13 = FUN_00706c40(lVar13 + -0x50,&local_b8), puVar6 = PTR_DAT_02715500, lVar13 != 0 &&
       (lVar13 = *(long *)(lVar13 + 0x78), lVar13 != 0)))) && (*(char *)(lVar13 + 0x2a0) != '\0')) {
    uVar17 = *(undefined8 *)(lVar13 + 0x2c8);
    uVar16 = *(undefined8 *)(lVar13 + 0x2c0);
    fVar18 = *(float *)(lVar13 + 0x2d0);
    iVar4 = *(int *)(lVar13 + 0x2a4);
    fVar1 = *(float *)(lVar13 + 0x2a8);
    fVar2 = *(float *)(lVar13 + 0x2ac);
    fVar3 = *(float *)(lVar13 + 0x2b0);
    lVar13 = *(long *)(param_1 + 0x270);
    if ((lVar13 != 0) && (iVar4 == 3 && *(long *)(param_1 + 0x278) != 0)) {
      lVar15 = *(long *)(param_1 + 0x60);
      iVar5 = *(int *)PTR_DAT_02715500;
      FUN_0199de60(*(long *)(lVar15 + 0x58) + (long)iVar5 * 0x170,0x23);
      FUN_0199de90(*(long *)(lVar15 + 0x58) + (long)*(int *)puVar6 * 0x170,0x23);
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_0199c2d0(&local_b8);
      uVar7 = FUN_006f82b0(*(undefined8 *)(param_1 + 0x278));
      local_b8 = CONCAT44(uVar7,(undefined4)local_b8);
      uVar7 = FUN_006f8330(*(undefined8 *)(param_1 + 0x278));
      local_b0 = CONCAT44(local_b0._4_4_,uVar7);
      uVar7 = FUN_006f82b0(*(undefined8 *)(param_1 + 0x278));
      local_a0 = CONCAT44(local_a0._4_4_,uVar7);
      uVar7 = FUN_006f8330(*(undefined8 *)(param_1 + 0x278));
      local_a0 = CONCAT44(uVar7,(undefined4)local_a0);
      iVar8 = FUN_006f82b0(*(undefined8 *)(param_1 + 0x278));
      iVar9 = FUN_006f8330(*(undefined8 *)(param_1 + 0x278));
      uStack_90 = CONCAT44(iVar9 * iVar8,(undefined4)uStack_90);
      uVar11 = FUN_006fe990(*(undefined8 *)(param_1 + 0x278));
      FUN_0199d570(*(long *)(lVar15 + 0x58) + (long)*(int *)puVar6 * 0x170,uVar11,
                   lVar13 + (long)iVar5 * 0x70 + 0x58,&local_b8);
      FUN_0199de60(*(long *)(lVar15 + 0x58) + (long)*(int *)puVar6 * 0x170,0x23);
      FUN_0199de90(*(long *)(lVar15 + 0x58) + (long)*(int *)puVar6 * 0x170,0x23);
    }
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x268) + 0xe0);
    local_88 = 0x13e9325efccbafab;
    local_80 = "fogConstant";
    local_78 = 0xb;
    FUN_006cf0a0(&local_b8,&local_88);
    lVar13 = FUN_00734c00(uVar11,(long)iVar4,&local_b8);
    if (lVar13 == 0) {
      pfVar12 = (float *)0x0;
      lVar13 = 0;
    }
    else {
      iVar5 = *(int *)PTR_DAT_02715500;
      *(int *)(lVar13 + 0x138) = iVar5;
      FUN_006f6a10(*(undefined8 *)PTR_DAT_02710460,lVar13);
      lVar13 = lVar13 + (long)iVar5 * 0x70 + 0x58;
      pfVar12 = (float *)thunk_FUN_0199c7e0(lVar13);
    }
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    if (pfVar12 != (float *)0x0) {
      *pfVar12 = fVar18 * (float)uVar16;
      pfVar12[1] = fVar18 * (float)((ulong)uVar16 >> 0x20);
      pfVar12[2] = fVar18 * (float)uVar17;
      pfVar12[3] = fVar3;
      if (iVar4 - 1U < 2) {
        pfVar12[3] = fVar3 * DAT_01d4c4d4;
      }
      pfVar12[4] = fVar1;
      pfVar12[5] = fVar2;
      pfVar12[6] = *(float *)(*(long *)(lVar14 + 0x270) + 200);
      pfVar12[7] = *(float *)(*(long *)(lVar14 + 0x270) + 0xcc);
    }
    if (lVar13 != 0) {
      thunk_FUN_0199c800(lVar13);
    }
    FUN_00708b10(param_1);
  }
  return;
}


