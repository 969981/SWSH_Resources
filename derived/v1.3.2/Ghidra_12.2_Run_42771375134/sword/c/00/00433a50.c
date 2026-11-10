/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00433a50; name: FUN_00433a50
 */


void FUN_00433a50(void)

{
  undefined *puVar1;
  
  FUN_00434440(PTR_DAT_02712e68);
  FUN_004c5410();
  puVar1 = PTR_DAT_02712e60;
  if (PTR_DAT_02712e60[0x13] == '\x01') {
    nn::os::FinalizeEvent((EventType *)PTR_DAT_02712e60);
  }
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  return;
}


