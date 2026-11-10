/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e17f0; name: FUN_012e17f0
 */


void FUN_012e17f0(long *param_1,undefined8 param_2)

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
  ulong uVar10;
  long lVar11;
  
  lVar5 = param_1[1] - *param_1 >> 8;
  uVar10 = 0x55555555555555;
  uVar1 = lVar5 * -0x5555555555555555 + 1;
  if (0x55555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 8;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x2aaaaaaaaaaaaa) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar10 = uVar1;
    if (uVar1 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
      goto LAB_012e18b0;
    }
  }
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 * 0x300,0x10);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_012e18b0:
  puVar2 = PTR_DAT_02710860;
  lVar9 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_012e19fc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
  lVar8 = lVar6 + lVar5 * 0x100;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_012e1560(lVar8,param_2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar5 = *param_1;
  lVar3 = param_1[1];
  lVar9 = lVar8;
  if (lVar3 == lVar5) {
    lVar3 = lVar5;
  }
  else {
    do {
      lVar11 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_012e19fc;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
      lVar3 = lVar3 + -0x300;
      lVar9 = lVar9 + -0x300;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_012e1560(lVar9,lVar3);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (lVar5 != lVar3);
    lVar5 = param_1[1];
    lVar3 = *param_1;
  }
  lVar4 = param_1[2];
  *param_1 = lVar9;
  param_1[1] = lVar8 + 0x300;
  param_1[2] = lVar6 + uVar10 * 0x300;
  while (lVar5 != lVar3) {
    lVar5 = lVar5 + -0x300;
    FUN_012e0180(lVar5);
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x012e19dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar3,lVar4 - lVar3,0x10);
  return;
}


