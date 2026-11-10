/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acceb0; name: FUN_00acceb0
 */


long * FUN_00acceb0(undefined8 param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x80,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  lVar4 = *param_3;
  *param_3 = 0;
  FUN_006d86d0(plVar3,*param_4);
  puVar1 = PTR_DAT_02719908;
  plVar3[0xf] = lVar4;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[9] = (long)(puVar1 + 0x90);
  plVar3[10] = (long)(puVar1 + 0x100);
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x80;
  plVar3[4] = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


