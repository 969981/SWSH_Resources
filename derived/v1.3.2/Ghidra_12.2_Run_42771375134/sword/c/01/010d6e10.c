/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d6e10; name: FUN_010d6e10
 */


undefined8 FUN_010d6e10(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar3 = FUN_010d2e50(*(undefined8 *)(param_1 + 0x88));
  switch(uVar3) {
  case 1:
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar6)(puVar6);
      lVar5 = FUN_010c8950();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar5) {
          puVar6 = puVar6 + -10;
          goto LAB_010d6e8c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
LAB_010d6e8c:
    FUN_010c6c30(puVar6,3);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    FUN_010d2dc0(*(undefined8 *)(param_1 + 0x88),0);
    *(undefined8 *)(param_1 + 0x9c) = 3;
    break;
  case 2:
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    FUN_010d2970(*(undefined8 *)(param_1 + 0x88),0);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar6)(puVar6);
      lVar5 = FUN_010c8950();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar5) {
          puVar6 = puVar6 + -10;
          goto LAB_010d6f18;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
LAB_010d6f18:
    FUN_010c6c30(puVar6,10);
    return 1;
  case 3:
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    cVar1 = *(char *)(param_1 + 0xa4);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar6)(puVar6);
      lVar5 = FUN_010c8950();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar5) {
          puVar6 = puVar6 + -10;
          goto joined_r0x010d7094;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
joined_r0x010d7094:
    if (cVar1 == '\0') {
      lVar5 = FUN_010c6c10(puVar6);
      *(undefined4 *)(lVar5 + 0x20) = 4;
      FUN_010c6c30(puVar6,1);
      return 1;
    }
    FUN_010c6c30(puVar6,9);
    FUN_010d2dc0(*(undefined8 *)(param_1 + 0x88),0);
    *(undefined8 *)(param_1 + 0x9c) = 3;
    return 1;
  case 4:
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    *(undefined8 *)(param_1 + 0x9c) = 2;
    break;
  case 5:
    if (*(long *)(param_1 + 0x68) == 0) {
LAB_010d6ffc:
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      if (puVar6 != (undefined8 *)0x0) {
        plVar4 = (long *)(**(code **)*puVar6)(puVar6);
        lVar5 = FUN_010c8950();
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)lVar5) {
            puVar6 = puVar6 + -10;
            goto LAB_010d7000;
          }
        }
        goto LAB_010d6ffc;
      }
    }
LAB_010d7000:
    lVar5 = FUN_010c6c10(puVar6);
    bVar2 = *(byte *)(lVar5 + 0xbc);
    lVar5 = FUN_010c6c10(puVar6);
    *(byte *)(lVar5 + 0xbc) = bVar2 ^ 1;
    FUN_010d30b0(*(undefined8 *)(param_1 + 0x88),bVar2 == 0);
  }
  FUN_010d2d30(*(undefined8 *)(param_1 + 0x88));
  return 0;
}


