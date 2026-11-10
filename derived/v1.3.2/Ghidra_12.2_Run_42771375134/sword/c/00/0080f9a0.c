/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080f9a0; name: FUN_0080f9a0
 */


void FUN_0080f9a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  void *__dest;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  size_t __n;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  plVar8 = (long *)*param_2;
  if (plVar8 != (long *)0x0) {
    lVar2 = *plVar8;
    lVar4 = plVar8[1];
    if (0 < (int)((ulong)(lVar4 - lVar2) >> 4)) {
      puVar11 = (undefined8 *)*param_1;
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = operator_new(0x18);
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = 0;
        *param_1 = puVar11;
      }
      lVar12 = 0;
      lVar14 = 1;
      do {
        lVar15 = *(long *)*param_2;
        puVar3 = (undefined8 *)puVar11[1];
        if (puVar3 == (undefined8 *)puVar11[2]) {
          pvVar7 = (void *)*puVar11;
          __n = (long)puVar3 - (long)pvVar7;
          uVar13 = ((long)__n >> 4) + 1;
          if (uVar13 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar9 = (long)puVar11[2] - (long)pvVar7;
          if ((ulong)(lVar9 >> 4) < 0x7ffffffffffffff) {
            uVar10 = lVar9 >> 3;
            if (uVar13 <= uVar10) {
              uVar13 = uVar10;
            }
            if (uVar13 != 0) {
              if (uVar13 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_0080faa0;
            }
            __dest = (void *)0x0;
          }
          else {
            uVar13 = 0xfffffffffffffff;
LAB_0080faa0:
            __dest = operator_new(uVar13 << 4);
          }
          puVar3 = (undefined8 *)(lVar15 + lVar12);
          uVar5 = puVar3[1];
          puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
          *puVar1 = *puVar3;
          puVar1[1] = uVar5;
          if (0 < (long)__n) {
            memcpy(__dest,pvVar7,__n);
          }
          *puVar11 = __dest;
          puVar11[1] = puVar1 + 2;
          puVar11[2] = (void *)((long)__dest + uVar13 * 0x10);
          if (pvVar7 != (void *)0x0) {
            operator_delete(pvVar7);
          }
        }
        else {
          puVar1 = (undefined8 *)(lVar15 + lVar12);
          uVar5 = puVar1[1];
          *puVar3 = *puVar1;
          puVar3[1] = uVar5;
          puVar11[1] = puVar11[1] + 0x10;
        }
        iVar6 = *(int *)(*(long *)*param_2 + lVar12 + 4);
        if ((iVar6 == 4) || (iVar6 == 3)) {
          *(undefined8 *)(*(long *)*param_2 + lVar12 + 8) = 0;
        }
        if ((lVar4 - lVar2) * 0x10000000 >> 0x20 <= lVar14) break;
        puVar11 = (undefined8 *)*param_1;
        lVar12 = lVar12 + 0x10;
        lVar14 = lVar14 + 1;
      } while( true );
    }
    puVar11 = (undefined8 *)*param_2;
    if (puVar11 != (undefined8 *)0x0) {
      pvVar7 = (void *)*puVar11;
      if (pvVar7 != (void *)0x0) {
        puVar11[1] = pvVar7;
        operator_delete(pvVar7);
      }
      operator_delete(puVar11);
    }
  }
  *param_2 = 0;
  return;
}


