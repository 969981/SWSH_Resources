/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff8cb0; name: FUN_00ff8cb0
 */


void FUN_00ff8cb0(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar2 = 0x60;
  if ((param_3 & 1) == 0) {
    lVar2 = 0x68;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  plVar1 = (long *)FUN_00ffa280(uVar3);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x10))();
  if ((long *)plVar1[1] != (long *)*plVar1) {
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    lVar2 = *(long *)*plVar1;
    if ((lVar2 != 0) && (puVar5 = *(undefined8 **)(lVar2 + 0x60), puVar5 != (undefined8 *)0x0)) {
      plVar1 = (long *)(**(code **)*puVar5)(puVar5);
      lVar2 = FUN_00ff92a0();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar5 = puVar5 + -10;
          goto LAB_00ff8d44;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_00ff8d44:
    FUN_00ffa5a0(uVar4,puVar5);
  }
  if (param_2 == 0) {
    return;
  }
  FUN_00ffa5a0(uVar3,param_2);
  return;
}


