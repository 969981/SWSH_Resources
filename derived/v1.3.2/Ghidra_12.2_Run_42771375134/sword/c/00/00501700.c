/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00501700; name: FUN_00501700
 */


void FUN_00501700(undefined4 param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined4 local_50;
  undefined1 local_4c;
  char local_44 [4];
  long local_40;
  undefined8 local_38;
  
  iVar1 = FUN_004fb370(param_3);
  if (iVar1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x005017c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x18))(param_3);
    return;
  }
  lVar2 = (**(code **)(*param_3 + 0x28))(param_3,&local_38,&local_40,local_44,0);
  if (lVar2 == 0) {
    (**(code **)(*param_3 + 0x30))(param_3,0,0x35,0);
  }
  else if (local_40 == 0) {
    if (local_44[0] == '\0') {
      (**(code **)(*param_3 + 0x30))(param_3,lVar2,1,0);
    }
  }
  else {
    local_4c = *(undefined1 *)((long)param_3 + 100);
    local_50 = param_1;
    iVar1 = FUN_005038d0(local_40,*(undefined8 *)(param_2 + 0x608),local_38,&local_50,
                         *(undefined1 *)((long)param_3 + 0x66));
    if (iVar1 != 1) {
      FUN_00503790(local_40 + 8,iVar1);
    }
  }
  return;
}


