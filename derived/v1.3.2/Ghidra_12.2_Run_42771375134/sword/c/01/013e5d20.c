/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e5d20; name: FUN_013e5d20
 */


undefined1  [16]
FUN_013e5d20(long *param_1,void *param_2,long *param_3,void *param_4,long *param_5,void *param_6)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  if (param_4 == param_2) {
LAB_013e5ed8:
    auVar11._8_8_ = param_6;
    auVar11._0_8_ = param_5;
    return auVar11;
  }
  lVar10 = (((long)param_4 - *param_3 >> 3) + ((long)param_3 - (long)param_1) * 0x40) -
           ((long)param_2 - *param_1 >> 3);
joined_r0x013e5d78:
  if (0 < lVar10) {
    do {
      lVar7 = (*param_1 + 0x1000) - (long)param_2 >> 3;
      lVar2 = lVar10;
      pvVar3 = (void *)((long)param_2 + lVar10 * 8);
      if (lVar7 <= lVar10) {
        lVar2 = lVar7;
        pvVar3 = (void *)(*param_1 + 0x1000);
      }
      if (pvVar3 != param_2) {
        pvVar5 = param_2;
        do {
          while( true ) {
            lVar6 = (*param_5 + 0x1000) - (long)param_6;
            lVar9 = (long)pvVar3 - (long)pvVar5 >> 3;
            lVar7 = lVar6 >> 3;
            pvVar4 = (void *)((long)pvVar5 + lVar6);
            if (lVar9 <= lVar7) {
              lVar7 = lVar9;
              pvVar4 = pvVar3;
            }
            if ((long)pvVar4 - (long)pvVar5 != 0) {
              memmove(param_6,pvVar5,(long)pvVar4 - (long)pvVar5);
            }
            pvVar5 = pvVar4;
            if (lVar7 != 0) break;
LAB_013e5e14:
            if (pvVar4 == pvVar3) goto LAB_013e5e60;
          }
          uVar1 = lVar7 + ((long)param_6 - *param_5 >> 3);
          if (0 < (long)uVar1) {
            param_5 = (long *)((long)param_5 + (uVar1 >> 6 & 0x3fffffffffffff8));
            param_6 = (void *)(*param_5 + (uVar1 & 0x1ff) * 8);
            goto LAB_013e5e14;
          }
          uVar8 = 0x1ff - uVar1;
          uVar1 = 0x3fe - uVar1;
          if (-1 < (long)uVar8) {
            uVar1 = uVar8;
          }
          param_5 = param_5 + -((long)uVar1 >> 9);
          param_6 = (void *)(*param_5 + ((uVar1 & 0x1ffffffffffffe00) - uVar8) * 8 + 0xff8);
        } while (pvVar4 != pvVar3);
      }
LAB_013e5e60:
      lVar10 = lVar10 - lVar2;
      if (lVar2 != 0) {
        uVar1 = lVar2 + ((long)param_2 - *param_1 >> 3);
        if ((long)uVar1 < 1) goto LAB_013e5ea0;
        param_1 = (long *)((long)param_1 + (uVar1 >> 6 & 0x3fffffffffffff8));
        param_2 = (void *)(*param_1 + (uVar1 & 0x1ff) * 8);
      }
      if (lVar10 < 1) break;
    } while( true );
  }
  goto LAB_013e5ed8;
LAB_013e5ea0:
  uVar8 = 0x1ff - uVar1;
  uVar1 = 0x3fe - uVar1;
  if (-1 < (long)uVar8) {
    uVar1 = uVar8;
  }
  param_1 = param_1 + -((long)uVar1 >> 9);
  param_2 = (void *)(*param_1 + ((uVar1 & 0x1ffffffffffffe00) - uVar8) * 8 + 0xff8);
  goto joined_r0x013e5d78;
}


