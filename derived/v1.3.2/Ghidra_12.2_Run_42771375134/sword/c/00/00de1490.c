/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de1490; name: FUN_00de1490
 */


void FUN_00de1490(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  
  lVar11 = param_1[1] - *param_1 >> 5;
  uVar10 = lVar11 + 1;
  if (uVar10 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1;
  if ((ulong)(lVar7 >> 5) < 0x3ffffffffffffff) {
    uVar8 = lVar7 >> 4;
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    if (uVar10 == 0) {
      lVar7 = 0;
      goto LAB_00de1530;
    }
  }
  else {
    uVar10 = 0x7ffffffffffffff;
  }
  lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 << 5,0x10);
  if (lVar7 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00de1530:
  puVar4 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00de165c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  puVar2 = (undefined8 *)(lVar7 + lVar11 * 0x20);
  uVar6 = param_2[1];
  puVar2[3] = param_2[3];
  uVar9 = param_2[2];
  *puVar2 = *param_2;
  puVar2[1] = uVar6;
  puVar2[2] = uVar9;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  lVar11 = *param_1;
  lVar5 = param_1[1];
  puVar13 = puVar2;
  puVar14 = puVar2;
  if (lVar5 != lVar11) {
    do {
      lVar15 = param_1[3];
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00de165c;
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar15;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      puVar1 = (undefined8 *)(lVar5 + -0x20);
      uVar9 = *(undefined8 *)(lVar5 + -0x18);
      uVar6 = *(undefined8 *)(lVar5 + -0x10);
      uVar3 = *(undefined8 *)(lVar5 + -8);
      lVar5 = lVar5 + -0x20;
      puVar14 = puVar13 + -4;
      *puVar14 = *puVar1;
      puVar13[-2] = uVar6;
      puVar13[-1] = uVar3;
      puVar13[-3] = uVar9;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      puVar13 = puVar14;
    } while (lVar11 != lVar5);
    lVar11 = *param_1;
  }
  *param_1 = (long)puVar14;
  param_1[1] = (long)(puVar2 + 4);
  lVar5 = param_1[2];
  param_1[2] = lVar7 + uVar10 * 0x20;
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00de163c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar11,lVar5 - lVar11,0x10);
  return;
}


