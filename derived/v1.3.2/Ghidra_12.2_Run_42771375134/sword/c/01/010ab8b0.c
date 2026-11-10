/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ab8b0; name: FUN_010ab8b0
 */


long * FUN_010ab8b0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
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
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x620,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar4,*param_3,*param_4,*param_5);
  *(undefined4 *)((long)plVar4 + 0x5fc) = 0;
  puVar1 = PTR_DAT_027242c0 + 0x10;
  puVar2 = PTR_DAT_027242c0 + 0xe8;
  plVar4[9] = (long)(PTR_DAT_027242c0 + 0xa8);
  plVar4[10] = (long)puVar2;
  *plVar4 = (long)puVar1;
  *(undefined8 *)((long)plVar4 + 0x5f4) = 0;
  *(undefined8 *)((long)plVar4 + 0x5ec) = 0;
  *(undefined8 *)((long)plVar4 + 0x5e4) = 0;
  *(undefined8 *)((long)plVar4 + 0x5dc) = 0;
  *(undefined8 *)((long)plVar4 + 0x5d4) = 0;
  *(undefined8 *)((long)plVar4 + 0x5cc) = 0;
  FUN_012b4040(plVar4 + 0xc0);
  plVar4[0xc2] = 0;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x620;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


