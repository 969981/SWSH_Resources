/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01559860; name: FUN_01559860
 */


void FUN_01559860(long *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  pMVar1 = (MutexType *)(param_1 + 0xf);
  *param_1 = (long)(PTR_DAT_0272ae60 + 0x10);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    plVar4 = param_1 + 1;
    lVar7 = *plVar4;
    lVar8 = param_1[2];
    if (lVar7 != lVar8) {
      do {
        (**(code **)(*(long *)param_1[7] + 0x18))
                  ((long *)param_1[7],*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
        lVar7 = lVar7 + 0x20;
      } while (lVar8 != lVar7);
      lVar7 = *plVar4;
    }
    param_1[2] = lVar7;
    FUN_0155b7a0(plVar4);
    nn::os::UnlockMutex(pMVar1);
    lVar7 = param_1[0x28];
  }
  else {
    if ((long *)param_1[0xb] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xb] + 0x60))();
    }
    nn::os::UnlockMutex(pMVar1);
    lVar7 = param_1[0x28];
  }
  if (lVar7 != 0) {
    lVar8 = param_1[0x29];
    if (param_1[0x29] == lVar7) {
      lVar8 = lVar7;
    }
    else {
      do {
        pcVar3 = *(code **)(lVar8 + -0x78);
        lVar5 = lVar8 + -0x80;
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar8 + -0x70) = 0;
          *(undefined8 *)(lVar8 + -0x68) = 0;
          *(undefined8 *)(lVar8 + -0x80) = 0;
          *(undefined8 *)(lVar8 + -0x78) = 0;
          (*pcVar3)(lVar8 + -0x60);
        }
        lVar8 = lVar5;
      } while (lVar7 != lVar5);
      lVar8 = param_1[0x28];
    }
    param_1[0x29] = lVar7;
    (**(code **)(*(long *)param_1[0x2b] + 0x18))
              ((long *)param_1[0x2b],lVar8,param_1[0x2a] - lVar8,0x10);
  }
  lVar7 = param_1[0x22];
  if (lVar7 != 0) {
    lVar8 = param_1[0x23];
    if (param_1[0x23] == lVar7) {
      lVar8 = lVar7;
    }
    else {
      do {
        pcVar3 = *(code **)(lVar8 + -0x78);
        lVar5 = lVar8 + -0x80;
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar8 + -0x70) = 0;
          *(undefined8 *)(lVar8 + -0x68) = 0;
          *(undefined8 *)(lVar8 + -0x80) = 0;
          *(undefined8 *)(lVar8 + -0x78) = 0;
          (*pcVar3)(lVar8 + -0x60);
        }
        lVar8 = lVar5;
      } while (lVar7 != lVar5);
      lVar8 = param_1[0x22];
    }
    param_1[0x23] = lVar7;
    (**(code **)(*(long *)param_1[0x25] + 0x18))
              ((long *)param_1[0x25],lVar8,param_1[0x24] - lVar8,0x10);
  }
  lVar7 = param_1[0x1c];
  if (lVar7 != 0) {
    lVar8 = param_1[0x1d];
    if (param_1[0x1d] == lVar7) {
      lVar8 = lVar7;
    }
    else {
      do {
        pcVar3 = *(code **)(lVar8 + -0x78);
        lVar5 = lVar8 + -0x80;
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar8 + -0x70) = 0;
          *(undefined8 *)(lVar8 + -0x68) = 0;
          *(undefined8 *)(lVar8 + -0x80) = 0;
          *(undefined8 *)(lVar8 + -0x78) = 0;
          (*pcVar3)(lVar8 + -0x60);
        }
        lVar8 = lVar5;
      } while (lVar7 != lVar5);
      lVar8 = param_1[0x1c];
    }
    param_1[0x1d] = lVar7;
    (**(code **)(*(long *)param_1[0x1f] + 0x18))
              ((long *)param_1[0x1f],lVar8,param_1[0x1e] - lVar8,0x10);
  }
  plVar4 = (long *)param_1[0x16];
  if (plVar4 != (long *)0x0) {
    if ((long *)param_1[0x17] == plVar4) {
      plVar2 = plVar4;
    }
    else {
      plVar2 = (long *)param_1[0x17];
      do {
        plVar6 = plVar2 + -1;
        if (*plVar6 != 0) {
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
          plVar2[-1] = 0;
        }
        plVar2 = plVar6;
      } while (plVar4 != plVar6);
      plVar2 = (long *)param_1[0x16];
    }
    param_1[0x17] = (long)plVar4;
    (**(code **)(*(long *)param_1[0x19] + 0x18))
              ((long *)param_1[0x19],plVar2,param_1[0x18] - (long)plVar2,8);
  }
  if (param_1[0x15] != 0) {
    (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
    param_1[0x15] = 0;
  }
  if (param_1[0x14] != 0) {
    (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
    param_1[0x14] = 0;
  }
  FUN_0155b530(param_1);
  return;
}


