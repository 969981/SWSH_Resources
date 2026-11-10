/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00137970; name: FUN_00137970
 */


void FUN_00137970(long param_1,undefined8 *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  lVar6 = *(long *)(param_1 + 0x80);
  puVar1 = (uint *)(lVar6 + (ulong)(param_3 & 0xffff) * 8);
  if ((puVar1[1] & 1) == 0) {
    uVar2 = *puVar1;
    uVar7 = (ulong)uVar2;
    if (*(uint *)(param_1 + 0xc4) <= uVar2) {
      *(undefined1 *)(param_1 + 0x119) = 1;
    }
    uVar3 = *(uint *)(param_1 + 0xc0);
    lVar8 = *(long *)(param_1 + 0xa0);
    if (uVar2 < uVar3) {
      puVar5 = (undefined8 *)(lVar8 + uVar7 * 0x18);
      puVar5[2] = param_2[2];
      puVar5[1] = param_2[1];
      *puVar5 = *param_2;
    }
    else {
      if (uVar2 == uVar3) {
        puVar5 = (undefined8 *)(lVar8 + uVar7 * 0x18);
        puVar5[2] = param_2[2];
        puVar5[1] = param_2[1];
        *puVar5 = *param_2;
      }
      else {
        puVar12 = (undefined8 *)(lVar8 + (ulong)uVar3 * 0x18);
        puVar5 = (undefined8 *)(lVar8 + uVar7 * 0x18);
        uVar9 = puVar12[2];
        lVar13 = *(long *)(param_1 + 0xb0);
        uVar10 = puVar12[1];
        uVar11 = *puVar12;
        puVar12[2] = param_2[2];
        puVar12[1] = param_2[1];
        *puVar12 = *param_2;
        puVar5[2] = uVar9;
        puVar5[1] = uVar10;
        lVar8 = (ulong)uVar3 * 2;
        *puVar5 = uVar11;
        uVar4 = *(ushort *)(lVar13 + lVar8);
        *(undefined2 *)(lVar13 + lVar8) = *(undefined2 *)(lVar13 + uVar7 * 2);
        *(ushort *)(lVar13 + uVar7 * 2) = uVar4;
        *(uint *)(lVar6 + (ulong)uVar4 * 8) = uVar2;
        *puVar1 = uVar3;
      }
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    }
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x98) + (ulong)*puVar1 * 0x18);
    puVar5[2] = param_2[2];
    puVar5[1] = param_2[1];
    *puVar5 = *param_2;
    *(undefined1 *)(param_1 + 0x118) = 1;
    uVar2 = *puVar1;
    if (*(uint *)(param_1 + 0xd0) <= uVar2 >> 5) {
      FUN_00136460((long *)(param_1 + 200),uVar2);
    }
    lVar6 = *(long *)(param_1 + 200);
    lVar8 = (ulong)(uVar2 >> 5) * 4;
    *(uint *)(lVar6 + lVar8) = *(uint *)(lVar6 + lVar8) | 1 << (ulong)(uVar2 & 0x1f);
  }
  return;
}


