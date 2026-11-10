/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ea070; name: FUN_007ea070
 */


void FUN_007ea070(long param_1,long *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  void *pvVar7;
  size_t sVar8;
  int iVar9;
  ulong uVar10;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined4 *)param_2[1];
    if (puVar1 == (undefined4 *)param_2[2]) {
      pvVar7 = (void *)*param_2;
      sVar8 = (long)puVar1 - (long)pvVar7;
      uVar10 = ((long)sVar8 >> 2) + 1;
      if (uVar10 >> 0x3e != 0) goto LAB_007ea3ac;
      lVar3 = param_2[2] - (long)pvVar7;
      if ((ulong)(lVar3 >> 2) < 0x1fffffffffffffff) {
        uVar5 = lVar3 >> 1;
        if (uVar10 <= uVar5) {
          uVar10 = uVar5;
        }
        if (uVar10 != 0) {
          if (uVar10 >> 0x3e != 0) goto LAB_007ea250;
          goto LAB_007ea258;
        }
        pvVar2 = (void *)0x0;
      }
      else {
        uVar10 = 0x3fffffffffffffff;
LAB_007ea258:
        pvVar2 = operator_new(uVar10 << 2);
      }
      puVar1 = (undefined4 *)((long)pvVar2 + ((long)sVar8 >> 2) * 4);
      *puVar1 = 5;
      if (0 < (long)sVar8) {
        memcpy(pvVar2,pvVar7,sVar8);
      }
      *param_2 = (long)pvVar2;
      param_2[1] = (long)(puVar1 + 1);
      param_2[2] = (long)((long)pvVar2 + uVar10 * 4);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
      }
      lVar3 = *(long *)(param_1 + 0x18);
    }
    else {
      *puVar1 = 5;
      param_2[1] = param_2[1] + 4;
      lVar3 = *(long *)(param_1 + 0x18);
    }
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x10);
    }
    iVar9 = (int)((ulong)(param_1 - *(long *)(lVar3 + 0x60)) >> 3) * -0x49249249;
    piVar6 = (int *)param_2[1];
    if (piVar6 < (int *)param_2[2]) goto LAB_007ea2d0;
    pvVar7 = (void *)*param_2;
    sVar8 = (long)piVar6 - (long)pvVar7;
    lVar3 = (long)sVar8 >> 2;
    uVar10 = lVar3 + 1;
    if (uVar10 >> 0x3e != 0) goto LAB_007ea3ac;
    lVar4 = param_2[2] - (long)pvVar7;
    if ((ulong)(lVar4 >> 2) < 0x1fffffffffffffff) {
      uVar5 = lVar4 >> 1;
      if (uVar10 <= uVar5) {
        uVar10 = uVar5;
      }
      if (uVar10 != 0) goto LAB_007ea248;
LAB_007ea320:
      pvVar2 = (void *)0x0;
      goto LAB_007ea338;
    }
LAB_007ea328:
    uVar10 = 0x3fffffffffffffff;
  }
  else {
    FUN_007e97c0(*(long *)(param_1 + 0x18),param_2);
    puVar1 = (undefined4 *)param_2[1];
    if (puVar1 == (undefined4 *)param_2[2]) {
      pvVar7 = (void *)*param_2;
      sVar8 = (long)puVar1 - (long)pvVar7;
      uVar10 = ((long)sVar8 >> 2) + 1;
      if (uVar10 >> 0x3e != 0) goto LAB_007ea3ac;
      lVar3 = param_2[2] - (long)pvVar7;
      if ((ulong)(lVar3 >> 2) < 0x1fffffffffffffff) {
        uVar5 = lVar3 >> 1;
        if (uVar10 <= uVar5) {
          uVar10 = uVar5;
        }
        if (uVar10 != 0) {
          if (uVar10 >> 0x3e != 0) goto LAB_007ea250;
          goto LAB_007ea194;
        }
        pvVar2 = (void *)0x0;
      }
      else {
        uVar10 = 0x3fffffffffffffff;
LAB_007ea194:
        pvVar2 = operator_new(uVar10 << 2);
      }
      puVar1 = (undefined4 *)((long)pvVar2 + ((long)sVar8 >> 2) * 4);
      *puVar1 = 4;
      if (0 < (long)sVar8) {
        memcpy(pvVar2,pvVar7,sVar8);
      }
      *param_2 = (long)pvVar2;
      param_2[1] = (long)(puVar1 + 1);
      param_2[2] = (long)((long)pvVar2 + uVar10 * 4);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
      }
      lVar3 = *(long *)(param_1 + 0x18);
    }
    else {
      *puVar1 = 4;
      param_2[1] = param_2[1] + 4;
      lVar3 = *(long *)(param_1 + 0x18);
    }
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x10);
    }
    iVar9 = (int)((ulong)(param_1 - *(long *)(lVar3 + 0x60)) >> 3) * -0x49249249;
    piVar6 = (int *)param_2[1];
    if (piVar6 < (int *)param_2[2]) {
LAB_007ea2d0:
      *piVar6 = iVar9;
      param_2[1] = param_2[1] + 4;
      return;
    }
    pvVar7 = (void *)*param_2;
    sVar8 = (long)piVar6 - (long)pvVar7;
    lVar3 = (long)sVar8 >> 2;
    uVar10 = lVar3 + 1;
    if (uVar10 >> 0x3e != 0) {
LAB_007ea3ac:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_2[2] - (long)pvVar7;
    if (0x1ffffffffffffffe < (ulong)(lVar4 >> 2)) goto LAB_007ea328;
    uVar5 = lVar4 >> 1;
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    if (uVar10 == 0) goto LAB_007ea320;
LAB_007ea248:
    if (uVar10 >> 0x3e != 0) {
LAB_007ea250:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  pvVar2 = operator_new(uVar10 << 2);
LAB_007ea338:
  piVar6 = (int *)((long)pvVar2 + lVar3 * 4);
  *piVar6 = iVar9;
  if (0 < (long)sVar8) {
    memcpy(pvVar2,pvVar7,sVar8);
  }
  *param_2 = (long)pvVar2;
  param_2[1] = (long)(piVar6 + 1);
  param_2[2] = (long)((long)pvVar2 + uVar10 * 4);
  if (pvVar7 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar7);
  return;
}


