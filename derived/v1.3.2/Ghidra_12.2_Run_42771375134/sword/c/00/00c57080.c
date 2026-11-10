/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c57080; name: FUN_00c57080
 */


void FUN_00c57080(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  
  puVar1 = PTR_DAT_02710860;
  puVar5 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar5 >> 3)) {
    while( true ) {
      lVar2 = param_1[3];
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar7 + 0x80)) break;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar2;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar5 = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      puVar5 = (undefined8 *)(param_1[1] + 8);
      param_2 = param_2 - 1;
      param_1[1] = (long)puVar5;
      if (param_2 == 0) {
        return;
      }
    }
LAB_00c572e8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = (long)puVar5 - *param_1 >> 3;
  uVar8 = lVar7 + param_2;
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1;
  if ((ulong)(lVar2 >> 3) < 0xfffffffffffffff) {
    uVar3 = lVar2 >> 2;
    if (uVar8 <= uVar3) {
      uVar8 = uVar3;
    }
    if (uVar8 == 0) {
      lVar2 = 0;
      goto LAB_00c57188;
    }
  }
  else {
    uVar8 = 0x1fffffffffffffff;
  }
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 3,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00c57188:
  puVar1 = PTR_DAT_02710860;
  puVar5 = (undefined8 *)(lVar2 + lVar7 * 8);
  puVar9 = puVar5;
  do {
    lVar11 = param_1[3];
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00c572e8;
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    param_2 = param_2 - 1;
    puVar10 = puVar9 + 1;
    *puVar9 = 0;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    puVar9 = puVar10;
  } while (param_2 != 0);
  plVar4 = (long *)*param_1;
  plVar12 = (long *)param_1[1];
  if (plVar12 == plVar4) {
    plVar12 = plVar4;
  }
  else {
    do {
      lVar11 = param_1[3];
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00c572e8;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      lVar11 = plVar12[-1];
      plVar12 = plVar12 + -1;
      puVar5[-1] = lVar11;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      puVar5 = puVar5 + -1;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    } while (plVar4 != plVar12);
    plVar4 = (long *)*param_1;
    plVar12 = (long *)param_1[1];
  }
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar10;
  lVar7 = param_1[2];
  param_1[2] = lVar2 + uVar8 * 8;
  if (plVar12 != plVar4) {
    do {
      plVar6 = plVar12 + -1;
      if (*plVar6 != 0) {
        (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
        plVar12[-1] = 0;
      }
      plVar12 = plVar6;
    } while (plVar4 != plVar6);
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c572c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar4,lVar7 - (long)plVar4,8);
  return;
}


