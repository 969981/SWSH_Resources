/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007fb2d0; name: FUN_007fb2d0
 */


void FUN_007fb2d0(long *param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  puVar4 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar4 >> 3)) {
    uVar6 = param_2;
    if ((param_2 & 1) != 0) {
      *puVar4 = 0;
      puVar4 = (undefined8 *)(param_1[1] + 8);
      uVar6 = param_2 - 1;
      param_1[1] = (long)puVar4;
    }
    if (param_2 != 1) {
      do {
        *puVar4 = 0;
        lVar5 = param_1[1];
        param_1[1] = lVar5 + 8;
        *(undefined8 *)(lVar5 + 8) = 0;
        puVar4 = (undefined8 *)(param_1[1] + 8);
        uVar6 = uVar6 - 2;
        param_1[1] = (long)puVar4;
      } while (uVar6 != 0);
    }
    return;
  }
  lVar5 = (long)puVar4 - *param_1 >> 3;
  uVar6 = lVar5 + param_2;
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1;
  if ((ulong)(lVar2 >> 3) < 0xfffffffffffffff) {
    uVar3 = lVar2 >> 2;
    if (uVar6 <= uVar3) {
      uVar6 = uVar3;
    }
    if (uVar6 == 0) {
      pvVar1 = (void *)0x0;
      goto LAB_007fb3ac;
    }
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar6 = 0x1fffffffffffffff;
  }
  pvVar1 = operator_new(uVar6 << 3);
LAB_007fb3ac:
                    /* WARNING: Subroutine does not return */
  memset((void *)((long)pvVar1 + lVar5 * 8),0,param_2 << 3);
}


