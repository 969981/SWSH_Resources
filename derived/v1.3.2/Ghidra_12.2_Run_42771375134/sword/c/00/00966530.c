/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00966530; name: FUN_00966530
 */


void FUN_00966530(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (*(int *)(param_3 + 2) != 0) {
    uVar6 = 0;
    do {
      iVar1 = *(int *)(param_3[4] + uVar6 * 4);
      if (iVar1 != 0) {
        FUN_00966620(param_1,*param_3,*(undefined8 *)(param_3[3] + uVar6 * 8),iVar1,
                     *(undefined1 *)(param_3 + 5));
        uVar2 = FUN_008e0a00(*(undefined8 *)(param_3[3] + uVar6 * 8));
        uVar3 = FUN_00942380(param_1);
        uVar4 = FUN_00942390(param_1);
        uVar5 = FUN_009423b0(param_1);
        FUN_0092f930(uVar3,uVar4,uVar5,10,uVar2,0,0);
      }
      uVar3 = FUN_009423e0(param_1);
      FUN_0092cda0(uVar3,param_3[1],*param_3,*(undefined8 *)(param_3[3] + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_3 + 2));
  }
  return;
}


