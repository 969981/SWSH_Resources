/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be9000; name: FUN_00be9000
 */


long * FUN_00be9000(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
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
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x850,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar4,*param_3,*param_4,*param_5);
  *(undefined1 *)(plVar4 + 0xbb) = 1;
  plVar4[0xba] = 0;
  *(undefined4 *)(plVar4 + 0xc1) = 0;
  plVar4[0xc0] = 0;
  plVar4[0xbf] = 0;
  plVar4[0xbe] = 0;
  plVar4[0xbd] = 0;
  plVar4[0xbc] = 0;
  plVar4[199] = 0;
  plVar4[0xc6] = 0;
  plVar4[0xc5] = 0;
  plVar4[0xc4] = 0;
  plVar4[0xc3] = 0;
  plVar4[0xc2] = 0;
  *(undefined4 *)(plVar4 + 200) = 8;
  plVar4[0xce] = 0;
  *(undefined4 *)(plVar4 + 0xd0) = 8;
  plVar4[0xd6] = 0;
  *(undefined4 *)(plVar4 + 0xd8) = 8;
  plVar4[0xde] = 0;
  *(undefined4 *)(plVar4 + 0xe0) = 8;
  plVar4[0xe6] = 0;
  *(undefined4 *)(plVar4 + 0xe8) = 8;
  plVar4[0xee] = 0;
  *(undefined4 *)(plVar4 + 0xf0) = 8;
  plVar4[0xf6] = 0;
  *(undefined4 *)(plVar4 + 0xf8) = 8;
  plVar4[0xfe] = 0;
  *(undefined4 *)(plVar4 + 0x100) = 8;
  plVar4[0x106] = 0;
  plVar4[0x108] = 0;
  puVar1 = PTR_DAT_0271b958 + 0x10;
  puVar2 = PTR_DAT_0271b958 + 0x110;
  plVar4[9] = (long)(PTR_DAT_0271b958 + 0xd0);
  plVar4[10] = (long)puVar2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x850;
  plVar4[4] = 0x10;
  *plVar4 = (long)puVar1;
  plVar4[1] = (long)param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


