/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087bd30; name: FUN_0087bd30
 */


void FUN_0087bd30(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = (undefined8 *)(param_1 + 0x98);
  iVar1 = FUN_00869ee0(*puVar6,0);
  if ((((iVar1 == param_2) || (iVar1 = FUN_00869ee0(*puVar6,1), iVar1 == param_2)) ||
      (iVar1 = FUN_00869ee0(*puVar6,2), iVar1 == param_2)) ||
     (iVar1 = FUN_00869ee0(*puVar6,3), iVar1 == param_2)) {
    return;
  }
  iVar1 = FUN_00869ee0(*puVar6,0);
  if (iVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
    iVar1 = FUN_00869ee0(*puVar6,1);
    if (iVar1 != 0) {
      uVar7 = 2;
      iVar1 = FUN_00869ee0(*puVar6,2);
      if (iVar1 != 0) {
        uVar7 = 3;
        iVar1 = FUN_00869ee0(*puVar6,3);
        if (iVar1 != 0) {
          uVar2 = FUN_00869ee0(*puVar6,1);
          uVar3 = FUN_0086a040(*puVar6,1);
          uVar4 = FUN_0086a1a0(*puVar6,1);
          FUN_00870bc0(*puVar6,0,uVar2);
          FUN_00870d20(*puVar6,0,uVar3);
          FUN_00870e80(*puVar6,0,uVar4);
          uVar2 = FUN_00869ee0(*puVar6,2);
          uVar3 = FUN_0086a040(*puVar6,2);
          uVar4 = FUN_0086a1a0(*puVar6,2);
          FUN_00870bc0(*puVar6,1,uVar2);
          FUN_00870d20(*puVar6,1,uVar3);
          FUN_00870e80(*puVar6,1,uVar4);
          uVar2 = FUN_00869ee0(*puVar6,3);
          uVar3 = FUN_0086a040(*puVar6,3);
          uVar4 = FUN_0086a1a0(*puVar6,3);
          FUN_00870bc0(*puVar6,2,uVar2);
          FUN_00870d20(*puVar6,2,uVar3);
          FUN_00870e80(*puVar6,2,uVar4);
          uVar2 = FUN_00880a40(param_2,0);
          FUN_00870bc0(*puVar6,3,param_2);
          FUN_00870e80(*puVar6,3,0);
          uVar5 = *puVar6;
          uVar7 = 3;
          goto LAB_0087bf9c;
        }
      }
    }
  }
  uVar2 = FUN_00880a40(param_2,0);
  FUN_00870bc0(*puVar6,uVar7,param_2);
  FUN_00870e80(*puVar6,uVar7,0);
  uVar5 = *puVar6;
LAB_0087bf9c:
  FUN_00870d20(uVar5,uVar7,uVar2);
  return;
}


