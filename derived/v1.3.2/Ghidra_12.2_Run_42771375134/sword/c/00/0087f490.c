/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087f490; name: FUN_0087f490
 */


void FUN_0087f490(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_027173e0;
  lVar2 = *(long *)PTR_DAT_027173e0;
  *(undefined8 *)PTR_DAT_027173e0 = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0087f4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(puVar1 + 8) + 0x18))
            (*(long **)(puVar1 + 8),lVar2,*(undefined8 *)(puVar1 + 0x10),
             *(undefined8 *)(puVar1 + 0x18));
  return;
}


