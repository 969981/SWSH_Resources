/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f5ccb0; name: FUN_00f5ccb0
 */


void FUN_00f5ccb0(long *param_1,long *param_2,undefined4 *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar10;
  long *plVar9;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  lVar13 = param_1[1] - *param_1 >> 4;
  uVar7 = lVar13 + 1;
  if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  if ((ulong)(lVar4 >> 4) < 0x7ffffffffffffff) {
    uVar5 = lVar4 >> 3;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00f5cd30;
    }
    if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar7 = 0xfffffffffffffff;
  }
  pvVar3 = operator_new(uVar7 << 4);
LAB_00f5cd30:
  lVar4 = *param_2;
  uVar2 = *param_3;
  plVar10 = (long *)((long)pvVar3 + lVar13 * 0x10);
  pvVar1 = (void *)((long)pvVar3 + uVar7 * 0x10);
  *(undefined4 *)(plVar10 + 1) = 0xfffffffe;
  *plVar10 = lVar4;
  FUN_0175f270(lVar4,uVar2);
  uVar2 = FUN_0175dbf0(lVar4,0xfff0b9d8);
  *(undefined4 *)(plVar10 + 1) = uVar2;
  plVar11 = (long *)*param_1;
  plVar9 = (long *)param_1[1];
  if (plVar9 == plVar11) {
    *param_1 = (long)plVar10;
    param_1[1] = (long)(plVar10 + 2);
    param_1[2] = (long)pvVar1;
  }
  else {
    uVar7 = (long)plVar9 + (-0x10 - (long)plVar11);
    plVar6 = plVar9;
    plVar12 = plVar10;
    if (((uint)uVar7 >> 4 & 1) == 0) {
      plVar6 = plVar9 + -2;
      plVar12 = plVar10 + -2;
      *plVar12 = *plVar6;
      *(int *)(plVar10 + -1) = (int)plVar9[-1];
      *plVar6 = 0;
      *(undefined4 *)(plVar9 + -1) = 0xfffffffe;
    }
    if (0xf < uVar7) {
      lVar4 = 0;
      do {
        lVar8 = lVar4 + -0x20;
        *(undefined8 *)((long)plVar12 + lVar4 + -0x10) =
             *(undefined8 *)((long)plVar6 + lVar4 + -0x10);
        *(undefined4 *)((long)plVar12 + lVar4 + -8) = *(undefined4 *)((long)plVar6 + lVar4 + -8);
        *(undefined8 *)((long)plVar6 + lVar4 + -0x10) = 0;
        *(undefined4 *)((long)plVar6 + lVar4 + -8) = 0xfffffffe;
        *(undefined8 *)((long)plVar12 + lVar4 + -0x20) =
             *(undefined8 *)((long)plVar6 + lVar4 + -0x20);
        *(undefined4 *)((long)plVar12 + lVar4 + -0x18) =
             *(undefined4 *)((long)plVar6 + lVar4 + -0x18);
        *(undefined8 *)((long)plVar6 + lVar4 + -0x20) = 0;
        *(undefined4 *)((long)plVar6 + lVar4 + -0x18) = 0xfffffffe;
        lVar4 = lVar8;
      } while ((long)plVar11 - (long)plVar6 != lVar8);
    }
    plVar11 = (long *)*param_1;
    plVar9 = (long *)param_1[1];
    *param_1 = (long)((long)pvVar3 + (lVar13 + (uVar7 >> 4 ^ 0xffffffffffffffff)) * 0x10);
    param_1[1] = (long)(plVar10 + 2);
    param_1[2] = (long)pvVar1;
    if (plVar9 != plVar11) {
      do {
        plVar10 = plVar9 + -2;
        if ((*plVar10 != 0) && ((int)plVar9[-1] != -2)) {
          FUN_0175dcd0(*plVar10,0xfff0b9d8);
        }
        plVar9 = plVar10;
      } while (plVar11 != plVar10);
    }
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
  operator_delete(plVar11);
  return;
}


