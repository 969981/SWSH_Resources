/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c0da0; name: FUN_014c0da0
 */


void FUN_014c0da0(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar7 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar7;
  puVar5 = PTR_DAT_0272a348;
  puVar2 = PTR_DAT_02710528;
  *PTR_DAT_0272a340 = 1;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[9] = (long)(puVar5 + 0x40);
  plVar8 = param_1 + 10;
  *plVar8 = (long)(puVar2 + 0x10);
  lVar6 = FUN_007606c0();
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_014c0e98;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_014c0e98:
  puVar2 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = plVar8;
  *(long *)(puVar2 + 0x800) = *(long *)(puVar2 + 0x800) + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 4));
  puVar2 = PTR_DAT_0272a350 + 0x10;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[10] = (long)puVar2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(long **)PTR_DAT_0272a358 = plVar8;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar2 = PTR_DAT_02710ac8 + 0x10;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x36] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = (long)puVar2;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined4 *)((long)param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = (long)puVar2;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined4 *)((long)param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = (long)puVar2;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(undefined4 *)((long)param_1 + 0x5f4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = (long)puVar2;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)((long)param_1 + 0x724) = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfa] = 0;
  param_1[0xed] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = (long)puVar2;
  *(undefined1 *)(param_1 + 0x10a) = 0;
  *(undefined4 *)((long)param_1 + 0x854) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  param_1[0x123] = 0;
  param_1[0x122] = 0;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x10f] = 0;
  param_1[0x10e] = (long)puVar2;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined4 *)((long)param_1 + 0x984) = 0;
  *(undefined4 *)(param_1 + 0x132) = 0;
  param_1[0x149] = 0;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  param_1[0x146] = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  param_1[0x136] = 0;
  param_1[0x135] = 0;
  param_1[0x134] = (long)puVar2;
  *(undefined1 *)(param_1 + 0x156) = 0;
  *(undefined4 *)((long)param_1 + 0xab4) = 0;
  param_1[0x158] = 0;
  param_1[0x177] = 0;
  param_1[0x176] = 0;
  param_1[0x175] = 0;
  param_1[0x174] = 0;
  param_1[0x167] = 0;
  param_1[0x166] = 0;
  param_1[0x165] = 0;
  param_1[0x164] = 0;
  param_1[0x163] = 0;
  *(undefined4 *)((long)param_1 + 0xb0c) = 0;
  param_1[0x14] = (long)puVar2;
  param_1[0x15] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((long)param_1 + 0xb04) = 0;
  *(undefined8 *)((long)param_1 + 0xafc) = 0;
  *(undefined8 *)((long)param_1 + 0xaf4) = 0;
  *(undefined8 *)((long)param_1 + 0xaec) = 0;
  *(undefined8 *)((long)param_1 + 0xae4) = 0;
  *(undefined8 *)((long)param_1 + 0xadc) = 0;
  *(undefined8 *)((long)param_1 + 0xad4) = 0;
  *(undefined8 *)((long)param_1 + 0xacc) = 0;
  param_1[0x162] = (long)puVar2;
  *(undefined1 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x159) = 0;
  return;
}


