/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a6210; name: FUN_005a6210
 */


ulong FUN_005a6210(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  long *local_80;
  long *local_78;
  
  plVar3 = *(long **)(param_2 + 0x20);
  if (plVar3 == (long *)0x0) {
    uVar8 = 0xfffffffe;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x90);
    (**(code **)(*plVar3 + 0x50))(plVar3,0,&local_78);
    uVar2 = (**(code **)(**(long **)(param_2 + 0x20) + 0x58))(*(long **)(param_2 + 0x20),&local_80);
    if (uVar2 == 0xffffff00) {
      local_80 = (long *)0x0;
    }
    (**(code **)(**(long **)(param_2 + 0x20) + 0x108))(*(long **)(param_2 + 0x20),0);
    if (0 < *(int *)(param_2 + 0x30)) {
      lVar5 = *(long *)(param_2 + 0x38);
      lVar11 = 0;
      do {
        if ((*(long *)(lVar5 + lVar11 * 8) != 0) &&
           (lVar6 = *(long *)(lVar5 + lVar11 * 8), *(int *)(lVar6 + 0x98) != 0)) {
          uVar8 = 0;
          do {
            lVar5 = *(long *)(*(long *)(lVar6 + 0xd0) + uVar8 * 8);
            uVar4 = (**(code **)(**(long **)(param_2 + 0x20) + 0x38))
                              (*(long **)(param_2 + 0x20),0,lVar5,0);
            if ((int)uVar4 < 0) {
              return uVar4;
            }
            lVar6 = *(long *)(param_2 + 0x50);
            if ((lVar6 != 0) &&
               ((((*(uint *)(lVar6 + 0x4c) < *(uint *)(lVar5 + 0x4c) ||
                  (*(uint *)(lVar6 + 0x50) < *(uint *)(lVar5 + 0x50))) ||
                 (*(int *)(lVar6 + 0x54) != *(int *)(lVar5 + 0x54))) ||
                (*(int *)(lVar6 + 0x58) != *(int *)(lVar5 + 0x58))))) {
              lVar6 = 0;
            }
            uVar4 = (**(code **)(**(long **)(param_2 + 0x20) + 0x40))
                              (*(long **)(param_2 + 0x20),lVar6);
            if ((int)uVar4 < 0) {
              return uVar4;
            }
            if (lVar6 == 0) {
              uVar10 = 0xff0;
            }
            else {
              uVar10 = 0xff3;
              if (*(int *)(param_2 + 0x4c) != 0x2d && *(int *)(param_2 + 0x4c) != 0x14) {
                uVar10 = 0xff1;
              }
            }
            (**(code **)(**(long **)(param_2 + 0x20) + 0x198))
                      (param_1,*(long **)(param_2 + 0x20),uVar10,param_3,param_4);
            lVar7 = lVar11 * 8;
            FUN_0059d050(0x3f800000,0x3f800000,*(undefined8 *)(*(long *)(param_2 + 0x38) + lVar7),0,
                         uVar8 & 0xffffffff,0x10000,0x10000,0,1,0,0,0,0,0);
            lVar5 = *(long *)(param_2 + 0x38);
            lVar6 = *(long *)(lVar5 + lVar7);
            lVar9 = *(long *)(*(long *)(lVar6 + 0xd8) + uVar8 * 8);
            if (lVar9 != *(long *)(*(long *)(lVar6 + 0xd0) + uVar8 * 8)) {
              uVar4 = (**(code **)(**(long **)(param_2 + 0x20) + 0x38))
                                (*(long **)(param_2 + 0x20),0,lVar9,0);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              lVar5 = *(long *)(param_2 + 0x58);
              if ((lVar5 != 0) &&
                 (((*(uint *)(lVar5 + 0x4c) < *(uint *)(lVar9 + 0x4c) ||
                   (*(uint *)(lVar5 + 0x50) < *(uint *)(lVar9 + 0x50))) ||
                  ((*(int *)(lVar5 + 0x54) != *(int *)(lVar9 + 0x54) ||
                   (*(int *)(lVar5 + 0x58) != *(int *)(lVar9 + 0x58))))))) {
                lVar5 = 0;
              }
              uVar4 = (**(code **)(**(long **)(param_2 + 0x20) + 0x40))
                                (*(long **)(param_2 + 0x20),lVar5);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              if (lVar5 == 0) {
                uVar10 = 0xff0;
              }
              else {
                uVar10 = 0xff3;
                if (*(int *)(param_2 + 0x4c) != 0x2d && *(int *)(param_2 + 0x4c) != 0x14) {
                  uVar10 = 0xff1;
                }
              }
              (**(code **)(**(long **)(param_2 + 0x20) + 0x198))
                        (param_1,*(long **)(param_2 + 0x20),uVar10,param_3,param_4);
              FUN_0059d050(0x3f800000,0x3f800000,*(undefined8 *)(*(long *)(param_2 + 0x38) + lVar7),
                           0,uVar8 & 0xffffffff,0x10000,0x10000,0,1,0,0,0,0,0);
              lVar5 = *(long *)(param_2 + 0x38);
              lVar6 = *(long *)(lVar5 + lVar7);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(lVar6 + 0x98));
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_2 + 0x30));
    }
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar11 = 0;
      do {
        lVar5 = *(long *)(*(long *)(param_2 + 0x40) + lVar11 * 8);
        (**(code **)(**(long **)(param_2 + 0x20) + 0x38))
                  (*(long **)(param_2 + 0x20),0,
                   *(undefined8 *)(lVar5 + (long)*(int *)(lVar5 + 0xa0) * 8 + 0xb8),0);
        uVar8 = (**(code **)(**(long **)(param_2 + 0x20) + 0x40))(*(long **)(param_2 + 0x20),0);
        if ((int)uVar8 < 0) {
          return uVar8;
        }
        (**(code **)(**(long **)(param_2 + 0x20) + 0x198))
                  (param_1,*(long **)(param_2 + 0x20),0xff0,param_3,param_4);
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_2 + 0x34));
    }
    *(undefined4 *)(param_2 + 0x90) = uVar1;
    (**(code **)(**(long **)(param_2 + 0x20) + 0x38))(*(long **)(param_2 + 0x20),0,local_78,0);
    (**(code **)(**(long **)(param_2 + 0x20) + 0x40))(*(long **)(param_2 + 0x20),local_80);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 8))();
      local_78 = (long *)0x0;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 8))();
    }
    uVar8 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
  }
  return uVar8;
}


