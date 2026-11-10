/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ba5d00; name: FUN_00ba5d00
 */


void FUN_00ba5d00(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar4 == (undefined8 *)0x0) goto LAB_00ba5d54;
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    lVar2 = FUN_00b9a020();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar4 = puVar4 + -10;
        goto LAB_00ba5d54;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_00ba5d54:
  FUN_00b97190(puVar4,0);
  uVar3 = FUN_00bcb720(*(undefined8 *)(param_1 + 0x78));
  FUN_00b97330(puVar4,uVar3);
  FUN_00bab1a0(*(undefined8 *)(param_1 + 0x80));
  FUN_00bab1e0(*(undefined8 *)(param_1 + 0x80));
  return;
}


