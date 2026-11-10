/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f5c20; name: FUN_011f5c20
 */


void FUN_011f5c20(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = FUN_00884820(param_2);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      uVar2 = (**(code **)(*param_2 + 0x50))(param_2,iVar3);
      FUN_011f5c90(param_1,uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return;
}


