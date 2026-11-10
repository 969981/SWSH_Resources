/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a2fac0; name: FUN_00a2fac0
 */


long * FUN_00a2fac0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
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
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x790,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar3,*param_3,*param_4,*param_5);
  *(undefined8 *)((long)plVar3 + 0x5cc) = 0;
  puVar1 = PTR_DAT_02719078;
  *(undefined4 *)(plVar3 + 0xc3) = 0;
  plVar3[0xc2] = 0;
  plVar3[0xc1] = 0;
  plVar3[0xc0] = 0;
  plVar3[0xbf] = 0;
  plVar3[9] = (long)(puVar1 + 0xb8);
  plVar3[10] = (long)(puVar1 + 0xf8);
  plVar3[0xbe] = 0;
  plVar3[0xbd] = 0;
  plVar3[0xbc] = 0;
  plVar3[0xbb] = 0;
  plVar3[0xda] = 0;
  plVar3[0xd9] = 0;
  plVar3[0xd8] = 0;
  plVar3[0xd7] = 0;
  plVar3[0xd6] = 0;
  plVar3[0xd5] = 0;
  plVar3[0xd4] = 0;
  plVar3[0xd3] = 0;
  plVar3[0xd2] = 0;
  plVar3[0xd1] = 0;
  plVar3[0xd0] = 0;
  plVar3[0xcf] = 0;
  plVar3[0xce] = 0;
  plVar3[0xcd] = 0;
  plVar3[0xcc] = 0;
  plVar3[0xcb] = 0;
  plVar3[0xca] = 0;
  plVar3[0xc9] = 0;
  plVar3[200] = 0;
  plVar3[199] = 0;
  plVar3[0xc6] = 0;
  plVar3[0xc5] = 0;
  plVar3[0xc4] = 0;
  plVar3[0xdc] = (long)(PTR_DAT_02719080 + 0x10);
  *(undefined1 *)((long)plVar3 + 0x754) = 1;
  *(undefined1 *)(plVar3 + 0xdd) = 0;
  plVar3[0xe2] = 0;
  plVar3[0xe1] = 0;
  plVar3[0xe0] = 0;
  plVar3[0xdf] = 0;
  plVar3[0xde] = 0;
  *(undefined1 *)(plVar3 + 0xf1) = 0;
  plVar3[0xf0] = 0;
  plVar3[0xef] = 0;
  plVar3[0xee] = 0;
  plVar3[0xed] = 0;
  plVar3[0xec] = 0;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x790;
  plVar3[4] = 0x10;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = (long)param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


