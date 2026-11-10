/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc8f40; name: FUN_00dc8f40
 */


long * FUN_00dc8f40(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

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
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x270,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_006e16c0(plVar4,param_3,*param_4);
  plVar4[0x34] = 0;
  plVar4[0x35] = 0;
  plVar4[0x32] = 0;
  plVar4[0x33] = 0;
  puVar1 = PTR_DAT_027152e0 + 0x68;
  puVar2 = PTR_DAT_027152e0 + 0xa8;
  *plVar4 = (long)(PTR_DAT_027152e0 + 0x10);
  plVar4[9] = (long)puVar1;
  plVar4[10] = (long)puVar2;
  FUN_012c1fc0(plVar4 + 0x36);
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x270;
  plVar4[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


