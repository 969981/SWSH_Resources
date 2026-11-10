/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045caa0; name: FUN_0045caa0
 */


undefined8 FUN_0045caa0(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 local_50;
  undefined4 local_44;
  
  if (((*(uint *)(param_1 + 0x48) | 2) == 2) && (*(int *)(param_1 + 0xa8) == 0)) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    puVar1 = PTR_DAT_02712ad0;
    local_44 = 0;
    while( true ) {
      local_50 = 0;
      iVar2 = FUN_0045c8a0(param_1,&local_44,&local_50);
      piVar4 = *(int **)(param_1 + 0xa0);
      if (*(long *)(param_1 + 0x58) != 0) {
        FUN_00431200();
      }
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + 1;
      }
      *(int **)(param_1 + 0x58) = piVar4;
      if ((iVar2 == 0) || (iVar3 = FUN_0045cb90(param_1,iVar2,local_44,param_2,param_3), iVar3 == 1)
         ) break;
      FUN_0048f020(*(undefined8 *)puVar1,*(undefined4 *)(param_1 + 0x6c),iVar2,local_50);
    }
  }
  return 1;
}


