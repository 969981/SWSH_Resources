/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001161c0; name: FUN_001161c0
 */


void FUN_001161c0(long param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  uint local_18 [2];
  
  uVar4 = (uint)(param_2 >> 6) & 0x3ffffff;
  local_18[0] = (uint)param_2;
  if (uVar4 != 0x3ffffff) {
    pbVar7 = (byte *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 0x20 + 4);
    bVar2 = *pbVar7;
    if ((bVar2 >> 5 & 1) == 0) {
      bVar3 = bVar2;
    }
    else {
      bVar3 = bVar2 & 0xdf;
      *pbVar7 = bVar3;
      lVar6 = *(long *)(param_1 + 400);
      uVar1 = *(uint *)(lVar6 + (ulong)(*(int *)(param_1 + 0x198) - 1) * 4);
      lVar5 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(lVar5 + (ulong)(uVar1 >> 6) * 4) = *(undefined4 *)(lVar5 + (ulong)uVar4 * 4);
      *(uint *)(lVar6 + (ulong)*(uint *)(lVar5 + (ulong)(local_18[0] >> 6) * 4) * 4) = uVar1;
      *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + -1;
      *(undefined4 *)(lVar5 + (ulong)(local_18[0] >> 6) * 4) = 0x3ffffff;
      if ((bVar2 >> 2 & 1) != 0) {
        *(undefined4 *)(lVar5 + (ulong)(local_18[0] >> 6) * 4) = *(undefined4 *)(param_1 + 0xa0);
        if (*(uint *)(param_1 + 0xa0) < (*(uint *)(param_1 + 0xa4) & 0x7fffffff)) {
          *(uint *)(*(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0xa0) * 4) = local_18[0];
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
        }
        else {
          FUN_00114650(param_1 + 0x98,local_18);
          bVar3 = *pbVar7;
        }
      }
    }
    *pbVar7 = bVar3 | 1;
  }
  return;
}


