/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207870; name: FUN_00207870
 */


void FUN_00207870(undefined8 *param_1,long param_2,uint param_3,uint param_4)

{
  ushort *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  puVar1 = (ushort *)(param_1 + 1);
  if (*puVar1 != 1) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar3 = *puVar1 - param_4;
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  if (param_3 <= uVar3) {
    uVar3 = param_3;
  }
  if (uVar3 != 0) {
    uVar7 = (ulong)uVar3;
    if (uVar7 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar4 = (undefined8 *)(param_2 + 0x10);
      puVar8 = param_1 + (ulong)param_4 + 2;
      do {
        puVar4[-2] = puVar8[-2];
        puVar4[-1] = puVar8[-1];
        *puVar4 = *puVar8;
        puVar2 = puVar8 + 1;
        lVar6 = lVar6 + 4;
        puVar8 = puVar8 + 4;
        puVar4[1] = *puVar2;
        puVar4 = puVar4 + 4;
      } while (uVar7 - (uVar7 & 3) != lVar6);
    }
    if ((uVar3 & 3) != 0) {
      lVar5 = -(uVar7 & 3);
      puVar4 = param_1 + lVar6 + (ulong)param_4;
      puVar8 = (undefined8 *)(param_2 + lVar6 * 8);
      do {
        lVar5 = lVar5 + 1;
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
    }
  }
  return;
}


