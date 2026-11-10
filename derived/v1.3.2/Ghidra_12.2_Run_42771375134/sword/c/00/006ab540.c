/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ab540; name: FUN_006ab540
 */


void FUN_006ab540(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  
  puVar4 = PTR_DAT_02710860;
  puVar9 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)puVar9 >> 2) * -0x5555555555555555)) {
    while( true ) {
      lVar6 = param_1[3];
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar8 + 0x80)) break;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar6;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *(undefined4 *)(puVar9 + 1) = 0;
      *puVar9 = 0;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      puVar9 = (undefined8 *)(param_1[1] + 0xc);
      param_2 = param_2 - 1;
      param_1[1] = (long)puVar9;
      if (param_2 == 0) {
        return;
      }
    }
LAB_006ab780:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar8 = (long)puVar9 - *param_1 >> 2;
  uVar11 = 0x1555555555555555;
  uVar2 = lVar8 * -0x5555555555555555 + param_2;
  if (0x1555555555555555 < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 2;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar11 = uVar2;
    if (uVar2 <= uVar7) {
      uVar11 = uVar7;
    }
    if (uVar11 == 0) {
      lVar6 = 0;
      goto LAB_006ab66c;
    }
  }
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 * 0xc,4);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006ab66c:
  puVar4 = PTR_DAT_02710860;
  puVar10 = (undefined8 *)(lVar6 + lVar8 * 4);
  puVar9 = puVar10;
  do {
    lVar13 = param_1[3];
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_006ab780;
    *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar13;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *(undefined4 *)(puVar9 + 1) = 0;
    puVar12 = (undefined8 *)((long)puVar9 + 0xc);
    *puVar9 = 0;
    param_2 = param_2 - 1;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    puVar9 = puVar12;
  } while (param_2 != 0);
  lVar8 = *param_1;
  lVar13 = param_1[1];
  puVar9 = puVar10;
  if (lVar13 != lVar8) {
    do {
      lVar14 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_006ab780;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar14;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      puVar1 = (undefined8 *)(lVar13 + -0xc);
      uVar3 = *(undefined4 *)(lVar13 + -4);
      lVar13 = lVar13 + -0xc;
      puVar10 = (undefined8 *)((long)puVar9 + -0xc);
      *puVar10 = *puVar1;
      *(undefined4 *)((long)puVar9 + -4) = uVar3;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      puVar9 = puVar10;
    } while (lVar8 != lVar13);
    lVar8 = *param_1;
  }
  lVar13 = param_1[2];
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar12;
  param_1[2] = lVar6 + uVar11 * 0xc;
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006ab764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar13 - lVar8,4);
  return;
}


