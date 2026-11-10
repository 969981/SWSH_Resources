/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e6060; name: FUN_006e6060
 */


void FUN_006e6060(long param_1,long *param_2,int param_3)

{
  MutexType *pMVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *local_48;
  
  if ((char)param_2[0x2e] != '\0') {
    return;
  }
  uVar2 = FUN_006d0510();
  pMVar1 = (MutexType *)(param_1 + 0x360);
  nn::os::LockMutex(pMVar1);
  if ((uVar2 & 1) == 0) {
    if ((*(long **)(param_1 + 0x388) == param_2) || ((char)param_2[0x2e] != '\0'))
    goto LAB_006e65a8;
    plVar5 = *(long **)(param_1 + 0x300);
    plVar6 = *(long **)(param_1 + 0x308);
    if (param_3 < 0) {
      if ((plVar6 != plVar5) && ((long *)*plVar5 != param_2)) {
        do {
          plVar5 = plVar5 + 1;
          if (plVar6 == plVar5) goto LAB_006e63bc;
        } while ((long *)*plVar5 != param_2);
      }
      if (plVar5 != plVar6) {
        if (plVar5 + 1 == plVar6) {
LAB_006e6390:
          do {
            plVar8 = plVar6 + -1;
            if (*plVar8 != 0) {
              (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
              plVar6[-1] = 0;
            }
            plVar6 = plVar8;
          } while (plVar5 != plVar8);
        }
        else {
          plVar8 = plVar5;
          do {
            if (*plVar8 != 0) {
              (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
              *plVar8 = 0;
            }
            plVar5 = plVar8 + 1;
            lVar4 = *plVar5;
            *plVar5 = 0;
            *plVar8 = lVar4;
            plVar8 = plVar5;
          } while (plVar6 + -1 != plVar5);
          plVar6 = *(long **)(param_1 + 0x308);
          if (plVar6 != plVar5) goto LAB_006e6390;
        }
        *(long **)(param_1 + 0x308) = plVar5;
      }
    }
    else {
      if ((plVar6 != plVar5) && ((long *)*plVar5 != param_2)) {
        do {
          plVar5 = plVar5 + 1;
          if (plVar6 == plVar5) goto LAB_006e63bc;
        } while ((long *)*plVar5 != param_2);
      }
      if (plVar5 != plVar6) goto LAB_006e65a8;
    }
LAB_006e63bc:
    plVar5 = *(long **)(param_1 + 0x330);
    plVar6 = *(long **)(param_1 + 0x338);
    if (param_3 < 1) {
      if ((plVar6 != plVar5) && ((long *)*plVar5 != param_2)) {
        do {
          plVar5 = plVar5 + 1;
          if (plVar6 == plVar5) goto LAB_006e64c0;
        } while ((long *)*plVar5 != param_2);
      }
      if (plVar5 != plVar6) {
        if (plVar5 + 1 == plVar6) {
LAB_006e6494:
          do {
            plVar8 = plVar6 + -1;
            if (*plVar8 != 0) {
              (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
              plVar6[-1] = 0;
            }
            plVar6 = plVar8;
          } while (plVar5 != plVar8);
        }
        else {
          plVar8 = plVar5;
          do {
            if (*plVar8 != 0) {
              (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
              *plVar8 = 0;
            }
            plVar5 = plVar8 + 1;
            lVar4 = *plVar5;
            *plVar5 = 0;
            *plVar8 = lVar4;
            plVar8 = plVar5;
          } while (plVar6 + -1 != plVar5);
          plVar6 = *(long **)(param_1 + 0x338);
          if (plVar6 != plVar5) goto LAB_006e6494;
        }
        *(long **)(param_1 + 0x338) = plVar5;
      }
    }
    else {
      if ((plVar6 != plVar5) && ((long *)*plVar5 != param_2)) {
        do {
          plVar5 = plVar5 + 1;
          if (plVar6 == plVar5) goto LAB_006e64c0;
        } while ((long *)*plVar5 != param_2);
      }
      if (plVar5 != plVar6) goto LAB_006e65a8;
    }
LAB_006e64c0:
    plVar5 = (long *)param_2[0x2f];
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)param_2[1];
    }
    (**(code **)(*plVar5 + 0xa0))();
    local_48 = param_2;
    (**(code **)(param_2[9] + 0x10))(param_2 + 9);
    lVar4 = param_1 + (long)param_3 * 0x30;
    plVar5 = *(long **)(lVar4 + 0x308);
    if (plVar5 < *(long **)(lVar4 + 0x310)) {
      uVar7 = *(undefined8 *)(param_1 + (long)param_3 * 0x30 + 0x318);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      plVar6 = local_48;
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar7;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      local_48 = (long *)0x0;
      *plVar5 = (long)plVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      *(long *)(lVar4 + 0x308) = *(long *)(lVar4 + 0x308) + 8;
    }
    else {
      FUN_006e6b20(param_1 + (long)param_3 * 0x30 + 0x300,&local_48);
      if (local_48 != (long *)0x0) {
        (**(code **)(local_48[9] + 0x18))();
        local_48 = (long *)0x0;
      }
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x380));
LAB_006e65a8:
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  if ((char)param_2[0x2e] != '\0') {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  plVar5 = *(long **)(param_1 + 0x300);
  plVar6 = *(long **)(param_1 + 0x308);
  if ((plVar6 != plVar5) && ((long *)*plVar5 != param_2)) {
    do {
      plVar5 = plVar5 + 1;
      if (plVar6 == plVar5) goto LAB_006e61e4;
    } while ((long *)*plVar5 != param_2);
  }
  if (plVar5 != plVar6) {
    if (plVar5 + 1 == plVar6) {
LAB_006e61b8:
      do {
        plVar8 = plVar6 + -1;
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          plVar6[-1] = 0;
        }
        plVar6 = plVar8;
      } while (plVar5 != plVar8);
    }
    else {
      plVar8 = plVar5;
      do {
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          *plVar8 = 0;
        }
        plVar5 = plVar8 + 1;
        lVar4 = *plVar5;
        *plVar5 = 0;
        *plVar8 = lVar4;
        plVar8 = plVar5;
      } while (plVar6 + -1 != plVar5);
      plVar6 = *(long **)(param_1 + 0x308);
      if (plVar6 != plVar5) goto LAB_006e61b8;
    }
    *(long **)(param_1 + 0x308) = plVar5;
  }
LAB_006e61e4:
  plVar5 = *(long **)(param_1 + 0x330);
  plVar6 = *(long **)(param_1 + 0x338);
  if ((plVar6 != plVar5) && ((long *)*plVar5 != param_2)) {
    do {
      plVar5 = plVar5 + 1;
      if (plVar6 == plVar5) goto LAB_006e62a4;
    } while ((long *)*plVar5 != param_2);
  }
  if (plVar5 == plVar6) goto LAB_006e62a4;
  if (plVar5 + 1 == plVar6) {
LAB_006e6278:
    do {
      plVar8 = plVar6 + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        plVar6[-1] = 0;
      }
      plVar6 = plVar8;
    } while (plVar5 != plVar8);
  }
  else {
    plVar8 = plVar5;
    do {
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        *plVar8 = 0;
      }
      plVar5 = plVar8 + 1;
      lVar4 = *plVar5;
      *plVar5 = 0;
      *plVar8 = lVar4;
      plVar8 = plVar5;
    } while (plVar6 + -1 != plVar5);
    plVar6 = *(long **)(param_1 + 0x338);
    if (plVar6 != plVar5) goto LAB_006e6278;
  }
  *(long **)(param_1 + 0x338) = plVar5;
LAB_006e62a4:
  nn::os::UnlockMutex(pMVar1);
  plVar5 = (long *)param_2[0x2f];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)param_2[1];
  }
  (**(code **)(*plVar5 + 0xa0))();
  (**(code **)(*param_2 + 0x38))(param_2);
  FUN_006e22c0(param_2);
  plVar5 = (long *)param_2[0x2f];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)param_2[1];
  }
                    /* WARNING: Could not recover jumptable at 0x006e6304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0xa8))();
  return;
}


