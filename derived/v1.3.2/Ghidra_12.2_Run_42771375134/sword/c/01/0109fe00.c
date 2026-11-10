/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109fe00; name: FUN_0109fe00
 */


void FUN_0109fe00(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar5;
  puVar3 = PTR_DAT_02724218;
  *PTR_DAT_02724210 = 1;
  *param_1 = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[9] = (long)(puVar3 + 0x40);
  param_1[0xb] = 0;
  param_1[0xe] = lVar5;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((long)param_1 + 0x102) = 0;
  param_1[0x14] = lVar5;
  param_1[0x15] = 0;
  param_1[0x18] = -1;
  *(undefined4 *)((long)param_1 + 0xfc) = 0xffffffff;
  FUN_010a0020(param_1 + 0x21);
  plVar1 = param_1 + 0x2363;
  *(undefined1 *)(param_1 + 0x2362) = 0;
  *plVar1 = 0;
  *(undefined2 *)(param_1 + 0x2364) = 0x100;
  FUN_010a05e0(param_1 + 0xb,5);
  FUN_010a0810(param_1 + 0x11,5);
  plVar6 = (long *)param_1[1];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,0x80,8);
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN_0077d050(lVar5,0xd);
  *(long **)(lVar5 + 8) = plVar6;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x80;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
  *plVar1 = lVar5;
  return;
}


