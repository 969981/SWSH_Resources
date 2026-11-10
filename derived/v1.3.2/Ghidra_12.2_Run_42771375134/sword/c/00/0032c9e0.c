/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0032c9e0; name: FUN_0032c9e0
 */


void FUN_0032c9e0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 local_3d8 [40];
  undefined1 local_3b0;
  undefined1 *local_3a8;
  ulong local_3a0;
  undefined1 auStack_398 [384];
  long local_218;
  long lStack_210;
  long *local_208;
  long lStack_200;
  long local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  char *local_1e0;
  long *local_1d8;
  long *local_1d0;
  
  FUN_00215bc0(auStack_398);
  uVar6 = (**(code **)(param_2 + 0x18))(param_1[2]);
  if (uVar6 != 0) {
    local_3a0 = 0x500000000;
    local_3b0 = 1;
    local_3a8 = local_3d8;
    local_1e0 = (char *)0x0;
                    /* try { // try from 0032ca40 to 0032ca4f has its CatchHandler @ 0032ccb8 */
    FUN_0032cd20(local_3d8,uVar6,&local_1e0);
                    /* try { // try from 0032ca5c to 0032ca63 has its CatchHandler @ 0032cca8 */
    (**(code **)(param_2 + 0x10))(param_1[2],local_3a8,uVar6);
    lVar7 = *param_1;
    uVar15 = 0;
    do {
      plVar12 = *(long **)(local_3a8 + uVar15 * 8);
      puVar10 = (uint *)(lVar7 + 0x10);
      uVar11 = *puVar10;
      if (uVar11 != 0) {
        if (*(char *)(*(long *)(lVar7 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
                    /* try { // try from 0032cabc to 0032cc3f has its CatchHandler @ 0032ccc8 */
          (**(code **)(*(long *)param_1[1] + 0x20))
                    ((long *)param_1[1],
                     *(undefined8 *)(*(long *)(lVar7 + 8) + (ulong)(uVar11 - 1) * 0x10));
          lVar7 = *param_1;
          puVar10 = (uint *)(lVar7 + 0x10);
          uVar11 = *puVar10;
          *(undefined1 *)(*(long *)(lVar7 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
        }
      }
      local_1e0 = "PxShape";
      local_1d8 = (long *)((ulong)local_1d8 & 0xffffffffffffff00);
      if (uVar11 < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
        puVar1 = (undefined8 *)(*(long *)(lVar7 + 8) + (ulong)uVar11 * 0x10);
        puVar1[1] = local_1d8;
        *puVar1 = "PxShape";
        *puVar10 = *puVar10 + 1;
      }
      else {
        FUN_00327960(lVar7,&local_1e0);
      }
      uVar8 = (**(code **)(*plVar12 + 0x118))(plVar12);
      if ((uVar8 & 1) == 0) {
        plVar14 = (long *)param_1[4];
        plVar13 = (long *)param_1[1];
        uVar8 = (**(code **)(*plVar14 + 0x10))(plVar14,plVar12);
        if ((uVar8 & 1) == 0) {
          uVar9 = FUN_00400880();
          FUN_00400890(uVar9,0x20,
                       "./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h",0x31,
                       "PxSerialization::serializeCollectionToXml: Reference \"%s\" could not be resolved."
                       ,"PxShapeRef");
        }
        plVar14 = (long *)(**(code **)(*plVar14 + 0x68))(plVar14,plVar12);
        local_1d0 = plVar12;
        if (plVar14 != (long *)0x0) {
          local_1d0 = plVar14;
        }
        local_1e0 = "PxShape";
        local_1d8 = plVar12;
        (**(code **)(*plVar13 + 0x18))(plVar13,"PxShapeRef",&local_1e0);
      }
      else {
        lVar7 = *param_1;
        lVar3 = param_1[1];
        lVar2 = param_1[3];
        lVar4 = param_1[4];
        FUN_00215bc0(&local_1e0);
        local_1e8 = 0;
        uStack_1f0 = 0;
        local_218 = lVar7;
        lStack_210 = lVar3;
        local_208 = plVar12;
        lStack_200 = lVar2;
        local_1f8 = lVar4;
        FUN_0032cfa0(&local_1e0,&local_218,0);
      }
      lVar7 = *param_1;
      if (*(int *)(lVar7 + 0x10) != 0) {
        uVar11 = *(int *)(lVar7 + 0x10) - 1;
        if (*(char *)(*(long *)(lVar7 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
          (**(code **)(*(long *)param_1[1] + 0x28))();
          lVar7 = *param_1;
          uVar11 = *(int *)(lVar7 + 0x10) - 1;
        }
        *(uint *)(lVar7 + 0x10) = uVar11;
      }
      puVar5 = local_3a8;
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar6);
    if ((((-1 < (long)local_3a0) && ((local_3a0 & 0x7fffffff00000000) != 0)) &&
        (local_3d8 != local_3a8)) && (local_3a8 != (undefined1 *)0x0)) {
                    /* try { // try from 0032cc68 to 0032cc7b has its CatchHandler @ 0032cca4 */
      plVar12 = (long *)FUN_00400d30();
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar5);
    }
  }
  return;
}


