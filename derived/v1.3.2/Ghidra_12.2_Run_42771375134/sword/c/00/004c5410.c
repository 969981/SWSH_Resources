/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5410; name: FUN_004c5410
 */


void FUN_004c5410(void)

{
  undefined *puVar1;
  
  FUN_0047c500();
  puVar1 = PTR_DAT_027134f0;
  if (*(long *)PTR_DAT_027134f0 != 0) {
    *(undefined4 *)(PTR_DAT_027134f0 + 8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  FUN_00467f60();
  puVar1 = PTR_DAT_027134f8;
  if (*(long *)PTR_DAT_027134f8 != 0) {
    *(undefined4 *)(PTR_DAT_027134f8 + 8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  puVar1 = PTR_DAT_02713500;
  *(undefined4 *)PTR_DAT_02713500 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  FUN_0045f010();
  FUN_004690a0();
  FUN_00468a40();
  return;
}


