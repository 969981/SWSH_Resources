/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a04b60; name: FUN_00a04b60
 */


long * FUN_00a04b60(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
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
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x8f0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar3,*param_3,*param_4,*param_5);
  puVar1 = PTR_DAT_02718d60;
  *plVar3 = (long)(PTR_DAT_02718d60 + 0x10);
  plVar3[9] = (long)(puVar1 + 0xb8);
  plVar3[10] = (long)(puVar1 + 0xf8);
  *(undefined2 *)((long)plVar3 + 0x5cb) = 0;
  plVar3[0xbd] = 0;
  plVar3[0xbc] = 0;
  plVar3[0xbb] = 0;
  plVar3[0xba] = 0;
  plVar3[0xca] = 0;
  *(undefined4 *)(plVar3 + 0xcb) = 0;
  plVar3[0xe1] = 0;
  plVar3[0xe0] = 0;
  plVar3[0xdf] = 0;
  plVar3[0xde] = 0;
  plVar3[0xf1] = 0;
  plVar3[0xf0] = 0;
  plVar3[0xef] = 0;
  plVar3[0xee] = 0;
  plVar3[0x101] = 0;
  plVar3[0x100] = 0;
  plVar3[0xff] = 0;
  plVar3[0xfe] = 0;
  plVar3[0x110] = 0;
  plVar3[0x10f] = 0;
  plVar3[0x10e] = 0;
  plVar3[0xdc] = 0;
  plVar3[0xdb] = 0;
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
  FUN_006cf0a0(plVar3 + 0x111,&DAT_0262c580);
  FUN_006cf0a0(plVar3 + 0x115,&DAT_0262c598);
  FUN_006cf0a0(plVar3 + 0x119,&DAT_0262c598);
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x8f0;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


