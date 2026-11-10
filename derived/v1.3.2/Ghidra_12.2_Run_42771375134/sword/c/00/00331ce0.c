/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00331ce0; name: FUN_00331ce0
 */


void FUN_00331ce0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 local_b8 [40];
  undefined1 local_90;
  undefined1 *local_88;
  ulong local_80;
  char *local_78;
  ulong local_70;
  ulong local_68;
  
  uVar3 = (**(code **)(param_2 + 0x18))(param_1[2]);
  if (uVar3 != 0) {
    local_80 = 0x500000000;
    local_78 = (char *)0x0;
    local_90 = 1;
    local_88 = local_b8;
                    /* try { // try from 00331d34 to 00331d43 has its CatchHandler @ 00331f6c */
    FUN_00331fe0(local_b8,uVar3,&local_78);
                    /* try { // try from 00331d50 to 00331e03 has its CatchHandler @ 00331f7c */
    (**(code **)(param_2 + 0x10))(param_1[2],local_88,uVar3);
    lVar4 = *param_1;
    puVar7 = (uint *)(lVar4 + 0x10);
    uVar8 = *puVar7;
    if (uVar8 != 0) {
      if (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(lVar4 + 8) + (ulong)(uVar8 - 1) * 0x10));
        lVar4 = *param_1;
        puVar7 = (uint *)(lVar4 + 0x10);
        uVar8 = *puVar7;
        *(undefined1 *)(*(long *)(lVar4 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) = 1;
      }
    }
    local_78 = "PxMaterialRef";
    local_70 = local_70 & 0xffffffffffffff00;
    if (uVar8 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
      puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar8 * 0x10);
      puVar1[1] = local_70;
      *puVar1 = "PxMaterialRef";
      *puVar7 = *puVar7 + 1;
    }
    else {
      FUN_00327960(lVar4,&local_78);
    }
    uVar12 = 0;
    do {
      plVar9 = (long *)param_1[1];
      uVar10 = *(ulong *)(local_88 + uVar12 * 8);
      if (uVar10 == 0) {
        local_68 = 0;
      }
      else {
        plVar11 = (long *)param_1[4];
                    /* try { // try from 00331e44 to 00331eb7 has its CatchHandler @ 00331f8c */
        uVar5 = (**(code **)(*plVar11 + 0x10))(plVar11,uVar10);
        if ((uVar5 & 1) == 0) {
          uVar6 = FUN_00400880();
          FUN_00400890(uVar6,0x20,
                       "./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h",0x31,
                       "PxSerialization::serializeCollectionToXml: Reference \"%s\" could not be resolved."
                       ,"PxMaterialRef");
        }
        uVar5 = (**(code **)(*plVar11 + 0x68))(plVar11,uVar10);
        local_68 = uVar10;
        if (uVar5 != 0) {
          local_68 = uVar5;
        }
      }
      local_78 = "PxMaterial";
      local_70 = uVar10;
      (**(code **)(*plVar9 + 0x18))(plVar9,"PxMaterialRef",&local_78);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar3);
    puVar7 = (uint *)(*param_1 + 0x10);
    if (*puVar7 != 0) {
      uVar3 = *puVar7 - 1;
      if (*(char *)(*(long *)(*param_1 + 8) + (ulong)uVar3 * 0x10 + 8) != '\0') {
                    /* try { // try from 00331ef4 to 00331ef7 has its CatchHandler @ 00331f7c */
        (**(code **)(*(long *)param_1[1] + 0x28))();
        puVar7 = (uint *)(*param_1 + 0x10);
        uVar3 = *puVar7 - 1;
      }
      *puVar7 = uVar3;
    }
    puVar2 = local_88;
    if ((((-1 < (long)local_80) && ((local_80 & 0x7fffffff00000000) != 0)) && (local_b8 != local_88)
        ) && (local_88 != (undefined1 *)0x0)) {
                    /* try { // try from 00331f2c to 00331f3f has its CatchHandler @ 00331f68 */
      plVar9 = (long *)FUN_00400d30();
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar2);
    }
  }
  return;
}


