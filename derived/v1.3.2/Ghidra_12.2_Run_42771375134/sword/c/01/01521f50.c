/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01521f50; name: FUN_01521f50
 */


bool FUN_01521f50(undefined8 param_1,undefined8 *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  iVar3 = FUN_01689fa0(*param_2);
  if (iVar3 != 0) {
    uVar6 = 0;
    if (param_4 != 0) {
      uVar6 = 0;
      uVar7 = 0;
      do {
        uVar4 = FUN_01689f70(*param_2,uVar6);
        uVar5 = 0;
        do {
          uVar2 = *(uint *)(param_3 + (uVar5 & 0xffffffff) * 4);
          uVar1 = uVar2 & 0x7fff;
          if (uVar1 != 0 && uVar1 == uVar4) {
            *(undefined4 *)(param_3 + uVar5 * 4) = *(undefined4 *)(param_3 + uVar7 * 4);
            *(uint *)(param_3 + uVar7 * 4) = uVar2;
            uVar7 = (ulong)((int)uVar7 + 1);
            break;
          }
          uVar5 = uVar5 + 1;
        } while ((uint)uVar5 < param_4);
        iVar3 = (int)uVar7;
        uVar6 = uVar6 + 1;
        uVar4 = FUN_01689fa0(*param_2);
      } while (uVar6 < uVar4);
      goto LAB_01522010;
    }
    do {
      FUN_01689f70(*param_2,uVar6);
      uVar6 = uVar6 + 1;
      uVar4 = FUN_01689fa0(*param_2);
    } while (uVar6 < uVar4);
  }
  iVar3 = 0;
LAB_01522010:
  return iVar3 != 0;
}


