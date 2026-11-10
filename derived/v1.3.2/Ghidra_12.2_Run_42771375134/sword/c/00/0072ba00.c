/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072ba00; name: FUN_0072ba00
 */


void FUN_0072ba00(long *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar5 = param_1[1] - *param_1 >> 4;
  uVar11 = 0x84210842108421;
  uVar1 = lVar5 * -0x1084210842108421 + 1;
  if (0x84210842108421 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar6 * -0x1084210842108421) < 0x42108421084210) {
    uVar7 = lVar6 * -0x2108421084210842;
    uVar11 = uVar1;
    if (uVar1 <= uVar7) {
      uVar11 = uVar7;
    }
    if (uVar11 == 0) {
      lVar6 = 0;
      goto LAB_0072bae4;
    }
  }
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 * 0x1f0,0x10);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_0072bae4:
  puVar2 = PTR_DAT_02710860;
  lVar8 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0072bc44:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar8;
  lVar9 = lVar6 + lVar5 * 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_006fc0c0(lVar9,param_2,*param_3,*param_4,param_5);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar5 = *param_1;
  lVar3 = param_1[1];
  lVar8 = lVar9;
  if (lVar3 == lVar5) {
    lVar3 = lVar5;
  }
  else {
    do {
      lVar10 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0072bc44;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
      lVar3 = lVar3 + -0x1f0;
      lVar8 = lVar8 + -0x1f0;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_0071c9a0(lVar8,lVar3);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (lVar5 != lVar3);
    lVar5 = param_1[1];
    lVar3 = *param_1;
  }
  lVar4 = param_1[2];
  param_1[2] = lVar6 + uVar11 * 0x1f0;
  *param_1 = lVar8;
  param_1[1] = lVar9 + 0x1f0;
  while (lVar5 != lVar3) {
    lVar5 = lVar5 + -0x1f0;
    FUN_00784490(lVar5);
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0072bc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar3,lVar4 - lVar3,0x10);
  return;
}


