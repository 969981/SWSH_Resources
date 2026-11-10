/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007aee90; name: FUN_007aee90
 */


void FUN_007aee90(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    plVar1 = *(long **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if ((plVar1 != (long *)0x0) && (plVar1[2] != 0)) {
      (**(code **)(*plVar1 + 0x20))();
    }
    plVar1 = *(long **)(param_1 + 0x80);
    if (plVar1 != (long *)0x0) {
      puVar2 = (undefined8 *)*plVar1;
      puVar5 = (undefined8 *)plVar1[1];
      while (puVar5 != puVar2) {
        puVar5 = puVar5 + -5;
        (**(code **)*puVar5)(puVar5);
      }
      plVar1[1] = (long)puVar2;
      puVar2 = *(undefined8 **)(param_1 + 0x80);
      puVar5 = (undefined8 *)*puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)puVar2[1];
        if (puVar4 == puVar5) {
          puVar4 = puVar5;
        }
        else {
          do {
            puVar4 = puVar4 + -5;
            (**(code **)*puVar4)(puVar4);
          } while (puVar5 != puVar4);
          puVar4 = (undefined8 *)*puVar2;
        }
        puVar2[1] = puVar5;
        FUN_017cd7a0(puVar4);
      }
      FUN_017cd7a0(puVar2);
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x58);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = *puVar2;
      plVar1 = *(long **)(param_1 + 0x58);
      if (*plVar1 != 0) {
        plVar1[1] = *plVar1;
        FUN_017cd7a0();
      }
      FUN_017cd7a0(plVar1);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    plVar1 = *(long **)(param_1 + 0x60);
    if (plVar1 != (long *)0x0) {
      puVar2 = (undefined8 *)*plVar1;
      puVar5 = (undefined8 *)plVar1[1];
      while (puVar5 != puVar2) {
        puVar5 = puVar5 + -0x28;
        (**(code **)*puVar5)(puVar5);
      }
      plVar1[1] = (long)puVar2;
      puVar2 = *(undefined8 **)(param_1 + 0x60);
      puVar5 = (undefined8 *)*puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)puVar2[1];
        if (puVar4 == puVar5) {
          puVar4 = puVar5;
        }
        else {
          do {
            puVar4 = puVar4 + -0x28;
            (**(code **)*puVar4)(puVar4);
          } while (puVar5 != puVar4);
          puVar4 = (undefined8 *)*puVar2;
        }
        puVar2[1] = puVar5;
        FUN_017cd7a0(puVar4);
      }
      FUN_017cd7a0(puVar2);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    plVar1 = *(long **)(param_1 + 0x68);
    if (plVar1 != (long *)0x0) {
      lVar6 = *plVar1;
      lVar3 = plVar1[1];
      while (lVar3 != lVar6) {
        puVar2 = (undefined8 *)(lVar3 + -0x10);
        lVar3 = lVar3 + -0x18;
        FUN_007b07e0(lVar3,*puVar2);
      }
      plVar1[1] = lVar6;
      plVar1 = *(long **)(param_1 + 0x68);
      lVar6 = *plVar1;
      if (lVar6 != 0) {
        lVar3 = plVar1[1];
        if (lVar3 == lVar6) {
          lVar3 = lVar6;
        }
        else {
          do {
            puVar2 = (undefined8 *)(lVar3 + -0x10);
            lVar3 = lVar3 + -0x18;
            FUN_007b07e0(lVar3,*puVar2);
          } while (lVar6 != lVar3);
          lVar3 = *plVar1;
        }
        plVar1[1] = lVar6;
        FUN_017cd7a0(lVar3);
      }
      FUN_017cd7a0(plVar1);
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x78);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN_017cd7a0(puVar2);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN_017cd7a0(puVar2);
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN_017cd7a0(puVar2);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}


