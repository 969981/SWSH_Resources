/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007685e0; name: FUN_007685e0
 */


undefined8 FUN_007685e0(long param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == (ulong *)0x0) {
    return 0x100b;
  }
  if (*(char *)(param_1 + 0x2a8) == '\0') {
    return 0x1000;
  }
  uVar2 = (long)*(int *)(param_1 + 0x2b0) << 1;
  iVar1 = 0;
  if (uVar2 != 0) {
    iVar1 = (int)(*(ulong *)(param_1 + 0x28) / uVar2);
  }
  iVar1 = nn::audio::GetResamplerOutputSampleCount((ResamplerType *)(param_1 + 0x240),iVar1);
  *param_2 = (long)iVar1 * (long)*(int *)(param_1 + 0x2b0) * 2 + 0xfffU & 0xfffffffffffff000;
  return 0;
}


