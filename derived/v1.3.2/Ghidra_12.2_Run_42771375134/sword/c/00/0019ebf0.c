/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0019ebf0; name: FUN_0019ebf0
 */


void FUN_0019ebf0(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  void *__s;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ushort uVar13;
  int iVar14;
  undefined2 uVar15;
  ushort uVar16;
  ushort uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint *puVar23;
  code *pcVar24;
  
  lVar11 = *(long *)(param_1 + 0x50);
  uVar12 = *(uint *)(lVar11 + 0x48);
  uVar21 = (ulong)uVar12;
  puVar23 = *(uint **)(lVar11 + 0x40);
  lVar22 = *(long *)(*(long *)(lVar11 + 0x10) + 0x38);
  lVar20 = **(long **)(lVar11 + 0x88);
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar10 = *(uint *)(*(long *)(lVar11 + 0x10) + 0xc);
    plVar8 = (long *)FUN_00400d30();
    pcVar24 = *(code **)(*plVar8 + 0x10);
    plVar9 = (long *)FUN_00400d60();
    uVar19 = (**(code **)(*plVar9 + 0x28))();
    pcVar3 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
    if ((uVar19 & 1) == 0) {
      pcVar3 = "<allocation names disabled>";
    }
    lVar11 = (*pcVar24)(plVar8,(ulong)uVar10 << 5 | 0x17,pcVar3,
                        "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtDynamics.cpp"
                        ,0x130);
    if (lVar11 == 0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      lVar11 = *(long *)(param_1 + 0x60);
    }
    else {
      uVar19 = lVar11 + 0x17U & 0xfffffffffffffff0;
      *(ulong *)(uVar19 - 8) = uVar19 - lVar11;
      *(ulong *)(param_1 + 0x58) = uVar19;
      lVar11 = *(long *)(param_1 + 0x60);
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 0x60);
  }
  if (lVar11 == 0) {
    uVar19 = (ulong)(*(int *)(*(long *)(*(long *)(param_1 + 0x50) + 0x10) + 0xc) * 0xc + 4);
    plVar8 = (long *)FUN_00400d30();
    pcVar24 = *(code **)(*plVar8 + 0x10);
    plVar9 = (long *)FUN_00400d60();
    uVar21 = (**(code **)(*plVar9 + 0x28))();
    pcVar3 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
    if ((uVar21 & 1) == 0) {
      pcVar3 = "<allocation names disabled>";
    }
    lVar11 = (*pcVar24)(plVar8,uVar19 + 0x17,pcVar3,
                        "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtDynamics.cpp"
                        ,0x13c);
    __s = (void *)0x0;
    if (lVar11 != 0) {
      __s = (void *)(lVar11 + 0x17U & 0xfffffffffffffff0);
      *(long *)((long)__s - 8) = (long)__s - lVar11;
    }
    *(void **)(param_1 + 0x60) = __s;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,uVar19);
  }
  if (uVar12 == 0) {
    uVar12 = 0x200;
LAB_0019edf0:
    uVar10 = 0;
    uVar17 = 0;
    do {
      uVar13 = uVar17 + 1;
      iVar4 = *(int *)(lVar20 + (ulong)uVar17 * 0x10 + 8);
      iVar14 = 0;
      if (iVar4 != -1) {
        iVar14 = iVar4;
      }
      uVar10 = iVar14 + uVar10;
    } while ((uVar13 < 0x400) && (uVar17 = uVar13, uVar10 < uVar12));
    bVar6 = true;
    bVar7 = true;
    if (uVar10 == 0) goto LAB_0019ee40;
    uVar15 = 0;
    uVar10 = 1;
    uVar17 = uVar13;
  }
  else {
    lVar11 = 0;
    do {
      puVar1 = (undefined4 *)(lVar22 + (ulong)*puVar23 * 0x20);
      puVar2 = (undefined4 *)(*(long *)(param_1 + 0x58) + lVar11);
      lVar11 = lVar11 + 0x20;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      puVar2[6] = puVar1[6];
      uVar21 = uVar21 - 1;
      puVar2[7] = puVar1[7];
      puVar23 = puVar23 + 1;
    } while (uVar21 != 0);
    uVar12 = uVar12 >> 3;
    if (uVar12 < 0x201) {
      uVar12 = 0x200;
    }
    if (uVar12 != 0) goto LAB_0019edf0;
    uVar13 = 0;
    bVar7 = false;
LAB_0019ee40:
    bVar6 = bVar7;
    uVar10 = 0;
    uVar15 = 0xffff;
    uVar17 = 0xffff;
  }
  *(undefined2 *)(param_1 + 0x3a8) = uVar15;
  *(ushort *)(param_1 + 0x3aa) = uVar17;
  uVar17 = uVar13;
  if ((uVar13 < 0x400) && (bVar6)) {
    uVar18 = 0;
    uVar16 = uVar13;
    do {
      uVar17 = uVar16 + 1;
      iVar4 = *(int *)(lVar20 + (ulong)uVar16 * 0x10 + 8);
      iVar14 = 0;
      if (iVar4 != -1) {
        iVar14 = iVar4;
      }
      uVar18 = iVar14 + uVar18;
    } while ((uVar17 < 0x400) && (uVar16 = uVar17, uVar18 < uVar12));
    if (uVar18 == 0) goto LAB_0019eebc;
    *(ushort *)(param_1 + 0x3ac) = uVar13;
    uVar10 = uVar10 + 1;
    uVar13 = uVar17;
  }
  else {
LAB_0019eebc:
    uVar13 = 0xffff;
    *(undefined2 *)(param_1 + 0x3ac) = 0xffff;
  }
  *(ushort *)(param_1 + 0x3ae) = uVar13;
  uVar13 = uVar17;
  if ((bool)(uVar17 < 0x400 & bVar6)) {
    uVar18 = 0;
    uVar16 = uVar17;
    do {
      uVar13 = uVar16 + 1;
      iVar4 = *(int *)(lVar20 + (ulong)uVar16 * 0x10 + 8);
      iVar14 = 0;
      if (iVar4 != -1) {
        iVar14 = iVar4;
      }
      uVar18 = iVar14 + uVar18;
    } while ((uVar13 < 0x400) && (uVar16 = uVar13, uVar18 < uVar12));
    if (uVar18 == 0) goto LAB_0019ef38;
    *(ushort *)(param_1 + 0x3b0) = uVar17;
    uVar10 = uVar10 + 1;
    uVar17 = uVar13;
  }
  else {
LAB_0019ef38:
    uVar17 = 0xffff;
    *(undefined2 *)(param_1 + 0x3b0) = 0xffff;
  }
  *(ushort *)(param_1 + 0x3b2) = uVar17;
  uVar17 = uVar13;
  if ((bool)(uVar13 < 0x400 & bVar6)) {
    uVar18 = 0;
    uVar16 = uVar13;
    do {
      uVar17 = uVar16 + 1;
      iVar4 = *(int *)(lVar20 + (ulong)uVar16 * 0x10 + 8);
      iVar14 = 0;
      if (iVar4 != -1) {
        iVar14 = iVar4;
      }
      uVar18 = iVar14 + uVar18;
    } while ((uVar17 < 0x400) && (uVar16 = uVar17, uVar18 < uVar12));
    if (uVar18 == 0) goto LAB_0019efb4;
    *(ushort *)(param_1 + 0x3b4) = uVar13;
    uVar10 = uVar10 + 1;
    uVar13 = uVar17;
  }
  else {
LAB_0019efb4:
    uVar13 = 0xffff;
    *(undefined2 *)(param_1 + 0x3b4) = 0xffff;
  }
  *(ushort *)(param_1 + 0x3b6) = uVar13;
  uVar13 = uVar17;
  if ((bool)(uVar17 < 0x400 & bVar6)) {
    uVar18 = 0;
    uVar16 = uVar17;
    do {
      uVar13 = uVar16 + 1;
      iVar4 = *(int *)(lVar20 + (ulong)uVar16 * 0x10 + 8);
      iVar14 = 0;
      if (iVar4 != -1) {
        iVar14 = iVar4;
      }
      uVar18 = iVar14 + uVar18;
    } while ((uVar13 < 0x400) && (uVar16 = uVar13, uVar18 < uVar12));
    if (uVar18 == 0) goto LAB_0019f030;
    *(ushort *)(param_1 + 0x3b8) = uVar17;
    uVar10 = uVar10 + 1;
    uVar17 = uVar13;
  }
  else {
LAB_0019f030:
    uVar17 = 0xffff;
    *(undefined2 *)(param_1 + 0x3b8) = 0xffff;
  }
  *(ushort *)(param_1 + 0x3ba) = uVar17;
  uVar17 = uVar13;
  if ((bool)(uVar13 < 0x400 & bVar6)) {
    uVar18 = 0;
    uVar16 = uVar13;
    do {
      uVar17 = uVar16 + 1;
      iVar4 = *(int *)(lVar20 + (ulong)uVar16 * 0x10 + 8);
      iVar14 = 0;
      if (iVar4 != -1) {
        iVar14 = iVar4;
      }
      uVar18 = iVar14 + uVar18;
    } while ((uVar17 < 0x400) && (uVar16 = uVar17, uVar18 < uVar12));
    if (uVar18 == 0) goto LAB_0019f0ac;
    *(ushort *)(param_1 + 0x3bc) = uVar13;
    uVar10 = uVar10 + 1;
    uVar13 = uVar17;
  }
  else {
LAB_0019f0ac:
    uVar13 = 0xffff;
    *(undefined2 *)(param_1 + 0x3bc) = 0xffff;
  }
  *(ushort *)(param_1 + 0x3be) = uVar13;
  uVar13 = uVar17;
  if ((bool)(uVar17 < 0x400 & bVar6)) {
    uVar18 = 0;
    uVar16 = uVar17;
    do {
      uVar13 = uVar16 + 1;
      iVar4 = *(int *)(lVar20 + (ulong)uVar16 * 0x10 + 8);
      iVar14 = 0;
      if (iVar4 != -1) {
        iVar14 = iVar4;
      }
      uVar18 = iVar14 + uVar18;
    } while ((uVar13 < 0x400) && (uVar16 = uVar13, uVar18 < uVar12));
    if (uVar18 == 0) goto LAB_0019f13c;
    *(ushort *)(param_1 + 0x3c0) = uVar17;
    uVar10 = uVar10 + 1;
    *(ushort *)(param_1 + 0x3c2) = uVar13;
  }
  else {
LAB_0019f13c:
    *(undefined2 *)(param_1 + 0x3c0) = 0xffff;
    *(undefined2 *)(param_1 + 0x3c2) = 0xffff;
  }
  if (uVar13 < 0x400) {
    iVar14 = 0;
    uVar17 = uVar13;
    do {
      uVar16 = uVar17 + 1;
      iVar5 = *(int *)(lVar20 + (ulong)uVar17 * 0x10 + 8);
      iVar4 = 0;
      if (iVar5 != -1) {
        iVar4 = iVar5;
      }
      iVar14 = iVar4 + iVar14;
    } while ((uVar16 < 0x400) && (uVar17 = uVar16, iVar14 != -1));
    if (iVar14 != 0) {
      *(ushort *)(param_1 + 0x3c4) = uVar13;
      uVar10 = uVar10 + 1;
      goto LAB_0019f1a8;
    }
  }
  uVar16 = 0xffff;
  *(undefined2 *)(param_1 + 0x3c4) = 0xffff;
LAB_0019f1a8:
  *(ushort *)(param_1 + 0x3c6) = uVar16;
  uVar12 = *(uint *)(param_1 + 0xe0);
  if (*(uint *)(param_1 + 0xe0) <= uVar10) {
    uVar12 = uVar10;
  }
  *(uint *)(param_1 + 0xd8) = uVar10;
  FUN_0019e810(param_1,uVar12);
  *(undefined4 *)(param_1 + 0xc0) = 1;
  *(long **)(param_1 + 0xb8) = param_2;
  (**(code **)(*param_2 + 0x20))(param_2);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x10);
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(long **)(param_1 + 0x80) = (long *)(param_1 + 0xa0);
  (**(code **)(*(long *)(param_1 + 0xa0) + 0x20))();
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x10);
  FUN_0019f250(param_1,0,param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x0019f24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x78) + 0xa0))(*(long **)(param_1 + 0x78),param_1 + 0x68);
  return;
}


