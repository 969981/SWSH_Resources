/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b9a150; name: FUN_00b9a150
 */


long * FUN_00b9a150(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x3c0,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_01689230(plVar4,*param_3);
  puVar2 = PTR_DAT_02710a18;
  plVar4[0x74] = 0;
  *(undefined4 *)(plVar4 + 0x75) = 0;
  *(undefined4 *)(plVar4 + 0x73) = 0;
  plVar4[0x6d] = (long)(puVar2 + 0x10);
  plVar4[0x72] = 0;
  plVar4[0x71] = 0;
  plVar4[0x70] = 0;
  plVar4[0x6f] = 0;
  nn::os::GetTlsValue(*(undefined4 *)puVar1);
  *(undefined4 *)(plVar4 + 0x77) = 0;
  puVar1 = PTR_DAT_0271b320;
  plVar4[0x6e] = (long)param_2;
  plVar4[0x6f] = (long)plVar4;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[0x76] = (long)(puVar1 + 0x68);
  plVar4[0x70] = 0x3c0;
  plVar4[0x6d] = (long)(puVar1 + 0x30);
  plVar4[0x71] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


