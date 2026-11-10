/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a9940; name: FUN_007a9940
 */


void FUN_007a9940(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  if (DAT_029f4dd8 != 0) {
    FUN_007b5340(*(undefined8 *)PTR_DAT_027104b0);
    puVar1 = PTR_DAT_02716748;
    *(undefined8 *)(*(long *)PTR_DAT_027104a0 + 0x50) = 0;
    *(undefined8 *)(*(long *)puVar1 + 0x80) = 0;
    FUN_007aaab0(*(undefined8 *)PTR_DAT_02716740);
    FUN_007dd7d0(*(undefined8 *)PTR_DAT_02716758);
    FUN_007dc6c0();
    puVar2 = DAT_029f4e00;
    DAT_029f4dd8 = 0;
    DAT_029f4e40 = 0;
    DAT_029f4e48 = 0;
    DAT_029f4e30 = 0;
    DAT_029f4e38 = 0;
    DAT_029f4e00 = (undefined8 *)0x0;
    DAT_029f4e20 = 0;
    DAT_029f4e28 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
                    /* WARNING: Could not recover jumptable at 0x007a9a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*DAT_029f4e08 + 0x18))(DAT_029f4e08,puVar2,DAT_029f4e10,DAT_029f4e18);
      return;
    }
  }
  return;
}


