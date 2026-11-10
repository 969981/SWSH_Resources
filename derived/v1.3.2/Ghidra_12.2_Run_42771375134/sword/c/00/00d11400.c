/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d11400; name: FUN_00d11400
 */


bool FUN_00d11400(long param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  int local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  
  plVar4 = *(long **)(param_2 + 0x18);
  uVar5 = plVar4[1];
  uVar6 = uVar5 - 1;
  uVar7 = uVar6 & uVar5;
  if (uVar7 == 0) {
    plVar9 = *(long **)(*plVar4 + (uVar6 & 0xb4642176e7fe47f5) * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != -0x4b9bde891801b80b);
    } while (plVar9[2] != -0x4b9bde891801b80b);
  }
  else {
    lVar8 = -0x4b9bde891801b80b;
    if (uVar5 < 0xb4642176e7fe47f6) {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = 0xb4642176e7fe47f5 / uVar5;
      }
      lVar8 = -0x4b9bde891801b80b - uVar3 * uVar5;
    }
    plVar9 = *(long **)(*plVar4 + lVar8 * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != -0x4b9bde891801b80b);
    } while (plVar9[2] != -0x4b9bde891801b80b);
  }
  local_30 = *(int *)((long)plVar9 + 0x18);
  uVar3 = (ulong)local_30;
  if (uVar7 == 0) {
    plVar9 = *(long **)(*plVar4 + (uVar6 & 0x594a94886f7f651d) * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != 0x594a94886f7f651d);
    } while (plVar9[2] != 0x594a94886f7f651d);
  }
  else {
    lVar8 = 0x594a94886f7f651d;
    if (uVar5 < 0x594a94886f7f651e) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = 0x594a94886f7f651d / uVar5;
      }
      lVar8 = 0x594a94886f7f651d - uVar1 * uVar5;
    }
    plVar9 = *(long **)(*plVar4 + lVar8 * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != 0x594a94886f7f651d);
    } while (plVar9[2] != 0x594a94886f7f651d);
  }
  iStack_2c = *(int *)((long)plVar9 + 0x18);
  if (uVar7 == 0) {
    plVar9 = *(long **)(*plVar4 + (uVar6 & 0xdd6f3eaad6c1c49f) * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != -0x2290c155293e3b61);
    } while (plVar9[2] != -0x2290c155293e3b61);
  }
  else {
    lVar8 = -0x2290c155293e3b61;
    if (uVar5 < 0xdd6f3eaad6c1c4a0) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = 0xdd6f3eaad6c1c49f / uVar5;
      }
      lVar8 = -0x2290c155293e3b61 - uVar7 * uVar5;
    }
    plVar9 = *(long **)(*plVar4 + lVar8 * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != -0x2290c155293e3b61);
    } while (plVar9[2] != -0x2290c155293e3b61);
  }
  local_28 = *(int *)((long)plVar9 + 0x18);
  uVar7 = plVar4[1];
  if ((uVar7 - 1 & uVar7) == 0) {
    plVar4 = *(long **)(*plVar4 + (uVar7 - 1 & 0x1bf997af3ad6bee5) * 8);
    do {
      do {
        plVar4 = (long *)*plVar4;
      } while (plVar4[1] != 0x1bf997af3ad6bee5);
    } while (plVar4[2] != 0x1bf997af3ad6bee5);
  }
  else {
    lVar8 = 0x1bf997af3ad6bee5;
    if (uVar7 < 0x1bf997af3ad6bee6) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = 0x1bf997af3ad6bee5 / uVar7;
      }
      lVar8 = 0x1bf997af3ad6bee5 - uVar5 * uVar7;
    }
    plVar4 = *(long **)(*plVar4 + lVar8 * 8);
    do {
      do {
        plVar4 = (long *)*plVar4;
      } while (plVar4[1] != 0x1bf997af3ad6bee5);
    } while (plVar4[2] != 0x1bf997af3ad6bee5);
  }
  local_24 = *(int *)((long)plVar4 + 0x18);
  uVar7 = *(ulong *)(param_1 + 0x2d0);
  plVar4 = (long *)(param_1 + 0x2c8);
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar5 & uVar7) == 0) {
      uVar6 = uVar5 & uVar3;
      plVar9 = *(long **)(*plVar4 + uVar6 * 8);
    }
    else {
      uVar6 = uVar3;
      if (uVar7 <= uVar3) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar3 / uVar7;
        }
        uVar6 = uVar3 - uVar6 * uVar7;
      }
      plVar9 = *(long **)(*plVar4 + uVar6 * 8);
    }
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if ((uVar5 & uVar7) == 0) {
        do {
          uVar7 = plVar9[1];
          if (uVar7 != uVar3 && (uVar7 & uVar5) != uVar6) break;
          if ((uVar7 == uVar3) && ((int)plVar9[2] == local_30)) goto LAB_00d11704;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar9[1];
          if (uVar5 == uVar3) {
            if ((int)plVar9[2] == local_30) goto LAB_00d11704;
          }
          else {
            if (uVar7 <= uVar5) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar1 * uVar7;
            }
            if (uVar5 != uVar6) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  if (local_30 < 2000) {
    return false;
  }
LAB_00d11704:
  pcVar2 = (char *)FUN_00d14760(plVar4,&local_30);
  if (*pcVar2 == '\0') {
    return false;
  }
  uVar7 = (ulong)iStack_2c;
  uVar5 = *(ulong *)(param_1 + 0x2d0);
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar6 & uVar5) == 0) {
      uVar3 = uVar6 & uVar7;
      plVar9 = *(long **)(*plVar4 + uVar3 * 8);
    }
    else {
      uVar3 = uVar7;
      if (uVar5 <= uVar7) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar7 / uVar5;
        }
        uVar3 = uVar7 - uVar3 * uVar5;
      }
      plVar9 = *(long **)(*plVar4 + uVar3 * 8);
    }
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if ((uVar6 & uVar5) == 0) {
        do {
          uVar5 = plVar9[1];
          if (uVar5 != uVar7 && (uVar5 & uVar6) != uVar3) break;
          if ((uVar5 == uVar7) && ((int)plVar9[2] == iStack_2c)) goto LAB_00d117e8;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar9[1];
          if (uVar6 == uVar7) {
            if ((int)plVar9[2] == iStack_2c) goto LAB_00d117e8;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar1 * uVar5;
            }
            if (uVar6 != uVar3) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  if (iStack_2c < 2000) {
    return false;
  }
LAB_00d117e8:
  pcVar2 = (char *)FUN_00d14760(plVar4,(ulong)&local_30 | 4);
  if (*pcVar2 == '\0') {
    return false;
  }
  uVar7 = (ulong)local_28;
  uVar5 = *(ulong *)(param_1 + 0x2d0);
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar6 & uVar5) == 0) {
      uVar3 = uVar6 & uVar7;
LAB_00d11840:
      plVar9 = *(long **)(*plVar4 + uVar3 * 8);
    }
    else {
      uVar3 = uVar7;
      if (uVar7 < uVar5) goto LAB_00d11840;
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar7 / uVar5;
      }
      uVar3 = uVar7 - uVar3 * uVar5;
      plVar9 = *(long **)(*plVar4 + uVar3 * 8);
    }
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if ((uVar6 & uVar5) == 0) {
        do {
          uVar5 = plVar9[1];
          if (uVar5 != uVar7 && (uVar5 & uVar6) != uVar3) break;
          if ((uVar5 == uVar7) && ((int)plVar9[2] == local_28)) goto LAB_00d118d0;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar9[1];
          if (uVar6 == uVar7) {
            if ((int)plVar9[2] == local_28) goto LAB_00d118d0;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar1 * uVar5;
            }
            if (uVar6 != uVar3) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  if (local_28 < 2000) {
    return false;
  }
LAB_00d118d0:
  pcVar2 = (char *)FUN_00d14760(plVar4,&local_28);
  if (*pcVar2 == '\0') {
    return false;
  }
  uVar7 = (ulong)local_24;
  uVar5 = *(ulong *)(param_1 + 0x2d0);
  if (uVar5 == 0) goto LAB_00d119b0;
  uVar6 = uVar5 - 1;
  if ((uVar6 & uVar5) == 0) {
    uVar3 = uVar6 & uVar7;
LAB_00d11928:
    plVar9 = *(long **)(*plVar4 + uVar3 * 8);
  }
  else {
    uVar3 = uVar7;
    if (uVar7 < uVar5) goto LAB_00d11928;
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = uVar7 / uVar5;
    }
    uVar3 = uVar7 - uVar3 * uVar5;
    plVar9 = *(long **)(*plVar4 + uVar3 * 8);
  }
  if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
    if ((uVar6 & uVar5) == 0) {
      do {
        uVar5 = plVar9[1];
        if (uVar5 != uVar7 && (uVar5 & uVar6) != uVar3) break;
        if ((uVar5 == uVar7) && ((int)plVar9[2] == local_24)) goto LAB_00d119cc;
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
    else {
      do {
        uVar6 = plVar9[1];
        if (uVar6 == uVar7) {
          if ((int)plVar9[2] == local_24) goto LAB_00d119cc;
        }
        else {
          if (uVar5 <= uVar6) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar6 / uVar5;
            }
            uVar6 = uVar6 - uVar1 * uVar5;
          }
          if (uVar6 != uVar3) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
LAB_00d119b0:
  if (local_24 < 2000) {
    return false;
  }
LAB_00d119cc:
  pcVar2 = (char *)FUN_00d14760(plVar4,&local_24);
  return *pcVar2 != '\0';
}


