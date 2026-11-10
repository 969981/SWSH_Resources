/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087bba0; name: FUN_0087bba0
 */


undefined8 FUN_0087bba0(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),0);
  if ((iVar1 != param_2) &&
     (iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),1), iVar1 != param_2)) {
    iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),2);
    if (iVar1 == param_2) {
      return 2;
    }
    iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),3);
    if (iVar1 != param_2) {
      iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),0);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
        iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),1);
        if (iVar1 != 0) {
          uVar3 = 2;
          iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),2);
          if (iVar1 != 0) {
            uVar3 = 3;
            iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),3);
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
      uVar2 = FUN_00880a40(param_2,0);
      FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),uVar3,param_2);
      FUN_00870e80(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870d20(*(undefined8 *)(param_1 + 0x98),uVar3,uVar2);
      return 0;
    }
  }
  return 2;
}


