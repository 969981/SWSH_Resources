/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d9d40; name: FUN_006d9d40
 */


void FUN_006d9d40(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  
  puVar1 = PTR_DAT_02710860;
  puVar6 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar6 >> 3)) {
    while( true ) {
      lVar3 = param_1[3];
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar7 + 0x80)) break;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar3;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar6 = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      puVar6 = (undefined8 *)(param_1[1] + 8);
      param_2 = param_2 - 1;
      param_1[1] = (long)puVar6;
      if (param_2 == 0) {
        return;
      }
    }
LAB_006d9fa8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = (long)puVar6 - *param_1 >> 3;
  uVar8 = lVar7 + param_2;
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 == 0) {
      lVar3 = 0;
      goto LAB_006d9e48;
    }
  }
  else {
    uVar8 = 0x1fffffffffffffff;
  }
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 3,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006d9e48:
  puVar1 = PTR_DAT_02710860;
  puVar6 = (undefined8 *)(lVar3 + lVar7 * 8);
  puVar9 = puVar6;
  do {
    lVar11 = param_1[3];
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_006d9fa8;
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    param_2 = param_2 - 1;
    puVar10 = puVar9 + 1;
    *puVar9 = 0;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    puVar9 = puVar10;
  } while (param_2 != 0);
  plVar5 = (long *)*param_1;
  plVar12 = (long *)param_1[1];
  if (plVar12 == plVar5) {
    plVar12 = plVar5;
  }
  else {
    do {
      lVar11 = param_1[3];
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_006d9fa8;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      plVar2 = (long *)plVar12[-1];
      plVar12 = plVar12 + -1;
      puVar6[-1] = plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      puVar6 = puVar6 + -1;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    } while (plVar5 != plVar12);
    plVar5 = (long *)*param_1;
    plVar12 = (long *)param_1[1];
  }
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar10;
  lVar7 = param_1[2];
  param_1[2] = lVar3 + uVar8 * 8;
  if (plVar12 != plVar5) {
    do {
      plVar2 = plVar12 + -1;
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 0x18))();
        plVar12[-1] = 0;
      }
      plVar12 = plVar2;
    } while (plVar5 != plVar2);
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006d9f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar5,lVar7 - (long)plVar5,8);
  return;
}


