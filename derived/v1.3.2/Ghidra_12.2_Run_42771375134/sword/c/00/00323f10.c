/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00323f10; name: FUN_00323f10
 */


void FUN_00323f10(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  char *pcVar13;
  long *plVar14;
  code *pcVar15;
  char *local_48;
  undefined1 local_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  char *local_38;
  
  lVar4 = *param_1;
  pcVar15 = (code *)param_2[3];
  pcVar13 = (char *)*param_2;
  puVar7 = (uint *)(lVar4 + 0x10);
  uVar9 = *puVar7;
  if (uVar9 != 0) {
    lVar10 = *(long *)(lVar4 + 8);
    uVar11 = (ulong)(uVar9 - 1);
    pbVar12 = (byte *)(lVar10 + uVar11 * 0x10 + 8);
    if (*pbVar12 == 0) {
      bVar3 = 0;
      if ((char)param_1[9] != '\0') {
        bVar3 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar10 + uVar11 * 0x10));
        bVar3 = bVar3 & 1;
        lVar4 = *param_1;
        *(byte *)(param_1 + 9) = bVar3;
        lVar10 = *(long *)(lVar4 + 8);
        puVar7 = (uint *)(lVar4 + 0x10);
        uVar9 = *puVar7;
        uVar11 = (ulong)(uVar9 - 1);
        pbVar12 = (byte *)(lVar10 + uVar11 * 0x10 + 8);
      }
      *(byte *)(lVar10 + uVar11 * 0x10 + 9) = bVar3;
      *pbVar12 = bVar3;
    }
  }
  uStack_3f = (undefined1)param_1[9];
  local_40 = 0;
  local_48 = pcVar13;
  if (uVar9 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar9 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_3e,uStack_3f) << 8;
    *puVar1 = pcVar13;
    *puVar7 = *puVar7 + 1;
    piVar8 = (int *)param_1[0xb];
  }
  else {
    FUN_00321500(lVar4,&local_48);
    piVar8 = (int *)param_1[0xb];
  }
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  plVar14 = (long *)param_1[8];
  iVar2 = *(int *)(*param_1 + 0x10);
  if (iVar2 == 0) {
    pcVar13 = "bad__repx__name";
  }
  else {
    pcVar13 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar2 - 1) * 0x10);
  }
  uVar11 = (**(code **)(*(long *)param_1[5] + 0x10))((long *)param_1[5],pcVar13,&local_38);
  if (((((uVar11 & 1) == 0) || (local_48 = local_38, local_38 == (char *)0x0)) ||
      (*local_38 == '\0')) || (uVar5 = strtoull(local_38,&local_48,10), uVar5 == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*plVar14 + 0x50))(plVar14,uVar5);
    if (lVar4 == 0) {
      uVar6 = FUN_00400880();
      FUN_00400890(uVar6,4,"./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h",0x6c
                   ,
                   "PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalRefs collection is specified if required and check Xml file for completeness."
                   ,uVar5);
      lVar4 = *param_1;
      iVar2 = *(int *)(lVar4 + 0x10);
      goto joined_r0x003240e8;
    }
  }
  (*pcVar15)(param_1[6],lVar4);
  lVar4 = *param_1;
  iVar2 = *(int *)(lVar4 + 0x10);
joined_r0x003240e8:
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    uVar9 = iVar2 - 1;
    if ((*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar9 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar9 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar4 = *param_1;
      uVar9 = *(int *)(lVar4 + 0x10) - 1;
    }
    *(uint *)(lVar4 + 0x10) = uVar9;
    *(undefined1 *)(param_1 + 9) = 1;
    if ((uVar9 != 0) && (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar9 - 1) * 0x10 + 9) == '\0')) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
  }
  return;
}


