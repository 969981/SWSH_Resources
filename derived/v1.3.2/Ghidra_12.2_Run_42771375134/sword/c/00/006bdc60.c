/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bdc60; name: FUN_006bdc60
 */


void FUN_006bdc60(long *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar11 = 0x666666666666666;
  uVar1 = lVar4 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar6 * -0x3333333333333333) < 0x333333333333333) {
    uVar7 = lVar6 * -0x6666666666666666;
    uVar11 = uVar1;
    if (uVar1 <= uVar7) {
      uVar11 = uVar7;
    }
    if (uVar11 == 0) {
      lVar6 = 0;
      goto LAB_006bdd1c;
    }
  }
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 * 0x28,8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006bdd1c:
  puVar2 = PTR_DAT_02710860;
  lVar14 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_006bdebc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar14;
  puVar13 = (undefined8 *)(lVar6 + lVar4 * 8);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar13[3] = 0;
  puVar13[4] = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  plVar10 = (long *)*param_1;
  plVar15 = (long *)param_1[1];
  if (plVar15 == plVar10) {
    puVar5 = puVar13;
    plVar15 = plVar10;
  }
  else {
    lVar4 = 0;
    do {
      lVar14 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006bdebc;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar14;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar8 = *(undefined8 *)((long)plVar15 + lVar4 + -0x28);
      *(undefined8 *)((long)plVar15 + lVar4 + -0x28) = 0;
      *(undefined8 *)((long)puVar13 + lVar4 + -0x28) = uVar8;
      uVar8 = *(undefined8 *)((long)plVar15 + lVar4 + -0x20);
      uVar9 = *(undefined8 *)((long)plVar15 + lVar4 + -0x10);
      *(undefined8 *)((long)puVar13 + lVar4 + -0x18) =
           *(undefined8 *)((long)plVar15 + lVar4 + -0x18);
      *(undefined8 *)((long)puVar13 + lVar4 + -0x10) = uVar9;
      *(undefined8 *)((long)puVar13 + lVar4 + -0x20) = uVar8;
      *(undefined4 *)((long)puVar13 + lVar4 + -8) = *(undefined4 *)((long)plVar15 + lVar4 + -8);
      lVar4 = lVar4 + -0x28;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while ((long)plVar10 - (long)plVar15 != lVar4);
    plVar10 = (long *)*param_1;
    puVar5 = (undefined8 *)((long)puVar13 + lVar4);
    plVar15 = (long *)param_1[1];
  }
  lVar4 = param_1[2];
  *param_1 = (long)puVar5;
  param_1[1] = (long)(puVar13 + 5);
  param_1[2] = lVar6 + uVar11 * 0x28;
  if (plVar15 != plVar10) {
    do {
      plVar12 = plVar15 + -5;
      lVar6 = *plVar12;
      *plVar12 = 0;
      if (lVar6 != 0) {
        if (*(long *)(lVar6 + 0x20) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar6 + 0x20) + 0x48) + 0x18))();
          *(undefined8 *)(lVar6 + 0x20) = 0;
        }
        (**(code **)(*(long *)plVar15[-4] + 0x18))
                  ((long *)plVar15[-4],lVar6,plVar15[-3],plVar15[-2]);
      }
      plVar15 = plVar12;
    } while (plVar10 != plVar12);
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006bde9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar10,lVar4 - (long)plVar10,8);
  return;
}


