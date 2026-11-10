/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011a81d0; name: FUN_011a81d0
 */


void FUN_011a81d0(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  uVar1 = FUN_011ad7a0();
  *DAT_02a64980 = uVar1;
  uVar1 = FUN_011ac430();
  DAT_02a64980[1] = uVar1;
  uVar1 = FUN_011acda0();
  DAT_02a64980[2] = uVar1;
  uVar1 = FUN_011b1590();
  DAT_02a64980[3] = uVar1;
  uVar1 = FUN_011ae430();
  DAT_02a64980[4] = uVar1;
  uVar1 = FUN_011b2230();
  DAT_02a64980[5] = uVar1;
  uVar1 = FUN_011a78d0();
  DAT_02a64980[6] = uVar1;
  uVar1 = FUN_011aa910();
  DAT_02a64980[7] = uVar1;
  uVar1 = FUN_011ab040();
  DAT_02a64980[8] = uVar1;
  uVar1 = FUN_011ab950();
  DAT_02a64980[9] = uVar1;
  uVar1 = FUN_011b0620();
  DAT_02a64980[10] = uVar1;
  uVar1 = FUN_011b0c10();
  DAT_02a64980[0xb] = uVar1;
  uVar1 = FUN_011afb20();
  DAT_02a64980[0xc] = uVar1;
  uVar1 = FUN_011aefe0();
  DAT_02a64980[0xd] = uVar1;
  return;
}


