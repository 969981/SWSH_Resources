/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006be4e0; name: FUN_006be4e0
 */


void FUN_006be4e0(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  
  lVar7 = param_1[1] - *param_1 >> 3;
  uVar14 = 0x666666666666666;
  uVar1 = lVar7 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar8 * -0x3333333333333333) < 0x333333333333333) {
    uVar9 = lVar8 * -0x6666666666666666;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (uVar14 == 0) {
      lVar8 = 0;
      goto LAB_006be5a4;
    }
  }
  lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar14 * 0x28,8);
  if (lVar8 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006be5a4:
  puVar5 = PTR_DAT_02710860;
  lVar16 = param_1[3];
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_006be758:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar16;
  puVar15 = (undefined8 *)(lVar8 + lVar7 * 8);
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  uVar10 = *param_2;
  uVar2 = param_2[1];
  *param_2 = 0;
  uVar11 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = *param_3;
  puVar13 = puVar15 + 5;
  *puVar15 = uVar10;
  lVar7 = lVar8 + lVar7 * 8;
  *(undefined8 *)(lVar7 + 0x18) = uVar3;
  *(undefined8 *)(lVar7 + 8) = uVar2;
  *(undefined8 *)(lVar7 + 0x10) = uVar11;
  *(undefined4 *)(lVar7 + 0x20) = uVar4;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  puVar12 = (undefined8 *)*param_1;
  puVar17 = (undefined8 *)param_1[1];
  if (puVar17 == puVar12) {
    puVar17 = puVar12;
  }
  else {
    lVar7 = 0;
    do {
      lVar16 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_006be758;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar16;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      uVar10 = *(undefined8 *)((long)puVar17 + lVar7 + -0x28);
      *(undefined8 *)((long)puVar17 + lVar7 + -0x28) = 0;
      *(undefined8 *)((long)puVar15 + lVar7 + -0x28) = uVar10;
      uVar10 = *(undefined8 *)((long)puVar17 + lVar7 + -0x20);
      uVar11 = *(undefined8 *)((long)puVar17 + lVar7 + -0x10);
      *(undefined8 *)((long)puVar15 + lVar7 + -0x18) =
           *(undefined8 *)((long)puVar17 + lVar7 + -0x18);
      *(undefined8 *)((long)puVar15 + lVar7 + -0x10) = uVar11;
      *(undefined8 *)((long)puVar15 + lVar7 + -0x20) = uVar10;
      *(undefined4 *)((long)puVar15 + lVar7 + -8) = *(undefined4 *)((long)puVar17 + lVar7 + -8);
      lVar7 = lVar7 + -0x28;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    } while ((long)puVar12 - (long)puVar17 != lVar7);
    puVar15 = (undefined8 *)((long)puVar15 + lVar7);
    puVar12 = (undefined8 *)*param_1;
    puVar17 = (undefined8 *)param_1[1];
  }
  *param_1 = (long)puVar15;
  param_1[1] = (long)puVar13;
  lVar7 = param_1[2];
  param_1[2] = lVar8 + uVar14 * 0x28;
  if (puVar17 != puVar12) {
    do {
      puVar13 = puVar17 + -5;
      puVar15 = (undefined8 *)*puVar13;
      *puVar13 = 0;
      if (puVar15 != (undefined8 *)0x0) {
        (**(code **)*puVar15)(puVar15);
        (**(code **)(*(long *)puVar17[-4] + 0x18))
                  ((long *)puVar17[-4],puVar15,puVar17[-3],puVar17[-2]);
      }
      puVar17 = puVar13;
    } while (puVar12 != puVar13);
  }
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006be738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar12,lVar7 - (long)puVar12,8);
  return;
}


