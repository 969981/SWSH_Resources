/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010dd540; name: FUN_010dd540
 */


undefined8 FUN_010dd540(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_2998 [10600];
  
  uVar1 = FUN_010d2e50(*(undefined8 *)(param_1 + 0x88));
  switch(uVar1) {
  case 1:
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    if (*(long *)(param_1 + 0x68) == 0) {
LAB_010dd5d0:
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      if (puVar4 != (undefined8 *)0x0) {
        plVar2 = (long *)(**(code **)*puVar4)(puVar4);
        lVar3 = FUN_010c8950();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar4 = puVar4 + -10;
            goto LAB_010dd5d4;
          }
        }
        goto LAB_010dd5d0;
      }
    }
LAB_010dd5d4:
    lVar3 = FUN_010c6c10(puVar4);
    *(undefined4 *)(lVar3 + 0x20) = 0;
    uVar5 = 1;
    FUN_010c6c30(puVar4,1);
    break;
  case 2:
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    FUN_010d2970(*(undefined8 *)(param_1 + 0x88),0);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_010c8950();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          goto LAB_010dd650;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
LAB_010dd650:
    FUN_010c6c30(puVar4,10);
    uVar5 = 1;
    break;
  case 3:
                    /* WARNING: Subroutine does not return */
    memset(auStack_2998,0,0x2961);
  case 4:
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_010c8950();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          goto LAB_010dd71c;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
LAB_010dd71c:
    FUN_010c6c30(puVar4,8);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    FUN_010d2dc0(*(undefined8 *)(param_1 + 0x88),0);
    *(undefined8 *)(param_1 + 0x98) = 3;
  default:
    FUN_010d2d30(*(undefined8 *)(param_1 + 0x88));
    uVar5 = 0;
  }
  return uVar5;
}


