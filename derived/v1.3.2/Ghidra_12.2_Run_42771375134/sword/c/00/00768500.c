/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00768500; name: FUN_00768500
 */


undefined8 FUN_00768500(long param_1,short *param_2,short *param_3,ulong param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int local_44;
  
  uVar3 = 0x100b;
  if (((param_2 != (short *)0x0) && (param_3 != (short *)0x0)) && (param_5 != (long *)0x0)) {
    local_44 = 0;
    if (*(char *)(param_1 + 0x2a8) == '\0') {
      uVar3 = 0x1000;
    }
    else {
      uVar4 = (long)*(int *)(param_1 + 0x2b0) << 1;
      iVar1 = 0;
      if (uVar4 != 0) {
        iVar1 = (int)(param_4 / uVar4);
      }
      iVar2 = nn::audio::GetResamplerOutputSampleCount((ResamplerType *)(param_1 + 0x240),iVar1);
      uVar4 = (long)*(int *)(param_1 + 0x2b0) << 1;
      iVar1 = 0;
      if (uVar4 != 0) {
        iVar1 = (int)(param_4 / uVar4);
      }
      nn::audio::ProcessResamplerBuffer
                ((ResamplerType *)(param_1 + 0x240),&local_44,param_2,
                 (long)iVar2 * (long)*(int *)(param_1 + 0x2b0) * 2 + 0xfffU & 0xfffffffffffff000,
                 param_3,iVar1);
      iVar1 = *(int *)(param_1 + 0x2b0) * local_44;
      iVar2 = nn::audio::GetSampleByteSize(*(undefined4 *)(param_1 + 0x238));
      uVar3 = 0;
      *param_5 = (long)(iVar1 * iVar2);
    }
  }
  return uVar3;
}


