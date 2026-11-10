/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045f010; name: FUN_0045f010
 */


undefined8 FUN_0045f010(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02712fd0;
  if (*(long *)PTR_DAT_02712fd0 != 0) {
    *(undefined4 *)(PTR_DAT_02712fd0 + 8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  puVar1 = PTR_DAT_02712fd8;
  if (*(long *)PTR_DAT_02712fd8 != 0) {
    *(undefined4 *)(PTR_DAT_02712fd8 + 8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  puVar1 = PTR_DAT_02713080;
  if (*(long *)PTR_DAT_02713080 != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)puVar1 = 0;
  }
  return 1;
}


