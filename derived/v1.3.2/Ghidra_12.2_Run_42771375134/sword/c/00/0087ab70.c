/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087ab70; name: FUN_0087ab70
 */


uint FUN_0087ab70(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (0xfb < param_3) {
    param_3 = 0xfc;
  }
  if (param_2 <= param_3 && param_3 - param_2 != 0) {
    iVar2 = FUN_00869760(*(undefined8 *)(param_1 + 0x98));
    iVar3 = FUN_008698a0(*(undefined8 *)(param_1 + 0x98));
    iVar4 = FUN_008699e0(*(undefined8 *)(param_1 + 0x98));
    iVar5 = FUN_00869b20(*(undefined8 *)(param_1 + 0x98));
    iVar6 = FUN_00869c60(*(undefined8 *)(param_1 + 0x98));
    iVar7 = FUN_00869da0(*(undefined8 *)(param_1 + 0x98));
    uVar1 = iVar2 + (param_3 - param_2) + iVar3 + iVar4 + iVar5 + iVar6 + iVar7;
    iVar2 = uVar1 - 0x1fe;
    if (uVar1 < 0x1fe || iVar2 == 0) {
      iVar2 = 0;
    }
    param_3 = param_3 - iVar2;
  }
  return param_3;
}


