/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b3370; name: FUN_006b3370
 */


void FUN_006b3370(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar8 = param_1[1] - *param_1 >> 4;
  uVar12 = 0x555555555555555;
  uVar1 = lVar8 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = param_1[2] - *param_1 >> 4;
  plVar2 = param_1 + 3;
  if ((ulong)(lVar10 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar11 = lVar10 * 0x5555555555555556;
    uVar12 = uVar1;
    if (uVar1 <= uVar11) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      lVar10 = 0;
      goto LAB_006b3438;
    }
  }
  lVar10 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar12 * 0x30,8);
  if (lVar10 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_006b3438:
  lVar14 = lVar10 + lVar8 * 0x10;
  FUN_006b35d0(plVar2,lVar14,param_2);
  puVar5 = PTR_DAT_02710860;
  lVar8 = *param_1;
  lVar9 = param_1[1];
  if (lVar9 == lVar8) {
    lVar9 = lVar14;
    lVar15 = lVar8;
  }
  else {
    lVar15 = 0;
    do {
      lVar13 = *plVar2;
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar13;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar13 = lVar9 + lVar15;
      lVar3 = lVar14 + lVar15;
      *(undefined8 *)(lVar3 + -0x30) = *(undefined8 *)(lVar13 + -0x30);
      *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)(lVar13 + -0x28);
      *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)(lVar13 + -0x20);
      *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar13 + -0x18);
      lVar7 = *(long *)(lVar13 + -0x10);
      *(long *)(lVar3 + -0x10) = lVar7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      uVar4 = *(undefined4 *)(lVar13 + -8);
      *(undefined1 *)(lVar3 + -4) = *(undefined1 *)(lVar13 + -4);
      *(undefined4 *)(lVar3 + -8) = uVar4;
      lVar15 = lVar15 + -0x30;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    } while (lVar8 - lVar9 != lVar15);
    lVar8 = *param_1;
    lVar9 = lVar14 + lVar15;
    lVar15 = param_1[1];
  }
  lVar6 = param_1[2];
  *param_1 = lVar9;
  param_1[1] = lVar14 + 0x30;
  param_1[2] = lVar10 + uVar12 * 0x30;
  while (lVar10 = lVar15, lVar10 != lVar8) {
    lVar15 = lVar10 + -0x30;
    if (*(long *)(lVar10 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar10 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar10 + -0x10) = 0;
    }
  }
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006b359c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*plVar2 + 0x18))((long *)*plVar2,lVar8,lVar6 - lVar8,8);
  return;
}


