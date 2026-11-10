/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b99a0; name: FUN_005b99a0
 */


undefined8 FUN_005b99a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (DAT_02763970 == 0) {
    puVar1 = &DAT_02763978;
    if (param_1 != (undefined8 *)0x0) {
      puVar1 = param_1;
    }
    *(undefined8 **)PTR_PTR_02713988 = puVar1;
    return 0;
  }
  if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
    return 0xffffffff;
  }
  FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfxMemoryAllocator.cpp(%d) : PPFX ERROR: ",0x6d);
  FUN_00517ae0("SetMemoryAllocator(): Call when any pfx interface is not instantiated yet.\n");
  return 0xffffffff;
}


