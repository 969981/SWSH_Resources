/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008eb9a0; name: FUN_008eb9a0
 */


void FUN_008eb9a0(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = DAT_02a4d1c0;
  DAT_02a4d1c0 = 0;
  if (lVar2 != 0) {
    (**(code **)(*DAT_02a4d1c8 + 0x18))(DAT_02a4d1c8,lVar2,DAT_02a4d1d0,DAT_02a4d1d8);
  }
  puVar1 = DAT_02a4d1a0;
  DAT_02a4d1a0 = (undefined8 *)0x0;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x008eba1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02a4d1a8 + 0x18))(DAT_02a4d1a8,puVar1,DAT_02a4d1b0,DAT_02a4d1b8);
  return;
}


