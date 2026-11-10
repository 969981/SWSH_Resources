/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb8720; name: FUN_00eb8720
 */


void FUN_00eb8720(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 extraout_s0;
  float fVar3;
  float fVar4;
  undefined4 extraout_var;
  float extraout_var_00;
  undefined8 extraout_var_01;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x1f8))();
  if ((uVar1 & 1) != 0) {
    FUN_00a92cd0(*(undefined4 *)(param_1 + 0xe4),0,0);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa8);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa0);
    *(undefined8 *)(param_1 + 0x298) = uVar2;
    *(undefined8 *)(param_1 + 0x2a8) = extraout_var_01;
    *(ulong *)(param_1 + 0x2a0) = CONCAT44(extraout_var,extraout_s0);
    FUN_00ac7ad0();
    fVar3 = (*(float *)PTR_FloatDegree180_027194f0 / *(float *)PTR_FloatPi_02715160) *
            *(float *)(param_1 + 0xe4) -
            (*(float *)PTR_FloatDegree180_027194f0 / *(float *)PTR_FloatPi_02715160) *
            extraout_var_00;
    fVar3 = (float)(&DAT_01cd5390)[DAT_01d4c284 < fVar3] - fVar3;
    fVar4 = fVar3 + DAT_01d4c6ec;
    if (fVar3 <= DAT_01d4c284) {
      fVar4 = fVar3;
    }
    (**(code **)(**(long **)(param_1 + 0x78) + 0x180))
              (fVar4,*(long **)(param_1 + 0x78),PTR_DAT_0271e880);
    (**(code **)(**(long **)(param_1 + 0x78) + 0x1b0))(*(long **)(param_1 + 0x78),PTR_DAT_0271e878);
    *(undefined4 *)(param_1 + 0x60) = 9;
    *(undefined1 *)(param_1 + 0x6a) = 0;
  }
  return;
}


