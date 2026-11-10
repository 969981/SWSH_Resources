/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ba150; name: FUN_011ba150
 */


undefined8 FUN_011ba150(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    plVar3 = (long *)**(long **)(param_1 + 0x470);
    plVar1 = (long *)(*(long **)(param_1 + 0x470))[1];
    if ((plVar3 != plVar1) && (*plVar3 != lVar2)) {
      do {
        plVar3 = plVar3 + 0x2c;
        if (plVar1 == plVar3) {
          return 0;
        }
      } while (*plVar3 != lVar2);
    }
    if (plVar3 == plVar1) {
      return 0;
    }
  }
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    plVar3 = (long *)**(long **)(param_1 + 0x470);
    plVar1 = (long *)(*(long **)(param_1 + 0x470))[1];
    if ((plVar3 != plVar1) && (*plVar3 != lVar2)) {
      do {
        plVar3 = plVar3 + 0x2c;
        if (plVar1 == plVar3) {
          return 0;
        }
      } while (*plVar3 != lVar2);
    }
    if (plVar3 == plVar1) {
      return 0;
    }
  }
  lVar2 = param_2[2];
  if (lVar2 != 0) {
    plVar3 = (long *)**(long **)(param_1 + 0x470);
    plVar1 = (long *)(*(long **)(param_1 + 0x470))[1];
    if ((plVar3 != plVar1) && (*plVar3 != lVar2)) {
      do {
        plVar3 = plVar3 + 0x2c;
        if (plVar1 == plVar3) {
          return 0;
        }
      } while (*plVar3 != lVar2);
    }
    if (plVar3 == plVar1) {
      return 0;
    }
  }
  lVar2 = param_2[3];
  if (lVar2 != 0) {
    plVar3 = (long *)**(long **)(param_1 + 0x470);
    plVar1 = (long *)(*(long **)(param_1 + 0x470))[1];
    if ((plVar3 != plVar1) && (*plVar3 != lVar2)) {
      do {
        plVar3 = plVar3 + 0x2c;
        if (plVar1 == plVar3) {
          return 0;
        }
      } while (*plVar3 != lVar2);
    }
    if (plVar3 == plVar1) {
      return 0;
    }
  }
  return 1;
}


