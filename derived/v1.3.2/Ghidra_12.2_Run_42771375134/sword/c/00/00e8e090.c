/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8e090; name: FUN_00e8e090
 */


void FUN_00e8e090(long *param_1,long *param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar9 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_4 + uVar9);
    lVar10 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_00de2350(param_1,param_2,param_3,lVar10);
  *(undefined4 *)(param_1 + 0x7e) = 0;
  puVar6 = PTR_DAT_0271fef0;
  plVar11 = (long *)param_1[0x74];
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[0x83] = 0;
  param_1[9] = (long)(puVar6 + 0x1b0);
  param_1[10] = (long)(puVar6 + 0x1f0);
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0xab) = 3;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    if (*(long *)(lVar10 + 0x58) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x60))();
      *(undefined8 *)(lVar10 + 0x58) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0x54);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11[0x27] = plVar11[0x27] & 0xfffffffffffffffcU | 0x10;
  plVar12 = plVar11 + 0xf;
  (**(code **)(*plVar12 + 0x10))(plVar12);
  (**(code **)(*plVar12 + 0x18))(plVar12);
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    piVar1 = (int *)(lVar10 + 0x54);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x60) = 0;
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar9 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_4 + uVar9);
    lVar10 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_00e8e4f0(param_1 + 0x80,lVar10);
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 7) ||
     (uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3], uVar9 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_4 + uVar9);
    lVar10 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_00e8e4f0(param_1 + 0x88,lVar10);
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 9) ||
     (uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4], uVar9 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_4 + uVar9);
    lVar10 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_00e8e4f0(param_1 + 0x90,lVar10);
  param_1[0xcd] = -0x340d631b7bddd9bb;
  param_1[0xce] = -0x340d631b7bddd9bb;
  param_1[0xcf] = -0x340d631b7bddd9bb;
  param_1[0xd0] = -0x340d631b7bddd9bb;
  param_1[0xd1] = -0x340d631b7bddd9bb;
  param_1[0xd2] = -0x340d631b7bddd9bb;
  param_1[0xd3] = -0x340d631b7bddd9bb;
  param_1[0xd4] = -0x340d631b7bddd9bb;
  param_1[0xd5] = -0x340d631b7bddd9bb;
  local_48 = DAT_02160de4;
  local_58 = DAT_02160dd4;
  uStack_50 = DAT_02160ddc;
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xd0,0x10);
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  puVar8[0x18] = 0;
  puVar8[0x19] = 0;
  puVar8[0x16] = 0;
  puVar8[0x17] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  *(undefined8 *)((long)puVar8 + 0xa4) = 0x3f800000;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  lVar10 = param_1[200];
  param_1[200] = (long)puVar8;
  if (lVar10 != 0) {
    (**(code **)(*(long *)param_1[0xc9] + 0x18))
              ((long *)param_1[0xc9],lVar10,param_1[0xca],param_1[0xcb]);
    puVar8 = (undefined8 *)param_1[200];
  }
  param_1[0xc9] = (long)param_2;
  param_1[0xca] = 0xd0;
  param_1[0xcb] = 0x10;
  FUN_00e90bc0(puVar8,&local_58);
  return;
}


