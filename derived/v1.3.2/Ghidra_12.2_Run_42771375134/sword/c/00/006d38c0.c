/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d38c0; name: FUN_006d38c0
 */


void FUN_006d38c0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_02715350;
  lVar2 = *(long *)PTR_DAT_02715350;
  *(undefined8 *)PTR_DAT_02715350 = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_006d3520(lVar2);
                    /* WARNING: Could not recover jumptable at 0x006d3904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(puVar1 + 8) + 0x18))
            (*(long **)(puVar1 + 8),lVar2,*(undefined8 *)(puVar1 + 0x10),
             *(undefined8 *)(puVar1 + 0x18));
  return;
}


