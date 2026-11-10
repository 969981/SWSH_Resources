/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb06b0; name: FUN_00fb06b0
 */


void FUN_00fb06b0(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(long *)(param_2 + 0xc00) == 0) || (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
    if ((*(long *)(param_2 + 0xc08) == 0) || (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
      if ((*(long *)(param_2 + 0xc10) == 0) || (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
        if ((*(long *)(param_2 + 0xc18) == 0) || (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
          if ((*(long *)(param_2 + 0xc20) == 0) || (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
            if ((*(long *)(param_2 + 0xc28) == 0) || (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
              if ((*(long *)(param_2 + 0xc30) == 0) || (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
                if ((*(long *)(param_2 + 0xc38) == 0) || (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0))
                {
                  if ((*(long *)(param_2 + 0xc40) == 0) ||
                     (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
                    if ((*(long *)(param_2 + 0xc48) == 0) ||
                       (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
                      if ((*(long *)(param_2 + 0xc50) == 0) ||
                         (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
                        if ((*(long *)(param_2 + 0xc58) == 0) ||
                           (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
                          if ((*(long *)(param_2 + 0xc60) == 0) ||
                             (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
                            if ((*(long *)(param_2 + 0xc68) == 0) ||
                               (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
                              if ((*(long *)(param_2 + 0xc70) == 0) ||
                                 (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
                                if ((*(long *)(param_2 + 0xc78) == 0) ||
                                   (uVar1 = FUN_00fb0c80(), (uVar1 & 1) != 0)) {
                                  *param_1 = 0;
                                  return;
                                }
                                lVar2 = *(long *)(param_2 + 0xc78);
                                *param_1 = lVar2;
                              }
                              else {
                                lVar2 = *(long *)(param_2 + 0xc70);
                                *param_1 = lVar2;
                              }
                            }
                            else {
                              lVar2 = *(long *)(param_2 + 0xc68);
                              *param_1 = lVar2;
                            }
                          }
                          else {
                            lVar2 = *(long *)(param_2 + 0xc60);
                            *param_1 = lVar2;
                          }
                        }
                        else {
                          lVar2 = *(long *)(param_2 + 0xc58);
                          *param_1 = lVar2;
                        }
                      }
                      else {
                        lVar2 = *(long *)(param_2 + 0xc50);
                        *param_1 = lVar2;
                      }
                    }
                    else {
                      lVar2 = *(long *)(param_2 + 0xc48);
                      *param_1 = lVar2;
                    }
                  }
                  else {
                    lVar2 = *(long *)(param_2 + 0xc40);
                    *param_1 = lVar2;
                  }
                }
                else {
                  lVar2 = *(long *)(param_2 + 0xc38);
                  *param_1 = lVar2;
                }
              }
              else {
                lVar2 = *(long *)(param_2 + 0xc30);
                *param_1 = lVar2;
              }
            }
            else {
              lVar2 = *(long *)(param_2 + 0xc28);
              *param_1 = lVar2;
            }
          }
          else {
            lVar2 = *(long *)(param_2 + 0xc20);
            *param_1 = lVar2;
          }
        }
        else {
          lVar2 = *(long *)(param_2 + 0xc18);
          *param_1 = lVar2;
        }
      }
      else {
        lVar2 = *(long *)(param_2 + 0xc10);
        *param_1 = lVar2;
      }
    }
    else {
      lVar2 = *(long *)(param_2 + 0xc08);
      *param_1 = lVar2;
    }
  }
  else {
    lVar2 = *(long *)(param_2 + 0xc00);
    *param_1 = lVar2;
  }
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fb07f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


