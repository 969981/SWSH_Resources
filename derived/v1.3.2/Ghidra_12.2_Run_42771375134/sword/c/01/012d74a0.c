/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d74a0; name: FUN_012d74a0
 */


void FUN_012d74a0(long param_1)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((((*(long *)(param_1 + 0xa8) == 0) || (*(long *)(param_1 + 0xb0) == 0)) ||
      (*(long *)(param_1 + 0xa0) != 0)) || (*(long *)(param_1 + 0xa0) == 0)) {
    return;
  }
  uVar9 = 0xcbf29ce484222645;
  iVar3 = FUN_008783b0(*(undefined8 *)(param_1 + 0xa0));
  uVar4 = FUN_008783c0(*(undefined8 *)(param_1 + 0xa0));
  pcVar1 = (char *)(param_1 + 0xf8);
  snprintf(pcVar1,0x40,"Play_PV_%03d_%02d_00",iVar3,uVar4 & 0xffff);
  sVar5 = strlen(pcVar1);
  bVar2 = *(byte *)(param_1 + 0xf8);
  uVar8 = 0xcbf29ce484222645;
  if (bVar2 != 0) {
    uVar8 = 0xcbf29ce484222645;
    pbVar7 = (byte *)(param_1 + 0xf9);
    do {
      uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x158) = uVar8;
  *(char **)(param_1 + 0x160) = pcVar1;
  *(size_t *)(param_1 + 0x168) = sVar5;
  if (*(long *)(param_1 + 0x170) != 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x170) + 0x48);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  pcVar1 = (char *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x170) = 0;
  snprintf(pcVar1,0x40,"PM%03dVC",iVar3);
  sVar5 = strlen(pcVar1);
  bVar2 = *(byte *)(param_1 + 0xb8);
  if (bVar2 != 0) {
    pbVar7 = (byte *)(param_1 + 0xb9);
    do {
      uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x138) = uVar9;
  *(char **)(param_1 + 0x140) = pcVar1;
  *(size_t *)(param_1 + 0x148) = sVar5;
  if (*(long *)(param_1 + 0x150) != 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x150) + 0x48);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  iVar3 = FUN_008783b0(*(undefined8 *)(param_1 + 0xa0));
  if (iVar3 == 0x19) {
    uVar4 = FUN_008783c0();
    if ((uVar4 & 0xffff) - 1 < 9) {
      FUN_012d96b0(param_1);
      return;
    }
    if ((uVar4 & 0xffff) == 0) {
      FUN_012d8540(param_1);
      return;
    }
  }
  else {
    iVar3 = FUN_008783b0(*(undefined8 *)(param_1 + 0xa0));
    if (iVar3 == 0x85) {
      FUN_012da820(param_1);
      return;
    }
  }
  return;
}


