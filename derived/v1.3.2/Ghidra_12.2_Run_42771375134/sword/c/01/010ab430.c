/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ab430; name: FUN_010ab430
 */


long * FUN_010ab430(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
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
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1ab0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar3,*param_3,*param_4,*param_5);
  puVar1 = PTR_DAT_027242b8;
  *plVar3 = (long)(PTR_DAT_027242b8 + 0x10);
  plVar3[9] = (long)(puVar1 + 0xa8);
  plVar3[10] = (long)(puVar1 + 0xe8);
  *(undefined8 *)((long)plVar3 + 0x5fc) = 0;
  *(undefined8 *)((long)plVar3 + 0x5f4) = 0;
  *(undefined8 *)((long)plVar3 + 0x5ec) = 0;
  *(undefined8 *)((long)plVar3 + 0x5e4) = 0;
  *(undefined8 *)((long)plVar3 + 0x5cc) = 0;
  *(undefined8 *)((long)plVar3 + 0x5dc) = 0;
  *(undefined8 *)((long)plVar3 + 0x5d4) = 0;
  *(undefined8 *)((long)plVar3 + 0x604) = 0xffffffff00000000;
  plVar3[0xc5] = 0;
  plVar3[0xc4] = 0;
  plVar3[0xc3] = 0;
  plVar3[0xc2] = 0;
  plVar3[0xd5] = 0;
  plVar3[0xd4] = 0;
  plVar3[0xd3] = 0;
  plVar3[0xd2] = 0;
  FUN_012b4040(plVar3 + 0xe5);
  FUN_0168ad10(plVar3 + 0xe8);
  puVar1 = PTR_DAT_02723148 + 0x10;
  plVar3[0xe8] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x162);
  plVar3[0x162] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x1dc);
  plVar3[0x1dc] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x256);
  plVar3[0x256] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x2d0);
  plVar3[0x2d0] = (long)puVar1;
  plVar3[0x34a] = 0;
  *(undefined4 *)(plVar3 + 0x34b) = 0;
  *(undefined1 *)((long)plVar3 + 0x1a5c) = 0;
  plVar3[0x34c] = 0;
  *(undefined1 *)(plVar3 + 0x34d) = 0;
  plVar3[0x354] = 0;
  plVar3[0x353] = 0;
  plVar3[0x352] = 0;
  plVar3[0x351] = 0;
  plVar3[0x350] = 0;
  plVar3[0x34f] = 0;
  plVar3[0x34e] = 0;
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x1ab0;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


