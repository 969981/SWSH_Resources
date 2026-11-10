/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00777560; name: FUN_00777560
 */


void FUN_00777560(long *param_1,uint param_2,undefined8 param_3,int param_4)

{
  MutexType *pMVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong *puVar15;
  long local_80 [3];
  long local_68;
  long local_58;
  
  local_58 = 0;
  pMVar1 = (MutexType *)(param_1 + 0xb);
  nn::os::LockMutex(pMVar1);
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    uVar6 = (ulong)param_2;
    if ((uVar9 & uVar8) == 0) {
      uVar7 = uVar9 & uVar6;
      puVar10 = *(undefined8 **)(*param_1 + uVar7 * 8);
    }
    else {
      uVar7 = uVar6;
      if (uVar8 <= uVar6) {
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = uVar6 / uVar8;
        }
        uVar7 = uVar6 - uVar7 * uVar8;
      }
      puVar10 = *(undefined8 **)(*param_1 + uVar7 * 8);
    }
    if ((puVar10 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar10, plVar14 != (long *)0x0)) {
      if ((uVar9 & uVar8) == 0) {
        do {
          puVar15 = (ulong *)(plVar14 + 1);
          uVar8 = *puVar15;
          if ((uVar8 != uVar6) && ((uVar8 & uVar9) != uVar7)) break;
          if ((uVar8 == uVar6) && (*(uint *)(plVar14 + 2) == param_2)) goto LAB_007776b0;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          puVar15 = (ulong *)(plVar14 + 1);
          uVar9 = *puVar15;
          if (uVar9 == uVar6) {
            if (*(uint *)(plVar14 + 2) == param_2) goto LAB_007776b0;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar13 = 0;
              if (uVar8 != 0) {
                uVar13 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar13 * uVar8;
            }
            if (uVar9 != uVar7) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  lVar11 = local_68;
  goto joined_r0x00777848;
LAB_007776b0:
  pcVar2 = (code *)plVar14[7];
  lVar3 = plVar14[8];
  FUN_0010d170(local_80,plVar14[4]);
  uVar9 = param_1[1];
  uVar7 = uVar9 - 1;
  uVar6 = *puVar15;
  local_58 = local_80[0];
  uVar8 = uVar7 & uVar9;
  if (uVar8 == 0) {
    uVar6 = uVar7 & uVar6;
  }
  else if (uVar9 <= uVar6) {
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar6 / uVar9;
    }
    uVar6 = uVar6 - uVar13 * uVar9;
  }
  plVar5 = *(long **)(*param_1 + uVar6 * 8);
  do {
    plVar12 = plVar5;
    plVar5 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar14);
  if (plVar12 == param_1 + 5) {
LAB_00777748:
    if (*plVar14 != 0) {
      uVar13 = *(ulong *)(*plVar14 + 8);
      if (uVar8 == 0) {
        uVar13 = uVar13 & uVar7;
      }
      else if (uVar9 <= uVar13) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar13 / uVar9;
        }
        uVar13 = uVar13 - uVar4 * uVar9;
      }
      if (uVar13 == uVar6) goto LAB_00777784;
    }
    *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
  }
  else {
    uVar13 = plVar12[1];
    if (uVar8 == 0) {
      uVar13 = uVar13 & uVar7;
    }
    else if (uVar9 <= uVar13) {
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = uVar13 / uVar9;
      }
      uVar13 = uVar13 - uVar4 * uVar9;
    }
    if (uVar13 != uVar6) goto LAB_00777748;
  }
LAB_00777784:
  lVar11 = *plVar14;
  if (lVar11 != 0) {
    uVar13 = *(ulong *)(lVar11 + 8);
    if (uVar8 == 0) {
      uVar13 = uVar13 & uVar7;
    }
    else if (uVar9 <= uVar13) {
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar13 / uVar9;
      }
      uVar13 = uVar13 - uVar8 * uVar9;
    }
    if (uVar13 != uVar6) {
      *(long **)(*param_1 + uVar13 * 8) = plVar12;
      lVar11 = *plVar14;
    }
  }
  *plVar12 = lVar11;
  *plVar14 = 0;
  param_1[9] = param_1[9] + -1;
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],plVar14,0x48,8);
  nn::os::UnlockMutex(pMVar1);
  lVar11 = local_68;
  if (pcVar2 != (code *)0x0) {
    FUN_006cf0c0(local_80,&local_58);
    (*pcVar2)(param_2,local_80,param_3,param_4 == 1,lVar3);
    lVar11 = 0;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
      lVar11 = local_68;
    }
  }
joined_r0x00777848:
  local_68 = lVar11;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


