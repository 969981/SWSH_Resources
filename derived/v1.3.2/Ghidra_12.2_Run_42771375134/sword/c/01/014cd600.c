/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014cd600; name: FUN_014cd600
 */


void FUN_014cd600(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (param_3[3] != 0) {
    param_3 = param_3 + 1;
  }
  plVar1 = (long *)(param_2 + 0x88);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar1 = (long *)(param_2 + 0x90);
  }
  lVar4 = *param_3;
  if (*plVar1 == lVar4) {
    lVar4 = 0;
  }
  else {
    plVar1 = (long *)(param_2 + 0x2e8);
    if (*(long *)(param_2 + 0x300) != 0) {
      plVar1 = (long *)(param_2 + 0x2f0);
    }
    if (*plVar1 == lVar4) {
      lVar4 = 1;
    }
    else {
      plVar1 = (long *)(param_2 + 0x548);
      if (*(long *)(param_2 + 0x560) != 0) {
        plVar1 = (long *)(param_2 + 0x550);
      }
      if (*plVar1 == lVar4) {
        lVar4 = 2;
      }
      else {
        plVar1 = (long *)(param_2 + 0x7a8);
        if (*(long *)(param_2 + 0x7c0) != 0) {
          plVar1 = (long *)(param_2 + 0x7b0);
        }
        if (*plVar1 == lVar4) {
          lVar4 = 3;
        }
        else {
          plVar1 = (long *)(param_2 + 0xa08);
          if (*(long *)(param_2 + 0xa20) != 0) {
            plVar1 = (long *)(param_2 + 0xa10);
          }
          if (*plVar1 == lVar4) {
            lVar4 = 4;
          }
          else {
            plVar1 = (long *)(param_2 + 0xc68);
            if (*(long *)(param_2 + 0xc80) != 0) {
              plVar1 = (long *)(param_2 + 0xc70);
            }
            if (*plVar1 == lVar4) {
              lVar4 = 5;
            }
            else {
              plVar1 = (long *)(param_2 + 0xec8);
              if (*(long *)(param_2 + 0xee0) != 0) {
                plVar1 = (long *)(param_2 + 0xed0);
              }
              if (*plVar1 == lVar4) {
                lVar4 = 6;
              }
              else {
                plVar1 = (long *)(param_2 + 0x1128);
                if (*(long *)(param_2 + 0x1140) != 0) {
                  plVar1 = (long *)(param_2 + 0x1130);
                }
                if (*plVar1 == lVar4) {
                  lVar4 = 7;
                }
                else {
                  plVar1 = (long *)(param_2 + 5000);
                  if (*(long *)(param_2 + 0x13a0) != 0) {
                    plVar1 = (long *)(param_2 + 0x1390);
                  }
                  if (*plVar1 == lVar4) {
                    lVar4 = 8;
                  }
                  else {
                    plVar1 = (long *)(param_2 + 0x15e8);
                    if (*(long *)(param_2 + 0x1600) != 0) {
                      plVar1 = (long *)(param_2 + 0x15f0);
                    }
                    if (*plVar1 == lVar4) {
                      lVar4 = 9;
                    }
                    else {
                      plVar1 = (long *)(param_2 + 0x1848);
                      if (*(long *)(param_2 + 0x1860) != 0) {
                        plVar1 = (long *)(param_2 + 0x1850);
                      }
                      if (*plVar1 == lVar4) {
                        lVar4 = 10;
                      }
                      else {
                        plVar1 = (long *)(param_2 + 0x1aa8);
                        if (*(long *)(param_2 + 0x1ac0) != 0) {
                          plVar1 = (long *)(param_2 + 0x1ab0);
                        }
                        if (*plVar1 == lVar4) {
                          lVar4 = 0xb;
                        }
                        else {
                          plVar1 = (long *)(param_2 + 0x1d08);
                          if (*(long *)(param_2 + 0x1d20) != 0) {
                            plVar1 = (long *)(param_2 + 0x1d10);
                          }
                          if (*plVar1 == lVar4) {
                            lVar4 = 0xc;
                          }
                          else {
                            plVar1 = (long *)(param_2 + 0x1f68);
                            if (*(long *)(param_2 + 0x1f80) != 0) {
                              plVar1 = (long *)(param_2 + 0x1f70);
                            }
                            if (*plVar1 == lVar4) {
                              lVar4 = 0xd;
                            }
                            else {
                              plVar1 = (long *)(param_2 + 0x21c8);
                              if (*(long *)(param_2 + 0x21e0) != 0) {
                                plVar1 = (long *)(param_2 + 0x21d0);
                              }
                              if (*plVar1 == lVar4) {
                                lVar4 = 0xe;
                              }
                              else {
                                plVar1 = (long *)(param_2 + 0x2428);
                                if (*(long *)(param_2 + 0x2440) != 0) {
                                  plVar1 = (long *)(param_2 + 0x2430);
                                }
                                if (*plVar1 == lVar4) {
                                  lVar4 = 0xf;
                                }
                                else {
                                  plVar1 = (long *)(param_2 + 0x2688);
                                  if (*(long *)(param_2 + 0x26a0) != 0) {
                                    plVar1 = (long *)(param_2 + 0x2690);
                                  }
                                  if (*plVar1 == lVar4) {
                                    lVar4 = 0x10;
                                  }
                                  else {
                                    plVar1 = (long *)(param_2 + 0x28e8);
                                    if (*(long *)(param_2 + 0x2900) != 0) {
                                      plVar1 = (long *)(param_2 + 0x28f0);
                                    }
                                    if (*plVar1 != lVar4) {
                    /* WARNING: Subroutine does not return */
                                      memset(param_1,0,0x110);
                                    }
                                    lVar4 = 0x11;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = (long)(PTR_DAT_02710ad8 + 0x10);
  lVar3 = *(long *)(param_2 + lVar4 * 0x260 + 0x1d8);
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  pcVar5 = *(code **)(param_2 + lVar4 * 0x260 + 0x1f0);
  if (pcVar5 != (code *)0x0) {
    lVar7 = param_2 + lVar4 * 0x260;
    (*pcVar5)(lVar7 + 0x200,param_1 + 6);
    lVar3 = *(long *)(lVar7 + 0x1e0);
    lVar6 = *(long *)(lVar7 + 0x1e8);
    lVar2 = *(long *)(lVar7 + 0x1f8);
    param_1[4] = *(long *)(lVar7 + 0x1f0);
    param_1[5] = lVar2;
    param_1[2] = lVar3;
    param_1[3] = lVar6;
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  pcVar5 = *(code **)(param_2 + lVar4 * 0x260 + 0x270);
  if (pcVar5 != (code *)0x0) {
    param_2 = param_2 + lVar4 * 0x260;
    (*pcVar5)(param_2 + 0x280,param_1 + 0x16);
    lVar4 = *(long *)(param_2 + 0x260);
    lVar3 = *(long *)(param_2 + 0x268);
    lVar6 = *(long *)(param_2 + 0x278);
    param_1[0x14] = *(long *)(param_2 + 0x270);
    param_1[0x15] = lVar6;
    param_1[0x12] = lVar4;
    param_1[0x13] = lVar3;
  }
  *param_1 = (long)(PTR_DAT_02710ad0 + 0x10);
  return;
}


