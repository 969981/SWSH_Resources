/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a81ae0; name: FUN_00a81ae0
 */


void FUN_00a81ae0(long *param_1,long *param_2,uint param_3,int param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  switch(param_3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    goto switchD_00a81b10_caseD_0;
  case 7:
    param_3 = *(uint *)(param_2 + 0x2e4);
    goto joined_r0x00a81b84;
  case 8:
    param_3 = *(uint *)((long)param_2 + 0x1724);
    goto joined_r0x00a81b84;
  case 9:
    uVar2 = *(undefined4 *)((long)param_2 + 0x16fc);
    break;
  case 10:
    uVar2 = *(undefined4 *)((long)param_2 + (long)param_4 * 4 + 0x1704);
    break;
  case 0xb:
    uVar2 = (undefined4)param_2[0x2e0];
    break;
  default:
    goto switchD_00a81b10_default;
  }
  param_3 = (**(code **)(*param_2 + 0x8f8))(param_2,uVar2);
  param_3 = param_3 & 0xff;
joined_r0x00a81b84:
  if (param_3 == 0xff) {
switchD_00a81b10_default:
    *param_1 = 0;
  }
  else {
switchD_00a81b10_caseD_0:
    lVar1 = param_2[(ulong)param_3 + 0xb0];
    *param_1 = lVar1;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a81b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      return;
    }
  }
  return;
}


