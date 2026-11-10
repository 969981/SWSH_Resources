/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001155d0; name: FUN_001155d0
 */


void FUN_001155d0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  uint local_18 [2];
  
  uVar8 = param_2 >> 6 & 0x3ffffff;
  local_18[0] = (uint)param_2;
  if ((int)uVar8 != 0x3ffffff) {
    lVar9 = *(long *)(param_1 + 0x18);
    lVar6 = lVar9 + uVar8 * 0x20;
    pbVar10 = (byte *)(lVar6 + 4);
    bVar4 = *pbVar10;
    if ((bVar4 & 0x22) == 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      if (((bVar4 >> 2 & 1) != 0) && (*(int *)(lVar5 + uVar8 * 4) != 0x3ffffff)) {
        puVar7 = (undefined4 *)(lVar6 + 0x10);
        uVar1 = *puVar7;
        bVar4 = bVar4 & 0xfd;
        *puVar7 = 0;
        *pbVar10 = bVar4;
        if ((*(int *)(lVar9 + uVar8 * 0x20 + 0x10) == 0) &&
           (iVar2 = *(int *)(lVar5 + uVar8 * 4), iVar2 != 0x3ffffff)) {
          lVar6 = *(long *)(param_1 + 0x98);
          uVar3 = *(uint *)(lVar6 + (ulong)(*(int *)(param_1 + 0xa0) - 1) * 4);
          *(int *)(lVar5 + (ulong)(uVar3 >> 6) * 4) = iVar2;
          *(uint *)(lVar6 + (ulong)*(uint *)(lVar5 + uVar8 * 4) * 4) = uVar3;
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
          *(undefined4 *)(lVar5 + uVar8 * 4) = 0x3ffffff;
          uVar8 = (ulong)(local_18[0] >> 6);
        }
        *puVar7 = uVar1;
      }
      bVar4 = bVar4 | 0x20;
      *pbVar10 = bVar4;
      *(undefined4 *)(lVar5 + uVar8 * 4) = *(undefined4 *)(param_1 + 0x198);
      if (*(uint *)(param_1 + 0x198) < (*(uint *)(param_1 + 0x19c) & 0x7fffffff)) {
        *(uint *)(*(long *)(param_1 + 400) + (ulong)*(uint *)(param_1 + 0x198) * 4) = local_18[0];
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
      }
      else {
        FUN_00114650(param_1 + 400,local_18);
        bVar4 = *pbVar10;
      }
    }
    *pbVar10 = bVar4 & 0xbe;
  }
  return;
}


