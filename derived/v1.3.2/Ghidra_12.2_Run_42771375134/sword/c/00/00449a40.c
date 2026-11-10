/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00449a40; name: FUN_00449a40
 */


undefined8 FUN_00449a40(long *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  byte *pbVar10;
  
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar4 = *(undefined4 *)*param_1;
  *param_1 = (long)((undefined4 *)*param_1 + 1);
  *(undefined4 *)((long)param_3 + 4) = uVar4;
  pbVar10 = (byte *)*param_1;
  bVar5 = *pbVar10;
  *param_1 = (long)(pbVar10 + 1);
  uVar4 = *(undefined4 *)(pbVar10 + 1);
  *param_1 = (long)(pbVar10 + 5);
  *(undefined4 *)(param_3 + 1) = uVar4;
  *(undefined4 *)((long)param_3 + 0xc) = uVar4;
  uVar4 = *(undefined4 *)*param_1;
  *param_1 = (long)((undefined4 *)*param_1 + 1);
  *(undefined4 *)(param_3 + 2) = uVar4;
  bVar6 = *(byte *)*param_1;
  *param_1 = (long)((byte *)*param_1 + 1);
  uVar7 = *(ushort *)((long)param_3 + 0x14);
  uVar9 = (uint)bVar5;
  uVar3 = bVar6 & 1 | (ushort)(uVar9 == 1) << 1;
  uVar2 = (bVar6 >> 3 & 1) << 10;
  uVar8 = uVar7 & 0xf800;
  *(ushort *)((long)param_3 + 0x14) = uVar8 | uVar3 | uVar7 & 0x3fc | uVar2;
  uVar1 = *(uint *)((long)param_3 + 4) & 0xf;
  if (uVar1 != 0) {
    if (uVar1 != 2) {
      if (uVar1 != 1) {
        return 2;
      }
      if (uVar9 == 0) {
        *(ushort *)((long)param_3 + 0x14) = uVar8 | uVar3 | uVar7 & 0x38c | uVar2 | 0xc;
        return 1;
      }
      if (uVar9 - 1 < 2) {
        *(ushort *)((long)param_3 + 0x14) = uVar8 | uVar3 | uVar7 & 900 | uVar2 | 4;
        return 1;
      }
      return 2;
    }
    uVar1 = *(uint *)*param_1;
    *param_1 = (long)((uint *)*param_1 + 1);
    *(uint *)(param_3 + 4) = uVar1;
    param_3[3] = *param_1;
    *param_1 = *param_1 + (ulong)uVar1;
    *param_2 = *param_2 - *(int *)(param_3 + 4);
  }
  return 1;
}


