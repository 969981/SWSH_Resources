/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080f460; name: FUN_0080f460
 */


undefined8 FUN_0080f460(void)

{
  undefined *local_28;
  undefined1 *puStack_20;
  undefined1 local_18;
  
  if (DAT_029f5660 != 2) {
    local_18 = 0;
    local_28 = PTR_DAT_02716670 + 0x10;
    puStack_20 = &LAB_0080f4d0;
    FUN_00801c10(&DAT_029f5660,&local_28);
    FUN_00801390(&local_28);
  }
  return DAT_029f5668;
}


