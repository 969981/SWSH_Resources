/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e5aa0; name: FUN_013e5aa0
 */


undefined1  [16]
FUN_013e5aa0(long *param_1,void *param_2,long *param_3,void *param_4,long *param_5,long param_6)

{
  long lVar1;
  size_t __n;
  void *pvVar2;
  void *__src;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  if (param_4 != param_2) {
    lVar11 = (((long)param_4 - *param_3 >> 3) + ((long)param_3 - (long)param_1) * 0x40) -
             ((long)param_2 - *param_1 >> 3);
joined_r0x013e5af8:
    if (0 < lVar11) {
      do {
        pvVar3 = (void *)*param_3;
        if (pvVar3 == param_4) {
          param_3 = param_3 + -1;
          pvVar3 = (void *)*param_3;
          param_4 = (void *)((long)pvVar3 + 0x1000);
        }
        lVar5 = (long)param_4 - (long)pvVar3 >> 3;
        lVar1 = lVar11;
        pvVar2 = (void *)((long)param_4 + lVar11 * -8);
        if (lVar5 <= lVar11) {
          lVar1 = lVar5;
          pvVar2 = pvVar3;
        }
        if (param_4 != pvVar2) {
          pvVar3 = param_4;
          do {
            while( true ) {
              lVar5 = param_6 - *param_5 >> 3;
              if (param_6 - *param_5 < 9) {
                uVar7 = 0x200 - lVar5;
                uVar4 = 0x3ff - lVar5;
                if (-1 < (long)uVar7) {
                  uVar4 = uVar7;
                }
                plVar6 = param_5 + -((long)uVar4 >> 9);
                lVar5 = *plVar6 + ((uVar4 & 0x1ffffffffffffe00) - uVar7) * 8 + 0xff8;
              }
              else {
                plVar6 = (long *)((long)param_5 + (lVar5 - 1U >> 6 & 0x3fffffffffffff8));
                lVar5 = *plVar6 + (lVar5 - 1U & 0x1ff) * 8;
              }
              lVar8 = (lVar5 + 8) - *plVar6;
              lVar10 = (long)pvVar3 - (long)pvVar2 >> 3;
              lVar9 = lVar8 >> 3;
              __src = (void *)((long)pvVar3 - lVar8);
              if (lVar10 <= lVar9) {
                lVar9 = lVar10;
                __src = pvVar2;
              }
              __n = (long)pvVar3 - (long)__src;
              if (__n != 0) {
                memmove((void *)((lVar5 + 8) - __n),__src,__n);
              }
              pvVar3 = __src;
              if (lVar9 != 0) break;
LAB_013e5c14:
              if (__src == pvVar2) goto LAB_013e5c5c;
            }
            uVar4 = (param_6 - *param_5 >> 3) - lVar9;
            if (0 < (long)uVar4) {
              param_5 = (long *)((long)param_5 + (uVar4 >> 6 & 0x3fffffffffffff8));
              param_6 = *param_5 + (uVar4 & 0x1ff) * 8;
              goto LAB_013e5c14;
            }
            uVar7 = 0x1ff - uVar4;
            uVar4 = 0x3fe - uVar4;
            if (-1 < (long)uVar7) {
              uVar4 = uVar7;
            }
            param_5 = param_5 + -((long)uVar4 >> 9);
            param_6 = *param_5 + ((uVar4 & 0x1ffffffffffffe00) - uVar7) * 8 + 0xff8;
          } while (__src != pvVar2);
        }
LAB_013e5c5c:
        param_4 = (void *)((long)param_4 + -8);
        lVar11 = lVar11 - lVar1;
        if (lVar1 + -1 == 0) goto joined_r0x013e5af8;
        uVar4 = ((long)param_4 - *param_3 >> 3) - (lVar1 + -1);
        if ((long)uVar4 < 1) {
          uVar7 = 0x1ff - uVar4;
          uVar4 = 0x3fe - uVar4;
          if (-1 < (long)uVar7) {
            uVar4 = uVar7;
          }
          param_3 = param_3 + -((long)uVar4 >> 9);
          param_4 = (void *)(*param_3 + ((uVar4 & 0x1ffffffffffffe00) - uVar7) * 8 + 0xff8);
        }
        else {
          param_3 = (long *)((long)param_3 + (uVar4 >> 6 & 0x3fffffffffffff8));
          param_4 = (void *)(*param_3 + (uVar4 & 0x1ff) * 8);
        }
        if (lVar11 < 1) break;
      } while( true );
    }
  }
  auVar12._8_8_ = param_6;
  auVar12._0_8_ = param_5;
  return auVar12;
}


