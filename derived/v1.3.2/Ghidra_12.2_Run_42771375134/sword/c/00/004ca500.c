/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ca500; name: FUN_004ca500
 */


void FUN_004ca500(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if ((puVar3 == (undefined8 *)0x0) ||
     (iVar1 = *(int *)(puVar3 + 10), *(int *)(puVar3 + 10) = iVar1 + -1, iVar1 + -1 != 0)) {
    return;
  }
  uVar2 = *(undefined4 *)PTR_DAT_02712a90;
  (**(code **)*puVar3)(puVar3);
  FUN_00404870(uVar2,puVar3);
  return;
}


