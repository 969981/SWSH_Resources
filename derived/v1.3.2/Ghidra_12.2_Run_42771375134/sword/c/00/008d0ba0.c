/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d0ba0; name: FUN_008d0ba0
 */


void FUN_008d0ba0(void)

{
  if (DAT_02a4cb90 != (undefined8 *)0x0) {
    nn::ngc::ProfanityFilter::Finalize();
    (**(code **)*DAT_02a4cb90)();
    (**(code **)(*DAT_02a4cb80 + 0x18))(DAT_02a4cb80,DAT_02a4cb90,0x30,8);
    DAT_02a4cb90 = (undefined8 *)0x0;
  }
  if (DAT_02a4cb88 != 0) {
    (**(code **)(*DAT_02a4cb80 + 0x18))(DAT_02a4cb80,DAT_02a4cb88,0x20000,0x1000);
    DAT_02a4cb88 = 0;
  }
  DAT_02a4cb80 = (long *)0x0;
  return;
}


