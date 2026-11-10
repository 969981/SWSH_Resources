/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087c040; name: FUN_0087c040
 */


void FUN_0087c040(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x98);
  iVar1 = FUN_00869ee0(*puVar3,0);
  if (iVar1 != 0) {
    iVar2 = FUN_00869ee0(*puVar3,1);
    if (iVar2 == iVar1) {
      FUN_00870bc0(*puVar3,1,0);
      FUN_00870e80(*puVar3,1,0);
      FUN_00870d20(*puVar3,1,0);
    }
    iVar2 = FUN_00869ee0(*puVar3,2);
    if (iVar2 == iVar1) {
      FUN_00870bc0(*puVar3,2,0);
      FUN_00870e80(*puVar3,2,0);
      FUN_00870d20(*puVar3,2,0);
    }
    iVar2 = FUN_00869ee0(*puVar3,3);
    if (iVar2 == iVar1) {
      FUN_00870bc0(*puVar3,3,0);
      FUN_00870e80(*puVar3,3,0);
      FUN_00870d20(*puVar3,3,0);
    }
  }
  iVar1 = FUN_00869ee0(*puVar3,1);
  if (iVar1 != 0) {
    iVar2 = FUN_00869ee0(*puVar3,2);
    if (iVar2 == iVar1) {
      FUN_00870bc0(*puVar3,2,0);
      FUN_00870e80(*puVar3,2,0);
      FUN_00870d20(*puVar3,2,0);
    }
    iVar2 = FUN_00869ee0(*puVar3,3);
    if (iVar2 == iVar1) {
      FUN_00870bc0(*puVar3,3,0);
      FUN_00870e80(*puVar3,3,0);
      FUN_00870d20(*puVar3,3,0);
    }
  }
  iVar1 = FUN_00869ee0(*puVar3,2);
  if ((iVar1 == 0) || (iVar2 = FUN_00869ee0(*puVar3,3), iVar2 != iVar1)) {
    return;
  }
  FUN_00870bc0(*puVar3,3,0);
  FUN_00870e80(*puVar3,3,0);
  FUN_00870d20(*puVar3,3,0);
  return;
}


