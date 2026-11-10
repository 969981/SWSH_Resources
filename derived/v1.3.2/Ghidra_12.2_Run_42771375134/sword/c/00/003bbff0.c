/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bbff0; name: FUN_003bbff0
 */


void FUN_003bbff0(ulong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_003bd3c0(param_1,param_2);
  }
  uVar6 = (ulong)(uint)param_1[1];
  if ((uint)param_1[1] < param_2) {
    uVar7 = *param_1;
    puVar1 = (undefined8 *)(uVar7 + (ulong)param_2 * 0x20);
    puVar2 = (undefined8 *)(uVar7 + uVar6 * 0x20);
    puVar5 = puVar2 + 4;
    if (puVar2 + 4 <= puVar1) {
      puVar5 = puVar1;
    }
    uVar3 = (long)puVar5 + ~uVar7 + uVar6 * -0x20;
    puVar5 = puVar2;
    if (((uint)uVar3 >> 5 & 1) == 0) {
      uVar8 = *param_3;
      lVar4 = uVar7 + uVar6 * 0x20;
      puVar5 = puVar2 + 4;
      puVar2[1] = param_3[1];
      *puVar2 = uVar8;
      uVar8 = param_3[2];
      *(undefined8 *)(lVar4 + 0x18) = param_3[3];
      *(undefined8 *)(lVar4 + 0x10) = uVar8;
    }
    if (0x1f < uVar3) {
      do {
        uVar8 = *param_3;
        puVar5[1] = param_3[1];
        *puVar5 = uVar8;
        uVar8 = param_3[2];
        puVar5[3] = param_3[3];
        puVar5[2] = uVar8;
        uVar8 = *param_3;
        puVar5[5] = param_3[1];
        puVar5[4] = uVar8;
        uVar8 = param_3[2];
        puVar5[7] = param_3[3];
        puVar5[6] = uVar8;
        puVar5 = puVar5 + 8;
      } while (puVar5 < puVar1);
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}


