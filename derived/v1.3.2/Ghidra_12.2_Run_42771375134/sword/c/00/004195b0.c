/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004195b0; name: FUN_004195b0
 */


undefined8 * FUN_004195b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x48);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_0040b140(puVar1,param_2,param_3);
    *puVar1 = 0;
    plVar2 = (long *)(param_1 + 0x80);
    if (*plVar2 != 0) {
      plVar2 = *(long **)(param_1 + 0x78);
    }
    *plVar2 = (long)puVar1;
    *(undefined8 **)(param_1 + 0x78) = puVar1;
  }
  return puVar1;
}


