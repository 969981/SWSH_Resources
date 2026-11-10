/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042c170; name: FUN_0042c170
 */


void FUN_0042c170(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02712d10;
  if (*(int *)(PTR_DAT_02712d10 + 0x10) != 0) {
    FUN_004994d0(*(undefined8 *)PTR_DAT_02712d20,PTR_DAT_02712d10);
    *(undefined4 *)(puVar1 + 0x10) = 0;
  }
  return;
}


