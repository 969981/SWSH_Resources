/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c5e40; name: FUN_006c5e40
 */


void FUN_006c5e40(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = (long)(PTR_DAT_02715278 + 0x10);
  FUN_006c6ee0();
  FUN_006cbc60(param_1 + 0x21);
  puVar2 = (undefined8 *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = puVar2[9];
    if (lVar3 != 0) {
      plVar4 = (long *)puVar2[8];
      do {
        lVar3 = lVar3 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      } while (lVar3 != 0);
    }
    if (puVar2[10] != 0) {
      (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,puVar2[8],puVar2[10] << 3,8);
    }
    plVar4 = (long *)puVar2[6];
    if (puVar2 + 2 == plVar4) {
      pcVar1 = *(code **)(*plVar4 + 0x20);
LAB_006c5ef8:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c5ef8;
    }
    (**(code **)(*(long *)param_1[0x1e] + 0x18))
              ((long *)param_1[0x1e],puVar2,param_1[0x1f],param_1[0x20]);
  }
  lVar3 = param_1[0x19];
  param_1[0x19] = 0;
  if (lVar3 != 0) {
    plVar4 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar4) {
      pcVar1 = *(code **)(*plVar4 + 0x20);
LAB_006c5f48:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c5f48;
    }
    (**(code **)(*(long *)param_1[0x1a] + 0x18))
              ((long *)param_1[0x1a],lVar3,param_1[0x1b],param_1[0x1c]);
  }
  puVar2 = (undefined8 *)param_1[0x15];
  param_1[0x15] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = puVar2[9];
    if (lVar3 != 0) {
      plVar4 = (long *)puVar2[8];
      do {
        lVar3 = lVar3 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      } while (lVar3 != 0);
    }
    if (puVar2[10] != 0) {
      (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,puVar2[8],puVar2[10] << 3,8);
    }
    plVar4 = (long *)puVar2[6];
    if (puVar2 + 2 == plVar4) {
      pcVar1 = *(code **)(*plVar4 + 0x20);
LAB_006c5fec:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c5fec;
    }
    (**(code **)(*(long *)param_1[0x16] + 0x18))
              ((long *)param_1[0x16],puVar2,param_1[0x17],param_1[0x18]);
  }
  lVar3 = param_1[0x11];
  param_1[0x11] = 0;
  if (lVar3 != 0) {
    plVar4 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar4) {
      pcVar1 = *(code **)(*plVar4 + 0x20);
LAB_006c603c:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c603c;
    }
    (**(code **)(*(long *)param_1[0x12] + 0x18))
              ((long *)param_1[0x12],lVar3,param_1[0x13],param_1[0x14]);
  }
  puVar2 = (undefined8 *)param_1[0xd];
  param_1[0xd] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = puVar2[9];
    if (lVar3 != 0) {
      plVar4 = (long *)puVar2[8];
      do {
        lVar3 = lVar3 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      } while (lVar3 != 0);
    }
    if (puVar2[10] != 0) {
      (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,puVar2[8],puVar2[10] << 3,8);
    }
    plVar4 = (long *)puVar2[6];
    if (puVar2 + 2 == plVar4) {
      pcVar1 = *(code **)(*plVar4 + 0x20);
LAB_006c60e0:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c60e0;
    }
    (**(code **)(*(long *)param_1[0xe] + 0x18))
              ((long *)param_1[0xe],puVar2,param_1[0xf],param_1[0x10]);
  }
  lVar3 = param_1[9];
  param_1[9] = 0;
  if (lVar3 != 0) {
    plVar4 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar4) {
      pcVar1 = *(code **)(*plVar4 + 0x20);
LAB_006c6130:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c6130;
    }
    (**(code **)(*(long *)param_1[10] + 0x18))((long *)param_1[10],lVar3,param_1[0xb],param_1[0xc]);
  }
  puVar2 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = puVar2[9];
    if (lVar3 != 0) {
      plVar4 = (long *)puVar2[8];
      do {
        lVar3 = lVar3 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      } while (lVar3 != 0);
    }
    if (puVar2[10] != 0) {
      (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,puVar2[8],puVar2[10] << 3,8);
    }
    plVar4 = (long *)puVar2[6];
    if (puVar2 + 2 == plVar4) {
      pcVar1 = *(code **)(*plVar4 + 0x20);
LAB_006c61d4:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c61d4;
    }
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],puVar2,param_1[7],param_1[8]);
  }
  lVar3 = param_1[1];
  param_1[1] = 0;
  if (lVar3 == 0) {
    return;
  }
  plVar4 = *(long **)(lVar3 + 0x30);
  if ((long *)(lVar3 + 0x10) == plVar4) {
    pcVar1 = *(code **)(*plVar4 + 0x20);
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_006c6238;
    pcVar1 = *(code **)(*plVar4 + 0x28);
  }
  (*pcVar1)();
LAB_006c6238:
                    /* WARNING: Could not recover jumptable at 0x006c6258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar3,param_1[3],param_1[4]);
  return;
}


