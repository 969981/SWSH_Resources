/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b3b0; name: FUN_0040b3b0
 */


undefined8 FUN_0040b3b0(float param_1,long param_2,int param_3,int *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    param_4[8] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x78);
    iVar2 = FUN_0040eaa0(uVar4);
    puVar1 = PTR_DAT_02712b38;
    dVar9 = DAT_01cd51e8;
    dVar6 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
    dVar6 = ((double)iVar2 * DAT_01cd51e8) / dVar6;
    dVar7 = 0.5;
    if (dVar6 <= 0.0) {
      dVar7 = -0.5;
    }
    param_4[1] = (int)(dVar7 + dVar6);
    iVar2 = FUN_0040ead0(uVar4);
    dVar6 = (double)NEON_ucvtf((ulong)*(uint *)puVar1);
    dVar6 = ((double)iVar2 * dVar9) / dVar6;
    dVar7 = 0.5;
    if (dVar6 <= 0.0) {
      dVar7 = -0.5;
    }
    param_4[2] = (int)(dVar7 + dVar6);
    iVar2 = FUN_0040eab0(uVar4);
    dVar7 = (double)NEON_ucvtf((ulong)*(uint *)puVar1);
    dVar6 = ((double)iVar2 * dVar9) / dVar7;
    dVar11 = 0.5;
    if (dVar6 <= 0.0) {
      dVar11 = -0.5;
    }
    dVar7 = ((double)param_3 * dVar9) / dVar7;
    dVar8 = 0.5;
    if (dVar7 <= 0.0) {
      dVar8 = -0.5;
    }
    param_4[3] = (int)(dVar11 + dVar6);
    *param_4 = (int)(dVar8 + dVar7);
    param_3 = *(int *)(*(long *)(param_2 + 0x18) + 0x90) - param_3;
    if (param_3 < 1) {
      iVar2 = 0;
    }
    else {
      dVar6 = (double)NEON_ucvtf((ulong)*(uint *)puVar1);
      dVar6 = ((double)param_3 * dVar9) / dVar6;
      dVar9 = 0.5;
      if (dVar6 <= 0.0) {
        dVar9 = -0.5;
      }
      iVar2 = (int)(dVar9 + dVar6);
    }
    param_4[4] = iVar2;
    lVar3 = FUN_0040a140(uVar4);
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)puVar1);
    fVar5 = 1.0 / (fVar5 * param_1);
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 8));
    param_4[6] = (int)(fVar5 * fVar10);
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 4));
    param_4[5] = (int)(fVar5 * fVar10);
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0xc));
    param_4[7] = (int)(fVar5 * fVar10);
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x10));
    param_4[8] = (int)(fVar5 * fVar10);
  }
  return 1;
}


