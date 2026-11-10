/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040cd50; name: FUN_0040cd50
 */


int FUN_0040cd50(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_54;
  int *local_50;
  ulong local_48;
  long local_38;
  
  local_48 = 0;
  *param_4 = 0;
  local_50 = (int *)0x0;
  uVar2 = FUN_004188e0(param_2,0);
  FUN_0040ed70(uVar2,param_3,&local_50);
  if ((int)local_48 == 0) {
    iVar4 = 3;
  }
  else if (*local_50 == 0) {
    iVar4 = 2;
  }
  else {
    iVar4 = 1;
    piVar3 = local_50;
    do {
      local_54 = 0;
      iVar1 = FUN_00418a30(param_2,*(long *)(param_1 + 8) -
                                   *(long *)(*(long *)(param_1 + 0x10) + 0x68),*piVar3,&local_54,0,0
                           ,&local_38);
      if ((iVar1 == 1) && ((iVar4 == 1 || (local_38 < *param_4)))) {
        iVar4 = 0;
        *param_4 = local_38;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != local_50 + (local_48 & 0xffffffff));
  }
  if (local_50 != (int *)0x0) {
    local_48 = local_48 & 0xffffffff00000000;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,local_50);
  }
  return iVar4;
}


