/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00140fe0; name: FUN_00140fe0
 */


void FUN_00140fe0(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = param_1[3];
  lVar2 = FUN_0013fcf0(lVar7,*(undefined4 *)(*param_1 + (param_2 & 0xffffffff) * 4),
                       *(undefined4 *)(param_1[1] + (param_3 & 0xffffffff) * 4),8);
  if (lVar2 != 0) {
    pbVar5 = (byte *)(*(long *)(lVar7 + 0x28) + (lVar2 - *(long *)(lVar7 + 0x20) >> 3));
    if ((*pbVar5 >> 3 & 1) != 0) {
      *pbVar5 = 0;
      lVar3 = lVar2 - *(long *)(lVar7 + 0x20) >> 3;
      *(byte *)(*(long *)(lVar7 + 0x28) + lVar3) = *(byte *)(*(long *)(lVar7 + 0x28) + lVar3) | 1;
      plVar8 = (long *)param_1[4];
      uVar6 = *(uint *)(plVar8 + 1);
      uVar4 = lVar2 - *(long *)(lVar7 + 0x20);
      uVar1 = uVar4 >> 3;
      if (uVar6 == *(uint *)((long)plVar8 + 0xc)) {
        FUN_001408f0(plVar8,param_1[2]);
        uVar6 = *(uint *)(plVar8 + 1);
        uVar4 = lVar2 - *(long *)(lVar7 + 0x20);
      }
      *(uint *)(plVar8 + 1) = uVar6 + 1;
      *(uint *)(*plVar8 + (ulong)uVar6 * 4) = (uint)uVar1 & 0x1fffffff;
      *(byte *)(*(long *)(lVar7 + 0x28) + ((long)uVar4 >> 3)) =
           *(byte *)(*(long *)(lVar7 + 0x28) + ((long)uVar4 >> 3)) | 4;
      pbVar5 = (byte *)(*(long *)(lVar7 + 0x28) + (lVar2 - *(long *)(lVar7 + 0x20) >> 3));
    }
    *pbVar5 = *pbVar5 & 0xfd;
  }
  return;
}


