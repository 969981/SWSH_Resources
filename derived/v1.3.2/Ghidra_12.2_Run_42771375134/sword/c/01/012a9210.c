/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a9210; name: FUN_012a9210
 */


undefined1 * FUN_012a9210(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  size_t __n;
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar4 = (long)param_4 - (long)param_3;
  if (lVar4 < 1) {
    return param_2;
  }
  puVar8 = (undefined1 *)param_1[1];
  if (lVar4 <= param_1[2] - (long)puVar8) {
    lVar10 = (long)puVar8 - (long)param_2;
    puVar9 = puVar8;
    if (lVar10 < lVar4) {
      puVar2 = param_3 + lVar10;
      if (puVar2 != param_4) {
        puVar3 = puVar2;
        do {
          puVar5 = puVar3 + 1;
          *puVar9 = *puVar3;
          puVar9 = (undefined1 *)(param_1[1] + 1);
          param_1[1] = (long)puVar9;
          puVar3 = puVar5;
        } while (param_4 != puVar5);
      }
      param_4 = puVar2;
      if (lVar10 < 1) {
        return param_2;
      }
    }
    __n = (long)puVar9 - (long)(param_2 + lVar4);
    if (puVar9 + -lVar4 < puVar8) {
      puVar8 = puVar8 + (long)(param_2 + lVar4 + (-(long)param_2 - (long)puVar9));
      puVar3 = puVar9 + -lVar4;
      puVar2 = puVar9;
      do {
        *puVar2 = *puVar3;
        puVar2 = (undefined1 *)(param_1[1] + 1);
        puVar8 = puVar8 + -1;
        param_1[1] = (long)puVar2;
        puVar3 = puVar3 + 1;
      } while (puVar8 != (undefined1 *)0x0);
    }
    if (__n != 0) {
      memmove(puVar9 + -__n,param_2,__n);
    }
    if ((long)param_4 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)param_4 - (long)param_3);
    return param_2;
  }
  lVar10 = *param_1;
  puVar8 = puVar8 + (lVar4 - lVar10);
  if ((long)puVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar1 = param_1[2] - lVar10;
  puVar9 = param_2 + -lVar10;
  if (uVar1 < 0x3fffffffffffffff) {
    puVar2 = (undefined1 *)(uVar1 * 2);
    if (puVar8 <= puVar2) {
      puVar8 = puVar2;
    }
    if (puVar8 == (undefined1 *)0x0) {
      lVar4 = 0;
      goto joined_r0x012a938c;
    }
  }
  else {
    puVar8 = (undefined1 *)0x7fffffffffffffff;
  }
  lVar4 = FUN_017cd750(puVar8);
  puVar9 = puVar9 + lVar4;
joined_r0x012a938c:
  if (param_3 == param_4) {
    puVar2 = (undefined1 *)*param_1;
    puVar3 = puVar9;
  }
  else {
    puVar2 = puVar9;
    puVar3 = param_3;
    do {
      puVar5 = puVar3 + 1;
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar5;
    } while (param_4 != puVar5);
    puVar2 = (undefined1 *)*param_1;
    puVar3 = param_4 + (long)(param_2 + lVar4 + (-lVar10 - (long)param_3));
  }
  if (puVar2 == param_2) {
    puVar5 = (undefined1 *)param_1[1];
    puVar2 = puVar9;
  }
  else {
    puVar5 = param_2 + lVar4 + (-1 - lVar10);
    puVar6 = param_2;
    do {
      puVar6 = puVar6 + -1;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + -1;
    } while (puVar2 != puVar6);
    puVar2 = puVar2 + (lVar4 - lVar10);
    puVar5 = (undefined1 *)param_1[1];
  }
  if (puVar5 != param_2) {
    puVar6 = puVar3;
    do {
      puVar7 = param_2 + 1;
      *puVar6 = *param_2;
      puVar6 = puVar6 + 1;
      param_2 = puVar7;
    } while (puVar5 != puVar7);
    puVar3 = (undefined1 *)((long)puVar3 * 2);
  }
  lVar10 = *param_1;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar3;
  param_1[2] = (long)(puVar8 + lVar4);
  if (lVar10 != 0) {
    FUN_017cd7a0();
  }
  return puVar9;
}


