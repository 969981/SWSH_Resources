/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087e550; name: FUN_0087e550
 */


void FUN_0087e550(long param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),0);
  uVar7 = 0;
  if (iVar1 != param_2) {
    uVar7 = 1;
    iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),1);
    if (iVar1 != param_2) {
      uVar7 = 2;
      iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),2);
      if (iVar1 != param_2) {
        uVar7 = 3;
        iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),3);
        if (iVar1 != param_2) {
          return;
        }
      }
    }
  }
  uVar2 = FUN_0086a040(*(undefined8 *)(param_1 + 0x98),uVar7);
  FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),uVar7,param_3);
  uVar3 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),uVar7);
  uVar4 = FUN_0086a1a0(*(undefined8 *)(param_1 + 0x98),uVar7);
  uVar5 = FUN_00880a40(uVar3,uVar4);
  if ((uVar5 & 0xff) < (uVar2 & 0xff)) {
    FUN_00870d20(*(undefined8 *)(param_1 + 0x98),uVar7,uVar5);
  }
  if (param_4 != 0) {
    piVar6 = (int *)(param_4 + 0x18);
    if ((((*piVar6 == 0) || (piVar6 = (int *)(param_4 + 0x1c), *piVar6 == 0)) ||
        (piVar6 = (int *)(param_4 + 0x20), *piVar6 == 0)) ||
       (piVar6 = (int *)(param_4 + 0x24), *piVar6 == 0)) {
      *piVar6 = param_2;
      iVar1 = *(int *)(param_4 + 8);
    }
    else {
      iVar1 = *(int *)(param_4 + 8);
    }
    piVar6 = (int *)(param_4 + 8);
    if (((iVar1 != 0) && (piVar6 = (int *)(param_4 + 0xc), *piVar6 != 0)) &&
       ((piVar6 = (int *)(param_4 + 0x10), *piVar6 != 0 &&
        (piVar6 = (int *)(param_4 + 0x14), *piVar6 != 0)))) {
      return;
    }
    *piVar6 = param_3;
  }
  return;
}


