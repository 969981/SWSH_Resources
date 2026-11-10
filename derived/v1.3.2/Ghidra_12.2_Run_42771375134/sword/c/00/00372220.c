/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00372220; name: FUN_00372220
 */


void FUN_00372220(long *param_1,undefined8 param_2,long param_3)

{
  char **ppcVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  char *local_50;
  char *local_48;
  char *pcStack_40;
  char *local_38;
  
  (**(code **)(*(long *)(param_3 + 0x10) + 0x28))(param_1[2],&local_48,&local_50);
  ppcVar1 = &local_50;
  if (*(char *)(param_3 + 8) != '\0') {
    ppcVar1 = &local_48;
  }
  pcVar7 = *ppcVar1;
  plVar2 = (long *)param_1[1];
  plVar9 = (long *)param_1[4];
  iVar3 = *(int *)(*param_1 + 0x10);
  if (iVar3 == 0) {
    pcVar8 = "bad__repx__name";
  }
  else {
    pcVar8 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar3 - 1) * 0x10);
  }
  if (pcVar7 == (char *)0x0) {
    local_38 = (char *)0x0;
  }
  else {
    uVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,pcVar7);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_00400880();
      FUN_00400890(uVar5,0x20,"./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h",
                   0x31,
                   "PxSerialization::serializeCollectionToXml: Reference \"%s\" could not be resolved."
                   ,pcVar8);
    }
    pcVar6 = (char *)(**(code **)(*plVar9 + 0x68))(plVar9,pcVar7);
    local_38 = pcVar7;
    if (pcVar6 != (char *)0x0) {
      local_38 = pcVar6;
    }
  }
  local_48 = "PxRigidActor";
  pcStack_40 = pcVar7;
  (**(code **)(*plVar2 + 0x18))(plVar2,pcVar8,&local_48);
  return;
}


