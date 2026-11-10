/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e83f0; name: FUN_004e83f0
 */


void FUN_004e83f0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (*(char *)(param_1 + 100) != '\0') {
    lVar1 = -4;
    if (*(long *)(param_1 + 0x38) != -1) {
      lVar1 = *(long *)(param_1 + 0x38);
    }
    puVar5 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,lVar1);
    if (puVar5 != (undefined8 *)0x0) {
      iVar2 = *(int *)(puVar5 + 10);
      iVar4 = iVar2 + -1;
      *(int *)(puVar5 + 10) = iVar4;
      if (iVar4 == 0) {
        uVar3 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)*puVar5)(puVar5);
        FUN_00404870(uVar3,puVar5);
        iVar2 = *(int *)(puVar5 + 10) + -1;
        *(int *)(puVar5 + 10) = iVar2;
      }
      else {
        iVar2 = iVar2 + -2;
        *(int *)(puVar5 + 10) = iVar2;
      }
      if (iVar2 == 0) {
        uVar3 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)*puVar5)(puVar5);
        FUN_00404870(uVar3,puVar5);
      }
      *(undefined1 *)(param_1 + 100) = 0;
    }
  }
  FUN_004e8660(param_1);
  return;
}


