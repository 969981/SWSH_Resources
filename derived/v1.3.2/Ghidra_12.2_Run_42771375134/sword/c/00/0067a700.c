/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067a700; name: FUN_0067a700
 */


void FUN_0067a700(long *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_02714de0 + 0x10);
  FUN_005bf710(param_1 + 1,0);
  *param_1 = (long)(PTR_DAT_02714de8 + 0x10);
  FUN_005bf710(param_1 + 3,param_2);
  param_1[5] = 0x10;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 7;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  puVar2 = PTR_DAT_02714dd8 + 0x10;
  param_1[0x20] = 0;
  param_1[0x21] = (long)puVar2;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = param_2;
  param_1[0x23] = 0;
  if (param_2 == 0) {
    lVar5 = FUN_005bc6f0();
    param_1[0x22] = lVar5;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    lVar5 = FUN_005bc740();
    if (lVar5 == 0) {
      lVar5 = FUN_005bc6f0();
    }
    else {
      lVar5 = FUN_005bc740();
    }
    param_1[0x26] = lVar5;
  }
  else {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = param_2;
    param_1[0x27] = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar2 = PTR_DAT_02714df0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x20;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x2f] = param_2;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = (long)(puVar2 + 0x10);
  if (param_2 == 0) {
    lVar5 = FUN_005bc6f0();
    param_1[0x2f] = lVar5;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  do {
    iVar1 = DAT_029ec5c8 + 1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x29ec5c8,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      DAT_029ec5c8 = iVar1;
    }
  } while (cVar3 != '\0');
  param_1[6] = 0;
  *(int *)(param_1 + 0x38) = iVar1;
  *(undefined1 *)((long)param_1 + 0xfe) = 0;
  *(undefined4 *)((long)param_1 + 0xfa) = 0;
  param_1[7] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_005c55d0(param_1 + 6,0x40,"SSKKArchive",0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0x12] = 3;
  param_1[0x13] = 0x9d00000000;
  *(int *)((long)param_1 + 0x74) = (int)param_1[5];
  return;
}


