/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00965ec0; name: FUN_00965ec0
 */


void FUN_00965ec0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  byte *pbVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  undefined4 uVar11;
  
  pbVar5 = (byte *)*param_3;
  uVar3 = (ulong)*pbVar5;
  bVar4 = pbVar5[1];
  if ((uint)bVar4 + (uint)*pbVar5 == 0) {
    uVar6 = 0;
  }
  else {
    lVar9 = param_3[1];
    uVar8 = 0;
    uVar7 = 0;
    pbVar10 = pbVar5 + 0xd;
    do {
      if ((*pbVar10 >> 3 & 1) == 0) {
        uVar2 = FUN_009424e0(param_1,pbVar10[-7]);
        *(undefined8 *)(lVar9 + uVar7 * 8) = uVar2;
        *(undefined2 *)(lVar9 + uVar7 * 2 + 0x28) = *(undefined2 *)(pbVar10 + -9);
        *(undefined4 *)(lVar9 + uVar7 * 4 + 0x34) = *(undefined4 *)(pbVar10 + -5);
        *(byte *)(lVar9 + uVar7 + 0x5c) = pbVar10[-1];
        uVar11 = 1;
        if ((*pbVar10 & 2) != 0) {
          uVar11 = 2;
        }
        uVar1 = 0;
        if ((*pbVar10 & 1) != 0) {
          uVar1 = uVar11;
        }
        *(undefined4 *)(lVar9 + uVar7 * 4 + 0x48) = uVar1;
        uVar3 = (ulong)*pbVar5;
        bVar4 = pbVar5[1];
        uVar7 = (ulong)((int)uVar7 + 1);
      }
      uVar6 = (undefined1)uVar7;
      uVar8 = uVar8 + 1;
      pbVar10 = pbVar10 + 0xc;
    } while (uVar8 < uVar3 + bVar4);
  }
  *param_2 = uVar6;
  return;
}


