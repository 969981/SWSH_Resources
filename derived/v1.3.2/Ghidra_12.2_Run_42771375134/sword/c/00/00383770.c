/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00383770; name: FUN_00383770
 */


void FUN_00383770(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  char *local_40;
  char *local_38;
  
  plVar9 = (long *)param_1[8];
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10);
  }
  uVar2 = (**(code **)(*(long *)param_1[5] + 0x10))((long *)param_1[5],pcVar5,&local_40);
  if (((((uVar2 & 1) == 0) || (local_38 = local_40, local_40 == (char *)0x0)) || (*local_40 == '\0')
      ) || (uVar3 = strtoull(local_40,&local_38,10), uVar3 == 0)) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar5 = (char *)(**(code **)(*plVar9 + 0x50))(plVar9,uVar3);
    if (pcVar5 == (char *)0x0) {
      uVar4 = FUN_00400880();
      FUN_00400890(uVar4,4,"./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h",0x6c
                   ,
                   "PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalRefs collection is specified if required and check Xml file for completeness."
                   ,uVar3);
      return;
    }
  }
  lVar8 = param_1[6];
  (**(code **)(*(long *)(param_3 + 0x10) + 0x28))(lVar8,&local_38,&local_40);
  if (*(char *)(param_3 + 8) == '\0') {
    pcVar7 = *(code **)(*(long *)(param_3 + 0x10) + 0x20);
    pcVar6 = local_38;
  }
  else {
    pcVar7 = *(code **)(*(long *)(param_3 + 0x10) + 0x20);
    pcVar6 = pcVar5;
    pcVar5 = local_40;
  }
  (*pcVar7)(lVar8,pcVar6,pcVar5);
  return;
}


