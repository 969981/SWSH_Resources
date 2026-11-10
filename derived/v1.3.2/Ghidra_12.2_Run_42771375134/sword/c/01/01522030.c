/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01522030; name: FUN_01522030
 */


bool FUN_01522030(undefined8 param_1,undefined8 *param_2,long param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar2 = FUN_01689fa0(*param_2);
  if (iVar2 != 0) {
    if (param_4 != 0) {
      uVar7 = 0;
      uVar6 = 0;
      do {
        uVar3 = FUN_01689f70(*param_2,uVar6);
        uVar8 = 0;
        do {
          iVar2 = FUN_00888e60(*(uint *)(param_3 + uVar8 * 4) & 0x7fff);
          if ((iVar2 != -1) && (uVar4 = FUN_00888ee0(), uVar3 == (uVar4 & 0xffff))) {
            lVar5 = uVar7 * 4;
            uVar1 = *(undefined4 *)(param_3 + uVar8 * 4);
            uVar7 = (ulong)((int)uVar7 + 1);
            *(undefined4 *)(param_3 + uVar8 * 4) = *(undefined4 *)(param_3 + lVar5);
            *(undefined4 *)(param_3 + lVar5) = uVar1;
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < param_4);
        iVar2 = (int)uVar7;
        uVar6 = uVar6 + 1;
        uVar3 = FUN_01689fa0(*param_2);
      } while (uVar6 < uVar3);
      goto LAB_01522114;
    }
    uVar6 = 0;
    do {
      FUN_01689f70(*param_2,uVar6);
      uVar6 = uVar6 + 1;
      uVar3 = FUN_01689fa0(*param_2);
    } while (uVar6 < uVar3);
  }
  iVar2 = 0;
LAB_01522114:
  return iVar2 != 0;
}


