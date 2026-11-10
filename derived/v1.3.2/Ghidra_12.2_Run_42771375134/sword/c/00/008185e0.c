/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008185e0; name: FUN_008185e0
 */


undefined8 FUN_008185e0(void)

{
  undefined *local_28;
  undefined1 *puStack_20;
  undefined1 local_18;
  
  if (DAT_029f5720 != 2) {
    local_18 = 0;
    local_28 = PTR_DAT_02716670 + 0x10;
    puStack_20 = &LAB_00818d20;
    FUN_00801c10(&DAT_029f5720,&local_28);
    FUN_00801390(&local_28);
  }
  return DAT_029f5728;
}


