/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5de60; name: FUN_00a5de60
 */


long * FUN_00a5de60(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x6b0,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar4,*param_3,*param_4,*param_5);
  *(undefined8 *)((long)plVar4 + 0x62c) = 0;
  *(undefined8 *)((long)plVar4 + 0x621) = 0;
  *(undefined8 *)((long)plVar4 + 0x61c) = 0;
  *(undefined8 *)((long)plVar4 + 0x614) = 0;
  *(undefined8 *)((long)plVar4 + 0x60c) = 0;
  *(undefined8 *)((long)plVar4 + 0x604) = 0;
  *(undefined8 *)((long)plVar4 + 0x5fc) = 0;
  *(undefined8 *)((long)plVar4 + 0x5f4) = 0;
  *(undefined8 *)((long)plVar4 + 0x5ec) = 0;
  *(undefined8 *)((long)plVar4 + 0x5cc) = 0;
  *(undefined8 *)((long)plVar4 + 0x5e4) = 0;
  *(undefined8 *)((long)plVar4 + 0x5dc) = 0;
  *(undefined8 *)((long)plVar4 + 0x5d4) = 0;
  *(undefined4 *)((long)plVar4 + 0x634) = 1;
  plVar4[199] = 0;
  *(undefined2 *)(plVar4 + 200) = 0;
  plVar4[0xc9] = 0;
  *(undefined4 *)(plVar4 + 0xca) = 2;
  *(undefined1 *)(plVar4 + 0xd5) = 0;
  plVar4[0xd4] = 0;
  plVar4[0xd3] = 0;
  plVar4[0xd2] = 0;
  plVar4[0xd0] = 0;
  plVar4[0xcf] = 0;
  plVar4[0xce] = 0;
  plVar4[0xcd] = 0;
  plVar4[0xcc] = 0;
  plVar4[0xcb] = 0;
  *(undefined2 *)(plVar4 + 0xd1) = 0;
  puVar1 = PTR_DAT_02719468 + 0x10;
  puVar2 = PTR_DAT_02719468 + 0xf8;
  plVar4[9] = (long)(PTR_DAT_02719468 + 0xb8);
  plVar4[10] = (long)puVar2;
  *plVar4 = (long)puVar1;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x6b0;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


