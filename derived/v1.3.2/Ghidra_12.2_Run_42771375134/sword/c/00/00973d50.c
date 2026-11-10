/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00973d50; name: FUN_00973d50
 */


undefined8 FUN_00973d50(undefined8 *param_1,int param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar1 = FUN_0093ec60(param_1,param_4);
  uVar2 = FUN_008e4d80(uVar1,0,0,param_3);
  if ((uVar2 & 1) != 0) {
    if (param_2 == 0) {
      iVar3 = 1;
      do {
        uVar2 = FUN_008f9ff0(*param_1,param_4,*(undefined1 *)(param_3 + 9));
        if ((uVar2 & 1) == 0) {
          return 1;
        }
        uVar2 = FUN_008e4d80(uVar1,0,iVar3,param_3);
        iVar3 = iVar3 + 1;
      } while ((uVar2 & 1) != 0);
    }
    else {
      iVar3 = 1;
      do {
        uVar2 = FUN_008f9ff0(*param_1,param_4,*(undefined1 *)(param_3 + 9));
        if (((uVar2 & 1) == 0) && (*(int *)(param_3 + 4) == param_2)) {
          return 1;
        }
        uVar2 = FUN_008e4d80(uVar1,0,iVar3,param_3);
        iVar3 = iVar3 + 1;
      } while ((uVar2 & 1) != 0);
    }
  }
  return 0;
}


