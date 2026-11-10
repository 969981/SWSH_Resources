/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd05a0; name: FUN_00fd05a0
 */


long * FUN_00fd05a0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x7e0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar3,*param_3,*param_4,*param_5);
  *(undefined1 *)((long)plVar3 + 0x5cb) = 0;
  puVar1 = PTR_DAT_02722f60;
  plVar3[0xba] = 0;
  *(undefined1 *)(plVar3 + 0xbb) = 0;
  *(undefined4 *)(plVar3 + 0xc5) = 0;
  plVar3[9] = (long)(puVar1 + 0xa8);
  plVar3[10] = (long)(puVar1 + 0xe8);
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = (long)param_2;
  plVar3[0xc4] = 0;
  plVar3[0xc3] = 0;
  plVar3[0xc2] = 0;
  plVar3[0xc1] = 0;
  plVar3[0xc0] = 0;
  plVar3[0xbf] = 0;
  plVar3[0xbe] = 0;
  plVar3[0xbd] = 0;
  plVar3[0xbc] = 0;
  plVar3[199] = 0;
  plVar3[0xc9] = 0;
  plVar3[0xcc] = 0;
  plVar3[0xce] = 0;
  plVar3[0xd1] = 0;
  plVar3[0xd3] = 0;
  plVar3[0xd6] = 0;
  plVar3[0xd8] = 0;
  plVar3[0xdb] = 0;
  plVar3[0xdd] = 0;
  plVar3[0xe0] = 0;
  plVar3[0xe2] = 0;
  plVar3[0xe5] = 0;
  plVar3[0xe7] = 0;
  plVar3[0xea] = 0;
  plVar3[0xec] = 0;
  plVar3[0xef] = 0;
  plVar3[0xf1] = 0;
  plVar3[0xf4] = 0;
  plVar3[0xf6] = 0;
  *(undefined1 *)(plVar3 + 0xf8) = 0;
  plVar3[0xf9] = 0;
  *(undefined1 *)(plVar3 + 0xfa) = 0;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x7e0;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


