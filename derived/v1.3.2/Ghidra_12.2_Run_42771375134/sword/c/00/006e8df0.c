/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e8df0; name: FUN_006e8df0
 */


void FUN_006e8df0(void)

{
  long lVar1;
  
  nv::FinalizeGraphics();
  if (DAT_029f00e0 != 0) {
    *(undefined1 *)(DAT_029f00e0 + 0xb8) = 1;
    lVar1 = *(long *)PTR_DAT_027155c0;
    (**(code **)**(undefined8 **)(lVar1 + 8))();
    *(undefined8 *)(lVar1 + 8) = 0;
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
              (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),
               8);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  free(DAT_029f00e8);
  DAT_029f00e8 = (void *)0x0;
  return;
}


