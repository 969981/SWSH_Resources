/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011efb60; name: FUN_011efb60
 */


void FUN_011efb60(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  uVar1 = FUN_011e8480();
  *DAT_02a65530 = uVar1;
  uVar1 = FUN_011e8cc0();
  DAT_02a65530[1] = uVar1;
  uVar1 = FUN_011e9490();
  DAT_02a65530[2] = uVar1;
  uVar1 = FUN_011e9cd0();
  DAT_02a65530[3] = uVar1;
  uVar1 = FUN_011ea510();
  DAT_02a65530[4] = uVar1;
  uVar1 = FUN_011eace0();
  DAT_02a65530[5] = uVar1;
  uVar1 = FUN_011eb520();
  DAT_02a65530[6] = uVar1;
  uVar1 = FUN_011ebcf0();
  DAT_02a65530[7] = uVar1;
  uVar1 = FUN_011ec530();
  DAT_02a65530[8] = uVar1;
  uVar1 = FUN_011ecd00();
  DAT_02a65530[9] = uVar1;
  uVar1 = FUN_011ed540();
  DAT_02a65530[10] = uVar1;
  uVar1 = FUN_011edd80();
  DAT_02a65530[0xb] = uVar1;
  uVar1 = FUN_011ee5c0();
  DAT_02a65530[0xc] = uVar1;
  uVar1 = FUN_011eed90();
  DAT_02a65530[0xd] = uVar1;
  return;
}


