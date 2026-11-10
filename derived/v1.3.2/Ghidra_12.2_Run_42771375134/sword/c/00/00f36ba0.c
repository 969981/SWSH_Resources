/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f36ba0; name: FUN_00f36ba0
 */


void FUN_00f36ba0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  undefined4 extraout_s0;
  undefined8 extraout_var;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  
  plVar6 = *(long **)(param_1 + 0x70);
  *(float *)(param_1 + 0xcc) =
       *(float *)(param_1 + 0xcc) +
       (*(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0xcc)) * *(float *)(param_1 + 0xec);
  (**(code **)(*plVar6 + 0x180))(plVar6,PTR_DAT_0271e8b0);
  puVar2 = PTR_PTR_02718e90;
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xd8));
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 200));
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xd4));
  fVar7 = fVar7 / fVar8;
  fVar10 = fVar10 * DAT_01d4c5ac;
  fVar8 = (float)(**(code **)(PTR_PTR_02718e90 + 0x10))(fVar7);
  fVar9 = *(float *)(param_1 + 0xd0);
  FUN_007101c0(plVar6 + 0x14);
  lVar5 = 0x40;
  if (*(char *)(param_1 + 0xc4) != '\0') {
    lVar5 = 0x38;
  }
  *(undefined8 *)(param_1 + 0xb8) = extraout_var;
  *(ulong *)(param_1 + 0xb0) =
       CONCAT44(*(float *)(param_1 + 0x84) + fVar9 * fVar10 * fVar8,extraout_s0);
  fVar8 = (float)(**(code **)(puVar2 + lVar5))(fVar7);
  *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0xa0) * (1.0 - fVar8);
  if ((*(char *)(param_1 + 0xc4) == '\0') && (*(uint *)(param_1 + 200) < *(uint *)(param_1 + 0xf4)))
  {
    uVar3 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
    pfVar4 = (float *)FUN_01020340();
    fVar8 = DAT_01d4bec4;
    if ((ABS(*pfVar4) < DAT_01d4bec4) &&
       (lVar5 = FUN_01020340(uVar3), ABS(*(float *)(lVar5 + 4)) < fVar8)) {
      uVar1 = 0;
      if (*(uint *)(param_1 + 0xd8) != 0) {
        uVar1 = *(uint *)(param_1 + 0xd4) / *(uint *)(param_1 + 0xd8);
      }
      *(undefined1 *)(param_1 + 0xc4) = 1;
      *(uint *)(param_1 + 0xd4) = uVar1;
      *(undefined4 *)(param_1 + 0xd8) = 1;
      local_70 = 0x44796140f49488ec;
      FUN_00dc0720(*(undefined8 *)(param_1 + 0x70),&local_70);
      local_70 = 0xecc8f092cb539131;
      local_68 = "Play_PL_Foley_Bicycle_Recover";
      local_60 = 0x1d;
      local_58 = 0;
      FUN_00db42e0(plVar6,&local_70,1);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
    }
  }
  if (DAT_01d4be10 < fVar7) {
    (**(code **)(*plVar6 + 0x180))
              (((fVar7 + DAT_01d4c6e4) / DAT_01d4bf1c + 1.0) * *(float *)(param_1 + 0xcc),plVar6,
               PTR_DAT_0271e8b0);
  }
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  return;
}


