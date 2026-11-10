/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00346470; name: FUN_00346470
 */


void FUN_00346470(long param_1,undefined1 *param_2)

{
  size_t sVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 auStack_c0 [128];
  
  if (*(int **)(param_1 + 0x30) == (int *)0x0) {
    iVar2 = 0x74;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x30) + 0x74;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar2;
  piVar3 = *(int **)(param_1 + 0x28);
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  (**(code **)(param_2 + 0x18))(&local_d0,*(undefined8 *)(param_1 + 0x10));
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  local_e0 = local_d0;
  local_d8 = local_c8;
  local_d4 = local_c4;
  FUN_0031b3b0(puVar4,&local_e0);
  pcVar5 = *(code **)*puVar4;
  sVar1 = strlen(" ");
  (*pcVar5)(puVar4,&DAT_01ce77a5,sVar1);
                    /* WARNING: Subroutine does not return */
  memset(auStack_c0,0,0x80);
}


