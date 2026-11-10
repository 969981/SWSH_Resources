/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e9b10; name: FUN_007e9b10
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007e9b10(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  size_t sVar11;
  ulong uVar12;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    FUN_007e97c0(*(undefined8 *)(param_1 + 0x50),param_2);
    puVar9 = (undefined4 *)param_2[1];
    if (puVar9 != (undefined4 *)param_2[2]) {
      uVar5 = 2;
      goto LAB_007e9b8c;
    }
    pvVar10 = (void *)*param_2;
    sVar11 = (long)puVar9 - (long)pvVar10;
    uVar12 = ((long)sVar11 >> 2) + 1;
    if (uVar12 >> 0x3e != 0) goto LAB_007e9e60;
    lVar7 = (long)param_2[2] - (long)pvVar10;
    if ((ulong)(lVar7 >> 2) < 0x1fffffffffffffff) {
      uVar8 = lVar7 >> 1;
      if (uVar12 <= uVar8) {
        uVar12 = uVar8;
      }
      if (uVar12 != 0) {
        if (uVar12 >> 0x3e != 0) goto LAB_007e9d70;
        goto LAB_007e9df4;
      }
      pvVar4 = (void *)0x0;
    }
    else {
      uVar12 = 0x3fffffffffffffff;
LAB_007e9df4:
      pvVar4 = operator_new(uVar12 << 2);
    }
    puVar9 = (undefined4 *)((long)pvVar4 + ((long)sVar11 >> 2) * 4);
    pvVar1 = (void *)((long)pvVar4 + uVar12 * 4);
    *puVar9 = 2;
joined_r0x007e9e40:
    if (0 < (long)sVar11) {
      memcpy(pvVar4,pvVar10,sVar11);
    }
    *param_2 = pvVar4;
    param_2[1] = puVar9 + 1;
    param_2[2] = pvVar1;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
    if (*(char *)(param_1 + 0x44) == '\0') goto LAB_007e9ba4;
LAB_007e9cdc:
    if (*(long *)(param_1 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(param_1 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 0x60) + 0x80);
    }
  }
  else {
    if (*(long *)(param_1 + 0x60) == 0) {
      puVar9 = (undefined4 *)param_2[1];
      if (puVar9 != (undefined4 *)param_2[2]) {
        uVar5 = 7;
        goto LAB_007e9b8c;
      }
      pvVar10 = (void *)*param_2;
      sVar11 = (long)puVar9 - (long)pvVar10;
      uVar12 = ((long)sVar11 >> 2) + 1;
      if (uVar12 >> 0x3e != 0) goto LAB_007e9e60;
      lVar7 = (long)param_2[2] - (long)pvVar10;
      if ((ulong)(lVar7 >> 2) < 0x1fffffffffffffff) {
        uVar8 = lVar7 >> 1;
        if (uVar12 <= uVar8) {
          uVar12 = uVar8;
        }
        if (uVar12 != 0) {
          if (uVar12 >> 0x3e != 0) goto LAB_007e9d70;
          goto LAB_007e9e20;
        }
        pvVar4 = (void *)0x0;
      }
      else {
        uVar12 = 0x3fffffffffffffff;
LAB_007e9e20:
        pvVar4 = operator_new(uVar12 << 2);
      }
      puVar9 = (undefined4 *)((long)pvVar4 + ((long)sVar11 >> 2) * 4);
      pvVar1 = (void *)((long)pvVar4 + uVar12 * 4);
      *puVar9 = 7;
      goto joined_r0x007e9e40;
    }
    FUN_007e97c0(*(long *)(param_1 + 0x60),param_2);
    puVar9 = (undefined4 *)param_2[1];
    if (puVar9 == (undefined4 *)param_2[2]) {
      pvVar10 = (void *)*param_2;
      sVar11 = (long)puVar9 - (long)pvVar10;
      uVar12 = ((long)sVar11 >> 2) + 1;
      if (uVar12 >> 0x3e != 0) goto LAB_007e9e60;
      lVar7 = (long)param_2[2] - (long)pvVar10;
      if ((ulong)(lVar7 >> 2) < 0x1fffffffffffffff) {
        uVar8 = lVar7 >> 1;
        if (uVar12 <= uVar8) {
          uVar12 = uVar8;
        }
        if (uVar12 != 0) {
          if (uVar12 >> 0x3e != 0) goto LAB_007e9d70;
          goto LAB_007e9c8c;
        }
        pvVar4 = (void *)0x0;
      }
      else {
        uVar12 = 0x3fffffffffffffff;
LAB_007e9c8c:
        pvVar4 = operator_new(uVar12 << 2);
      }
      puVar9 = (undefined4 *)((long)pvVar4 + ((long)sVar11 >> 2) * 4);
      pvVar1 = (void *)((long)pvVar4 + uVar12 * 4);
      *puVar9 = 6;
      goto joined_r0x007e9e40;
    }
    uVar5 = 6;
LAB_007e9b8c:
    *puVar9 = uVar5;
    param_2[1] = param_2[1] + 4;
    if (*(char *)(param_1 + 0x44) != '\0') goto LAB_007e9cdc;
LAB_007e9ba4:
    plVar6 = (long *)(*(long *)(param_1 + 0x50) + 0x30);
  }
  iVar3 = (int)((ulong)(param_1 - *plVar6) >> 4) * 0x38e38e39;
  piVar2 = (int *)param_2[1];
  if (piVar2 < (int *)param_2[2]) {
    *piVar2 = iVar3;
    param_2[1] = param_2[1] + 4;
    return;
  }
  pvVar10 = (void *)*param_2;
  sVar11 = (long)piVar2 - (long)pvVar10;
  uVar12 = ((long)sVar11 >> 2) + 1;
  if (uVar12 >> 0x3e != 0) {
LAB_007e9e60:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = (long)param_2[2] - (long)pvVar10;
  if ((ulong)(lVar7 >> 2) < 0x1fffffffffffffff) {
    uVar8 = lVar7 >> 1;
    if (uVar12 <= uVar8) {
      uVar12 = uVar8;
    }
    if (uVar12 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_007e9d84;
    }
    if (uVar12 >> 0x3e != 0) {
LAB_007e9d70:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar12 = 0x3fffffffffffffff;
  }
  pvVar4 = operator_new(uVar12 << 2);
LAB_007e9d84:
  piVar2 = (int *)((long)pvVar4 + ((long)sVar11 >> 2) * 4);
  *piVar2 = iVar3;
  if (0 < (long)sVar11) {
    memcpy(pvVar4,pvVar10,sVar11);
  }
  *param_2 = pvVar4;
  param_2[1] = piVar2 + 1;
  param_2[2] = (void *)((long)pvVar4 + uVar12 * 4);
  if (pvVar10 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar10);
  return;
}


