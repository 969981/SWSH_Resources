/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ca560; name: FUN_004ca560
 */


void FUN_004ca560(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if ((puVar5 == (undefined8 *)0x0) ||
     (iVar1 = *(int *)(puVar5 + 10), *(int *)(puVar5 + 10) = iVar1 + -1, iVar1 + -1 != 0)) {
    lVar4 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar2 = *(undefined4 *)PTR_DAT_02712a90;
    (**(code **)*puVar5)(puVar5);
    FUN_00404870(uVar2,puVar5);
    lVar4 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (lVar4 != -1) {
    uVar3 = FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  return;
}


