/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01213670; name: FUN_01213670
 */


void FUN_01213670(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  lVar12 = param_1[1] - *param_1 >> 6;
  uVar13 = lVar12 + 1;
  if (uVar13 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1;
  if ((ulong)(lVar8 >> 6) < 0x1ffffffffffffff) {
    uVar9 = lVar8 >> 5;
    if (uVar13 <= uVar9) {
      uVar13 = uVar9;
    }
    if (uVar13 == 0) {
      lVar8 = 0;
      goto LAB_01213714;
    }
  }
  else {
    uVar13 = 0x3ffffffffffffff;
  }
  lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar13 << 6,8);
  if (lVar8 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_01213714:
  puVar6 = PTR_DAT_02710860;
  lVar14 = param_1[3];
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_01213848:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar14;
  puVar2 = (undefined8 *)(lVar8 + lVar12 * 0x40);
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  FUN_01218250(puVar2,param_2,param_3);
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar12 = *param_1;
  lVar7 = param_1[1];
  puVar10 = puVar2;
  puVar11 = puVar2;
  if (lVar7 != lVar12) {
    do {
      lVar15 = param_1[3];
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_01213848;
      *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar15;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      uVar4 = *(undefined8 *)(lVar7 + -0x38);
      uVar3 = *(undefined8 *)(lVar7 + -0x30);
      uVar5 = *(undefined8 *)(lVar7 + -0x28);
      puVar11 = puVar10 + -8;
      *puVar11 = *(undefined8 *)(lVar7 + -0x40);
      puVar10[-6] = uVar3;
      puVar10[-5] = uVar5;
      puVar10[-7] = uVar4;
      uVar3 = *(undefined8 *)(lVar7 + -0x20);
      uVar4 = *(undefined8 *)(lVar7 + -0x18);
      puVar1 = (undefined8 *)(lVar7 + -0x10);
      uVar5 = *(undefined8 *)(lVar7 + -8);
      lVar7 = lVar7 + -0x40;
      puVar10[-2] = *puVar1;
      puVar10[-1] = uVar5;
      puVar10[-4] = uVar3;
      puVar10[-3] = uVar4;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      puVar10 = puVar11;
    } while (lVar12 != lVar7);
    lVar12 = *param_1;
  }
  *param_1 = (long)puVar11;
  param_1[1] = (long)(puVar2 + 8);
  lVar7 = param_1[2];
  param_1[2] = lVar8 + uVar13 * 0x40;
  if (lVar12 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01213828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar12,lVar7 - lVar12,8);
  return;
}


