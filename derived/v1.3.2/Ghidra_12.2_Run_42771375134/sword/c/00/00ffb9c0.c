/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffb9c0; name: FUN_00ffb9c0
 */


void FUN_00ffb9c0(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *(long *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  puVar3 = (undefined8 *)0x0;
  if (*(long *)(param_2 + 0x70) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x70) + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_006f10c0();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto LAB_00ffba20;
        }
      }
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_00ffba20:
  *(undefined8 **)(param_1 + 0x18) = puVar3;
  return;
}


