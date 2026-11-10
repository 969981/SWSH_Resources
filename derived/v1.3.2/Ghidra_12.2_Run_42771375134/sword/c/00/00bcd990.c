/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcd990; name: FUN_00bcd990
 */


void FUN_00bcd990(long param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6,
                 uint param_7,int param_8,int param_9)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (param_2 == 2) {
    return;
  }
  if (param_5 == 2) {
    return;
  }
  if (param_2 == 0) {
    if (param_5 == 0) {
      if ((param_8 == 1) && (param_9 == 1)) {
        FUN_01506d00(*(undefined8 *)(param_1 + 0x68),param_3,param_4,param_6,param_7,
                     *(undefined8 *)(param_1 + 0x58));
        FUN_0150a0e0(*(undefined8 *)(param_1 + 0x70),param_3,param_4,param_6,param_7);
        return;
      }
      uVar3 = 0;
      if ((param_9 != 0) && (param_8 != 0)) {
        uVar3 = 0;
        iVar13 = 0;
        uVar6 = param_4;
        do {
          uVar14 = uVar6;
          iVar15 = param_8;
          do {
            lVar8 = FUN_00bccb30(param_1,0,param_3,uVar14);
            uVar2 = 0;
            if (lVar8 != 0) {
              uVar2 = 1 << (ulong)(uVar14 & 0x1f);
            }
            iVar15 = iVar15 + -1;
            uVar3 = uVar2 | uVar3;
            uVar14 = uVar14 + 1;
          } while (iVar15 != 0);
          iVar13 = iVar13 + 1;
          uVar6 = uVar6 + 6;
        } while (iVar13 != param_9);
      }
      uVar7 = *(undefined8 *)(param_1 + 0x68);
      local_68 = *(long *)(param_1 + 0x78);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
      }
      FUN_01506f10(uVar7,param_3,param_4,param_6,param_7,param_8,param_9,&local_68,
                   *(undefined8 *)(param_1 + 0x58));
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      local_70 = 0;
      FUN_00bcfb40(0,param_4,(long)&local_70 + 4,&local_70);
      local_78 = 0;
      FUN_00bcfb40(0,param_7,(long)&local_78 + 4,&local_78);
      if ((param_3 == param_6) && (param_4 < param_7)) {
        if (param_9 < 1) {
          return;
        }
        if (param_8 < 1) {
          return;
        }
        iVar13 = param_9 * 6;
        do {
          iVar13 = iVar13 + -6;
          iVar15 = param_9 + -1;
          iVar12 = param_8;
          do {
            iVar11 = iVar12 + -1;
            if ((1 << (ulong)(iVar13 + iVar11 + local_70._4_4_ + (int)local_70 * 6 & 0x1f) & uVar3)
                != 0) {
              uVar4 = FUN_00bcfb20(0,iVar11 + local_70._4_4_,(int)local_70 + iVar15);
              uVar5 = FUN_00bcfb20(0,iVar11 + local_78._4_4_,(int)local_78 + iVar15);
              FUN_0150a0e0(*(undefined8 *)(param_1 + 0x70),param_3,uVar4,param_3,uVar5);
            }
            bVar1 = 1 < iVar12;
            iVar12 = iVar11;
          } while (bVar1);
          bVar1 = 1 < param_9;
          param_9 = iVar15;
        } while (bVar1);
        return;
      }
      if (param_9 == 0) {
        return;
      }
      if (param_8 == 0) {
        return;
      }
      iVar15 = 0;
      iVar13 = 0;
      do {
        iVar12 = 0;
        do {
          if ((1 << (ulong)(iVar15 + iVar12 + local_70._4_4_ + (int)local_70 * 6 & 0x1f) & uVar3) !=
              0) {
            uVar4 = FUN_00bcfb20(0,iVar12 + local_70._4_4_,(int)local_70 + iVar13);
            uVar5 = FUN_00bcfb20(0,iVar12 + local_78._4_4_,(int)local_78 + iVar13);
            FUN_0150a0e0(*(undefined8 *)(param_1 + 0x70),param_3,uVar4,param_6,uVar5);
          }
          iVar12 = iVar12 + 1;
        } while (param_8 != iVar12);
        iVar13 = iVar13 + 1;
        iVar15 = iVar15 + 6;
      } while (iVar13 != param_9);
      return;
    }
    uVar3 = FUN_00884820(*(undefined8 *)(param_1 + 0x60));
    if (uVar3 <= param_7) {
      local_70 = 0;
      FUN_00bcfb40(0,param_4,(long)&local_70 + 4,&local_70);
      if (param_9 == 0) {
        return;
      }
      if (param_8 == 0) {
        return;
      }
      iVar13 = 0;
      do {
        iVar15 = 0;
        do {
          uVar4 = FUN_00bcfb20(0,iVar15 + local_70._4_4_,(int)local_70 + iVar13);
          lVar8 = FUN_00bccb30(param_1,0,param_3,uVar4);
          if (lVar8 != 0) {
            uVar9 = (**(code **)(**(long **)(param_1 + 0x60) + 0x28))
                              (*(long **)(param_1 + 0x60),lVar8);
            if ((uVar9 & 1) != 0) {
              uVar7 = *(undefined8 *)(param_1 + 0x68);
              local_80 = *(long *)(param_1 + 0x78);
              if (local_80 != 0) {
                (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
              }
              FUN_01507190(uVar7,param_3,uVar4,&local_80);
              if (local_80 != 0) {
                (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
                local_80 = 0;
              }
            }
            FUN_0150a9e0(*(undefined8 *)(param_1 + 0x70),param_3,uVar4);
            FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),0);
            FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),1);
            FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),2);
            FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),3);
            FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),4);
            FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),5);
          }
          iVar15 = iVar15 + 1;
        } while (param_8 != iVar15);
        iVar13 = iVar13 + 1;
      } while (iVar13 != param_9);
      return;
    }
    uVar3 = param_7;
  }
  else {
    if (param_5 != 0) {
      uVar3 = FUN_00884820(*(undefined8 *)(param_1 + 0x60));
      if (param_9 != 1) {
        if ((param_9 != 0) && (uVar3 <= param_7)) {
          do {
            (**(code **)(**(long **)(param_1 + 0x60) + 0x40))
                      (*(long **)(param_1 + 0x60),param_4,uVar3);
            param_9 = param_9 + -1;
          } while (param_9 != 0);
        }
        return;
      }
      if (param_7 < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00bcda28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x60) + 0x40))
                  (*(long **)(param_1 + 0x60),param_4,param_7);
        return;
      }
      uVar7 = (**(code **)(**(long **)(param_1 + 0x60) + 0x58))(*(long **)(param_1 + 0x60),param_4);
      FUN_008664a0(uVar7,param_1 + 0x84);
      (**(code **)(**(long **)(param_1 + 0x60) + 0x38))(*(long **)(param_1 + 0x60),param_4);
      FUN_008664b0(*(undefined8 *)(param_1 + 0x78),param_1 + 0x84);
                    /* WARNING: Could not recover jumptable at 0x00bcdd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x60) + 0x28))
                (*(long **)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x78));
      return;
    }
    if (param_9 != 1) {
      for (; param_9 != 0; param_9 = param_9 + -1) {
        uVar7 = (**(code **)(**(long **)(param_1 + 0x60) + 0x58))
                          (*(long **)(param_1 + 0x60),param_4);
        FUN_00866390(*(undefined8 *)(param_1 + 0x78),uVar7);
        uVar7 = *(undefined8 *)(param_1 + 0x68);
        local_88 = *(long *)(param_1 + 0x78);
        if (local_88 != 0) {
          (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
        }
        FUN_01506ad0(uVar7,&local_88,*(undefined8 *)(param_1 + 0x58),param_6,param_7);
        if (local_88 != 0) {
          (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
          local_88 = 0;
        }
        (**(code **)(**(long **)(param_1 + 0x60) + 0x38))(*(long **)(param_1 + 0x60),param_4);
        param_7 = param_7 + 6;
      }
      return;
    }
    uVar3 = param_4;
    param_4 = param_7;
    param_3 = param_6;
  }
  uVar6 = FUN_00884820(*(undefined8 *)(param_1 + 0x60));
  if (uVar6 <= uVar3) {
    return;
  }
  uVar7 = (**(code **)(**(long **)(param_1 + 0x60) + 0x58))(*(long **)(param_1 + 0x60),uVar3);
  FUN_008664a0(uVar7,param_1 + 0x84);
  if ((param_3 < 0x20) && (param_4 < 0x1e)) {
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x78);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    FUN_01505e60(uVar7,(long)register0x00000008 + -0x58,param_3,param_4);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    uVar9 = FUN_008787d0(*(long *)(param_1 + 0x78));
    if ((uVar9 & 1) == 0) {
      plVar10 = *(long **)(param_1 + 0x60);
      if (*(long *)(param_1 + 0x78) != 0) {
        (**(code **)(*plVar10 + 0x30))(plVar10,uVar3);
        FUN_0150a9e0(*(undefined8 *)(param_1 + 0x70),param_3,param_4);
        FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),0);
        FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),1);
        FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),2);
        FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),3);
        FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),4);
        FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),5);
        goto LAB_00bce0dc;
      }
    }
    else {
      plVar10 = *(long **)(param_1 + 0x60);
    }
  }
  else {
    plVar10 = *(long **)(param_1 + 0x60);
  }
  (**(code **)(*plVar10 + 0x38))(plVar10,uVar3);
LAB_00bce0dc:
  FUN_008664b0(*(long *)(param_1 + 0x78),param_1 + 0x84);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  lVar8 = *(long *)(param_1 + 0x78);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_01505ea0(uVar7,(long)register0x00000008 + -0x60,param_3,param_4);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  return;
}


