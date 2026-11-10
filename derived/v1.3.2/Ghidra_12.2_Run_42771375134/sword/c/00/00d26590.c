/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d26590; name: FUN_00d26590
 */


long * FUN_00d26590(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long local_38;
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xc90,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_38 = *param_3;
  *param_3 = 0;
  FUN_00d34820(plVar4,&local_38,param_4);
  *(undefined4 *)(plVar4 + 0x69) = 0;
  puVar1 = PTR_DAT_0271d510;
  plVar4[0x7f] = 0;
  plVar4[0x7e] = 0;
  plVar4[0x7d] = 0;
  plVar4[9] = (long)(puVar1 + 0x68);
  plVar4[10] = (long)(puVar1 + 0xa8);
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[0x7c] = 0;
  plVar4[0x6f] = 0;
  plVar4[0x6e] = 0;
  plVar4[0x6d] = 0;
  plVar4[0x6c] = 0;
  plVar4[0x6b] = 0;
  puVar1 = PTR_DAT_027194a8 + 0x10;
  plVar4[0x6a] = (long)puVar1;
  plVar4[0xa1] = 0;
  plVar4[0xa0] = 0;
  plVar4[0x9f] = 0;
  plVar4[0x9e] = 0;
  plVar4[0x91] = 0;
  plVar4[0x90] = 0;
  plVar4[0x8f] = 0;
  plVar4[0x8e] = 0;
  plVar4[0x8d] = 0;
  puVar2 = PTR_DAT_02710818 + 0x10;
  plVar4[0x8c] = (long)puVar2;
  FUN_006fbc40(plVar4 + 0xae);
  plVar4[0x101] = 0;
  plVar4[0x100] = 0;
  plVar4[0xff] = 0;
  plVar4[0xfe] = 0;
  plVar4[0xf1] = 0;
  plVar4[0xf0] = 0;
  plVar4[0xef] = 0;
  plVar4[0xee] = 0;
  plVar4[0xed] = 0;
  plVar4[0xec] = (long)puVar2;
  FUN_006fbc40(plVar4 + 0x10e);
  plVar4[0x161] = 0;
  plVar4[0x160] = 0;
  plVar4[0x15f] = 0;
  plVar4[0x15e] = 0;
  plVar4[0x151] = 0;
  plVar4[0x150] = 0;
  plVar4[0x14f] = 0;
  plVar4[0x14e] = 0;
  plVar4[0x14d] = 0;
  plVar4[0x14c] = (long)puVar1;
  plVar4[0x183] = 0;
  plVar4[0x182] = 0;
  plVar4[0x181] = 0;
  plVar4[0x180] = 0;
  plVar4[0x173] = 0;
  plVar4[0x172] = 0;
  plVar4[0x171] = 0;
  plVar4[0x170] = 0;
  plVar4[0x16f] = 0;
  plVar4[0x16e] = (long)(PTR_DAT_02715b00 + 0x10);
  plVar4[400] = 0;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0xc90;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


