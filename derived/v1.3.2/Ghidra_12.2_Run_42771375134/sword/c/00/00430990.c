/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00430990; name: FUN_00430990
 */


undefined8 FUN_00430990(char *param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined2 uVar6;
  size_t sVar7;
  size_t sVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte local_144 [260];
  
  uVar14 = 0x811c9dc5;
  if (param_1 == (char *)0x0) {
    uVar13 = 0;
  }
  else {
    sVar7 = strlen(param_1);
    sVar8 = 0x103;
    if (sVar7 + 1 < 0x103) {
      sVar8 = sVar7 + 1;
    }
    strncpy((char *)local_144,param_1,sVar8);
    local_144[sVar8] = 0;
    sVar8 = strlen(param_1);
    if (sVar8 != 0) {
      pbVar11 = local_144;
      sVar7 = sVar8;
      do {
        if (*pbVar11 - 0x41 < 0x1a) {
          *pbVar11 = *pbVar11 + 0x20;
        }
        sVar7 = sVar7 - 1;
        pbVar11 = pbVar11 + 1;
      } while (sVar7 != 0);
    }
    uVar13 = uVar14;
    if ((int)sVar8 != 0) {
      pbVar11 = local_144;
      do {
        pbVar12 = pbVar11 + 1;
        uVar13 = uVar13 * 0x1000193 ^ (uint)*pbVar11;
        pbVar11 = pbVar12;
      } while (pbVar12 < local_144 + (sVar8 & 0xffffffff));
    }
  }
  if (param_2 == (char *)0x0) {
    uVar9 = 0xf;
  }
  else {
    sVar7 = strlen(param_2);
    sVar8 = 0x103;
    if (sVar7 + 1 < 0x103) {
      sVar8 = sVar7 + 1;
    }
    strncpy((char *)local_144,param_2,sVar8);
    local_144[sVar8] = 0;
    sVar8 = strlen(param_2);
    if (sVar8 != 0) {
      pbVar11 = local_144;
      sVar7 = sVar8;
      do {
        if (*pbVar11 - 0x41 < 0x1a) {
          *pbVar11 = *pbVar11 + 0x20;
        }
        sVar7 = sVar7 - 1;
        pbVar11 = pbVar11 + 1;
      } while (sVar7 != 0);
    }
    if ((int)sVar8 != 0) {
      pbVar11 = local_144;
      do {
        pbVar12 = pbVar11 + 1;
        uVar14 = uVar14 * 0x1000193 ^ (uint)*pbVar11;
        pbVar11 = pbVar12;
      } while (pbVar12 < local_144 + (sVar8 & 0xffffffff));
    }
    uVar9 = 0xf;
    if ((uVar13 != 0) && (uVar14 != 0)) {
      uVar6 = FUN_004358a0(0xf);
      puVar5 = PTR_DAT_02712de0;
      lVar10 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,7,uVar6);
      uVar2 = 0;
      if (uVar14 != 0x2ca33bdb) {
        uVar2 = uVar14;
      }
      *(uint *)(lVar10 + 4) = uVar13;
      *(uint *)(lVar10 + 8) = uVar2;
      *(undefined4 *)(lVar10 + 0xc) = 0;
      piVar1 = (int *)(*(long *)puVar5 + 0x94);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar9 = 1;
    }
  }
  return uVar9;
}


