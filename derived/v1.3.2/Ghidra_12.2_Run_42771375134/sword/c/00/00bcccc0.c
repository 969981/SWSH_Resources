/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcccc0; name: FUN_00bcccc0
 */


undefined4
FUN_00bcccc0(long param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,uint param_7,
            uint param_8,uint param_9,byte param_10)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  if ((((param_5 == 2) || (param_2 == 2)) || (param_8 == 0)) || (param_9 == 0)) {
    uVar3 = 0xc;
    goto LAB_00bccef8;
  }
  local_70 = 0;
  FUN_00bcfb40(param_2,param_4,(long)&local_70 + 4,&local_70);
  local_78 = 0;
  uVar7 = FUN_00bcfb40(param_5,param_7,(long)&local_78 + 4,&local_78);
  if (param_5 == 0) {
    if ((5 < (param_8 + local_78._4_4_) - 1) || (4 < (param_9 + (int)local_78) - 1))
    goto LAB_00bccef4;
  }
  else if ((1 < param_8) || (5 < (param_9 + param_7) - 1)) {
LAB_00bccef4:
    uVar3 = 3;
    goto LAB_00bccef8;
  }
  if (param_2 == 0) {
    uVar14 = 0;
    uVar13 = param_4;
    do {
      uVar4 = 0;
      do {
        uVar7 = FUN_00bcd4d0(uVar7,0,param_3,uVar13 + uVar4);
        if ((uVar7 & 1) != 0) goto LAB_00bcd470;
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_8);
      uVar14 = uVar14 + 1;
      uVar13 = uVar13 + 6;
    } while (uVar14 < param_9);
  }
  if ((param_10 & 1) == 0) {
    if (param_5 == 0) {
      uVar7 = FUN_00bcd4d0(uVar7,0,param_6,param_7);
      if ((uVar7 & 1) == 0) {
        uVar14 = param_4;
        if (param_2 != 1) goto LAB_00bccf68;
        goto LAB_00bccf94;
      }
LAB_00bcd470:
      uVar3 = 6;
      goto LAB_00bccef8;
    }
LAB_00bccf68:
    iVar6 = param_3;
    param_3 = param_6;
    if (param_2 != 0 || param_5 != 1) {
      param_3 = -1;
      param_7 = 0xffffffff;
      param_4 = 0xffffffff;
      iVar6 = -1;
    }
    param_6 = iVar6;
    uVar14 = param_7;
    param_7 = param_4;
LAB_00bccf94:
    if ((uVar14 & 0xff) == 0xff) goto LAB_00bccfa4;
    uVar13 = (uint)(char)param_6;
    if ((uVar13 < 0x20) && (uVar4 = (uint)(char)param_7, uVar4 < 0x1e)) {
      uVar12 = *(undefined8 *)(param_1 + 0x68);
      local_68 = *(long *)(param_1 + 0x78);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
      }
      FUN_01505e60(uVar12,&local_68,uVar13,uVar4);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      uVar7 = FUN_008787d0(*(undefined8 *)(param_1 + 0x78));
      if (((uVar7 & 1) == 0) && (lVar8 = *(long *)(param_1 + 0x78), lVar8 != 0)) {
        uVar7 = FUN_0150aef0(*(undefined8 *)(param_1 + 0x70),uVar13,uVar4);
        if ((uVar7 & 1) != 0) {
LAB_00bcd484:
          uVar3 = 7;
          goto LAB_00bccef8;
        }
        uVar7 = FUN_00bcd4d0(uVar7,0,uVar13,uVar4);
        if ((uVar7 & 1) != 0) goto LAB_00bcd470;
        uVar7 = FUN_0087d610(lVar8,2);
        if (((uVar7 & 1) == 0) && (iVar6 = FUN_0087afd0(lVar8), iVar6 != 0)) goto LAB_00bccfa4;
      }
    }
    iVar6 = FUN_00884820(*(undefined8 *)(param_1 + 0x60));
    if (iVar6 != 0) {
      uVar13 = 0;
      do {
        if (((((int)(char)uVar14 != uVar13) &&
             (lVar8 = FUN_00bccb30(param_1,1,(int)(char)param_3,uVar13), lVar8 != 0)) &&
            (uVar7 = FUN_0087d610(lVar8,2), (uVar7 & 1) == 0)) &&
           (iVar6 = FUN_0087afd0(lVar8), iVar6 != 0)) goto LAB_00bccfa4;
        uVar13 = uVar13 + 1;
        uVar4 = FUN_00884820(*(undefined8 *)(param_1 + 0x60));
        uVar3 = 1;
      } while (uVar13 < uVar4);
      goto LAB_00bccef8;
    }
  }
  else {
    iVar6 = 0;
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar4 = 0;
      do {
        uVar3 = FUN_00bcfb20(param_2,uVar4 + local_70._4_4_,(int)local_70 + uVar14);
        lVar8 = FUN_00bccb30(param_1,param_2,param_3,uVar3);
        uVar11 = iVar6 + uVar4;
        uVar4 = uVar4 + 1;
        if (lVar8 != 0) {
          uVar13 = 1 << (ulong)(uVar11 & 0x1f) | uVar13;
        }
      } while (param_8 != uVar4);
      uVar14 = uVar14 + 1;
      iVar6 = iVar6 + 6;
    } while (uVar14 != param_9);
    if (param_5 == 0) {
      uVar14 = 0;
      uVar4 = 0;
      do {
        lVar8 = FUN_00bccb30(param_1,0,param_6,uVar14);
        uVar11 = 0;
        if (lVar8 != 0) {
          uVar11 = 1 << (ulong)(uVar14 & 0x1f);
        }
        uVar14 = uVar14 + 1;
        uVar4 = uVar11 | uVar4;
      } while (uVar14 != 0x1e);
      if (param_2 == 0) goto LAB_00bcd120;
    }
    else {
      lVar8 = FUN_00bccb30(param_1,param_5,param_6,0);
      lVar9 = FUN_00bccb30(param_1,param_5,param_6,1);
      uVar4 = (uint)(lVar8 != 0);
      if (lVar9 != 0) {
        uVar4 = lVar8 != 0 | 0x40;
      }
      lVar8 = FUN_00bccb30(param_1,param_5,param_6,2);
      if (lVar8 != 0) {
        uVar4 = uVar4 | 0x1000;
      }
      lVar8 = FUN_00bccb30(param_1,param_5,param_6,3);
      if (lVar8 != 0) {
        uVar4 = uVar4 | 0x40000;
      }
      lVar8 = FUN_00bccb30(param_1,param_5,param_6,4);
      if (lVar8 != 0) {
        uVar4 = uVar4 | 0x1000000;
      }
      lVar8 = FUN_00bccb30(param_1,param_5,param_6,5);
      if (lVar8 != 0) {
        uVar4 = uVar4 | 0x40000000;
      }
      if (param_2 == param_5) {
LAB_00bcd120:
        if (param_3 == param_6) {
          uVar14 = 0;
          uVar11 = 1;
          do {
            if (param_8 == 1) {
              iVar6 = 0;
            }
            else {
              iVar6 = 0;
              uVar5 = uVar11;
              do {
                uVar1 = local_70._4_4_ + (int)local_70 * 6 + uVar5;
                if ((1 << (ulong)(uVar5 - 1 & 0x1f) & uVar13) != 0) {
                  uVar4 = 1 << (ulong)(uVar1 - 1 & 0x1f) ^ uVar4;
                }
                uVar2 = uVar5 & 0x1f;
                uVar5 = uVar5 + 2;
                iVar6 = iVar6 + 2;
                if ((1 << (ulong)uVar2 & uVar13) != 0) {
                  uVar4 = 1 << (ulong)(uVar1 & 0x1f) ^ uVar4;
                }
              } while (param_8 - (param_8 & 1) != iVar6);
            }
            uVar5 = uVar4;
            if ((1 << (ulong)(iVar6 + uVar14 * 6 & 0x1f) & uVar13) != 0) {
              uVar5 = 1 << (ulong)(local_70._4_4_ + iVar6 + ((int)local_70 + uVar14) * 6 & 0x1f) ^
                      uVar4;
            }
            uVar14 = uVar14 + 1;
            if ((param_8 & 1) != 0) {
              uVar4 = uVar5;
            }
            uVar11 = uVar11 + 6;
          } while (uVar14 != param_9);
        }
      }
    }
    iVar6 = local_78._4_4_ + (int)local_78 * 6;
    iVar10 = 0;
    uVar14 = 0;
    do {
      uVar11 = 0;
      do {
        if (((1 << (ulong)(iVar10 + uVar11 & 0x1f) & uVar13) != 0) &&
           ((1 << (ulong)(iVar6 + uVar11 & 0x1f) & uVar4) != 0)) {
          uVar3 = 2;
          goto LAB_00bccef8;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_8);
      uVar14 = uVar14 + 1;
      iVar6 = iVar6 + 6;
      iVar10 = iVar10 + 6;
    } while (uVar14 < param_9);
    if ((param_2 == 0) && (param_5 == 1)) {
      uVar14 = 0;
      do {
        uVar13 = 0;
        do {
          uVar3 = FUN_00bcfb20(0,uVar13 + local_70._4_4_,(int)local_70 + uVar14);
          lVar8 = FUN_00bccb30(param_1,0,param_3,uVar3);
          if (lVar8 != 0) {
            uVar7 = FUN_0150aef0(*(undefined8 *)(param_1 + 0x70),param_3,uVar3);
            if ((uVar7 & 1) != 0) goto LAB_00bcd484;
            uVar7 = FUN_00bcd4d0(uVar7,0,param_3,uVar3);
            if ((uVar7 & 1) != 0) goto LAB_00bcd470;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < param_8);
        uVar14 = uVar14 + 1;
      } while (uVar14 < param_9);
    }
    if (((((param_2 != 1) || (param_5 != 0)) ||
         (((param_9 = param_9 + param_4, param_4 != 0 || (param_9 == 0)) &&
          (((lVar8 = FUN_00bccb30(param_1,1,param_3,0), lVar8 != 0 &&
            (iVar6 = FUN_0087afd0(), iVar6 != 0)) &&
           (uVar7 = FUN_0087d610(lVar8,2), (uVar7 & 1) == 0)))))) ||
        (((((1 < param_4 || (param_9 < 2)) &&
           (lVar8 = FUN_00bccb30(param_1,1,param_3,1), lVar8 != 0)) &&
          ((iVar6 = FUN_0087afd0(), iVar6 != 0 && (uVar7 = FUN_0087d610(lVar8,2), (uVar7 & 1) == 0))
          )) || (((2 < param_4 || (param_9 < 3)) &&
                 (((lVar8 = FUN_00bccb30(param_1,1,param_3,2), lVar8 != 0 &&
                   (iVar6 = FUN_0087afd0(), iVar6 != 0)) &&
                  (uVar7 = FUN_0087d610(lVar8,2), (uVar7 & 1) == 0)))))))) ||
       ((((3 < param_4 || (param_9 < 4)) &&
         ((lVar8 = FUN_00bccb30(param_1,1,param_3,3), lVar8 != 0 &&
          ((iVar6 = FUN_0087afd0(), iVar6 != 0 && (uVar7 = FUN_0087d610(lVar8,2), (uVar7 & 1) == 0))
          )))) || (((4 < param_4 || (param_9 < 5)) &&
                   (((lVar8 = FUN_00bccb30(param_1,1,param_3,4), lVar8 != 0 &&
                     (iVar6 = FUN_0087afd0(), iVar6 != 0)) &&
                    (uVar7 = FUN_0087d610(lVar8,2), (uVar7 & 1) == 0)))))))) {
LAB_00bccfa4:
      uVar3 = 0;
      goto LAB_00bccef8;
    }
    if ((5 < param_4) || (param_9 < 6)) {
      uVar3 = 1;
      lVar8 = FUN_00bccb30(param_1,1,param_3,5);
      if (lVar8 == 0) goto LAB_00bccef8;
      iVar6 = FUN_0087afd0();
      if ((iVar6 != 0) && (uVar7 = FUN_0087d610(lVar8,2), (uVar7 & 1) == 0)) goto LAB_00bccfa4;
    }
  }
  uVar3 = 1;
LAB_00bccef8:
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  return uVar3;
}


