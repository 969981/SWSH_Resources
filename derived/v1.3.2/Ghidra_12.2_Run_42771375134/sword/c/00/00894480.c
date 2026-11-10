/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00894480; name: FUN_00894480
 */


void FUN_00894480(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x130));
  uVar3 = *(ulong *)(param_1 + 0xb8);
  if (uVar3 != 0) {
    uVar4 = uVar3 - 1;
    if ((uVar4 & uVar3) == 0) {
      uVar6 = uVar4 & param_2;
      puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xb0) + uVar6 * 8);
    }
    else {
      uVar6 = param_2;
      if (uVar3 <= param_2) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = param_2 / uVar3;
        }
        uVar6 = param_2 - uVar6 * uVar3;
      }
      puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xb0) + uVar6 * 8);
    }
    if ((puVar9 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar9, plVar15 != (long *)0x0)) {
      if ((uVar4 & uVar3) == 0) {
        do {
          uVar8 = plVar15[1];
          if (uVar8 != param_2 && (uVar8 & uVar4) != uVar6) break;
          if ((uVar8 == param_2) && (plVar15[2] == param_2)) goto LAB_0089456c;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar15[1];
          if (uVar8 == param_2) {
            if (plVar15[2] == param_2) goto LAB_0089456c;
          }
          else {
            if (uVar3 <= uVar8) {
              uVar7 = 0;
              if (uVar3 != 0) {
                uVar7 = uVar8 / uVar3;
              }
              uVar8 = uVar8 - uVar7 * uVar3;
            }
            if (uVar8 != uVar6) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_00894880;
LAB_0089456c:
  uVar6 = *(ulong *)(param_1 + 0x60);
  if (uVar6 != 0) {
    uVar7 = plVar15[3];
    uVar10 = uVar6 - 1;
    uVar8 = uVar10 & uVar6;
    if (uVar8 == 0) {
      uVar13 = uVar10 & uVar7;
LAB_008945ac:
      lVar12 = *(long *)(param_1 + 0x58);
      puVar9 = *(undefined8 **)(lVar12 + uVar13 * 8);
    }
    else {
      uVar13 = uVar7;
      if (uVar7 < uVar6) goto LAB_008945ac;
      uVar13 = 0;
      if (uVar6 != 0) {
        uVar13 = uVar7 / uVar6;
      }
      uVar13 = uVar7 - uVar13 * uVar6;
      lVar12 = *(long *)(param_1 + 0x58);
      puVar9 = *(undefined8 **)(lVar12 + uVar13 * 8);
    }
    if ((puVar9 != (undefined8 *)0x0) && (plVar2 = (long *)*puVar9, plVar2 != (long *)0x0)) {
      if (uVar8 == 0) {
        do {
          uVar14 = plVar2[1];
          if (uVar14 != uVar7 && (uVar14 & uVar10) != uVar13) break;
          if ((uVar14 == uVar7) && (plVar2[2] == uVar7)) goto LAB_00894638;
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar2[1];
          if (uVar14 == uVar7) {
            if (plVar2[2] == uVar7) goto LAB_00894638;
          }
          else {
            if (uVar6 <= uVar14) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar14 / uVar6;
              }
              uVar14 = uVar14 - uVar1 * uVar6;
            }
            if (uVar14 != uVar13) break;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  goto LAB_0089475c;
LAB_00894638:
  if (uVar8 == 0) {
    uVar7 = uVar7 & uVar10;
  }
  else if (uVar6 <= uVar7) {
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar7 / uVar6;
    }
    uVar7 = uVar7 - uVar3 * uVar6;
  }
  plVar11 = *(long **)(lVar12 + uVar7 * 8);
  do {
    plVar5 = plVar11;
    plVar11 = (long *)*plVar5;
  } while ((long *)*plVar5 != plVar2);
  if (plVar5 == (long *)(param_1 + 0x80)) {
LAB_008946a4:
    if (*plVar2 != 0) {
      uVar3 = *(ulong *)(*plVar2 + 8);
      if (uVar8 == 0) {
        uVar3 = uVar3 & uVar10;
      }
      else if (uVar6 <= uVar3) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar3 / uVar6;
        }
        uVar3 = uVar3 - uVar4 * uVar6;
      }
      if (uVar3 == uVar7) goto LAB_008946e0;
    }
    *(undefined8 *)(lVar12 + uVar7 * 8) = 0;
  }
  else {
    uVar3 = plVar5[1];
    if (uVar8 == 0) {
      uVar3 = uVar3 & uVar10;
    }
    else if (uVar6 <= uVar3) {
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar3 / uVar6;
      }
      uVar3 = uVar3 - uVar4 * uVar6;
    }
    if (uVar3 != uVar7) goto LAB_008946a4;
  }
LAB_008946e0:
  if (*plVar2 != 0) {
    uVar3 = *(ulong *)(*plVar2 + 8);
    if (uVar8 == 0) {
      uVar3 = uVar3 & uVar10;
    }
    else if (uVar6 <= uVar3) {
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar3 / uVar6;
      }
      uVar3 = uVar3 - uVar4 * uVar6;
    }
    if (uVar3 != uVar7) {
      *(long **)(*(long *)(param_1 + 0x58) + uVar3 * 8) = plVar5;
    }
  }
  *plVar5 = *plVar2;
  *plVar2 = 0;
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + -1;
  (**(code **)(**(long **)(param_1 + 0x88) + 0x18))(*(long **)(param_1 + 0x88),plVar2,0x20,8);
  uVar3 = *(ulong *)(param_1 + 0xb8);
  param_2 = plVar15[1];
  uVar4 = uVar3 - 1;
LAB_0089475c:
  uVar6 = uVar4 & uVar3;
  if (uVar6 == 0) {
    param_2 = uVar4 & param_2;
  }
  else if (uVar3 <= param_2) {
    uVar8 = 0;
    if (uVar3 != 0) {
      uVar8 = param_2 / uVar3;
    }
    param_2 = param_2 - uVar8 * uVar3;
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0xb0) + param_2 * 8);
  do {
    plVar11 = plVar2;
    plVar2 = (long *)*plVar11;
  } while ((long *)*plVar11 != plVar15);
  if (plVar11 == (long *)(param_1 + 0xd8)) {
LAB_008947d0:
    if (*plVar15 != 0) {
      uVar8 = *(ulong *)(*plVar15 + 8);
      if (uVar6 == 0) {
        uVar8 = uVar8 & uVar4;
      }
      else if (uVar3 <= uVar8) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar8 / uVar3;
        }
        uVar8 = uVar8 - uVar7 * uVar3;
      }
      if (uVar8 == param_2) goto LAB_0089480c;
    }
    *(undefined8 *)(*(long *)(param_1 + 0xb0) + param_2 * 8) = 0;
  }
  else {
    uVar8 = plVar11[1];
    if (uVar6 == 0) {
      uVar8 = uVar8 & uVar4;
    }
    else if (uVar3 <= uVar8) {
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = uVar8 / uVar3;
      }
      uVar8 = uVar8 - uVar7 * uVar3;
    }
    if (uVar8 != param_2) goto LAB_008947d0;
  }
LAB_0089480c:
  lVar12 = *plVar15;
  if (lVar12 != 0) {
    uVar8 = *(ulong *)(lVar12 + 8);
    if (uVar6 == 0) {
      uVar8 = uVar8 & uVar4;
    }
    else if (uVar3 <= uVar8) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar8 / uVar3;
      }
      uVar8 = uVar8 - uVar4 * uVar3;
    }
    if (uVar8 != param_2) {
      *(long **)(*(long *)(param_1 + 0xb0) + uVar8 * 8) = plVar11;
      lVar12 = *plVar15;
    }
  }
  *plVar11 = lVar12;
  *plVar15 = 0;
  *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + -1;
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))(*(long **)(param_1 + 0xe0),plVar15,0x20,8);
LAB_00894880:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x130));
  return;
}


