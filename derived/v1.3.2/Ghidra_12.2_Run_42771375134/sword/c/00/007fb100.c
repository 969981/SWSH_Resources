/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007fb100; name: FUN_007fb100
 */


void FUN_007fb100(long *param_1,ulong param_2)

{
  void *__src;
  void *pvVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
  puVar4 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar4 >> 4)) {
    uVar5 = param_2;
    if ((param_2 & 1) != 0) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4 = (undefined8 *)(param_1[1] + 0x10);
      uVar5 = param_2 - 1;
      param_1[1] = (long)puVar4;
    }
    if (param_2 == 1) {
      return;
    }
    do {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      lVar8 = param_1[1];
      param_1[1] = lVar8 + 0x10;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      puVar4 = (undefined8 *)(param_1[1] + 0x10);
      uVar5 = uVar5 - 2;
      param_1[1] = (long)puVar4;
    } while (uVar5 != 0);
    return;
  }
  lVar8 = (long)puVar4 - *param_1 >> 4;
  uVar5 = lVar8 + param_2;
  if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1;
  if ((ulong)(lVar2 >> 4) < 0x7ffffffffffffff) {
    uVar3 = lVar2 >> 3;
    uVar7 = uVar5;
    if (uVar5 <= uVar3) {
      uVar7 = uVar3;
    }
    if (uVar7 == 0) {
      pvVar1 = (void *)0x0;
      puVar4 = (undefined8 *)(lVar8 << 4);
      goto joined_r0x007fb1ec;
    }
    if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar7 = 0xfffffffffffffff;
  }
  pvVar1 = operator_new(uVar7 << 4);
  puVar4 = (undefined8 *)((long)pvVar1 + lVar8 * 0x10);
joined_r0x007fb1ec:
  puVar6 = puVar4;
  uVar3 = param_2;
  if ((param_2 & 3) != 0) {
    lVar8 = -(param_2 & 3);
    do {
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 - 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0);
  }
  if (2 < param_2 - 1) {
    do {
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      uVar3 = uVar3 - 4;
      puVar6[2] = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
      puVar6[4] = 0;
      *(undefined4 *)(puVar6 + 5) = 0;
      puVar6[6] = 0;
      *(undefined4 *)(puVar6 + 7) = 0;
      puVar6 = puVar6 + 8;
    } while (uVar3 != 0);
  }
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar4 - __n),__src,__n);
  }
  *param_1 = (long)((long)puVar4 - __n);
  param_1[1] = (long)((long)pvVar1 + uVar5 * 0x10);
  param_1[2] = (long)((long)pvVar1 + uVar7 * 0x10);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


