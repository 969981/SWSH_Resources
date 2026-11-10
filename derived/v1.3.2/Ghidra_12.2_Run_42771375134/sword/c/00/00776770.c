/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776770; name: FUN_00776770
 */


void FUN_00776770(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x2d0));
  uVar5 = *(ulong *)(param_1 + 0x280);
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    uVar1 = uVar6 & uVar5;
    if (uVar1 == 0) {
      uVar8 = uVar6 & param_2;
      lVar7 = *(long *)(param_1 + 0x278);
      puVar9 = *(undefined8 **)(lVar7 + uVar8 * 8);
    }
    else {
      uVar8 = param_2;
      if (uVar5 <= param_2) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = param_2 / uVar5;
        }
        uVar8 = param_2 - uVar8 * uVar5;
      }
      lVar7 = *(long *)(param_1 + 0x278);
      puVar9 = *(undefined8 **)(lVar7 + uVar8 * 8);
    }
    if ((puVar9 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar9, plVar4 != (long *)0x0)) {
      if (uVar1 == 0) {
        do {
          uVar10 = plVar4[1];
          if (uVar10 != param_2 && (uVar10 & uVar6) != uVar8) break;
          if ((uVar10 == param_2) && (plVar4[2] == param_2)) goto LAB_0077685c;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar4[1];
          if (uVar10 == param_2) {
            if (plVar4[2] == param_2) goto LAB_0077685c;
          }
          else {
            if (uVar5 <= uVar10) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar10 / uVar5;
              }
              uVar10 = uVar10 - uVar2 * uVar5;
            }
            if (uVar10 != uVar8) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  goto LAB_00776974;
LAB_0077685c:
  if (uVar1 == 0) {
    param_2 = uVar6 & param_2;
  }
  else if (uVar5 <= param_2) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = param_2 / uVar5;
    }
    param_2 = param_2 - uVar8 * uVar5;
  }
  plVar3 = *(long **)(lVar7 + param_2 * 8);
  do {
    plVar11 = plVar3;
    plVar3 = (long *)*plVar11;
  } while ((long *)*plVar11 != plVar4);
  if (plVar11 == (long *)(param_1 + 0x2a0)) {
LAB_007768c8:
    if (*plVar4 != 0) {
      uVar8 = *(ulong *)(*plVar4 + 8);
      if (uVar1 == 0) {
        uVar8 = uVar8 & uVar6;
      }
      else if (uVar5 <= uVar8) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar8 / uVar5;
        }
        uVar8 = uVar8 - uVar10 * uVar5;
      }
      if (uVar8 == param_2) goto LAB_00776904;
    }
    *(undefined8 *)(lVar7 + param_2 * 8) = 0;
  }
  else {
    uVar8 = plVar11[1];
    if (uVar1 == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar10 * uVar5;
    }
    if (uVar8 != param_2) goto LAB_007768c8;
  }
LAB_00776904:
  lVar7 = *plVar4;
  if (lVar7 != 0) {
    uVar8 = *(ulong *)(lVar7 + 8);
    if (uVar1 == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != param_2) {
      *(long **)(*(long *)(param_1 + 0x278) + uVar8 * 8) = plVar11;
      lVar7 = *plVar4;
    }
  }
  *plVar11 = lVar7;
  *plVar4 = 0;
  *(long *)(param_1 + 0x2c0) = *(long *)(param_1 + 0x2c0) + -1;
  (**(code **)(**(long **)(param_1 + 0x2a8) + 0x18))(*(long **)(param_1 + 0x2a8),plVar4,0x40,8);
LAB_00776974:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2d0));
  return;
}


