/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00434c20; name: FUN_00434c20
 */


void FUN_00434c20(undefined1 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 1;
  puVar1 = PTR_DAT_02712e98;
  if (PTR_DAT_02712e98[0x40] != '\0') {
    nn::os::SignalEvent((EventType *)PTR_DAT_02712e60);
    nn::os::WaitThread((ThreadType *)puVar1);
    nn::os::DestroyThread((ThreadType *)puVar1);
    FUN_00774a60(*(undefined8 *)(puVar1 + 0x1c0));
    *(undefined8 *)(puVar1 + 0x1c0) = 0;
    puVar1[0x40] = 0;
    *(undefined8 *)PTR_DAT_02712ea0 = 0;
  }
  return;
}


