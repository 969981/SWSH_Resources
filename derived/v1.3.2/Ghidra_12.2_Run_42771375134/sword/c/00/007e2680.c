/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e2680; name: FUN_007e2680
 */


undefined8 FUN_007e2680(void)

{
  undefined *local_28;
  code *pcStack_20;
  undefined1 local_18;
  
  if (DAT_029f55a0 != 2) {
    local_18 = 0;
    local_28 = PTR_DAT_02716670 + 0x10;
    pcStack_20 = FUN_007f76a0;
    FUN_00801c10(&DAT_029f55a0,&local_28);
    FUN_00801390(&local_28);
  }
  return DAT_029f5590;
}


