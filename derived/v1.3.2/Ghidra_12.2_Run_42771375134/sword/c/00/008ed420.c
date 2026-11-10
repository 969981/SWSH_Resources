/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ed420; name: FUN_008ed420
 */


void FUN_008ed420(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if ((uVar2 & 0x3807) == 2) {
    uVar1 = uVar2 & 0xff | (param_2 & 0x3f) << 8;
    uVar2 = uVar2 & 0xffffffffffffc000 | uVar1;
    *param_1 = uVar2;
  }
  if ((uVar1 & 0x3807) == 4) {
    *param_1 = uVar2 & 0xffffffffffffc000 | uVar2 & 0xff | (param_2 & 0x3f) << 8;
    return;
  }
  return;
}


