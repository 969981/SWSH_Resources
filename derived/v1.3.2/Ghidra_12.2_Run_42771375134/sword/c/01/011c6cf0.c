/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011c6cf0; name: FUN_011c6cf0
 */


void FUN_011c6cf0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_02710860;
  plVar5 = *(long **)(*(long *)PTR_DAT_02715188 + 8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x68,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  puVar2 = PTR_DAT_02710a18;
  plVar4[7] = 0;
  *(undefined4 *)(plVar4 + 8) = 0;
  *(undefined4 *)(plVar4 + 6) = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[2] = 0;
  plVar4[3] = 0;
  nn::os::GetTlsValue(*(undefined4 *)puVar1);
  puVar1 = PTR_DAT_02715190 + 0x10;
  plVar4[9] = (long)(PTR_DAT_02715190 + 0x48);
  *plVar4 = (long)puVar1;
  plVar4[1] = (long)plVar5;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x68;
  plVar4[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  *param_1 = (long)plVar4;
  return;
}


