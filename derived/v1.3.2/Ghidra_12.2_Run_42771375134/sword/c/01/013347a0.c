/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013347a0; name: FUN_013347a0
 */


void FUN_013347a0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_80 [24];
  long local_68;
  long local_60;
  long *local_58;
  
  lVar4 = param_2 + param_3 * 8;
  lVar2 = *(long *)(lVar4 + 0x180);
  if (lVar2 != 0) {
    *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x013347f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    return;
  }
  plVar6 = *(long **)(param_2 + 0x58);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar6;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x90,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN_00883c20(plVar3,*(undefined8 *)(param_2 + 0x58));
  plVar3[1] = (long)plVar6;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x90;
  plVar3[4] = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  local_58 = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  lVar2 = FUN_01334a00(param_2,param_3);
  if (lVar2 != 0) {
    lVar5 = 0;
    while( true ) {
      FUN_01334e30(&local_60,param_2,param_3,lVar5);
      lVar1 = local_60;
      (**(code **)(*plVar3 + 0x28))(plVar3,local_60);
      if (lVar1 != 0) {
        plVar6 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        local_60 = 0;
      }
      if (lVar2 + -1 == lVar5) break;
      lVar5 = lVar5 + 1;
      plVar3 = local_58;
    }
  }
  if ((*(long *)(param_2 + 0x178) != 0) && (**(char **)(*(long *)(param_2 + 0x178) + 0x60) != '\0'))
  {
    lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x278);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    FUN_006cf0c0(auStack_80,param_2 + 0x178);
    FUN_0152ae70(lVar2,auStack_80,param_3,&local_58);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  plVar3 = local_58;
  plVar6 = (long *)(lVar4 + 0x180);
  if (local_58 != (long *)0x0) {
    (**(code **)(local_58[9] + 0x10))();
  }
  lVar4 = *plVar6;
  *plVar6 = (long)plVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  *param_1 = (long)local_58;
  return;
}


