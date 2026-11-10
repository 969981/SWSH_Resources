/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059cb20; name: FUN_0059cb20
 */


undefined8 FUN_0059cb20(long param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0xfffffffe;
  }
  else if ((int)param_3 < *(int *)(param_1 + 0x98)) {
    if (*(long *)PTR_DAT_02713ca0 != param_1) {
      FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    }
    if (param_2 == (undefined8 *)0x0) {
      local_70 = 0;
      uStack_68 = 0;
    }
    else {
      local_70 = *param_2;
      uStack_68 = param_2[1];
    }
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x50))(*(long **)(param_1 + 0x20),0,&local_78);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x58))(*(long **)(param_1 + 0x20),&local_80);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x108))(*(long **)(param_1 + 0x20),0);
    puVar3 = PTR_DAT_02713c38;
    puVar2 = PTR_DAT_02713a70;
    iVar1 = *(int *)(param_1 + 0xa0);
    uVar7 = *(uint *)(param_1 + 0x98);
    if (uVar7 != 0) {
      if ((int)param_3 < 0) {
        uVar8 = 0;
        iVar4 = iVar1;
        while( true ) {
          if (iVar4 != 0) {
            *(undefined4 *)(param_1 + 0xa0) = 0;
          }
          uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x38))
                            (*(long **)(param_1 + 0x20),0,
                             *(undefined8 *)(*(long *)(param_1 + 0xd0) + uVar8 * 8),0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          iVar4 = (**(code **)(**(long **)puVar3 + 0x40))(*(long **)puVar3,0);
          if (-1 < iVar4) {
            *(undefined8 *)puVar2 = 0;
          }
          uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x198))
                            (0x3f800000,*(long **)(param_1 + 0x20),0xff0,&local_70,0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          FUN_0059d050(0x3f800000,0x3f800000,param_1,0,uVar8 & 0xffffffff,0x10000,0x10000,0,1,0,0,0,
                       0,0);
          if (*(int *)(param_1 + 0xa0) != 1) {
            *(undefined4 *)(param_1 + 0xa0) = 1;
          }
          lVar6 = *(long *)(*(long *)(param_1 + 0xd8) + uVar8 * 8);
          if (lVar6 != *(long *)(*(long *)(param_1 + 0xd0) + uVar8 * 8)) {
            uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x38))
                              (*(long **)(param_1 + 0x20),0,lVar6,0);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            iVar4 = (**(code **)(**(long **)puVar3 + 0x40))(*(long **)puVar3,0);
            if (-1 < iVar4) {
              *(undefined8 *)puVar2 = 0;
            }
            uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x198))
                              (0x3f800000,*(long **)(param_1 + 0x20),0xff0,&local_70,0);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            FUN_0059d050(0x3f800000,0x3f800000,param_1,0,uVar8 & 0xffffffff,0x10000,0x10000,0,1,0,0,
                         0,0,0);
          }
          uVar8 = uVar8 + 1;
          if (*(uint *)(param_1 + 0x98) <= uVar8) break;
          iVar4 = *(int *)(param_1 + 0xa0);
        }
      }
      else {
        uVar9 = (ulong)param_3;
        uVar8 = 0;
        do {
          if (uVar9 == uVar8) {
            if (*(int *)(param_1 + 0xa0) != 0) {
              *(undefined4 *)(param_1 + 0xa0) = 0;
            }
            uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x38))
                              (*(long **)(param_1 + 0x20),0,
                               *(undefined8 *)(*(long *)(param_1 + 0xd0) + uVar9 * 8),0);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            iVar4 = (**(code **)(**(long **)puVar3 + 0x40))(*(long **)puVar3,0);
            if (-1 < iVar4) {
              *(undefined8 *)puVar2 = 0;
            }
            uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x198))
                              (0x3f800000,*(long **)(param_1 + 0x20),0xff0,&local_70,0);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            FUN_0059d050(0x3f800000,0x3f800000,param_1,0,param_3,0x10000,0x10000,0,1,0,0,0,0,0);
            if (*(int *)(param_1 + 0xa0) != 1) {
              *(undefined4 *)(param_1 + 0xa0) = 1;
            }
            lVar6 = *(long *)(*(long *)(param_1 + 0xd8) + uVar9 * 8);
            if (lVar6 != *(long *)(*(long *)(param_1 + 0xd0) + uVar9 * 8)) {
              uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x38))
                                (*(long **)(param_1 + 0x20),0,lVar6,0);
              if ((int)uVar5 < 0) {
                return uVar5;
              }
              iVar4 = (**(code **)(**(long **)puVar3 + 0x40))(*(long **)puVar3,0);
              if (-1 < iVar4) {
                *(undefined8 *)puVar2 = 0;
              }
              uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x198))
                                (0x3f800000,*(long **)(param_1 + 0x20),0xff0,&local_70,0);
              if ((int)uVar5 < 0) {
                return uVar5;
              }
              FUN_0059d050(0x3f800000,0x3f800000,param_1,0,param_3,0x10000,0x10000,0,1,0,0,0,0,0);
            }
            uVar7 = *(uint *)(param_1 + 0x98);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
    }
    if (*(int *)(param_1 + 0xa0) != iVar1) {
      *(int *)(param_1 + 0xa0) = iVar1;
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x38))(*(long **)(param_1 + 0x20),0,local_78,0);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x40))(*(long **)(param_1 + 0x20),local_80);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 8))();
      local_78 = (long *)0x0;
    }
    uVar5 = 0;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 8))();
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xfffffffa;
  }
  return uVar5;
}


