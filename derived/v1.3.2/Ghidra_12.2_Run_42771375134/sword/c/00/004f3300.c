/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f3300; name: FUN_004f3300
 */


undefined8 FUN_004f3300(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xd8);
  if (lVar4 != 0) {
    if ((*(long *)(*(long *)(lVar4 + 8) + 0x48) == param_2) &&
       (*(char *)(*(long *)(lVar4 + 8) + 0x54) != '\0')) {
      return 1;
    }
    *(int *)(lVar4 + 0x8c) = *(int *)(lVar4 + 0x8c) + -1;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  if (param_2 == -1) {
    return 1;
  }
  puVar3 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = FUN_004e5a60(puVar3);
    *(long *)(param_1 + 0xd8) = lVar4;
    if (lVar4 != 0) {
      *(int *)(lVar4 + 0x8c) = *(int *)(lVar4 + 0x8c) + 1;
      iVar1 = *(int *)(puVar3 + 10);
      *(int *)(puVar3 + 10) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        uVar2 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)*puVar3)(puVar3);
        FUN_00404870(uVar2,puVar3);
        return 1;
      }
      return 1;
    }
    iVar1 = *(int *)(puVar3 + 10);
    *(int *)(puVar3 + 10) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar3)(puVar3);
      FUN_00404870(uVar2,puVar3);
      return 2;
    }
  }
  return 2;
}


