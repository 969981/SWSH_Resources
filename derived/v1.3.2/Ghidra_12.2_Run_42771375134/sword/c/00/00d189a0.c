/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d189a0; name: FUN_00d189a0
 */


long * FUN_00d189a0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

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
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x800,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_38 = *param_3;
  *param_3 = 0;
  FUN_00d34820(plVar4,&local_38,param_4);
  plVar4[0x69] = 0;
  plVar4[0x6a] = -0x340d631b7bddd9bb;
  plVar4[0x6b] = (long)&DAT_01d38550;
  *(undefined4 *)(plVar4 + 0x6e) = 0;
  plVar4[0x6d] = 0;
  plVar4[0x6c] = 0;
  plVar4[0x6f] = 0;
  plVar4[0x85] = 0;
  plVar4[0x84] = 0;
  plVar4[0x83] = 0;
  plVar4[0x82] = 0;
  plVar4[0x75] = 0;
  plVar4[0x74] = 0;
  plVar4[0x73] = 0;
  plVar4[0x72] = 0;
  plVar4[0x70] = (long)(PTR_DAT_02715b00 + 0x10);
  plVar4[0x71] = 0;
  *(undefined1 *)((long)plVar4 + 0x49a) = 0;
  *(undefined2 *)(plVar4 + 0x93) = 0;
  plVar4[0x92] = 0;
  *(undefined4 *)((long)plVar4 + 0x49c) = 1;
  plVar4[0xa9] = 0;
  plVar4[0xa8] = 0;
  plVar4[0xa7] = 0;
  plVar4[0xa6] = 0;
  plVar4[0x99] = 0;
  plVar4[0x98] = 0;
  plVar4[0x97] = 0;
  plVar4[0x96] = 0;
  puVar1 = PTR_DAT_027194a8 + 0x10;
  plVar4[0x95] = 0;
  *(undefined1 *)(plVar4 + 0xb6) = 0;
  plVar4[0x94] = (long)puVar1;
  puVar2 = PTR_DAT_0271ceb0;
  *plVar4 = (long)(PTR_DAT_0271ceb0 + 0x10);
  plVar4[0xcd] = 0;
  plVar4[0xcc] = 0;
  plVar4[0xcb] = 0;
  plVar4[0xca] = 0;
  plVar4[0xbd] = 0;
  plVar4[0xbc] = 0;
  plVar4[0xbb] = 0;
  plVar4[0xba] = 0;
  plVar4[0xb9] = 0;
  plVar4[0xb8] = (long)puVar1;
  plVar4[0xda] = 0;
  plVar4[0xf1] = 0;
  plVar4[0xf0] = 0;
  plVar4[0xef] = 0;
  plVar4[0xee] = 0;
  plVar4[0xe1] = 0;
  plVar4[0xe0] = 0;
  plVar4[0xdf] = 0;
  plVar4[0xde] = 0;
  plVar4[9] = (long)(puVar2 + 0x68);
  plVar4[10] = (long)(puVar2 + 0xa8);
  puVar1 = PTR_DAT_027150e0 + 0x10;
  plVar4[0xdd] = 0;
  plVar4[0xff] = 0;
  plVar4[0xfe] = 0;
  plVar4[0xdc] = (long)puVar1;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x800;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


