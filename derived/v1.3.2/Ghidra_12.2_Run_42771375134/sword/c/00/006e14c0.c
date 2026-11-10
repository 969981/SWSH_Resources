/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e14c0; name: FUN_006e14c0
 */


void FUN_006e14c0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  
  lVar7 = param_1[1] - *param_1 >> 2;
  uVar11 = 0xccccccccccccccc;
  uVar2 = lVar7 * -0x3333333333333333 + 1;
  if (0xccccccccccccccc < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1 >> 2;
  if ((ulong)(lVar9 * -0x3333333333333333) < 0x666666666666666) {
    uVar10 = lVar9 * -0x6666666666666666;
    uVar11 = uVar2;
    if (uVar2 <= uVar10) {
      uVar11 = uVar10;
    }
    if (uVar11 == 0) {
      lVar9 = 0;
      goto LAB_006e1580;
    }
  }
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 * 0x14,4);
  if (lVar9 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006e1580:
  puVar5 = PTR_DAT_02710860;
  lVar13 = param_1[3];
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_006e16a8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar13;
  puVar12 = (undefined8 *)(lVar9 + lVar7 * 4);
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  uVar8 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(param_2 + 2);
  *puVar12 = uVar8;
  puVar12[1] = uVar3;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  lVar7 = *param_1;
  lVar6 = param_1[1];
  puVar14 = puVar12;
  puVar15 = puVar12;
  if (lVar6 != lVar7) {
    do {
      lVar16 = param_1[3];
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_006e16a8;
      *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar16;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      puVar1 = (undefined8 *)(lVar6 + -0x14);
      uVar8 = *(undefined8 *)(lVar6 + -0xc);
      uVar4 = *(undefined4 *)(lVar6 + -4);
      lVar6 = lVar6 + -0x14;
      puVar15 = (undefined8 *)((long)puVar14 + -0x14);
      *puVar15 = *puVar1;
      *(undefined4 *)((long)puVar14 + -4) = uVar4;
      *(undefined8 *)((long)puVar14 + -0xc) = uVar8;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      puVar14 = puVar15;
    } while (lVar7 != lVar6);
    lVar7 = *param_1;
  }
  *param_1 = (long)puVar15;
  param_1[1] = (long)puVar12 + 0x14;
  lVar6 = param_1[2];
  param_1[2] = lVar9 + uVar11 * 0x14;
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006e1688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar7,lVar6 - lVar7,4);
  return;
}


