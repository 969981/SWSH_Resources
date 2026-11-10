/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac74d0; name: FUN_00ac74d0
 */


void FUN_00ac74d0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 in_q3 [16];
  undefined1 local_70 [48];
  undefined8 local_40;
  
  uVar5 = in_q3._8_8_;
  fVar12 = in_q3._4_4_;
  uVar11 = in_q3._0_4_;
  iVar3 = (int)param_2;
  uVar1 = FUN_00acb970(param_1,param_2,local_70);
  if ((uVar1 & 1) == 0) {
    uVar2 = 4;
    if (2 < iVar3 - 7U) {
      uVar2 = 5;
    }
    uVar1 = FUN_00acb970(param_1,uVar2,local_70);
    if ((uVar1 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x3d0);
      uVar7 = *(undefined8 *)(param_1 + 0x3e0);
      uVar8 = *(undefined8 *)(param_1 + 0x3f0);
      uVar9 = *(undefined8 *)(param_1 + 0x430);
      uVar10 = *(undefined8 *)(param_1 + 0x440);
      param_3[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3d8) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_1 + 1000) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_1 + 0x3f8) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_1 + 0x438) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_1 + 0x448) >> 0x20),
                            (float)*(undefined8 *)(param_1 + 0x3d8) +
                            (float)*(undefined8 *)(param_1 + 1000) +
                            (float)*(undefined8 *)(param_1 + 0x3f8) +
                            (float)*(undefined8 *)(param_1 + 0x438) +
                            (float)*(undefined8 *)(param_1 + 0x448));
      *param_3 = CONCAT44((float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar7 >> 0x20) +
                          (float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar9 >> 0x20) +
                          (float)((ulong)uVar10 >> 0x20),
                          (float)uVar5 + (float)uVar7 + (float)uVar8 + (float)uVar9 + (float)uVar10)
      ;
      return;
    }
    iVar3 = 1;
  }
  FUN_00ac6d40(local_40,param_1);
  param_3[1] = uVar5;
  *param_3 = CONCAT44(fVar12,uVar11);
  if ((iVar3 == 0) && (fVar4 = *(float *)(param_1 + 0x3f4), fVar4 < 0.0)) {
    fVar6 = *(float *)(param_1 + 0x404);
    param_3[1] = uVar5;
    *param_3 = CONCAT44(fVar12 - fVar4 * fVar6,uVar11);
  }
  return;
}


