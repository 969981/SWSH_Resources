/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0133a720; name: FUN_0133a720
 */


void FUN_0133a720(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  
  lVar9 = param_1[1] - *param_1 >> 5;
  uVar8 = lVar9 + 1;
  if (uVar8 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  if ((ulong)(lVar5 >> 5) < 0x3ffffffffffffff) {
    uVar6 = lVar5 >> 4;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
      goto LAB_0133a7c0;
    }
  }
  else {
    uVar8 = 0x7ffffffffffffff;
  }
  lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 5,8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_0133a7c0:
  puVar2 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0133a940:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  uVar4 = *param_2;
  puVar11 = (undefined8 *)(lVar5 + lVar9 * 0x20);
  *param_2 = 0;
  puVar13 = puVar11 + 4;
  *puVar11 = uVar4;
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  *(undefined1 *)(puVar11 + 3) = *(undefined1 *)(param_2 + 3);
  puVar11[1] = uVar4;
  puVar11[2] = uVar1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  plVar7 = (long *)*param_1;
  plVar10 = (long *)param_1[1];
  if ((long *)param_1[1] == plVar7) {
    plVar10 = plVar7;
  }
  else {
    do {
      lVar3 = param_1[3];
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0133a940;
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar3;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      lVar3 = plVar10[-4];
      plVar14 = plVar10 + -4;
      puVar11[-4] = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar3 = plVar10[-3];
      lVar12 = plVar10[-2];
      *(char *)(puVar11 + -1) = (char)plVar10[-1];
      puVar11[-3] = lVar3;
      puVar11[-2] = lVar12;
      puVar11 = puVar11 + -4;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      plVar10 = plVar14;
    } while (plVar7 != plVar14);
    plVar7 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
  }
  lVar9 = param_1[2];
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar13;
  param_1[2] = lVar5 + uVar8 * 0x20;
  if (plVar10 != plVar7) {
    do {
      plVar14 = plVar10 + -4;
      if (*plVar14 != 0) {
        (**(code **)(*(long *)(*plVar14 + 0x48) + 0x18))();
        plVar10[-4] = 0;
      }
      plVar10 = plVar14;
    } while (plVar7 != plVar14);
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0133a920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar7,lVar9 - (long)plVar7,8);
  return;
}


