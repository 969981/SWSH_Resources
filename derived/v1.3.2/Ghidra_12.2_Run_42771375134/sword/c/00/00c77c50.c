/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c77c50; name: FUN_00c77c50
 */


void FUN_00c77c50(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = param_1 + 0x58;
  FUN_01050390(*(undefined8 *)(param_1 + 0x10),lVar4,0);
  lVar1 = param_1 + 0x18;
  FUN_010504b0(*(undefined8 *)(param_1 + 0x10),lVar1);
  if ((*(long *)(param_1 + 0x1b0) != 0) && (*(int *)(*(long *)(param_1 + 0x1b0) + 0x54) != 0)) {
    if ((*(long *)(param_1 + 0x1b0) != 0) &&
       (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x1b0) + 0x60), puVar5 != (undefined8 *)0x0))
    {
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      lVar3 = FUN_00c781c0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar5 = puVar5 + -10;
          goto LAB_00c77ce0;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_00c77ce0:
    FUN_01050390(puVar5,lVar4,0);
    if ((*(long *)(param_1 + 0x1b0) != 0) &&
       (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x1b0) + 0x60), puVar5 != (undefined8 *)0x0))
    {
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      lVar3 = FUN_00c781c0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar5 = puVar5 + -10;
          goto LAB_00c77d2c;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_00c77d2c:
    FUN_010504b0(puVar5,lVar1);
  }
  if ((*(long *)(param_1 + 0x1b8) == 0) || (*(int *)(*(long *)(param_1 + 0x1b8) + 0x54) == 0)) {
    return;
  }
  if ((*(long *)(param_1 + 0x1b8) != 0) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x1b8) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_00c781c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar5 = puVar5 + -10;
        goto LAB_00c77d88;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_00c77d88:
  FUN_01050390(puVar5,lVar4,0);
  if ((*(long *)(param_1 + 0x1b8) != 0) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x1b8) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar4 = FUN_00c781c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar4) {
        puVar5 = puVar5 + -10;
        goto LAB_00c77dd4;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_00c77dd4:
  FUN_010504b0(puVar5,lVar1);
  return;
}


