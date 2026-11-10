/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6fe0; name: FUN_006b6fe0
 */


void FUN_006b6fe0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  
  lVar9 = param_1[1] - *param_1 >> 5;
  uVar8 = lVar9 + 1;
  if (uVar8 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  plVar1 = param_1 + 3;
  if ((ulong)(lVar5 >> 5) < 0x3ffffffffffffff) {
    uVar6 = lVar5 >> 4;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
      goto LAB_006b7084;
    }
  }
  else {
    uVar8 = 0x7ffffffffffffff;
  }
  lVar5 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar8 << 5,8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
LAB_006b7084:
  puVar2 = PTR_DAT_02710860;
  lVar12 = *plVar1;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_006b71dc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  uVar4 = *param_2;
  puVar11 = (undefined8 *)(lVar5 + lVar9 * 0x20);
  *param_2 = 0;
  puVar13 = puVar11 + 4;
  *puVar11 = uVar4;
  uVar4 = param_2[1];
  uVar7 = param_2[3];
  puVar11[2] = param_2[2];
  puVar11[3] = uVar7;
  puVar11[1] = uVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar9 = *param_1;
  lVar3 = param_1[1];
  puVar10 = puVar11;
  if (lVar3 == lVar9) {
    lVar3 = lVar9;
  }
  else {
    do {
      lVar14 = *plVar1;
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_006b71dc;
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar14;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      uVar4 = *(undefined8 *)(lVar3 + -0x20);
      *(undefined8 *)(lVar3 + -0x20) = 0;
      puVar11 = puVar10 + -4;
      *puVar11 = uVar4;
      uVar4 = *(undefined8 *)(lVar3 + -0x18);
      uVar7 = *(undefined8 *)(lVar3 + -8);
      puVar10[-2] = *(undefined8 *)(lVar3 + -0x10);
      puVar10[-1] = uVar7;
      puVar10[-3] = uVar4;
      lVar3 = lVar3 + -0x20;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      puVar10 = puVar11;
    } while (lVar9 != lVar3);
    lVar9 = param_1[1];
    lVar3 = *param_1;
  }
  lVar12 = param_1[2];
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar13;
  param_1[2] = lVar5 + uVar8 * 0x20;
  while (lVar9 != lVar3) {
    lVar9 = lVar9 + -0x20;
    FUN_006b5650(plVar1,lVar9);
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006b71bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,lVar3,lVar12 - lVar3,8);
  return;
}


