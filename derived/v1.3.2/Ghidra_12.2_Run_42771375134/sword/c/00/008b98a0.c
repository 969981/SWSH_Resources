/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b98a0; name: FUN_008b98a0
 */


void FUN_008b98a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar3 == 0) {
    FUN_014c9030(uVar2,0,0);
    lVar3 = *(long *)(param_1 + 0x68);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_014c9030(uVar2,0,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(param_1 + 0x68);
  }
  if ((lVar3 != 0) && (puVar1 = *(undefined8 **)(lVar3 + 0x60), puVar1 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar1)(puVar1);
    lVar3 = FUN_00897d00();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar3) {
        puVar1 = puVar1 + -10;
        goto LAB_008b9960;
      }
    }
  }
  puVar1 = (undefined8 *)0x0;
LAB_008b9960:
  FUN_008a6b70(puVar1,0xcf3669ca23458a59,1,0);
  return;
}


