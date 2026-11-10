/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00330bb0; name: FUN_00330bb0
 */


void FUN_00330bb0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  char *local_48;
  long lStack_40;
  long local_38;
  
  if (*(short *)(param_5 + 8) == 4) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_5);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_00400880();
      FUN_00400890(uVar2,0x20,"./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h",
                   0x31,
                   "PxSerialization::serializeCollectionToXml: Reference \"%s\" could not be resolved."
                   ,param_4);
    }
    lVar3 = (**(code **)(*param_2 + 0x68))(param_2,param_5);
    pcVar4 = *(code **)(*param_1 + 0x18);
    local_48 = "PxBVH34TriangleMesh";
  }
  else {
    if (*(short *)(param_5 + 8) != 3) {
      return;
    }
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_5);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_00400880();
      FUN_00400890(uVar2,0x20,"./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h",
                   0x31,
                   "PxSerialization::serializeCollectionToXml: Reference \"%s\" could not be resolved."
                   ,param_4);
    }
    lVar3 = (**(code **)(*param_2 + 0x68))(param_2,param_5);
    pcVar4 = *(code **)(*param_1 + 0x18);
    local_48 = "PxBVH33TriangleMesh";
  }
  local_38 = param_5;
  if (lVar3 != 0) {
    local_38 = lVar3;
  }
  lStack_40 = param_5;
  (*pcVar4)(param_1,param_4,&local_48);
  return;
}


