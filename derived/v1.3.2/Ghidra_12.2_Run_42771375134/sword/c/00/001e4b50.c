/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e4b50; name: FUN_001e4b50
 */


undefined8 FUN_001e4b50(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *local_40;
  char local_38;
  undefined1 auStack_28 [8];
  
  uVar3 = param_3 & 0xffff;
  if (uVar3 == 1) {
    local_40 = (undefined1 *)CONCAT62(local_40._2_6_,(short)*(undefined4 *)(*param_2 + 0x48));
    FUN_003f88c0(param_1 + 4,&local_40,1);
    lVar6 = *param_1;
    goto joined_r0x001e4cc4;
  }
  local_38 = 0x200 < uVar3;
  if (uVar3 < 0x201) {
    puVar5 = auStack_28 + (-0x18 - ((ulong)(uVar3 << 1) + 0xf & 0x1fffffff0));
    local_40 = puVar5;
    if ((param_3 & 0xffff) != 0) goto LAB_001e4c40;
  }
  else {
                    /* try { // try from 001e4bc0 to 001e4bd7 has its CatchHandler @ 001e4cf0 */
    local_40 = (undefined1 *)
               FUN_00401b30(auStack_28,(ulong)(uVar3 << 1),
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/buffering/ScbShape.cpp"
                            ,0x30);
    if (local_40 == (undefined1 *)0x0) {
                    /* try { // try from 001e4be0 to 001e4bff has its CatchHandler @ 001e4d04 */
      uVar4 = FUN_00400880();
      FUN_00400890(uVar4,0x10,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/buffering/ScbShape.cpp"
                   ,0x39,"PxShape::setMaterials() failed. Out of memory. Call will be ignored.");
      if (local_38 != '\0') {
                    /* try { // try from 001e4c0c to 001e4c13 has its CatchHandler @ 001e4cec */
        FUN_00401ce0(&local_40,local_40);
      }
      return 0;
    }
LAB_001e4c40:
    puVar5 = local_40;
    uVar3 = param_3 & 0xffff;
    if (uVar3 == 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        plVar2 = param_2 + lVar6;
        lVar1 = lVar6 * 2;
        lVar6 = lVar6 + 2;
        *(short *)(puVar5 + lVar1) = (short)*(undefined4 *)(*plVar2 + 0x48);
        *(short *)((long)(puVar5 + lVar1) + 2) = (short)*(undefined4 *)(plVar2[1] + 0x48);
      } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar6);
    }
    if ((param_3 & 1) != 0) {
      *(short *)(puVar5 + lVar6 * 2) = (short)*(undefined4 *)(param_2[lVar6] + 0x48);
    }
  }
                    /* try { // try from 001e4ca4 to 001e4cab has its CatchHandler @ 001e4d04 */
  FUN_003f88c0(param_1 + 4,puVar5,param_3);
  if (local_38 != '\0') {
                    /* try { // try from 001e4cb8 to 001e4cbf has its CatchHandler @ 001e4d00 */
    FUN_00401ce0(&local_40,local_40);
  }
  lVar6 = *param_1;
joined_r0x001e4cc4:
  if (lVar6 != 0) {
    FUN_003e85f0(lVar6 + 0x10,param_1 + 4);
  }
  return 1;
}


