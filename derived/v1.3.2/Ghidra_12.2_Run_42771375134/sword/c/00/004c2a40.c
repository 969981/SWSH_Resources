/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c2a40; name: FUN_004c2a40
 */


void FUN_004c2a40(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[2];
  *param_1 = (long)(PTR_DAT_027134d8 + 0x10);
  if ((puVar4 == (undefined8 *)0x0) ||
     (iVar1 = *(int *)(puVar4 + 10), *(int *)(puVar4 + 10) = iVar1 + -1, iVar1 + -1 != 0)) {
    plVar3 = (long *)param_1[8];
  }
  else {
    uVar2 = *(undefined4 *)PTR_DAT_02712a90;
    (**(code **)*puVar4)(puVar4);
    FUN_00404870(uVar2,puVar4);
    plVar3 = (long *)param_1[8];
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_00431200();
  return;
}


