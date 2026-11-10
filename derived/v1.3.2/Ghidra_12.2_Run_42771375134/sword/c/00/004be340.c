/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004be340; name: FUN_004be340
 */


void FUN_004be340(float param_1,undefined8 param_2,ulong *param_3,ulong param_4,int param_5,
                 int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar4 = *param_3;
  *param_3 = param_4;
  FUN_004bd7e0(param_3,param_5);
  fVar7 = DAT_01d4c2ec;
  fVar6 = DAT_01d4c158;
  fVar5 = *(float *)(param_3 + 2);
  if ((param_3[8] & 1) == 0) {
    *(float *)(param_3 + 1) = fVar5;
    if (param_7 == 2) {
      param_1 = *(float *)((long)param_3 + 0xc) + param_1;
    }
    *(float *)((long)param_3 + 0xc) = param_1;
    *(float *)((long)param_3 + 0x14) = param_1;
  }
  else {
    if (DAT_01d4c2ec <= fVar5 * DAT_01d4c158) {
      uVar3 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * fVar5);
      fVar5 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      fVar5 = (DAT_01d4c23c + fVar5 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar5)) *
              (float)(uVar3 & 0xff800000);
      *(float *)(param_3 + 1) = fVar5;
    }
    else {
      fVar5 = 0.0;
      *(undefined4 *)(param_3 + 1) = 0;
    }
    if (param_7 == 2) {
      if (fVar7 <= param_1 * fVar6) {
        uVar3 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * param_1);
        fVar6 = (float)(uVar3 & 0x7fffff | 0x3f800000);
        param_1 = (DAT_01d4c23c + fVar6 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar6)) *
                  (float)(uVar3 & 0xff800000);
      }
      else {
        param_1 = 0.0;
      }
      param_1 = *(float *)((long)param_3 + 0xc) * param_1;
      fVar6 = (float)((uint)param_1 & 0x7fffff | 0x3f800000);
      fVar7 = (float)((uint)param_1 >> 0x17 & 0xff) + DAT_01d4bf90;
      *(float *)((long)param_3 + 0xc) = param_1;
      fVar6 = (fVar6 + -1.0) / (fVar6 + 1.0);
      *(float *)((long)param_3 + 0x14) =
           (fVar6 + fVar6 + (fVar6 + fVar6) * fVar6 * fVar6 * DAT_01d4bd24 + DAT_01d4c4dc * fVar7) *
           DAT_01d4c2e8;
    }
    else {
      *(float *)((long)param_3 + 0x14) = param_1;
      if (fVar7 <= param_1 * fVar6) {
        uVar3 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * param_1);
        fVar6 = (float)(uVar3 & 0x7fffff | 0x3f800000);
        param_1 = (DAT_01d4c23c + fVar6 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar6)) *
                  (float)(uVar3 & 0xff800000);
        *(float *)((long)param_3 + 0xc) = param_1;
      }
      else {
        param_1 = 0.0;
        *(undefined4 *)((long)param_3 + 0xc) = 0;
      }
    }
  }
  if ((param_1 <= fVar5 && param_6 != 3) && param_6 != 5) {
    param_6 = 8 - param_6;
  }
  *(int *)(param_3 + 7) = param_6;
  iVar2 = *(int *)PTR_DAT_02712e58;
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = (param_5 + iVar2 + -1) / iVar2;
  }
  iVar2 = *(int *)(*(long *)PTR_DAT_02712de0 + 0x78);
  if (((param_4 & 0xf000000) != 0) && (uVar4 == *param_3)) {
    uVar1 = *(int *)((long)param_3 + 0x1c) + ((int)param_3[3] - iVar2);
    if (uVar1 <= uVar3) {
      uVar3 = uVar1;
    }
  }
  *(int *)(param_3 + 3) = iVar2;
  *(uint *)((long)param_3 + 0x1c) = uVar3;
  *(int *)((long)param_3 + 0x24) = iVar2;
  return;
}


