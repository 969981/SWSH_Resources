/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a32b00; name: FUN_00a32b00
 */


long * FUN_00a32b00(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long local_48;
  long local_38;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x6a0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_38 = *param_3;
  *param_3 = 0;
  local_48 = *param_4;
  *param_4 = 0;
  FUN_00ff5fc0(plVar3,&local_38,&local_48);
  puVar1 = PTR_DAT_02719118;
  *(undefined2 *)(plVar3 + 0xf) = 1;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[0x10] = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  plVar3[0x47] = 0;
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  plVar3[0x46] = 0;
  plVar3[0x45] = 0;
  plVar3[0x44] = 0;
  plVar3[0x57] = 0;
  plVar3[0x56] = 0;
  plVar3[0x55] = 0;
  plVar3[0x54] = 0;
  plVar3[0x67] = 0;
  plVar3[0x66] = 0;
  plVar3[0x65] = 0;
  plVar3[100] = 0;
  plVar3[0x77] = 0;
  plVar3[0x76] = 0;
  plVar3[0x75] = 0;
  plVar3[0x74] = 0;
  plVar3[0x87] = 0;
  plVar3[0x86] = 0;
  plVar3[0x85] = 0;
  plVar3[0x84] = 0;
  plVar3[0x97] = 0;
  plVar3[0x96] = 0;
  plVar3[0x95] = 0;
  plVar3[0x94] = 0;
  plVar3[0xa7] = 0;
  plVar3[0xa6] = 0;
  plVar3[0xa5] = 0;
  plVar3[0xa4] = 0;
  plVar3[0xb7] = 0;
  plVar3[0xb6] = 0;
  plVar3[0xb5] = 0;
  plVar3[0xb4] = 0;
  plVar3[199] = 0;
  plVar3[0xc6] = 0;
  plVar3[0xc5] = 0;
  plVar3[0xc4] = 0;
  plVar3[9] = (long)(puVar1 + 0xa0);
  plVar3[10] = (long)(puVar1 + 0xe0);
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x26] = 0;
  plVar3[0x27] = 0;
  plVar3[0x24] = 0;
  plVar3[0x25] = 0;
  plVar3[0x36] = 0;
  plVar3[0x37] = 0;
  plVar3[0x34] = 0;
  plVar3[0x35] = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x6a0;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


