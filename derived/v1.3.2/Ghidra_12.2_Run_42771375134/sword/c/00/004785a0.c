/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004785a0; name: FUN_004785a0
 */


undefined8
FUN_004785a0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
            long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = FUN_0049db10(*(undefined8 *)PTR_DAT_02712b50);
  uVar3 = 0;
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x48) == 1) || ((param_3 != 7 && (param_3 != 0)))) {
      uVar3 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar2 + 0x58);
      if (uVar4 == 0) {
        uVar3 = 0;
      }
      else {
        lVar5 = *(long *)(lVar2 + 0x50);
        uVar3 = 0;
        lVar6 = lVar5 + 8;
        do {
          if (*(int *)(lVar6 + -4) == param_4) {
            *(int *)(param_6 + 8) = param_3;
            FUN_00478680(lVar6,param_6 + 4,param_6);
            lVar5 = *(long *)(lVar2 + 0x50);
            uVar4 = *(uint *)(lVar2 + 0x58);
            uVar3 = 1;
          }
          lVar1 = lVar6 + 0x10;
          lVar6 = lVar6 + 0x18;
        } while (lVar1 != lVar5 + (ulong)uVar4 * 0x18);
      }
    }
  }
  return uVar3;
}


