/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c24a0; name: FUN_004c24a0
 */


long FUN_004c24a0(void)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_02712de8;
  if (*(long *)PTR_DAT_02712de8 != 0) {
    return *(long *)PTR_DAT_02712de8;
  }
  plVar2 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x30);
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)puVar1 = 0;
    return 0;
  }
  FUN_004c2d60(plVar2);
  *plVar2 = (long)(PTR_DAT_027134c8 + 0x10);
  *(long **)puVar1 = plVar2;
  FUN_00432480(PTR_LAB_027134d0,0x90,0);
  return *(long *)puVar1;
}


