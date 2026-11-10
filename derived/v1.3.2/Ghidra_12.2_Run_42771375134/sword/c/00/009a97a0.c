/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a97a0; name: FUN_009a97a0
 */


void FUN_009a97a0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    uVar2 = FUN_00942390(param_1);
    uVar2 = FUN_00931960(uVar2,0,iVar6);
    iVar1 = FUN_00935560();
    if (iVar1 != 0) {
      puVar3 = (uint *)FUN_009355d0(uVar2);
      if (((*puVar3 & 7) == 4) || ((*puVar3 & 7) == 2)) {
        uVar4 = FUN_009423b0(param_1);
        FUN_009370c0(uVar4,0,iVar6);
        uVar5 = FUN_00935600(uVar2);
        if ((uVar5 & 1) != 0) {
          uVar2 = FUN_009423b0(param_1);
          uVar5 = FUN_00937030(uVar2,0,iVar6);
          if ((uVar5 & 1) != 0) {
            uVar2 = FUN_009423b0(param_1);
            FUN_0093a940(uVar2,0,iVar6);
          }
          uVar2 = FUN_009423b0(param_1);
          FUN_00936d20(uVar2,0,iVar6);
        }
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x18);
  iVar6 = 0;
  do {
    uVar2 = FUN_00942390(param_1);
    uVar2 = FUN_00931960(uVar2,1,iVar6);
    iVar1 = FUN_00935560();
    if (iVar1 != 0) {
      puVar3 = (uint *)FUN_009355d0(uVar2);
      if (((*puVar3 & 7) == 4) || ((*puVar3 & 7) == 2)) {
        uVar4 = FUN_009423b0(param_1);
        FUN_009370c0(uVar4,1,iVar6);
        uVar5 = FUN_00935600(uVar2);
        if ((uVar5 & 1) != 0) {
          uVar2 = FUN_009423b0(param_1);
          uVar5 = FUN_00937030(uVar2,1,iVar6);
          if ((uVar5 & 1) != 0) {
            uVar2 = FUN_009423b0(param_1);
            FUN_0093a940(uVar2,1,iVar6);
          }
          uVar2 = FUN_009423b0(param_1);
          FUN_00936d20(uVar2,1,iVar6);
        }
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x18);
  return;
}


