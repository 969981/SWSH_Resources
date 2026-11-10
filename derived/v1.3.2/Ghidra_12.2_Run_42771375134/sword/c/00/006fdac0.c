/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fdac0; name: FUN_006fdac0
 */


long * FUN_006fdac0(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  puVar2 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x70,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  puVar3 = PTR_DAT_02710a18;
  uVar1 = *param_3;
  plVar5[7] = 0;
  *(undefined4 *)(plVar5 + 8) = 0;
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *plVar5 = (long)(puVar3 + 0x10);
  nn::os::GetTlsValue(*(undefined4 *)puVar2);
  *(undefined4 *)(plVar5 + 10) = 0;
  puVar2 = PTR_DAT_02715870;
  *(undefined4 *)(plVar5 + 0xd) = uVar1;
  *plVar5 = (long)(puVar2 + 0x10);
  plVar5[1] = (long)param_2;
  plVar5[9] = (long)(puVar2 + 0x48);
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0x70;
  plVar5[0xb] = -1;
  plVar5[0xc] = 0;
  plVar5[4] = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


