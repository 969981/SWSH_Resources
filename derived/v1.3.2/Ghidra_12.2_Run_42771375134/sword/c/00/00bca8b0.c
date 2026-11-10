/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bca8b0; name: FUN_00bca8b0
 */


undefined8 FUN_00bca8b0(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((*(char *)(*(long *)(param_1 + 0x5d0) + 0x28) == '\0') &&
     (**(char **)(param_1 + 0x5d8) == '\0')) {
    uVar7 = 1;
  }
  else {
    uVar7 = 1;
    uVar3 = FUN_00bc8500(param_1,1,0,0);
    if ((uVar3 & 1) == 0) {
      uVar7 = 1;
      uVar3 = FUN_00bc8500(param_1,1,0,1);
      if ((uVar3 & 1) == 0) {
        uVar7 = 1;
        uVar3 = FUN_00bc8500(param_1,1,0,2);
        if ((uVar3 & 1) == 0) {
          uVar7 = 1;
          uVar3 = FUN_00bc8500(param_1,1,0,3);
          if ((uVar3 & 1) == 0) {
            uVar7 = 1;
            uVar3 = FUN_00bc8500(param_1,1,0,4);
            if ((uVar3 & 1) == 0) {
              uVar7 = 1;
              uVar3 = FUN_00bc8500(param_1,1,0,5);
              if ((uVar3 & 1) == 0) {
                lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
                if (lVar6 != 0) {
                  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                }
                lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
                if (lVar4 != 0) {
                  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
                }
                if (lVar6 != 0) {
                  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
                }
                iVar1 = FUN_01509eb0(lVar4);
                if (iVar1 == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar5 = 0;
                  do {
                    uVar3 = FUN_00bc8500(param_1,0,uVar5,0);
                    uVar7 = 1;
                    if (((uVar3 & 1) != 0) ||
                       (uVar3 = FUN_00bc8500(param_1,0,uVar5,1), (uVar3 & 1) != 0)) break;
                    uVar3 = FUN_00bc8500(param_1,0,uVar5,2);
                    if ((((((uVar3 & 1) != 0) ||
                          (((((uVar3 = FUN_00bc8500(param_1,0,uVar5,3), (uVar3 & 1) != 0 ||
                              (uVar3 = FUN_00bc8500(param_1,0,uVar5,4), (uVar3 & 1) != 0)) ||
                             (uVar3 = FUN_00bc8500(param_1,0,uVar5,5), (uVar3 & 1) != 0)) ||
                            ((uVar3 = FUN_00bc8500(param_1,0,uVar5,6), (uVar3 & 1) != 0 ||
                             (uVar3 = FUN_00bc8500(param_1,0,uVar5,7), (uVar3 & 1) != 0)))) ||
                           (uVar3 = FUN_00bc8500(param_1,0,uVar5,8), (uVar3 & 1) != 0)))) ||
                         (((uVar3 = FUN_00bc8500(param_1,0,uVar5,9), (uVar3 & 1) != 0 ||
                           (uVar3 = FUN_00bc8500(param_1,0,uVar5,10), (uVar3 & 1) != 0)) ||
                          (uVar3 = FUN_00bc8500(param_1,0,uVar5,0xb), (uVar3 & 1) != 0)))) ||
                        (((((uVar3 = FUN_00bc8500(param_1,0,uVar5,0xc), (uVar3 & 1) != 0 ||
                            (uVar3 = FUN_00bc8500(param_1,0,uVar5,0xd), (uVar3 & 1) != 0)) ||
                           (uVar3 = FUN_00bc8500(param_1,0,uVar5,0xe), (uVar3 & 1) != 0)) ||
                          ((uVar3 = FUN_00bc8500(param_1,0,uVar5,0xf), (uVar3 & 1) != 0 ||
                           (uVar3 = FUN_00bc8500(param_1,0,uVar5,0x10), (uVar3 & 1) != 0)))) ||
                         (((uVar3 = FUN_00bc8500(param_1,0,uVar5,0x11), (uVar3 & 1) != 0 ||
                           ((uVar3 = FUN_00bc8500(param_1,0,uVar5,0x12), (uVar3 & 1) != 0 ||
                            (uVar3 = FUN_00bc8500(param_1,0,uVar5,0x13), (uVar3 & 1) != 0)))) ||
                          (uVar3 = FUN_00bc8500(param_1,0,uVar5,0x14), (uVar3 & 1) != 0)))))) ||
                       ((((uVar3 = FUN_00bc8500(param_1,0,uVar5,0x15), (uVar3 & 1) != 0 ||
                          (uVar3 = FUN_00bc8500(param_1,0,uVar5,0x16), (uVar3 & 1) != 0)) ||
                         (uVar3 = FUN_00bc8500(param_1,0,uVar5,0x17), (uVar3 & 1) != 0)) ||
                        ((((uVar3 = FUN_00bc8500(param_1,0,uVar5,0x18), (uVar3 & 1) != 0 ||
                           (uVar3 = FUN_00bc8500(param_1,0,uVar5,0x19), (uVar3 & 1) != 0)) ||
                          ((uVar3 = FUN_00bc8500(param_1,0,uVar5,0x1a), (uVar3 & 1) != 0 ||
                           ((uVar3 = FUN_00bc8500(param_1,0,uVar5,0x1b), (uVar3 & 1) != 0 ||
                            (uVar3 = FUN_00bc8500(param_1,0,uVar5,0x1c), (uVar3 & 1) != 0)))))) ||
                         (uVar3 = FUN_00bc8500(param_1,0,uVar5,0x1d), (uVar3 & 1) != 0)))))) {
                      uVar7 = 1;
                      if (lVar4 == 0) {
                        return 1;
                      }
                      goto LAB_00bcad3c;
                    }
                    uVar5 = uVar5 + 1;
                    uVar2 = FUN_01509eb0(lVar4);
                    uVar7 = 0;
                  } while (uVar5 < uVar2);
                }
                if (lVar4 != 0) {
LAB_00bcad3c:
                  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar7;
}


