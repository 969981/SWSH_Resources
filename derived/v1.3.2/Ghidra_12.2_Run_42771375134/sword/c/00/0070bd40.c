/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070bd40; name: FUN_0070bd40
 */


long * FUN_0070bd40(undefined8 param_1,long *param_2,undefined8 *param_3,long *param_4,
                   undefined4 *param_5,long param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x2b0,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar2 = *param_5;
  lVar1 = 0;
  if (*param_4 != 0) {
    lVar1 = *param_4 + 0x48;
  }
  FUN_006d4b30(plVar5,*param_3,lVar1,1);
  puVar3 = PTR_DAT_02715a18;
  *(undefined4 *)(plVar5 + 0x54) = uVar2;
  plVar5[0x55] = param_6;
  plVar5[9] = (long)(puVar3 + 0x68);
  plVar5[10] = (long)(puVar3 + 0xa8);
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0x2b0;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[1] = (long)param_2;
  plVar5[4] = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  FUN_006d1120(plVar5);
  return plVar5;
}


