/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003315b0; name: FUN_003315b0
 */


void FUN_003315b0(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  long *plVar10;
  char *local_48;
  long lStack_40;
  long local_38;
  
  uVar7 = 0;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    uVar7 = *(undefined4 *)param_1[6];
  }
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = uVar7;
  piVar8 = (int *)param_1[5];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  lVar3 = (**(code **)(param_2 + 0x18))(param_1[2]);
  plVar1 = (long *)param_1[1];
  plVar10 = (long *)param_1[4];
  iVar2 = *(int *)(*param_1 + 0x10);
  if (iVar2 == 0) {
    pcVar9 = "bad__repx__name";
  }
  else {
    pcVar9 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar2 - 1) * 0x10);
  }
  if (lVar3 == 0) {
    local_38 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,lVar3);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_00400880();
      FUN_00400890(uVar5,0x20,"./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h",
                   0x31,
                   "PxSerialization::serializeCollectionToXml: Reference \"%s\" could not be resolved."
                   ,pcVar9);
    }
    lVar6 = (**(code **)(*plVar10 + 0x68))(plVar10,lVar3);
    local_38 = lVar3;
    if (lVar6 != 0) {
      local_38 = lVar6;
    }
  }
  local_48 = "PxHeightField";
  lStack_40 = lVar3;
  (**(code **)(*plVar1 + 0x18))(plVar1,pcVar9,&local_48);
  return;
}


