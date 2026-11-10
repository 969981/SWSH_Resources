/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003afa90; name: FUN_003afa90
 */


void FUN_003afa90(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(**(long **)(param_2 + 0x20) + 0x78))();
  puVar2 = (undefined4 *)(**(code **)(**(long **)(param_2 + 0x20) + 0x80))();
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[3] = puVar2[3];
  param_1[4] = *puVar1;
  param_1[5] = puVar1[1];
  param_1[6] = puVar1[2];
  return;
}


