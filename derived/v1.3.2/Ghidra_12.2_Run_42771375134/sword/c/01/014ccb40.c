/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ccb40; name: FUN_014ccb40
 */


void FUN_014ccb40(void)

{
  long lVar1;
  
  FUN_014ccba0();
  lVar1 = *(long *)PTR_DAT_02710ac0;
  (**(code **)**(undefined8 **)(lVar1 + 8))();
  *(undefined8 *)(lVar1 + 8) = 0;
  (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
            (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),8)
  ;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return;
}


