/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083f2c0; name: FUN_0083f2c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0083f2c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  void *__src;
  size_t sVar10;
  ulong uVar11;
  long *plVar12;
  
  plVar12 = (long *)*param_1;
  do {
    while( true ) {
      if (plVar12 == param_1 + 1) {
        return;
      }
      if (*(char *)((long)plVar12 + 0x31) == '\0') break;
      iVar3 = FUN_00825740(plVar12 + 5);
      if (iVar3 < 1) goto LAB_0083f4bc;
LAB_0083f37c:
      lVar6 = plVar12[7];
      if (lVar6 == 0) {
        uVar4 = FUN_007e3790(param_3,param_2,*(undefined4 *)(plVar12 + 4));
        puVar1 = (undefined8 *)param_4[1];
        if (puVar1 < (undefined8 *)param_4[2]) {
          *puVar1 = uVar4;
          goto LAB_0083f3c8;
        }
        __src = (void *)*param_4;
        sVar10 = (long)puVar1 - (long)__src;
        uVar11 = ((long)sVar10 >> 3) + 1;
        if (uVar11 >> 0x3d != 0) goto LAB_0083f528;
        lVar6 = (long)param_4[2] - (long)__src;
        if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
          uVar9 = lVar6 >> 2;
          if (uVar11 <= uVar9) {
            uVar11 = uVar9;
          }
          if (uVar11 != 0) {
            if (uVar11 >> 0x3d != 0) goto LAB_0083f530;
            goto LAB_0083f314;
          }
          pvVar5 = (void *)0x0;
        }
        else {
          uVar11 = 0x1fffffffffffffff;
LAB_0083f314:
          pvVar5 = operator_new(uVar11 << 3);
        }
        puVar1 = (undefined8 *)((long)pvVar5 + ((long)sVar10 >> 3) * 8);
        *puVar1 = uVar4;
        if (0 < (long)sVar10) {
          memcpy(pvVar5,__src,sVar10);
        }
        *param_4 = pvVar5;
        param_4[1] = puVar1 + 1;
        param_4[2] = (void *)((long)pvVar5 + uVar11 * 8);
joined_r0x0083f34c:
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
        goto LAB_0083f4bc;
      }
      plVar7 = (long *)param_4[1];
      if (plVar7 == (long *)param_4[2]) {
        __src = (void *)*param_4;
        sVar10 = (long)plVar7 - (long)__src;
        uVar11 = ((long)sVar10 >> 3) + 1;
        if (uVar11 >> 0x3d != 0) {
LAB_0083f528:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar8 = (long)param_4[2] - (long)__src;
        if ((ulong)(lVar8 >> 3) < 0xfffffffffffffff) {
          uVar9 = lVar8 >> 2;
          if (uVar11 <= uVar9) {
            uVar11 = uVar9;
          }
          if (uVar11 != 0) {
            if (uVar11 >> 0x3d != 0) {
LAB_0083f530:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            goto LAB_0083f474;
          }
          pvVar5 = (void *)0x0;
        }
        else {
          uVar11 = 0x1fffffffffffffff;
LAB_0083f474:
          pvVar5 = operator_new(uVar11 << 3);
          lVar6 = plVar12[7];
        }
        plVar7 = (long *)((long)pvVar5 + ((long)sVar10 >> 3) * 8);
        *plVar7 = lVar6;
        if (0 < (long)sVar10) {
          memcpy(pvVar5,__src,sVar10);
        }
        *param_4 = pvVar5;
        param_4[1] = plVar7 + 1;
        param_4[2] = (void *)((long)pvVar5 + uVar11 * 8);
        goto joined_r0x0083f34c;
      }
      *plVar7 = lVar6;
LAB_0083f3c8:
      param_4[1] = param_4[1] + 8;
      plVar7 = (long *)plVar12[1];
      if ((long *)plVar12[1] != (long *)0x0) goto LAB_0083f4c4;
LAB_0083f4d4:
      plVar7 = plVar12 + 2;
      bVar2 = (long *)*(long *)*plVar7 != plVar12;
      plVar12 = (long *)*plVar7;
      if (bVar2) {
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(lVar6 + 0x10);
          plVar12 = (long *)*plVar7;
        } while (*plVar12 != lVar6);
      }
    }
    if ((*(byte *)((long)plVar12 + 0x32) & 1) == 0) goto LAB_0083f37c;
LAB_0083f4bc:
    plVar7 = (long *)plVar12[1];
    if ((long *)plVar12[1] == (long *)0x0) goto LAB_0083f4d4;
LAB_0083f4c4:
    do {
      plVar12 = plVar7;
      plVar7 = (long *)*plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  } while( true );
}


