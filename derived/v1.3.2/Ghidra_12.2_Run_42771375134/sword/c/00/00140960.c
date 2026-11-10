/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00140960; name: FUN_00140960
 */


void FUN_00140960(undefined4 param_1,undefined4 param_2,undefined8 param_3,long param_4,
                 long *param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  
  lVar2 = FUN_0013fcf0(param_4,param_1,param_2,8);
  if (lVar2 != 0) {
    pbVar5 = (byte *)(*(long *)(param_4 + 0x28) + (lVar2 - *(long *)(param_4 + 0x20) >> 3));
    if ((*pbVar5 >> 3 & 1) != 0) {
      *pbVar5 = 0;
      lVar3 = lVar2 - *(long *)(param_4 + 0x20) >> 3;
      *(byte *)(*(long *)(param_4 + 0x28) + lVar3) =
           *(byte *)(*(long *)(param_4 + 0x28) + lVar3) | 1;
      uVar6 = *(uint *)(param_5 + 1);
      uVar4 = lVar2 - *(long *)(param_4 + 0x20);
      uVar1 = uVar4 >> 3;
      if (uVar6 == *(uint *)((long)param_5 + 0xc)) {
        FUN_001408f0(param_5,param_3);
        uVar6 = *(uint *)(param_5 + 1);
        uVar4 = lVar2 - *(long *)(param_4 + 0x20);
      }
      *(uint *)(param_5 + 1) = uVar6 + 1;
      *(uint *)(*param_5 + (ulong)uVar6 * 4) = (uint)uVar1 & 0x1fffffff;
      *(byte *)(*(long *)(param_4 + 0x28) + ((long)uVar4 >> 3)) =
           *(byte *)(*(long *)(param_4 + 0x28) + ((long)uVar4 >> 3)) | 4;
      pbVar5 = (byte *)(*(long *)(param_4 + 0x28) + (lVar2 - *(long *)(param_4 + 0x20) >> 3));
    }
    *pbVar5 = *pbVar5 & 0xfd;
  }
  return;
}


