/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003303b0; name: FUN_003303b0
 */


void FUN_003303b0(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  long *plVar9;
  char *local_48;
  long lStack_40;
  long local_38;
  
  if ((int *)param_1[6] == (int *)0x0) {
    iVar6 = 0x20;
  }
  else {
    iVar6 = *(int *)param_1[6] + 0x20;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar6;
  piVar7 = (int *)param_1[5];
  if (piVar7 != (int *)0x0) {
    *piVar7 = *piVar7 + 1;
  }
  lVar2 = (**(code **)(param_2 + 0x18))(param_1[2]);
  plVar1 = (long *)param_1[1];
  plVar9 = (long *)param_1[4];
  iVar6 = *(int *)(*param_1 + 0x10);
  if (iVar6 == 0) {
    pcVar8 = "bad__repx__name";
  }
  else {
    pcVar8 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar6 - 1) * 0x10);
  }
  if (lVar2 == 0) {
    local_38 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,lVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = FUN_00400880();
      FUN_00400890(uVar4,0x20,"./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h",
                   0x31,
                   "PxSerialization::serializeCollectionToXml: Reference \"%s\" could not be resolved."
                   ,pcVar8);
    }
    lVar5 = (**(code **)(*plVar9 + 0x68))(plVar9,lVar2);
    local_38 = lVar2;
    if (lVar5 != 0) {
      local_38 = lVar5;
    }
  }
  local_48 = "PxConvexMesh";
  lStack_40 = lVar2;
  (**(code **)(*plVar1 + 0x18))(plVar1,pcVar8,&local_48);
  return;
}


