/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01078310; name: FUN_01078310
 */


void FUN_01078310(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  lVar7 = param_1[1] - *param_1 >> 3;
  uVar13 = 0x2e8ba2e8ba2e8ba;
  uVar1 = lVar7 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1 >> 3;
  plVar2 = param_1 + 3;
  if ((ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3) < 0x1745d1745d1745d) {
    uVar9 = lVar8 * 0x5d1745d1745d1746;
    uVar13 = uVar1;
    if (uVar1 <= uVar9) {
      uVar13 = uVar9;
    }
    if (uVar13 == 0) {
      lVar8 = 0;
      goto LAB_010783ec;
    }
  }
  lVar8 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar13 * 0x58,8);
  if (lVar8 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_010783ec:
  lVar12 = lVar8 + lVar7 * 8;
  FUN_01078570(plVar2,lVar12,param_2);
  puVar5 = PTR_DAT_02710860;
  plVar11 = (long *)*param_1;
  plVar10 = (long *)param_1[1];
  lVar7 = lVar12;
  if (plVar10 == plVar11) {
    plVar10 = plVar11;
  }
  else {
    do {
      lVar14 = *plVar2;
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar14;
      plVar10 = plVar10 + -0xb;
      lVar7 = lVar7 + -0x58;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      FUN_01078670(lVar7,plVar10);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    } while (plVar11 != plVar10);
    plVar11 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
  }
  lVar6 = param_1[2];
  *param_1 = lVar7;
  param_1[1] = lVar12 + 0x58;
  param_1[2] = lVar8 + uVar13 * 0x58;
  while (plVar3 = plVar10, plVar3 != plVar11) {
    plVar10 = plVar3 + -0xb;
    plVar4 = (long *)plVar3[-6];
    while (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      (**(code **)(*(long *)plVar3[-5] + 0x18))((long *)plVar3[-5],plVar4,0x18,8);
      plVar4 = (long *)lVar7;
    }
    lVar7 = *plVar10;
    *plVar10 = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)plVar3[-9] + 0x18))((long *)plVar3[-9],lVar7,plVar3[-10] << 3,8);
    }
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01078540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*plVar2 + 0x18))((long *)*plVar2,plVar11,lVar6 - (long)plVar11,8);
  return;
}


