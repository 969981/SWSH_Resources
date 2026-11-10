/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d0eb0; name: FUN_010d0eb0
 */


void FUN_010d0eb0(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    lVar2 = FUN_010c8950();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar4 = puVar4 + -10;
        goto LAB_010d0f04;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_010d0f04:
  FUN_010c6c30(puVar4,3);
  uVar3 = FUN_010386c0(*(undefined8 *)(param_1 + 200));
  if ((uVar3 & 1) == 0) {
    plVar1 = (long *)(*(long *)(*(long *)(param_1 + 200) + 0x5d0) + 0x60);
    (**(code **)(*plVar1 + 8))(plVar1,0);
    if (*(char *)(param_1 + 0x108) == '\0') {
      FUN_01038270(*(undefined8 *)(param_1 + 200),1);
    }
    else {
      FUN_010382c0();
    }
    *(undefined1 *)(param_1 + 0x109) = 1;
  }
  FUN_010d2dc0(*(undefined8 *)(param_1 + 0xc0),0);
  *(undefined8 *)(param_1 + 0xd0) = 2;
  return;
}


