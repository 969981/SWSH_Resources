/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080f5d0; name: FUN_0080f5d0
 */


void FUN_0080f5d0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *__dest;
  string *this;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  void *__src;
  size_t __n;
  long lVar11;
  long lVar12;
  long lVar13;
  
  plVar7 = (long *)*param_2;
  if ((plVar7 == (long *)0x0) ||
     (lVar2 = *plVar7, lVar4 = plVar7[1], (int)((ulong)(lVar4 - lVar2) >> 4) < 1)) {
    return;
  }
  puVar6 = operator_new(0x18);
  lVar11 = 0;
  lVar12 = 1;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  *param_1 = (long)puVar6;
  do {
    lVar13 = *(long *)*param_2;
    puVar3 = (undefined8 *)puVar6[1];
    if (puVar3 == (undefined8 *)puVar6[2]) {
      __src = (void *)*puVar6;
      __n = (long)puVar3 - (long)__src;
      uVar10 = ((long)__n >> 4) + 1;
      if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar8 = (long)puVar6[2] - (long)__src;
      if ((ulong)(lVar8 >> 4) < 0x7ffffffffffffff) {
        uVar9 = lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (uVar10 != 0) {
          if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_0080f6c8;
        }
        __dest = (void *)0x0;
      }
      else {
        uVar10 = 0xfffffffffffffff;
LAB_0080f6c8:
        __dest = operator_new(uVar10 << 4);
      }
      puVar3 = (undefined8 *)(lVar13 + lVar11);
      uVar5 = puVar3[1];
      puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *puVar6 = __dest;
      puVar6[1] = puVar1 + 2;
      puVar6[2] = (void *)((long)__dest + uVar10 * 0x10);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      puVar1 = (undefined8 *)(lVar13 + lVar11);
      uVar5 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar5;
      puVar6[1] = puVar6[1] + 0x10;
    }
    lVar13 = *(long *)(*param_1 + 8);
    if (*(int *)(lVar13 + -0xc) == 4) {
      this = operator_new(8);
      *(undefined8 *)this = 0;
      FUN_0080f5d0(this,*(undefined8 *)(lVar13 + -8));
LAB_0080f768:
      *(string **)(lVar13 + -8) = this;
    }
    else if (*(int *)(lVar13 + -0xc) == 3) {
      this = operator_new(0x18);
      std::string::string(this,*(string **)(lVar13 + -8));
      goto LAB_0080f768;
    }
    if ((lVar4 - lVar2) * 0x10000000 >> 0x20 <= lVar12) {
      return;
    }
    puVar6 = (undefined8 *)*param_1;
    lVar11 = lVar11 + 0x10;
    lVar12 = lVar12 + 1;
  } while( true );
}


