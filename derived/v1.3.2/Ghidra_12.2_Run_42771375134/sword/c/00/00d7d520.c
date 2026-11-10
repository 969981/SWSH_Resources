/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7d520; name: FUN_00d7d520
 */


void FUN_00d7d520(long param_1)

{
  undefined8 uVar1;
  byte local_24 [4];
  
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e8),*(char *)(param_1 + 0x5e4) == '\0');
  local_24[0] = 0;
  do {
    uVar1 = FUN_00d707f0(local_24,*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x280));
    uVar1 = FUN_00ffdb00(param_1 + 0x100,uVar1);
    FUN_016b2d70(uVar1,*(char *)(param_1 + 0x5e4) == '\0');
    local_24[0] = local_24[0] + 1;
  } while (local_24[0] < 7);
  return;
}


