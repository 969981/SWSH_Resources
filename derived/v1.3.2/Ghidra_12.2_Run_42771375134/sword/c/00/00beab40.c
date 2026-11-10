/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00beab40; name: FUN_00beab40
 */


long * FUN_00beab40(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x860,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar5,*param_3,*param_4,*param_5);
  *(undefined1 *)(plVar5 + 0xbb) = 1;
  plVar5[0xba] = 0;
  *(undefined4 *)(plVar5 + 0xc1) = 0;
  plVar5[0xc0] = 0;
  plVar5[0xbf] = 0;
  plVar5[0xbe] = 0;
  plVar5[0xbd] = 0;
  plVar5[0xbc] = 0;
  plVar5[199] = 0;
  plVar5[0xc6] = 0;
  plVar5[0xc5] = 0;
  plVar5[0xc4] = 0;
  plVar5[0xc3] = 0;
  plVar5[0xc2] = 0;
  *(undefined4 *)(plVar5 + 200) = 8;
  plVar5[0xce] = 0;
  *(undefined4 *)(plVar5 + 0xd0) = 8;
  plVar5[0xd6] = 0;
  *(undefined4 *)(plVar5 + 0xd8) = 8;
  plVar5[0xde] = 0;
  *(undefined4 *)(plVar5 + 0xe0) = 8;
  plVar5[0xe6] = 0;
  *(undefined4 *)(plVar5 + 0xe8) = 8;
  plVar5[0xee] = 0;
  *(undefined4 *)(plVar5 + 0xf0) = 8;
  plVar5[0xf6] = 0;
  *(undefined4 *)(plVar5 + 0xf8) = 8;
  plVar5[0xfe] = 0;
  *(undefined4 *)(plVar5 + 0x100) = 8;
  plVar5[0x106] = 0;
  plVar5[0x109] = 0;
  puVar1 = PTR_DAT_0271b998 + 0x10;
  puVar2 = PTR_DAT_0271b998 + 0xd0;
  puVar3 = PTR_DAT_0271b998 + 0x110;
  plVar5[0x108] = 0;
  plVar5[0x10a] = 0;
  plVar5[9] = (long)puVar2;
  plVar5[10] = (long)puVar3;
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0x860;
  plVar5[4] = 0x10;
  *plVar5 = (long)puVar1;
  plVar5[1] = (long)param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


