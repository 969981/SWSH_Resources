/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b3ea0; name: FUN_006b3ea0
 */


void FUN_006b3ea0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar7 = param_1[1] - *param_1 >> 4;
  uVar11 = 0x555555555555555;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1 >> 4;
  plVar2 = param_1 + 3;
  if ((ulong)(lVar9 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar10 = lVar9 * 0x5555555555555556;
    uVar11 = uVar1;
    if (uVar1 <= uVar10) {
      uVar11 = uVar10;
    }
    if (uVar11 == 0) {
      lVar9 = 0;
      goto LAB_006b3f68;
    }
  }
  lVar9 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar11 * 0x30,8);
  if (lVar9 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_006b3f68:
  lVar13 = lVar9 + lVar7 * 0x10;
  FUN_006b4100(plVar2,lVar13,param_2);
  puVar4 = PTR_DAT_02710860;
  lVar7 = *param_1;
  lVar8 = param_1[1];
  if (lVar8 == lVar7) {
    lVar8 = lVar13;
    lVar14 = lVar7;
  }
  else {
    lVar14 = 0;
    do {
      lVar12 = *plVar2;
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar12 = lVar8 + lVar14;
      lVar3 = lVar13 + lVar14;
      *(undefined8 *)(lVar3 + -0x30) = *(undefined8 *)(lVar12 + -0x30);
      *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)(lVar12 + -0x28);
      *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)(lVar12 + -0x20);
      *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar12 + -0x18);
      lVar6 = *(long *)(lVar12 + -0x10);
      *(long *)(lVar3 + -0x10) = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      *(undefined2 *)(lVar3 + -8) = *(undefined2 *)(lVar12 + -8);
      lVar14 = lVar14 + -0x30;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    } while (lVar7 - lVar8 != lVar14);
    lVar7 = *param_1;
    lVar8 = lVar13 + lVar14;
    lVar14 = param_1[1];
  }
  lVar5 = param_1[2];
  *param_1 = lVar8;
  param_1[1] = lVar13 + 0x30;
  param_1[2] = lVar9 + uVar11 * 0x30;
  while (lVar9 = lVar14, lVar9 != lVar7) {
    lVar14 = lVar9 + -0x30;
    if (*(long *)(lVar9 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar9 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar9 + -0x10) = 0;
    }
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006b40c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*plVar2 + 0x18))((long *)*plVar2,lVar7,lVar5 - lVar7,8);
  return;
}


