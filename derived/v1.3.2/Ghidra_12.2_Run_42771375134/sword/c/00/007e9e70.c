/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e9e70; name: FUN_007e9e70
 */


void FUN_007e9e70(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  size_t sVar7;
  int *piVar8;
  ulong uVar9;
  
  FUN_007e97c0(*(undefined8 *)(param_1 + 0x10));
  puVar1 = (undefined4 *)param_2[1];
  if (puVar1 == (undefined4 *)param_2[2]) {
    pvVar6 = (void *)*param_2;
    sVar7 = (long)puVar1 - (long)pvVar6;
    uVar9 = ((long)sVar7 >> 2) + 1;
    if (uVar9 >> 0x3e != 0) goto LAB_007ea05c;
    lVar4 = (long)param_2[2] - (long)pvVar6;
    if ((ulong)(lVar4 >> 2) < 0x1fffffffffffffff) {
      uVar5 = lVar4 >> 1;
      if (uVar9 <= uVar5) {
        uVar9 = uVar5;
      }
      if (uVar9 != 0) {
        if (uVar9 >> 0x3e != 0) goto LAB_007e9fd4;
        goto LAB_007e9f08;
      }
      pvVar3 = (void *)0x0;
    }
    else {
      uVar9 = 0x3fffffffffffffff;
LAB_007e9f08:
      pvVar3 = operator_new(uVar9 << 2);
    }
    puVar1 = (undefined4 *)((long)pvVar3 + ((long)sVar7 >> 2) * 4);
    piVar8 = puVar1 + 1;
    *puVar1 = 8;
    if (0 < (long)sVar7) {
      memcpy(pvVar3,pvVar6,sVar7);
    }
    *param_2 = pvVar3;
    param_2[1] = piVar8;
    param_2[2] = (void *)((long)pvVar3 + uVar9 * 4);
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
      piVar8 = (int *)param_2[1];
    }
  }
  else {
    *puVar1 = 8;
    piVar8 = (int *)(param_2[1] + 4);
    param_2[1] = piVar8;
  }
  iVar2 = (int)((ulong)(param_1 - *(long *)(*(long *)(param_1 + 0x10) + 0x40)) >> 4) * -0x55555555;
  if (piVar8 < (int *)param_2[2]) {
    *piVar8 = iVar2;
    param_2[1] = param_2[1] + 4;
    return;
  }
  pvVar6 = (void *)*param_2;
  sVar7 = (long)piVar8 - (long)pvVar6;
  uVar9 = ((long)sVar7 >> 2) + 1;
  if (uVar9 >> 0x3e != 0) {
LAB_007ea05c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = (long)param_2[2] - (long)pvVar6;
  if ((ulong)(lVar4 >> 2) < 0x1fffffffffffffff) {
    uVar5 = lVar4 >> 1;
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_007e9fe8;
    }
    if (uVar9 >> 0x3e != 0) {
LAB_007e9fd4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar9 = 0x3fffffffffffffff;
  }
  pvVar3 = operator_new(uVar9 << 2);
LAB_007e9fe8:
  piVar8 = (int *)((long)pvVar3 + ((long)sVar7 >> 2) * 4);
  *piVar8 = iVar2;
  if (0 < (long)sVar7) {
    memcpy(pvVar3,pvVar6,sVar7);
  }
  *param_2 = pvVar3;
  param_2[1] = piVar8 + 1;
  param_2[2] = (void *)((long)pvVar3 + uVar9 * 4);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar6);
  return;
}


