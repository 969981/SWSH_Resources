/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00740ea0; name: FUN_00740ea0
 */


void FUN_00740ea0(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_02710860;
  lVar7 = param_1[1];
  if (param_2 <= (ulong)((param_1[2] - lVar7 >> 4) * -0x1084210842108421)) {
    while( true ) {
      lVar8 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar5 + 0x80)) break;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      FUN_006fbc40(lVar7);
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      lVar7 = param_1[1] + 0x1f0;
      param_2 = param_2 - 1;
      param_1[1] = lVar7;
      if (param_2 == 0) {
        return;
      }
    }
LAB_00741134:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = lVar7 - *param_1 >> 4;
  uVar9 = 0x84210842108421;
  uVar1 = lVar7 * -0x1084210842108421 + param_2;
  if (0x84210842108421 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar5 * -0x1084210842108421) < 0x42108421084210) {
    uVar6 = lVar5 * -0x2108421084210842;
    uVar9 = uVar1;
    if (uVar1 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 == 0) {
      lVar5 = 0;
      goto LAB_00740fe8;
    }
  }
  lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 * 0x1f0,0x10);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00740fe8:
  puVar2 = PTR_DAT_02710860;
  lVar8 = lVar5 + lVar7 * 0x10;
  lVar7 = lVar8;
  do {
    lVar10 = param_1[3];
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00741134;
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_006fbc40(lVar7);
    lVar7 = lVar7 + 0x1f0;
    param_2 = param_2 - 1;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  } while (param_2 != 0);
  lVar3 = *param_1;
  lVar10 = param_1[1];
  if (lVar10 == lVar3) {
    lVar10 = lVar3;
  }
  else {
    do {
      lVar11 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00741134;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
      lVar10 = lVar10 + -0x1f0;
      lVar8 = lVar8 + -0x1f0;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_0071c9a0(lVar8,lVar10);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (lVar3 != lVar10);
    lVar3 = param_1[1];
    lVar10 = *param_1;
  }
  *param_1 = lVar8;
  param_1[1] = lVar7;
  lVar7 = param_1[2];
  param_1[2] = lVar5 + uVar9 * 0x1f0;
  while (lVar3 != lVar10) {
    lVar3 = lVar3 + -0x1f0;
    FUN_00784490(lVar3);
  }
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00741114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar10,lVar7 - lVar10,0x10);
  return;
}


