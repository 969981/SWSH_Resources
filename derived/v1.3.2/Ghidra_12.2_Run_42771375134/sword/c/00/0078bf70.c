/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078bf70; name: FUN_0078bf70
 */


void FUN_0078bf70(long *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar4 = param_1[1] - *param_1 >> 5;
  uVar8 = 0x2aaaaaaaaaaaaaa;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 5;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x155555555555555) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
      goto LAB_0078c02c;
    }
  }
  lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 * 0x60,8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_0078c02c:
  puVar2 = PTR_DAT_02710860;
  lVar9 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0078c1b8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
  puVar12 = (undefined8 *)(lVar5 + lVar4 * 0x20);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar12[10] = 0;
  puVar12[0xb] = 0;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  plVar7 = (long *)*param_1;
  puVar13 = puVar12;
  plVar10 = (long *)param_1[1];
  if ((long *)param_1[1] == plVar7) {
    plVar10 = plVar7;
  }
  else {
    do {
      lVar3 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0078c1b8;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar3;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar3 = plVar10[-0xc];
      plVar11 = plVar10 + -0xc;
      puVar13[-0xc] = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      FUN_0078c1d0(puVar13 + -0xb,plVar10 + -0xb);
      puVar13 = puVar13 + -0xc;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      plVar10 = plVar11;
    } while (plVar7 != plVar11);
    plVar7 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
  }
  lVar4 = param_1[2];
  *param_1 = (long)puVar13;
  param_1[1] = (long)(puVar12 + 0xc);
  param_1[2] = lVar5 + uVar8 * 0x60;
  if (plVar10 != plVar7) {
    do {
      FUN_0078c300(plVar10 + -0xb);
      plVar11 = plVar10 + -0xc;
      if (*plVar11 != 0) {
        (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))();
        plVar10[-0xc] = 0;
      }
      plVar10 = plVar11;
    } while (plVar7 != plVar11);
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0078c198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar7,lVar4 - (long)plVar7,8);
  return;
}


