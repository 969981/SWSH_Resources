/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ab790; name: FUN_006ab790
 */


void FUN_006ab790(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  
  puVar5 = PTR_DAT_02710860;
  puVar9 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar9 >> 5)) {
    while( true ) {
      lVar7 = param_1[3];
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar10 + 0x80)) break;
      *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar7;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      param_2 = param_2 - 1;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      puVar9 = (undefined8 *)(param_1[1] + 0x20);
      param_1[1] = (long)puVar9;
      if (param_2 == 0) {
        return;
      }
    }
LAB_006ab9ac:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar10 = (long)puVar9 - *param_1 >> 5;
  uVar12 = lVar10 + param_2;
  if (uVar12 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1;
  if ((ulong)(lVar7 >> 5) < 0x3ffffffffffffff) {
    uVar8 = lVar7 >> 4;
    if (uVar12 <= uVar8) {
      uVar12 = uVar8;
    }
    if (uVar12 == 0) {
      lVar7 = 0;
      goto LAB_006ab898;
    }
  }
  else {
    uVar12 = 0x7ffffffffffffff;
  }
  lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 << 5,0x10);
  if (lVar7 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006ab898:
  puVar5 = PTR_DAT_02710860;
  puVar9 = (undefined8 *)(lVar7 + lVar10 * 0x20);
  puVar11 = puVar9;
  do {
    lVar14 = param_1[3];
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_006ab9ac;
    *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar14;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    param_2 = param_2 - 1;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar13 = puVar11 + 4;
    *puVar11 = 0;
    puVar11[1] = 0;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    puVar11 = puVar13;
  } while (param_2 != 0);
  lVar10 = *param_1;
  lVar14 = param_1[1];
  puVar11 = puVar9;
  if (lVar14 != lVar10) {
    do {
      lVar15 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_006ab9ac;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      puVar1 = (undefined8 *)(lVar14 + -0x20);
      uVar3 = *(undefined8 *)(lVar14 + -0x18);
      uVar2 = *(undefined8 *)(lVar14 + -0x10);
      uVar4 = *(undefined8 *)(lVar14 + -8);
      lVar14 = lVar14 + -0x20;
      puVar9 = puVar11 + -4;
      *puVar9 = *puVar1;
      puVar11[-2] = uVar2;
      puVar11[-1] = uVar4;
      puVar11[-3] = uVar3;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar11 = puVar9;
    } while (lVar10 != lVar14);
    lVar10 = *param_1;
  }
  lVar14 = param_1[2];
  *param_1 = (long)puVar9;
  param_1[1] = (long)puVar13;
  param_1[2] = lVar7 + uVar12 * 0x20;
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006ab990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar10,lVar14 - lVar10,0x10);
  return;
}


