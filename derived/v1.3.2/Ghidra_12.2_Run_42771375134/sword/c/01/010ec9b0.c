/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ec9b0; name: FUN_010ec9b0
 */


long * FUN_010ec9b0(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_50;
  long local_48;
  
  puVar3 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x610,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_48 = *param_3;
  *param_3 = 0;
  local_50 = *param_4;
  *param_4 = 0;
  FUN_00ff5fc0(plVar5,&local_48,&local_50);
  puVar1 = PTR_DAT_02724748 + 0x10;
  puVar2 = PTR_DAT_02724748 + 0xb8;
  plVar5[9] = (long)(PTR_DAT_02724748 + 0x78);
  plVar5[10] = (long)puVar2;
  *plVar5 = (long)puVar1;
  *(undefined4 *)(plVar5 + 0xf) = 8;
  FUN_010f5bd0(plVar5 + 0x10);
  plVar5[0x22] = 0;
  plVar5[0x23] = 0;
  plVar5[0x2a] = -1;
  plVar5[0x2b] = -1;
  plVar5[0x2c] = 0;
  plVar5[0x28] = -1;
  plVar5[0x29] = -1;
  plVar5[0x26] = -1;
  plVar5[0x27] = -1;
  plVar5[0x24] = 0;
  plVar5[0x25] = -1;
  plVar5[0x2d] = 0;
  plVar5[0x2e] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  plVar5[0x2f] = lVar6;
  plVar5[0x30] = 0;
  *(undefined4 *)(plVar5 + 0x31) = 0;
  *(undefined4 *)(plVar5 + 0x32) = 0;
  plVar5[0x49] = 0;
  plVar5[0x48] = 0;
  plVar5[0x47] = 0;
  plVar5[0x46] = 0;
  plVar5[0x38] = 0;
  plVar5[0x39] = 0;
  plVar5[0x36] = 0;
  plVar5[0x37] = 0;
  puVar3 = PTR_DAT_02724750 + 0x10;
  plVar5[0x6b] = 0;
  plVar5[0x6a] = 0;
  plVar5[0x69] = 0;
  plVar5[0x68] = 0;
  plVar5[0x5b] = 0;
  plVar5[0x5a] = 0;
  plVar5[0x59] = 0;
  plVar5[0x58] = 0;
  plVar5[0x34] = (long)puVar3;
  plVar5[0x35] = 0;
  puVar3 = PTR_DAT_02724758 + 0x10;
  plVar5[0x56] = (long)puVar3;
  plVar5[0x78] = (long)puVar3;
  plVar5[0x57] = 0;
  plVar5[0x8d] = 0;
  plVar5[0x8c] = 0;
  plVar5[0x8b] = 0;
  plVar5[0x8a] = 0;
  plVar5[0x7d] = 0;
  plVar5[0x7c] = 0;
  plVar5[0x7b] = 0;
  plVar5[0x7a] = 0;
  plVar5[0x79] = 0;
  plVar5[0xa6] = 0;
  plVar5[0xa5] = 0;
  plVar5[0xa4] = 0;
  plVar5[0xa3] = 0;
  plVar5[0xa2] = 0;
  plVar5[0xa1] = 0;
  plVar5[0xa0] = 0;
  plVar5[0x9f] = 0;
  plVar5[0x9e] = 0;
  plVar5[0x9d] = 0;
  plVar5[0x9c] = 0;
  plVar5[0x9b] = 0;
  plVar5[0x9a] = 0;
  *(undefined1 *)((long)plVar5 + 0x544) = 1;
  plVar5[0xad] = 0;
  plVar5[0xac] = 0;
  plVar5[0xab] = 0;
  plVar5[0xaa] = 0;
  FUN_010f5bd0(plVar5 + 0xae);
  *(undefined1 *)(plVar5 + 0xc0) = 0;
  plVar5[0xc1] = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  plVar5[1] = (long)param_2;
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0x610;
  plVar5[4] = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


