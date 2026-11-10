/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9290; name: FUN_003e9290
 */


void FUN_003e9290(long param_1,uint param_2,uint param_3,char *param_4)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + (ulong)(param_2 & 0xff) * 4 + 0x1208);
  uVar2 = 1 << (ulong)(param_3 & 0x1f);
  if (*param_4 == '\0') {
    uVar2 = *puVar1 & (uVar2 ^ 0xffffffff);
  }
  else {
    uVar2 = *puVar1 | uVar2;
  }
  *puVar1 = uVar2;
  puVar1 = (uint *)(param_1 + (ulong)(param_3 & 0xff) * 4 + 0x1208);
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  if (param_4[1] == '\0') {
    uVar2 = *puVar1 & (uVar2 ^ 0xffffffff);
  }
  else {
    uVar2 = *puVar1 | uVar2;
  }
  *puVar1 = uVar2;
  *(uint *)(param_1 + 0x1108) = *(uint *)(param_1 + 0x1108) | 2;
  return;
}


