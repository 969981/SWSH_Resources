/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e6bf0; name: FUN_011e6bf0
 */


void FUN_011e6bf0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar9 = param_1[1] - *param_1 >> 4;
  uVar8 = lVar9 + 1;
  if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  if ((ulong)(lVar5 >> 4) < 0x7ffffffffffffff) {
    uVar6 = lVar5 >> 3;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
      goto LAB_011e6c90;
    }
  }
  else {
    uVar8 = 0xfffffffffffffff;
  }
  lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 4,8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_011e6c90:
  puVar3 = PTR_DAT_02710860;
  lVar10 = param_1[3];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_011e6d9c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  puVar1 = (undefined8 *)(lVar5 + lVar9 * 0x10);
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  puVar7 = (undefined8 *)*param_1;
  puVar11 = puVar1;
  puVar12 = puVar1;
  puVar13 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[1] != puVar7) {
    do {
      lVar4 = param_1[3];
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_011e6d9c;
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar4;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      puVar14 = puVar13 + -2;
      uVar2 = puVar13[-1];
      puVar12 = puVar11 + -2;
      *puVar12 = *puVar14;
      puVar11[-1] = uVar2;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      puVar11 = puVar12;
      puVar13 = puVar14;
    } while (puVar7 != puVar14);
    puVar7 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar12;
  param_1[1] = (long)(puVar1 + 2);
  lVar9 = param_1[2];
  param_1[2] = lVar5 + uVar8 * 0x10;
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011e6d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar7,lVar9 - (long)puVar7,8);
  return;
}


