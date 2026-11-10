/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b2b40; name: FUN_014b2b40
 */


void FUN_014b2b40(void)

{
  if (DAT_02a748d0 != 0) {
    (**(code **)(*(long *)(DAT_02a748d0 + 0x48) + 0x18))();
    DAT_02a748d0 = 0;
  }
  if (DAT_02a748d8 != 0) {
    (**(code **)(*(long *)(DAT_02a748d8 + 0x48) + 0x18))();
    DAT_02a748d8 = 0;
  }
  if (DAT_02a748e0 != 0) {
    (**(code **)(*(long *)(DAT_02a748e0 + 0x48) + 0x18))();
    DAT_02a748e0 = 0;
  }
  if (DAT_02a748e8 != 0) {
    (**(code **)(*(long *)(DAT_02a748e8 + 0x48) + 0x18))();
    DAT_02a748e8 = 0;
  }
  return;
}


