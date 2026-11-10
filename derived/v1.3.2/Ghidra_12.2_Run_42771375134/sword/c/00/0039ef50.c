/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039ef50; name: FUN_0039ef50
 */


uint FUN_0039ef50(uint *param_1,long param_2,long param_3,undefined8 *param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  if (param_5 != 0) {
    uVar6 = 0;
    puVar7 = (undefined4 *)(param_3 + 0xc);
    do {
      uVar8 = *param_1;
      if (uVar8 == param_1[1]) {
        uVar8 = uVar8 * 2;
        if (uVar8 < 0x41) {
          uVar8 = 0x40;
        }
        uVar2 = FUN_0039eca0(param_1,uVar8);
        if ((uVar2 & 1) == 0) {
          *(undefined4 *)(param_2 + uVar6 * 4) = 0xffffffff;
          return (uint)uVar6;
        }
        uVar8 = *param_1;
      }
      *param_1 = uVar8 + 1;
      uVar4 = param_1[10];
      uVar2 = (ulong)uVar4;
      if (uVar4 == 0xffffffff) {
        uVar2 = (ulong)uVar8;
        uVar4 = uVar8;
      }
      else {
        param_1[10] = *(uint *)(*(long *)(param_1 + 6) + uVar2 * 4);
      }
      uVar3 = (ulong)uVar8;
      puVar5 = (undefined4 *)(*(long *)(param_1 + 2) + uVar3 * 0x18);
      *puVar5 = puVar7[-3];
      puVar5[1] = puVar7[-2];
      puVar5[2] = puVar7[-1];
      puVar5[3] = *puVar7;
      puVar5[4] = puVar7[1];
      puVar5[5] = puVar7[2];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 4) + uVar3 * 0x10);
      puVar1[1] = param_4[1];
      *puVar1 = *param_4;
      *(uint *)(*(long *)(param_1 + 8) + uVar3 * 4) = uVar4;
      *(uint *)(*(long *)(param_1 + 6) + uVar2 * 4) = uVar8;
      *(uint *)(param_2 + uVar6 * 4) = uVar4;
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 6;
      param_4 = param_4 + 2;
    } while (uVar6 < param_5);
  }
  return param_5;
}


