/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001365d0; name: FUN_001365d0
 */


uint * FUN_001365d0(uint *param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar2 = *(uint *)(*(long *)(param_1 + 0xc) +
                   (ulong)*(uint *)(*(long *)(param_1 + 0xe) + (ulong)(param_2 >> 2) * 0xc) * 4);
  uVar3 = *(uint *)(*(long *)(param_1 + 0xc) +
                   (ulong)*(uint *)(*(long *)(param_1 + 0xe) + (ulong)(param_3 >> 2) * 0xc) * 4);
  if (uVar2 == uVar3) {
    return (uint *)0x0;
  }
  if (*(char *)(*(long *)(param_1 + 0x10) + (ulong)(uVar3 & 3 | (uVar2 & 3) << 2)) == '\0') {
    return (uint *)0x0;
  }
  uVar2 = param_2;
  if (param_2 <= param_3) {
    uVar2 = param_3;
    param_3 = param_2;
  }
  uVar3 = param_3 & 0xffff | uVar2 << 0x10;
  uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
  uVar3 = (uVar3 ^ uVar3 >> 10) * 9;
  uVar3 = uVar3 ^ uVar3 >> 6;
  uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
  uVar3 = uVar3 ^ uVar3 >> 0x10;
  uVar6 = param_1[1] & uVar3;
  lVar5 = *(long *)(param_1 + 4);
  if ((lVar5 != 0) && (uVar7 = *(uint *)(lVar5 + (ulong)uVar6 * 4), uVar7 != 0xffffffff)) {
    lVar1 = *(long *)(param_1 + 8);
    do {
      puVar4 = (uint *)(lVar1 + (ulong)uVar7 * 0xc);
      uVar8 = (ulong)uVar7;
      if ((*puVar4 == param_3) && (*(uint *)(lVar1 + uVar8 * 0xc + 4) == uVar2)) {
        *(undefined1 *)(lVar1 + uVar8 * 0xc + 9) = 1;
        return puVar4;
      }
      uVar7 = *(uint *)(*(long *)(param_1 + 6) + uVar8 * 4);
    } while (uVar7 != 0xffffffff);
  }
  uVar7 = param_1[2];
  if (*param_1 <= uVar7) {
    uVar6 = uVar7 + 1 | uVar7 + 1 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    *param_1 = uVar6 + 1;
    param_1[1] = uVar6;
    FUN_00136790(param_1);
    uVar7 = param_1[2];
    uVar6 = param_1[1] & uVar3;
    lVar5 = *(long *)(param_1 + 4);
  }
  puVar4 = (uint *)(*(long *)(param_1 + 8) + (ulong)uVar7 * 0xc);
  *puVar4 = param_3;
  puVar4[1] = uVar2;
  *(undefined2 *)(puVar4 + 2) = 1;
  *(undefined4 *)(*(long *)(param_1 + 6) + (ulong)uVar7 * 4) =
       *(undefined4 *)(lVar5 + (ulong)uVar6 * 4);
  uVar2 = param_1[2];
  param_1[2] = uVar2 + 1;
  *(uint *)(lVar5 + (ulong)uVar6 * 4) = uVar2;
  return puVar4;
}


