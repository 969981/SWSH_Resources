/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e72950; name: FUN_00e72950
 */


void FUN_00e72950(long param_1)

{
  bool bVar1;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 extraout_s0;
  float fVar7;
  undefined4 extraout_var;
  float extraout_var_00;
  undefined8 extraout_var_01;
  float fVar8;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x1f8))();
  uVar4 = FUN_015772a0(*(long *)(param_1 + 0x78) + 0x50);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_00dbf8c0(*(undefined8 *)(param_1 + 0x78),PTR_DAT_0271fdd8);
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
  FUN_00a92cd0(*(undefined4 *)(param_1 + 0xe8),0,0);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa8);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa0);
  *(undefined8 *)(param_1 + 0x2a8) = uVar6;
  *(undefined8 *)(param_1 + 0x2b8) = extraout_var_01;
  *(ulong *)(param_1 + 0x2b0) = CONCAT44(extraout_var,extraout_s0);
  FUN_00ac7ad0();
  fVar2 = DAT_01d4c284;
  fVar8 = (*(float *)PTR_FloatDegree180_027194f0 / *(float *)PTR_FloatPi_02715160) *
          *(float *)(param_1 + 0xe8) -
          (*(float *)PTR_FloatDegree180_027194f0 / *(float *)PTR_FloatPi_02715160) * extraout_var_00
  ;
  bVar1 = DAT_01d4c284 < fVar8;
  uVar4 = FUN_015772a0(*(long *)(param_1 + 0x78) + 0x50);
  plVar5 = *(long **)(param_1 + 0x78);
  if ((uVar4 & 1) == 0) {
    fVar8 = (float)(&DAT_01cd5390)[bVar1] - fVar8;
    fVar7 = fVar8 + DAT_01d4c6ec;
    if (fVar8 <= fVar2) {
      fVar7 = fVar8;
    }
    (**(code **)(*plVar5 + 0x180))(fVar7,plVar5,PTR_DAT_0271e880);
    (**(code **)(**(long **)(param_1 + 0x78) + 0x1b0))(*(long **)(param_1 + 0x78),PTR_DAT_0271e878);
  }
  else {
    (**(code **)(*plVar5 + 0x180))(0x3f000000,plVar5,PTR_DAT_0271e870);
    (**(code **)(**(long **)(param_1 + 0x78) + 400))(*(long **)(param_1 + 0x78),PTR_DAT_0271e898,0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0xb;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return;
}


