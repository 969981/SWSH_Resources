/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00518bc0; name: FUN_00518bc0
 */


long * FUN_00518bc0(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x18,
                                "C:/workspace/YEBIS_draft/src/ppfx.cpp",0x303,
                                "IPfxContext::Instantiate()");
  FUN_005b9880();
  *plVar1 = (long)(PTR_DAT_02713998 + 0x10);
  return plVar1;
}


