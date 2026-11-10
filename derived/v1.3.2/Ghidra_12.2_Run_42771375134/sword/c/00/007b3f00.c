/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b3f00; name: FUN_007b3f00
 */


void FUN_007b3f00(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t __n;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *__dest;
  ulong uVar6;
  
  uVar6 = (long)param_3 - (long)param_2 >> 3;
  lVar2 = param_1[2];
  __dest = (void *)*param_1;
  if ((ulong)(lVar2 - (long)__dest >> 3) < uVar6) {
    if (__dest != (void *)0x0) {
      param_1[1] = (long)__dest;
      FUN_017cd7a0(__dest);
      lVar2 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    if (uVar6 >> 0x3d != 0) {
LAB_007b3f90:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar2 >> 3) < 0xfffffffffffffff) {
      uVar3 = lVar2 >> 2;
      if ((uVar6 <= uVar3) && (uVar6 = uVar3, uVar3 >> 0x3d != 0)) goto LAB_007b3f90;
    }
    else {
      uVar6 = 0x1fffffffffffffff;
    }
    puVar1 = (undefined8 *)FUN_017cd750(uVar6 * 8);
    param_1[2] = (long)(puVar1 + uVar6);
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar1;
    if (param_2 != param_3) {
      uVar6 = (long)param_3 + (-8 - (long)param_2);
      puVar5 = param_2;
      if (((uint)uVar6 >> 3 & 1) == 0) {
        puVar5 = param_2 + 1;
        *puVar1 = *param_2;
        puVar1 = (undefined8 *)(param_1[1] + 8);
        param_1[1] = (long)puVar1;
      }
      if (7 < uVar6) {
        do {
          *puVar1 = *puVar5;
          lVar2 = param_1[1];
          param_1[1] = lVar2 + 8;
          *(undefined8 *)(lVar2 + 8) = puVar5[1];
          puVar5 = puVar5 + 2;
          puVar1 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar1;
        } while (puVar5 != param_3);
      }
    }
  }
  else {
    uVar3 = param_1[1] - (long)__dest >> 3;
    puVar1 = (undefined8 *)((long)param_2 + (param_1[1] - (long)__dest));
    puVar5 = puVar1;
    if (uVar6 <= uVar3) {
      puVar5 = param_3;
    }
    __n = (long)puVar5 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar3 < uVar6) {
      if (puVar5 != param_3) {
        puVar4 = (undefined8 *)param_1[1];
        uVar6 = (long)param_3 + (~uVar3 * 8 - (long)param_2);
        puVar5 = puVar1;
        if (((uint)uVar6 >> 3 & 1) == 0) {
          puVar5 = puVar1 + 1;
          *puVar4 = *puVar1;
          puVar4 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar4;
        }
        if (7 < uVar6) {
          do {
            *puVar4 = *puVar5;
            lVar2 = param_1[1];
            param_1[1] = lVar2 + 8;
            *(undefined8 *)(lVar2 + 8) = puVar5[1];
            puVar5 = puVar5 + 2;
            puVar4 = (undefined8 *)(param_1[1] + 8);
            param_1[1] = (long)puVar4;
          } while (puVar5 != param_3);
        }
      }
    }
    else {
      param_1[1] = (long)((long)__dest + ((long)__n >> 3) * 8);
    }
  }
  return;
}


