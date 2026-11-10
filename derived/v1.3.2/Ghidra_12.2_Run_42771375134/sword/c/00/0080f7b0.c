/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080f7b0; name: FUN_0080f7b0
 */


void FUN_0080f7b0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  void *__dest;
  string *this;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *__src;
  size_t __n;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  plVar6 = (long *)*param_2;
  if ((plVar6 == (long *)0x0) ||
     (lVar2 = *plVar6, lVar4 = plVar6[1], (int)((ulong)(lVar4 - lVar2) >> 4) < 1)) {
    return;
  }
  puVar9 = (undefined8 *)*param_1;
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = operator_new(0x18);
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    *param_1 = (long)puVar9;
  }
  lVar10 = 0;
  lVar12 = 1;
  do {
    lVar13 = *(long *)*param_2;
    puVar3 = (undefined8 *)puVar9[1];
    if (puVar3 == (undefined8 *)puVar9[2]) {
      __src = (void *)*puVar9;
      __n = (long)puVar3 - (long)__src;
      uVar11 = ((long)__n >> 4) + 1;
      if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar7 = (long)puVar9[2] - (long)__src;
      if ((ulong)(lVar7 >> 4) < 0x7ffffffffffffff) {
        uVar8 = lVar7 >> 3;
        if (uVar11 <= uVar8) {
          uVar11 = uVar8;
        }
        if (uVar11 != 0) {
          if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_0080f8b0;
        }
        __dest = (void *)0x0;
      }
      else {
        uVar11 = 0xfffffffffffffff;
LAB_0080f8b0:
        __dest = operator_new(uVar11 << 4);
      }
      puVar3 = (undefined8 *)(lVar13 + lVar10);
      uVar5 = puVar3[1];
      puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *puVar9 = __dest;
      puVar9[1] = puVar1 + 2;
      puVar9[2] = (void *)((long)__dest + uVar11 * 0x10);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      puVar1 = (undefined8 *)(lVar13 + lVar10);
      uVar5 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar5;
      puVar9[1] = puVar9[1] + 0x10;
    }
    lVar13 = *(long *)(*param_1 + 8);
    if (*(int *)(lVar13 + -0xc) == 4) {
      this = operator_new(8);
      *(undefined8 *)this = 0;
      FUN_0080f5d0(this,*(undefined8 *)(lVar13 + -8));
LAB_0080f950:
      *(string **)(lVar13 + -8) = this;
    }
    else if (*(int *)(lVar13 + -0xc) == 3) {
      this = operator_new(0x18);
      std::string::string(this,*(string **)(lVar13 + -8));
      goto LAB_0080f950;
    }
    if ((lVar4 - lVar2) * 0x10000000 >> 0x20 <= lVar12) {
      return;
    }
    puVar9 = (undefined8 *)*param_1;
    lVar10 = lVar10 + 0x10;
    lVar12 = lVar12 + 1;
  } while( true );
}


