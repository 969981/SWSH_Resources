/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012fbb0; name: FUN_0012fbb0
 */


/* WARNING: Removing unreachable block (ram,0x0012fc5c) */

void FUN_0012fbb0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  float *pfVar8;
  long *plVar9;
  void *__dest;
  float *pfVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  long local_a0;
  uint local_94;
  undefined1 auStack_90 [16];
  uint *local_80;
  float *local_50;
  char local_48;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar1 = uVar2 + 1;
  uVar3 = uVar1 * 4;
  local_48 = 0x400 < uVar3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (uVar3 < 0x401) {
    pfVar8 = (float *)(auStack_90 + (-0x10 - ((ulong)uVar3 + 0xf & 0x1fffffff0)));
  }
  else {
                    /* try { // try from 0012fbf4 to 0012fc0b has its CatchHandler @ 0012fed8 */
    pfVar8 = (float *)FUN_00401b30(auStack_90,uVar3,
                                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpSimpleAABBManager.cpp"
                                   ,0x542);
  }
  pfVar10 = *(float **)(param_1 + 0x28);
  fVar15 = *pfVar10;
  local_50 = pfVar8;
  *pfVar8 = fVar15;
  if (uVar2 < 2) goto LAB_0012fcd0;
  if (uVar2 == 2) {
    lVar14 = 1;
    bVar4 = true;
LAB_0012fcac:
    bVar4 = (bool)(bVar4 & fVar15 <= pfVar10[lVar14 * 6]);
    pfVar8[lVar14] = pfVar10[lVar14 * 6];
    lVar14 = lVar14 + 1;
  }
  else {
    lVar14 = 1;
    bVar4 = true;
    pfVar5 = pfVar10;
    pfVar6 = pfVar8;
    do {
      fVar16 = pfVar5[6];
      bVar7 = fVar15 <= fVar16;
      pfVar6[1] = fVar16;
      fVar15 = pfVar5[0xc];
      lVar14 = lVar14 + 2;
      pfVar6[2] = fVar15;
      bVar4 = (bool)(bVar4 & bVar7 & fVar16 <= fVar15);
      pfVar5 = pfVar5 + 0xc;
      pfVar6 = pfVar6 + 2;
    } while ((ulong)uVar2 - (ulong)(~uVar2 & 1) != lVar14);
    if ((~uVar2 & 1) != 0) goto LAB_0012fcac;
  }
  if (bVar4) {
LAB_0012fcd0:
    if (local_48 != '\0') {
                    /* try { // try from 0012fcd8 to 0012fce3 has its CatchHandler @ 0012fed4 */
      FUN_00401ce0(&local_50,pfVar8);
    }
    return;
  }
                    /* try { // try from 0012fce8 to 0012fcef has its CatchHandler @ 0012fe6c */
  FUN_002d4570(auStack_90);
  local_50[lVar14] = 3.4028235e+38;
                    /* try { // try from 0012fcfc to 0012fd07 has its CatchHandler @ 0012fe64 */
  FUN_002d47f0(auStack_90,local_50,uVar1);
                    /* try { // try from 0012fd0c to 0012fd13 has its CatchHandler @ 0012fe60 */
  FUN_002f66e0(&local_a0,param_1 + 8);
  if (uVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
                    /* try { // try from 0012fd18 to 0012fd47 has its CatchHandler @ 0012fe7c */
    plVar9 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar9 + 0x10))
                               (plVar9,(ulong)uVar1 * 0x18,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpSimpleAABBManager.cpp"
                                ,0x562);
  }
                    /* try { // try from 0012fd5c to 0012fd63 has its CatchHandler @ 0012fe50 */
  memcpy(__dest,*(void **)(param_1 + 0x28),(ulong)(uVar1 * 0x18));
  if (uVar2 == 0) {
    if (__dest == (void *)0x0) goto LAB_0012fde8;
  }
  else {
    puVar12 = (undefined4 *)(*(long *)(param_1 + 0x28) + 0xc);
    puVar11 = *(undefined4 **)(param_1 + 8);
    do {
      lVar14 = lVar14 + -1;
      puVar13 = (undefined4 *)((long)__dest + (ulong)*local_80 * 0x18);
      *puVar11 = *(undefined4 *)(local_a0 + (ulong)*local_80 * 4);
      puVar12[-3] = *puVar13;
      puVar12[-2] = puVar13[1];
      puVar12[-1] = puVar13[2];
      *puVar12 = puVar13[3];
      puVar12[1] = puVar13[4];
      puVar12[2] = puVar13[5];
      puVar12 = puVar12 + 6;
      local_80 = local_80 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar14 != 0);
  }
                    /* try { // try from 0012fdd4 to 0012fde7 has its CatchHandler @ 0012fe8c */
  plVar9 = (long *)FUN_00400d30();
  (**(code **)(*plVar9 + 0x18))(plVar9,__dest);
LAB_0012fde8:
  if (((-1 < (int)local_94) && ((local_94 & 0x7fffffff) != 0)) && (local_a0 != 0)) {
                    /* try { // try from 0012fe00 to 0012fe13 has its CatchHandler @ 0012fe4c */
    plVar9 = (long *)FUN_00400d30();
    (**(code **)(*plVar9 + 0x18))(plVar9,local_a0);
  }
  FUN_002d45a0(auStack_90);
  if (local_48 == '\0') {
    return;
  }
                    /* try { // try from 0012fe28 to 0012fe2f has its CatchHandler @ 0012fe48 */
  FUN_00401ce0(&local_50,local_50);
  return;
}


