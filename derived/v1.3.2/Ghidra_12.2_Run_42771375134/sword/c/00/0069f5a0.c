/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069f5a0; name: FUN_0069f5a0
 */


void FUN_0069f5a0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  
  FUN_006a0050();
  puVar2 = PTR_DAT_027150c8;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  plVar4 = param_1 + 2;
  param_1[5] = lVar3;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  puVar2 = PTR_DAT_02710860;
  uVar6 = (ulong)((int)((ulong)(*(long *)(*(long *)(param_2 + 0x350) + 0x1c0) -
                               *(long *)(*(long *)(param_2 + 0x350) + 0x1b8)) >> 4) * 0x286bca1b);
  uVar9 = param_1[3] - *plVar4 >> 6;
  uVar11 = uVar6 - uVar9;
  if (uVar6 < uVar9 || uVar11 == 0) {
    if (uVar6 < uVar9) {
      param_1[3] = *plVar4 + uVar6 * 0x40;
    }
    return;
  }
  puVar12 = (undefined8 *)param_1[3];
  if (uVar11 <= (ulong)(param_1[4] - (long)puVar12 >> 6)) {
    while( true ) {
      lVar7 = param_1[5];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) break;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      puVar12[3] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      FUN_0075e2a0(puVar12 + 2);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar12 = (undefined8 *)(param_1[3] + 0x40);
      uVar11 = uVar11 - 1;
      param_1[3] = (long)puVar12;
      if (uVar11 == 0) {
        return;
      }
    }
LAB_0069fef8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = (long)puVar12 - *plVar4 >> 6;
  uVar6 = lVar3 + uVar11;
  if (uVar6 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[4] - *plVar4;
  if ((ulong)(lVar7 >> 6) < 0x1ffffffffffffff) {
    uVar9 = lVar7 >> 5;
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar6 == 0) {
      lVar7 = 0;
      goto LAB_0069fdb0;
    }
  }
  else {
    uVar6 = 0x3ffffffffffffff;
  }
  lVar7 = (**(code **)(*(long *)param_1[5] + 0x10))((long *)param_1[5],uVar6 << 6,0x10);
  if (lVar7 == 0) {
    (**(code **)(*(long *)param_1[5] + 0xb8))();
  }
LAB_0069fdb0:
  puVar2 = PTR_DAT_02710860;
  puVar12 = (undefined8 *)(lVar7 + lVar3 * 0x40);
  puVar13 = puVar12;
  do {
    lVar15 = param_1[5];
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_0069fef8;
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar15;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[3] = 0;
    puVar14 = puVar13 + 8;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    FUN_0075e2a0();
    uVar11 = uVar11 - 1;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    puVar13 = puVar14;
  } while (uVar11 != 0);
  lVar3 = *plVar4;
  lVar15 = param_1[3];
  puVar13 = puVar12;
  if (lVar15 != lVar3) {
    do {
      lVar16 = param_1[5];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0069fef8;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar16;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      uVar10 = *(undefined8 *)(lVar15 + -0x38);
      uVar8 = *(undefined8 *)(lVar15 + -0x30);
      uVar1 = *(undefined8 *)(lVar15 + -0x28);
      puVar12 = puVar13 + -8;
      *puVar12 = *(undefined8 *)(lVar15 + -0x40);
      puVar13[-6] = uVar8;
      puVar13[-5] = uVar1;
      puVar13[-7] = uVar10;
      uVar8 = *(undefined8 *)(lVar15 + -0x18);
      puVar13[-1] = *(undefined8 *)(lVar15 + -8);
      uVar10 = *(undefined8 *)(lVar15 + -0x10);
      puVar13[-4] = *(undefined8 *)(lVar15 + -0x20);
      puVar13[-3] = uVar8;
      puVar13[-2] = uVar10;
      lVar15 = lVar15 + -0x40;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      puVar13 = puVar12;
    } while (lVar3 != lVar15);
    lVar3 = *plVar4;
  }
  lVar15 = param_1[4];
  *plVar4 = (long)puVar12;
  param_1[3] = (long)puVar14;
  param_1[4] = lVar7 + uVar6 * 0x40;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0069fedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],lVar3,lVar15 - lVar3,0x10);
  return;
}


