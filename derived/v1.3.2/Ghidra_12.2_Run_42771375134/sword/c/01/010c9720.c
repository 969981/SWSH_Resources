/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c9720; name: FUN_010c9720
 */


long * FUN_010c9720(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
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
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x750,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar4,*param_3,*param_4,*param_5);
  plVar4[0xd2] = 0;
  puVar1 = PTR_DAT_02724458 + 0x10;
  puVar2 = PTR_DAT_02724458 + 0xe8;
  plVar4[9] = (long)(PTR_DAT_02724458 + 0xa8);
  plVar4[10] = (long)puVar2;
  *plVar4 = (long)puVar1;
  *(undefined8 *)((long)plVar4 + 0x69d) = 0;
  plVar4[0xd3] = 0;
  *(undefined8 *)((long)plVar4 + 0x6b5) = 0;
  plVar4[0xd6] = 0;
  plVar4[0xd5] = 0;
  plVar4[0xd8] = 0;
  *(undefined8 *)((long)plVar4 + 0x6cd) = 0;
  plVar4[0xd9] = 0;
  *(undefined8 *)((long)plVar4 + 0x6e5) = 0;
  plVar4[0xdc] = 0;
  plVar4[0xdb] = 0;
  *(undefined8 *)((long)plVar4 + 0x6fd) = 0;
  plVar4[0xdf] = 0;
  plVar4[0xde] = 0;
  *(undefined4 *)(plVar4 + 0xe1) = 0;
  *(undefined1 *)((long)plVar4 + 0x70c) = 0;
  *(undefined8 *)((long)plVar4 + 0x649) = 0;
  *(undefined8 *)((long)plVar4 + 0x643) = 0;
  *(undefined8 *)((long)plVar4 + 0x63b) = 0;
  *(undefined8 *)((long)plVar4 + 0x633) = 0;
  *(undefined8 *)((long)plVar4 + 0x62b) = 0;
  *(undefined8 *)((long)plVar4 + 0x623) = 0;
  *(undefined8 *)((long)plVar4 + 0x61b) = 0;
  *(undefined8 *)((long)plVar4 + 0x613) = 0;
  *(undefined8 *)((long)plVar4 + 0x60b) = 0;
  *(undefined8 *)((long)plVar4 + 0x603) = 0;
  *(undefined8 *)((long)plVar4 + 0x5fb) = 0;
  *(undefined8 *)((long)plVar4 + 0x5f3) = 0;
  *(undefined8 *)((long)plVar4 + 0x5eb) = 0;
  *(undefined8 *)((long)plVar4 + 0x5e3) = 0;
  *(undefined8 *)((long)plVar4 + 0x5db) = 0;
  *(undefined8 *)((long)plVar4 + 0x5cb) = 0;
  *(undefined8 *)((long)plVar4 + 0x5d3) = 0;
  *(undefined8 *)((long)plVar4 + 0x685) = 0;
  plVar4[0xd0] = 0;
  plVar4[0xcf] = 0;
  plVar4[0xce] = 0;
  plVar4[0xcd] = 0;
  plVar4[0xcc] = 0;
  plVar4[0xcb] = 0;
  *(undefined8 *)((long)plVar4 + 0x73d) = 0;
  *(undefined8 *)((long)plVar4 + 0x736) = 0;
  *(undefined8 *)((long)plVar4 + 0x72e) = 0;
  *(undefined8 *)((long)plVar4 + 0x726) = 0;
  *(undefined8 *)((long)plVar4 + 0x71e) = 0;
  *(undefined8 *)((long)plVar4 + 0x716) = 0;
  *(undefined8 *)((long)plVar4 + 0x70e) = 0;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x750;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


