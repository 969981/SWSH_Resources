/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c6ee0; name: FUN_006c6ee0
 */


void FUN_006c6ee0(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
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
LAB_006c6f7c:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c6f7c;
    }
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))
              (*(long **)(param_1 + 0xb0),puVar2,*(undefined8 *)(param_1 + 0xb8),
               *(undefined8 *)(param_1 + 0xc0));
  }
  puVar2 = *(undefined8 **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
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
LAB_006c7020:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c7020;
    }
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))
              (*(long **)(param_1 + 0xf0),puVar2,*(undefined8 *)(param_1 + 0xf8),
               *(undefined8 *)(param_1 + 0x100));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
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
LAB_006c70c4:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c70c4;
    }
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
              (*(long **)(param_1 + 0x30),puVar2,*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
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
LAB_006c7168:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c7168;
    }
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),puVar2,*(undefined8 *)(param_1 + 0x78),
               *(undefined8 *)(param_1 + 0x80));
  }
  lVar3 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (lVar3 != 0) {
    plVar4 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar4) {
      pcVar1 = *(code **)(*plVar4 + 0x20);
LAB_006c71b8:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c71b8;
    }
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
              (*(long **)(param_1 + 0x90),lVar3,*(undefined8 *)(param_1 + 0x98),
               *(undefined8 *)(param_1 + 0xa0));
  }
  lVar3 = *(long *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (lVar3 != 0) {
    plVar4 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar4) {
      pcVar1 = *(code **)(*plVar4 + 0x20);
LAB_006c7208:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c7208;
    }
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))
              (*(long **)(param_1 + 0xd0),lVar3,*(undefined8 *)(param_1 + 0xd8),
               *(undefined8 *)(param_1 + 0xe0));
  }
  lVar3 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar3 != 0) {
    plVar4 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar4) {
      pcVar1 = *(code **)(*plVar4 + 0x20);
LAB_006c7258:
      (*pcVar1)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c7258;
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
              (*(long **)(param_1 + 0x10),lVar3,*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
  }
  lVar3 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (lVar3 == 0) {
    return;
  }
  plVar4 = *(long **)(lVar3 + 0x30);
  if ((long *)(lVar3 + 0x10) == plVar4) {
    pcVar1 = *(code **)(*plVar4 + 0x20);
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_006c72bc;
    pcVar1 = *(code **)(*plVar4 + 0x28);
  }
  (*pcVar1)();
LAB_006c72bc:
                    /* WARNING: Could not recover jumptable at 0x006c72dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
            (*(long **)(param_1 + 0x50),lVar3,*(undefined8 *)(param_1 + 0x58),
             *(undefined8 *)(param_1 + 0x60));
  return;
}


