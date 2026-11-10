/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00880970; name: FUN_00880970
 */


void FUN_00880970(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_029f6120;
  DAT_029f6120 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*DAT_029f6128 + 0x18))(DAT_029f6128,puVar1,DAT_029f6130,DAT_029f6138);
  }
  FUN_008813e0();
  return;
}


