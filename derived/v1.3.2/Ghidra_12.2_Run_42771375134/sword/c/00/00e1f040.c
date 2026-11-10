/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1f040; name: FUN_00e1f040
 */


void FUN_00e1f040(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar11 = param_1[1] - *param_1 >> 5;
  uVar10 = lVar11 + 1;
  if (uVar10 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  if ((ulong)(lVar4 >> 5) < 0x3ffffffffffffff) {
    uVar5 = lVar4 >> 4;
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    if (uVar10 == 0) {
      lVar4 = 0;
      goto LAB_00e1f0e0;
    }
  }
  else {
    uVar10 = 0x7ffffffffffffff;
  }
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 << 5,8);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00e1f0e0:
  puVar1 = PTR_DAT_02710860;
  lVar13 = param_1[3];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_00e1f264:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar13;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  uVar3 = *param_2;
  puVar7 = (undefined8 *)(lVar4 + lVar11 * 0x20);
  *param_2 = 0;
  puVar14 = puVar7 + 4;
  *puVar7 = uVar3;
  uVar3 = param_2[1];
  uVar6 = param_2[3];
  puVar7[2] = param_2[2];
  puVar7[3] = uVar6;
  puVar7[1] = uVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  puVar9 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
  puVar12 = puVar7;
  if (puVar8 == puVar9) {
    puVar8 = puVar9;
  }
  else {
    do {
      lVar2 = param_1[3];
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00e1f264;
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar2;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      uVar3 = puVar8[-4];
      puVar8[-4] = 0;
      puVar7 = puVar12 + -4;
      *puVar7 = uVar3;
      uVar3 = puVar8[-3];
      uVar6 = puVar8[-1];
      puVar12[-2] = puVar8[-2];
      puVar12[-1] = uVar6;
      puVar12[-3] = uVar3;
      puVar8 = puVar8 + -4;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      puVar12 = puVar7;
    } while (puVar9 != puVar8);
    puVar9 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)param_1[1];
  }
  lVar11 = param_1[2];
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar14;
  param_1[2] = lVar4 + uVar10 * 0x20;
  if (puVar8 != puVar9) {
    do {
      puVar12 = puVar8 + -4;
      puVar7 = (undefined8 *)*puVar12;
      *puVar12 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7);
        (**(code **)(*(long *)puVar8[-3] + 0x18))((long *)puVar8[-3],puVar7,puVar8[-2],puVar8[-1]);
      }
      puVar8 = puVar12;
    } while (puVar9 != puVar12);
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e1f244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar9,lVar11 - (long)puVar9,8);
  return;
}


