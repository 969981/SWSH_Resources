/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011645a0; name: FUN_011645a0
 */


void FUN_011645a0(long param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = 0xcbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    uVar2 = (uVar2 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_2;
  }
  *(ulong *)(param_1 + 0x78) = uVar2;
  return;
}


