/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01313b10; name: FUN_01313b10
 */


void FUN_01313b10(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  
  lVar10 = param_1[1] - *param_1 >> 6;
  uVar9 = lVar10 + 1;
  if (uVar9 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  if ((ulong)(lVar4 >> 6) < 0x1ffffffffffffff) {
    uVar5 = lVar4 >> 5;
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      lVar4 = 0;
      goto LAB_01313bb4;
    }
  }
  else {
    uVar9 = 0x3ffffffffffffff;
  }
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 6,0x10);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_01313bb4:
  puVar1 = PTR_DAT_02710860;
  lVar13 = param_1[3];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_01313d10:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar13;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  puVar12 = (undefined8 *)(lVar4 + lVar10 * 0x40);
  puVar8 = puVar12 + 8;
  *puVar12 = *param_2;
  puVar12[3] = param_3[1];
  puVar12[2] = *param_3;
  uVar3 = param_3[3];
  puVar12[7] = param_3[5];
  uVar6 = param_3[2];
  uVar7 = param_3[4];
  puVar12[5] = uVar3;
  puVar12[6] = uVar7;
  puVar12[4] = uVar6;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar10 = *param_1;
  lVar2 = param_1[1];
  puVar11 = puVar12;
  if (lVar2 != lVar10) {
    do {
      lVar14 = param_1[3];
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01313d10;
      *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar14;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      uVar6 = *(undefined8 *)(lVar2 + -0x38);
      uVar3 = *(undefined8 *)(lVar2 + -0x30);
      uVar7 = *(undefined8 *)(lVar2 + -0x28);
      puVar12 = puVar11 + -8;
      *puVar12 = *(undefined8 *)(lVar2 + -0x40);
      puVar11[-6] = uVar3;
      puVar11[-5] = uVar7;
      puVar11[-7] = uVar6;
      uVar3 = *(undefined8 *)(lVar2 + -0x18);
      puVar11[-1] = *(undefined8 *)(lVar2 + -8);
      uVar6 = *(undefined8 *)(lVar2 + -0x10);
      puVar11[-4] = *(undefined8 *)(lVar2 + -0x20);
      puVar11[-3] = uVar3;
      puVar11[-2] = uVar6;
      lVar2 = lVar2 + -0x40;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      puVar11 = puVar12;
    } while (lVar10 != lVar2);
    lVar10 = *param_1;
  }
  lVar2 = param_1[2];
  param_1[2] = lVar4 + uVar9 * 0x40;
  *param_1 = (long)puVar12;
  param_1[1] = (long)puVar8;
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01313cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar10,lVar2 - lVar10,0x10);
  return;
}


