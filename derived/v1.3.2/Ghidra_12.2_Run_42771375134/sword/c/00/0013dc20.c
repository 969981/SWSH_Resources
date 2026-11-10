/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013dc20; name: FUN_0013dc20
 */


void FUN_0013dc20(long param_1)

{
  float *pfVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  int iVar17;
  undefined4 *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  ulong uVar22;
  uint *puVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1e8 [40];
  char local_1c0 [4];
  char local_1bc [4];
  undefined8 local_1b8;
  undefined1 auStack_1b0 [8];
  uint local_1a8;
  long local_198;
  undefined1 local_170 [32];
  undefined1 *local_150;
  undefined1 *local_f0;
  undefined1 local_e8 [32];
  undefined1 *local_c8;
  undefined1 *local_68;
  
  uVar3 = *(uint *)(param_1 + 0x88);
  if (uVar3 == 0) {
    return;
  }
  puVar23 = *(uint **)(param_1 + 0x80);
  lVar24 = *(long *)(param_1 + 0xb0);
  uVar4 = uVar3 * 2;
  if (uVar4 < 0x21) {
    local_68 = local_e8;
    puVar10 = local_170;
  }
  else {
    plVar9 = (long *)FUN_00400d30();
    local_68 = (undefined1 *)
               (**(code **)(*plVar9 + 0x10))
                         (plVar9,(ulong)uVar4 << 2,"NonTrackedAlloc",
                          "./../../Common/src\\CmTmpMem.h",0x38);
                    /* try { // try from 0013dca4 to 0013dccf has its CatchHandler @ 0013e1f8 */
    plVar9 = (long *)FUN_00400d30();
    puVar10 = (undefined1 *)
              (**(code **)(*plVar9 + 0x10))
                        (plVar9,(ulong)uVar4 << 2,"NonTrackedAlloc","./../../Common/src\\CmTmpMem.h"
                         ,0x38);
  }
  puVar8 = local_68;
                    /* try { // try from 0013dcd8 to 0013dcdf has its CatchHandler @ 0013e1e0 */
  local_f0 = puVar10;
  FUN_002d4570(auStack_1b0);
  uVar25 = 0;
  do {
    lVar11 = *(long *)(param_1 + 200);
    uVar12 = 1;
    uVar13 = (ulong)uVar3;
    puVar14 = puVar23;
    do {
      fVar26 = *(float *)(lVar11 + (ulong)*puVar14 * 4);
      pfVar1 = (float *)(lVar24 + (ulong)*puVar14 * 0x18 + uVar25 * 4);
      fVar27 = *pfVar1 - fVar26;
      uVar5 = (uint)fVar27 | 0x80000000;
      if ((int)fVar27 < 0) {
        uVar5 = ~(uint)fVar27;
      }
      *(uint *)(puVar8 + (ulong)(uVar12 - 1) * 4) = uVar5 - 0x10 & 0xfffffff0;
      fVar26 = fVar26 + pfVar1[3];
      uVar5 = (uint)fVar26 | 0x80000000;
      if ((int)fVar26 < 0) {
        uVar5 = ~(uint)fVar26;
      }
      uVar13 = uVar13 - 1;
      *(uint *)(puVar8 + (ulong)uVar12 * 4) = uVar5 + 0x10 & 0xfffffff0 | 4;
      uVar12 = uVar12 + 2;
      puVar14 = puVar14 + 1;
    } while (uVar13 != 0);
    local_1a8 = local_1a8 | 0x80000000;
                    /* try { // try from 0013dd84 to 0013dd97 has its CatchHandler @ 0013e210 */
    lVar11 = FUN_002d4750(auStack_1b0,puVar8,uVar4,1);
    if (uVar4 != 0) {
      lVar11 = *(long *)(lVar11 + 0x10);
      puVar14 = (uint *)(local_198 + 4);
      uVar13 = (ulong)uVar4;
      puVar18 = (undefined4 *)(puVar10 + 4);
      uVar12 = uVar4;
      do {
        uVar5 = *(uint *)(lVar11 + (ulong)(uVar12 - 1) * 4);
        puVar18[-1] = *(undefined4 *)(puVar8 + (ulong)uVar5 * 4);
        puVar14[-1] = uVar5 & 1 | puVar23[uVar5 >> 1] << 1;
        uVar13 = uVar13 - 2;
        uVar5 = *(uint *)(lVar11 + (ulong)(uVar12 - 2) * 4);
        *puVar18 = *(undefined4 *)(puVar8 + (ulong)uVar5 * 4);
        *puVar14 = uVar5 & 1 | puVar23[uVar5 >> 1] << 1;
        puVar14 = puVar14 + 2;
        puVar18 = puVar18 + 2;
        uVar12 = uVar12 - 2;
      } while (uVar13 != 0);
    }
    lVar11 = param_1 + uVar25 * 8;
    lVar15 = *(long *)(lVar11 + 0xf0);
    iVar17 = *(int *)(param_1 + 0x148) - *(int *)(param_1 + 0x88);
    uVar20 = (ulong)(iVar17 * 2 | 1);
    uVar5 = iVar17 * 2;
    puVar16 = *(uint **)(lVar11 + 0x108);
    uVar12 = uVar5 + uVar4;
    uVar19 = (ulong)uVar12;
    lVar11 = *(long *)(lVar11 + 0xd8);
    *(undefined4 *)(lVar15 + (ulong)(uVar12 | 1) * 4) = *(undefined4 *)(lVar15 + uVar20 * 4);
    uVar13 = 0;
    uVar22 = -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2;
    puVar16[uVar12 | 1] = puVar16[uVar20];
    puVar14 = puVar16 + uVar5;
    puVar21 = (uint *)(lVar15 + (ulong)uVar5 * 4);
    do {
      while( true ) {
        puVar2 = (uint *)(local_198 + uVar13 * 4);
        uVar12 = *puVar21;
        uVar5 = *(uint *)(puVar10 + uVar13 * 4);
        bVar6 = uVar12 < uVar5;
        if ((*puVar2 & 1) != 0) {
          bVar6 = uVar12 <= uVar5;
        }
        if (!bVar6) {
          puVar2 = puVar14;
          uVar5 = uVar12;
        }
        *(uint *)(lVar15 + uVar22) = uVar5;
        *(uint *)((long)puVar16 + uVar22) = *puVar2;
        iVar17 = (int)uVar19;
        *(int *)(lVar11 + (ulong)(*puVar2 >> 1) * 8 + ((ulong)*puVar2 & 1) * 4) = iVar17;
        if (!bVar6) break;
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar12;
        if (uVar4 <= uVar12) goto LAB_0013deec;
        uVar19 = (ulong)(iVar17 - 1);
        uVar22 = uVar22 - 4;
        if (puVar14 < puVar16) goto LAB_0013deec;
      }
      puVar21 = puVar21 + -1;
      puVar14 = puVar14 + -1;
      uVar19 = (ulong)(iVar17 - 1);
      uVar22 = uVar22 - 4;
    } while (puVar16 <= puVar14);
LAB_0013deec:
    uVar25 = uVar25 + 1;
    if (2 < uVar25) {
      FUN_002d45a0(auStack_1b0);
      puVar10 = local_f0;
      if ((local_f0 != local_170) && (local_f0 != (undefined1 *)0x0)) {
                    /* try { // try from 0013df14 to 0013df27 has its CatchHandler @ 0013e1dc */
        plVar9 = (long *)FUN_00400d30();
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar10);
      }
      puVar10 = local_68;
      if ((local_68 != local_e8) && (local_68 != (undefined1 *)0x0)) {
                    /* try { // try from 0013df3c to 0013df4f has its CatchHandler @ 0013e1d8 */
        plVar9 = (long *)FUN_00400d30();
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar10);
      }
      uVar3 = *(uint *)(param_1 + 0x88);
      uVar4 = *(int *)(param_1 + 0x148) - uVar3;
      if (uVar4 < 9) {
        local_c8 = local_e8;
      }
      else {
        plVar9 = (long *)FUN_00400d30();
        local_c8 = (undefined1 *)
                   (**(code **)(*plVar9 + 0x10))
                             (plVar9,(ulong)uVar4 << 2,"NonTrackedAlloc",
                              "./../../Common/src\\CmTmpMem.h",0x38);
      }
      if (uVar3 < 9) {
        puVar10 = local_170;
      }
      else {
                    /* try { // try from 0013df74 to 0013df9f has its CatchHandler @ 0013e1a4 */
        plVar9 = (long *)FUN_00400d30();
        puVar10 = (undefined1 *)
                  (**(code **)(*plVar9 + 0x10))
                            (plVar9,(ulong)uVar3 << 2,"NonTrackedAlloc",
                             "./../../Common/src\\CmTmpMem.h",0x38);
      }
      puVar8 = local_c8;
      local_1b8 = 0;
      local_1bc[0] = '\0';
      local_1c0[0] = '\0';
                    /* try { // try from 0013dffc to 0013e01b has its CatchHandler @ 0013e170 */
      local_150 = puVar10;
      FUN_0013eed0(param_1,puVar10,&local_1b8,local_c8,(long)&local_1b8 + 4,local_1bc,local_1c0);
      cVar7 = local_1bc[0];
      if ((local_1bc[0] == '\0') || (local_1c0[0] == '\0')) {
                    /* try { // try from 0013e038 to 0013e047 has its CatchHandler @ 0013e164 */
        FUN_00140ba0(auStack_1b0,local_1b8 & 0xffffffff,param_1 + 0xd8,puVar10,
                     *(undefined8 *)(param_1 + 0xb8));
        if (cVar7 == '\0') {
                    /* try { // try from 0013e064 to 0013e06b has its CatchHandler @ 0013e130 */
          FUN_00140e30(auStack_1b0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc0),
                       param_1 + 0x168,param_1 + 0x158,param_1 + 0x160,param_1 + 0x164);
        }
        if ((uVar4 != 0) && (local_1b8._4_4_ != 0)) {
                    /* try { // try from 0013e07c to 0013e08b has its CatchHandler @ 0013e144 */
          FUN_00140ba0(auStack_1e8,local_1b8._4_4_,param_1 + 0xd8,puVar8,
                       *(undefined8 *)(param_1 + 0xb8));
                    /* try { // try from 0013e0a4 to 0013e0af has its CatchHandler @ 0013e134 */
          FUN_001410d0(auStack_1b0,auStack_1e8,*(undefined8 *)(param_1 + 8),
                       *(undefined8 *)(param_1 + 0xc0),param_1 + 0x168,param_1 + 0x158,
                       param_1 + 0x160,param_1 + 0x164);
          FUN_00140d90(auStack_1e8);
        }
        FUN_00140d90(auStack_1b0);
      }
      puVar10 = local_150;
      if ((local_150 != local_170) && (local_150 != (undefined1 *)0x0)) {
                    /* try { // try from 0013e0d4 to 0013e0e7 has its CatchHandler @ 0013e16c */
        plVar9 = (long *)FUN_00400d30();
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar10);
      }
      puVar10 = local_c8;
      if ((local_c8 != local_e8) && (local_c8 != (undefined1 *)0x0)) {
                    /* try { // try from 0013e0fc to 0013e10f has its CatchHandler @ 0013e168 */
        plVar9 = (long *)FUN_00400d30();
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar10);
      }
      return;
    }
  } while( true );
}


