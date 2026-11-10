/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004302e0; name: FUN_004302e0
 */


undefined8
FUN_004302e0(undefined4 param_1,char *param_2,undefined8 param_3,int param_4,undefined4 param_5,
            byte param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined2 uVar5;
  size_t sVar6;
  size_t sVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  byte local_164 [260];
  
  if (param_2 == (char *)0x0) {
LAB_00430408:
    uVar9 = 0xf;
  }
  else {
    sVar6 = strlen(param_2);
    sVar7 = 0x103;
    if (sVar6 + 1 < 0x103) {
      sVar7 = sVar6 + 1;
    }
    strncpy((char *)local_164,param_2,sVar7);
    local_164[sVar7] = 0;
    sVar7 = strlen(param_2);
    if (sVar7 != 0) {
      pbVar10 = local_164;
      sVar6 = sVar7;
      do {
        if (*pbVar10 - 0x41 < 0x1a) {
          *pbVar10 = *pbVar10 + 0x20;
        }
        sVar6 = sVar6 - 1;
        pbVar10 = pbVar10 + 1;
      } while (sVar6 != 0);
    }
    uVar12 = 0x811c9dc5;
    if ((int)sVar7 != 0) {
      pbVar10 = local_164;
      do {
        pbVar11 = pbVar10 + 1;
        uVar12 = uVar12 * 0x1000193 ^ (uint)*pbVar10;
        pbVar10 = pbVar11;
      } while (pbVar11 < local_164 + (sVar7 & 0xffffffff));
      if (uVar12 == 0) goto LAB_00430408;
    }
    if ((param_4 == 0) && ((param_6 & 1) == 0)) {
      uVar5 = FUN_00435880();
      puVar4 = PTR_DAT_02712de0;
      lVar8 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,2,uVar5);
      *(uint *)(lVar8 + 0xc) = uVar12;
      *(undefined4 *)(lVar8 + 0x10) = param_1;
      *(undefined8 *)(lVar8 + 4) = param_3;
      *(undefined4 *)(lVar8 + 0x14) = 0;
      piVar1 = (int *)(*(long *)puVar4 + 0x94);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      uVar5 = FUN_00435890();
      puVar4 = PTR_DAT_02712de0;
      lVar8 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,3,uVar5);
      *(uint *)(lVar8 + 0xc) = uVar12;
      *(undefined4 *)(lVar8 + 0x10) = param_1;
      *(undefined8 *)(lVar8 + 4) = param_3;
      *(byte *)(lVar8 + 0x20) = param_6 & 1;
      *(undefined4 *)(lVar8 + 0x14) = 0;
      *(int *)(lVar8 + 0x18) = param_4;
      *(undefined4 *)(lVar8 + 0x1c) = param_5;
      piVar1 = (int *)(*(long *)puVar4 + 0x94);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar9 = 1;
  }
  return uVar9;
}


