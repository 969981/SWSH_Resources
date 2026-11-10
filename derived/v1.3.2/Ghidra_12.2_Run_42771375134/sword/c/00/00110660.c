/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00110660; name: FUN_00110660
 */


void FUN_00110660(long param_1)

{
  char *pcVar1;
  ulong uVar2;
  size_t sVar3;
  char *pcVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
    uVar10 = 0xcbf29ce484222645;
    sVar3 = strlen(PTR_s_data___02710918);
    uVar5 = *(ulong *)(param_1 + 0x18);
    uVar2 = uVar5;
    if (sVar3 <= uVar5) {
      uVar2 = sVar3;
    }
    pbVar7 = (byte *)(*(long *)(param_1 + 0x10) + uVar2);
    uVar2 = uVar5 - uVar2;
    *(byte **)(param_1 + 0x10) = pbVar7;
    *(ulong *)(param_1 + 0x18) = uVar2;
    if (uVar2 != 0) {
      uVar8 = uVar5;
      if (sVar3 <= uVar5) {
        uVar8 = sVar3;
      }
      if (uVar5 != uVar8 + 1) {
        uVar8 = ~sVar3;
        if (uVar8 < ~uVar5) {
          uVar8 = ~uVar5;
        }
        lVar11 = (((uVar2 & 1) - 1) - uVar5) - uVar8;
        pbVar6 = pbVar7;
        do {
          pbVar7 = pbVar6 + 2;
          uVar10 = ((uVar10 ^ *pbVar6) * 0x100000001b3 ^ (ulong)pbVar6[1]) * 0x100000001b3;
          lVar11 = lVar11 + 2;
          pbVar6 = pbVar7;
        } while (lVar11 != 0);
      }
      if ((uVar2 & 1) != 0) {
        uVar10 = (uVar10 ^ *pbVar7) * 0x100000001b3;
      }
    }
    *(ulong *)(param_1 + 8) = uVar10;
    return;
  case 3:
    uVar10 = 0xcbf29ce484222645;
    sVar3 = strlen(PTR_DAT_02710b80);
    uVar5 = *(ulong *)(param_1 + 0x18);
    uVar2 = uVar5;
    if (sVar3 <= uVar5) {
      uVar2 = sVar3;
    }
    pbVar7 = (byte *)(*(long *)(param_1 + 0x10) + uVar2);
    uVar2 = uVar5 - uVar2;
    *(byte **)(param_1 + 0x10) = pbVar7;
    *(ulong *)(param_1 + 0x18) = uVar2;
    if (uVar2 != 0) {
      uVar8 = uVar5;
      if (sVar3 <= uVar5) {
        uVar8 = sVar3;
      }
      if (uVar5 != uVar8 + 1) {
        uVar8 = ~sVar3;
        if (uVar8 < ~uVar5) {
          uVar8 = ~uVar5;
        }
        lVar11 = (((uVar2 & 1) - 1) - uVar5) - uVar8;
        pbVar6 = pbVar7;
        do {
          pbVar7 = pbVar6 + 2;
          uVar10 = ((uVar10 ^ *pbVar6) * 0x100000001b3 ^ (ulong)pbVar6[1]) * 0x100000001b3;
          lVar11 = lVar11 + 2;
          pbVar6 = pbVar7;
        } while (lVar11 != 0);
      }
      if ((uVar2 & 1) != 0) {
        uVar10 = (uVar10 ^ *pbVar7) * 0x100000001b3;
      }
    }
    *(ulong *)(param_1 + 8) = uVar10;
    return;
  case 4:
    uVar10 = 0xcbf29ce484222645;
    sVar3 = strlen(PTR_s_save_d___02710ba8);
    uVar5 = *(ulong *)(param_1 + 0x18);
    uVar2 = uVar5;
    if (sVar3 - 1 <= uVar5) {
      uVar2 = sVar3 - 1;
    }
    pbVar7 = (byte *)(*(long *)(param_1 + 0x10) + uVar2);
    uVar2 = uVar5 - uVar2;
    *(byte **)(param_1 + 0x10) = pbVar7;
    *(ulong *)(param_1 + 0x18) = uVar2;
    if (uVar2 != 0) {
      uVar8 = -sVar3;
      uVar9 = ~uVar5;
      if (uVar8 < uVar9 || -uVar9 == sVar3) {
        uVar8 = ~uVar5;
      }
      if (uVar5 + uVar8 != 0) {
        uVar8 = -sVar3;
        if (uVar8 < uVar9 || -uVar9 == sVar3) {
          uVar8 = ~uVar5;
        }
        lVar11 = (((uVar2 & 1) - 1) - uVar5) - uVar8;
        pbVar6 = pbVar7;
        do {
          pbVar7 = pbVar6 + 2;
          uVar10 = ((uVar10 ^ *pbVar6) * 0x100000001b3 ^ (ulong)pbVar6[1]) * 0x100000001b3;
          lVar11 = lVar11 + 2;
          pbVar6 = pbVar7;
        } while (lVar11 != 0);
      }
      if ((uVar2 & 1) != 0) {
        uVar10 = (uVar10 ^ *pbVar7) * 0x100000001b3;
      }
    }
    *(ulong *)(param_1 + 8) = uVar10;
    return;
  case 5:
    pcVar12 = *(char **)(param_1 + 0x10);
    pcVar4 = strchr(pcVar12,0x2f);
    if (pcVar4 != (char *)0x0) {
      uVar10 = *(ulong *)(param_1 + 0x18);
      uVar5 = 0xcbf29ce484222645;
      uVar2 = uVar10;
      if ((ulong)((long)pcVar4 - (long)pcVar12) <= uVar10) {
        uVar2 = (long)pcVar4 - (long)pcVar12;
      }
      pbVar7 = (byte *)(pcVar12 + uVar2);
      uVar2 = uVar10 - uVar2;
      *(byte **)(param_1 + 0x10) = pbVar7;
      *(ulong *)(param_1 + 0x18) = uVar2;
      if (uVar2 != 0) {
        pcVar1 = pcVar12 + ~(ulong)pcVar4;
        if (pcVar1 <= (char *)~uVar10) {
          pcVar1 = (char *)~uVar10;
        }
        if (pcVar1 + uVar10 != (char *)0x0) {
          pcVar12 = pcVar12 + (-1 - (long)pcVar4);
          if (pcVar12 <= (char *)~uVar10) {
            pcVar12 = (char *)~uVar10;
          }
          lVar11 = (((uVar2 & 1) - 1) - uVar10) - (long)pcVar12;
          pbVar6 = pbVar7;
          do {
            pbVar7 = pbVar6 + 2;
            uVar5 = ((uVar5 ^ *pbVar6) * 0x100000001b3 ^ (ulong)pbVar6[1]) * 0x100000001b3;
            lVar11 = lVar11 + 2;
            pbVar6 = pbVar7;
          } while (lVar11 != 0);
        }
        if ((uVar2 & 1) != 0) {
          uVar5 = (uVar5 ^ *pbVar7) * 0x100000001b3;
        }
      }
      *(ulong *)(param_1 + 8) = uVar5;
    }
  }
  return;
}


