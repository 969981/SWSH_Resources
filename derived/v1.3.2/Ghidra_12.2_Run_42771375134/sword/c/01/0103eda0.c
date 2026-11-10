/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103eda0; name: FUN_0103eda0
 */


void FUN_0103eda0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar11 = 0x492492492492492;
  uVar1 = lVar6 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar8 * 0x6db6db6db6db6db7) < 0x249249249249249) {
    uVar9 = lVar8 * -0x2492492492492492;
    uVar11 = uVar1;
    if (uVar1 <= uVar9) {
      uVar11 = uVar9;
    }
    if (uVar11 == 0) {
      lVar8 = 0;
      goto LAB_0103ee74;
    }
  }
  lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 * 0x38,8);
  if (lVar8 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_0103ee74:
  puVar3 = PTR_DAT_02710860;
  lVar14 = param_1[3];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_0103f054:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar14;
  puVar13 = (undefined8 *)(lVar8 + lVar6 * 8);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  uVar2 = param_2[1];
  uVar10 = param_2[2];
  *puVar13 = *param_2;
  puVar13[1] = uVar2;
  puVar13[2] = uVar10;
  lVar14 = lVar8 + lVar6 * 8;
  *(undefined8 *)(lVar14 + 0x18) = param_2[3];
  *(undefined8 *)(lVar14 + 0x20) = param_2[4];
  *(undefined8 *)(lVar14 + 0x28) = param_2[5];
  lVar6 = param_2[6];
  *(long *)(lVar14 + 0x30) = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar6 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar6) {
    puVar7 = puVar13;
    lVar4 = lVar6;
  }
  else {
    lVar14 = 0;
    do {
      lVar12 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0103f054;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar12 = lVar4 + lVar14;
      uVar2 = *(undefined8 *)(lVar12 + -0x38);
      uVar10 = *(undefined8 *)(lVar12 + -0x28);
      *(undefined8 *)((long)puVar13 + lVar14 + -0x30) = *(undefined8 *)(lVar12 + -0x30);
      *(undefined8 *)((long)puVar13 + lVar14 + -0x28) = uVar10;
      *(undefined8 *)((long)puVar13 + lVar14 + -0x38) = uVar2;
      *(undefined8 *)((long)puVar13 + lVar14 + -0x20) = *(undefined8 *)(lVar12 + -0x20);
      *(undefined8 *)((long)puVar13 + lVar14 + -0x18) = *(undefined8 *)(lVar12 + -0x18);
      *(undefined8 *)((long)puVar13 + lVar14 + -0x10) = *(undefined8 *)(lVar12 + -0x10);
      lVar12 = *(long *)(lVar12 + -8);
      *(long *)((long)puVar13 + lVar14 + -8) = lVar12;
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      lVar14 = lVar14 + -0x38;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    } while (lVar6 - lVar4 != lVar14);
    lVar6 = *param_1;
    puVar7 = (undefined8 *)((long)puVar13 + lVar14);
    lVar4 = param_1[1];
  }
  lVar14 = param_1[2];
  *param_1 = (long)puVar7;
  param_1[1] = (long)(puVar13 + 7);
  param_1[2] = lVar8 + uVar11 * 0x38;
  while (lVar8 = lVar4, lVar8 != lVar6) {
    lVar4 = lVar8 + -0x38;
    if (*(long *)(lVar8 + -8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + -8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + -8) = 0;
    }
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0103f034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar14 - lVar6,8);
  return;
}


