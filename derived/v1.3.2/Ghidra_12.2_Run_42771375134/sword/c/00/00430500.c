/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00430500; name: FUN_00430500
 */


undefined8 FUN_00430500(char *param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined2 uVar5;
  size_t sVar6;
  size_t sVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte local_154 [260];
  
  uVar13 = 0x811c9dc5;
  if (param_1 == (char *)0x0) {
    uVar12 = 0;
  }
  else {
    sVar6 = strlen(param_1);
    sVar7 = 0x103;
    if (sVar6 + 1 < 0x103) {
      sVar7 = sVar6 + 1;
    }
    strncpy((char *)local_154,param_1,sVar7);
    local_154[sVar7] = 0;
    sVar7 = strlen(param_1);
    if (sVar7 != 0) {
      pbVar10 = local_154;
      sVar6 = sVar7;
      do {
        if (*pbVar10 - 0x41 < 0x1a) {
          *pbVar10 = *pbVar10 + 0x20;
        }
        sVar6 = sVar6 - 1;
        pbVar10 = pbVar10 + 1;
      } while (sVar6 != 0);
    }
    uVar12 = uVar13;
    if ((int)sVar7 != 0) {
      pbVar10 = local_154;
      do {
        pbVar11 = pbVar10 + 1;
        uVar12 = uVar12 * 0x1000193 ^ (uint)*pbVar10;
        pbVar10 = pbVar11;
      } while (pbVar11 < local_154 + (sVar7 & 0xffffffff));
    }
  }
  if (param_2 == (char *)0x0) {
    uVar8 = 0xf;
  }
  else {
    sVar6 = strlen(param_2);
    sVar7 = 0x103;
    if (sVar6 + 1 < 0x103) {
      sVar7 = sVar6 + 1;
    }
    strncpy((char *)local_154,param_2,sVar7);
    local_154[sVar7] = 0;
    sVar7 = strlen(param_2);
    if (sVar7 != 0) {
      pbVar10 = local_154;
      sVar6 = sVar7;
      do {
        if (*pbVar10 - 0x41 < 0x1a) {
          *pbVar10 = *pbVar10 + 0x20;
        }
        sVar6 = sVar6 - 1;
        pbVar10 = pbVar10 + 1;
      } while (sVar6 != 0);
    }
    if ((int)sVar7 != 0) {
      pbVar10 = local_154;
      do {
        pbVar11 = pbVar10 + 1;
        uVar13 = uVar13 * 0x1000193 ^ (uint)*pbVar10;
        pbVar10 = pbVar11;
      } while (pbVar11 < local_154 + (sVar7 & 0xffffffff));
    }
    uVar8 = 0xf;
    if ((uVar12 != 0) && (uVar13 != 0)) {
      uVar5 = FUN_004358b0(0xf);
      puVar4 = PTR_DAT_02712de0;
      lVar9 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,8,uVar5);
      *(undefined8 *)(lVar9 + 4) = param_3;
      *(uint *)(lVar9 + 0xc) = uVar12;
      *(uint *)(lVar9 + 0x10) = uVar13;
      piVar1 = (int *)(*(long *)puVar4 + 0x94);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar8 = 1;
    }
  }
  return uVar8;
}


