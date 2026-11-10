/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00173f70; name: FUN_00173f70
 */


void FUN_00173f70(long param_1)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar19 = *(long *)(param_1 + 0x28);
  uVar7 = FUN_003ffa00(*(undefined8 *)(lVar19 + 400));
  if (uVar7 == 0) {
    plVar8 = (long *)FUN_00400d30();
    pcVar20 = *(code **)(*plVar8 + 0x10);
    plVar9 = (long *)FUN_00400d60();
    uVar7 = (**(code **)(*plVar9 + 0x28))();
    pcVar2 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Dy::ThreadContext>::getName() [T = physx::Dy::ThreadContext]"
    ;
    if ((uVar7 & 1) == 0) {
      pcVar2 = "<allocation names disabled>";
    }
    lVar10 = (*pcVar20)(plVar8,0x2e17,pcVar2,
                        "./../../LowLevel/common/include/utils\\PxcThreadCoherentCache.h",0x52);
    if (lVar10 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = lVar10 + 0x17U & 0xfffffffffffffff0;
      *(ulong *)(uVar7 - 8) = uVar7 - lVar10;
    }
    FUN_0017c270(uVar7,*(undefined8 *)(lVar19 + 0x198));
  }
  puVar12 = *(ulong **)(param_1 + 0x30);
  *puVar12 = uVar7;
  *(undefined8 *)(uVar7 + 0x2db0) = 0;
  *(undefined4 *)(uVar7 + 0x2d94) = 0;
  *(undefined8 *)(uVar7 + 0x2dd0) = *(undefined8 *)(uVar7 + 0x2d20);
  *(undefined8 *)(uVar7 + 0x2c78) = 0;
  *(undefined8 *)(uVar7 + 0x2c88) = 0;
  *(undefined8 *)(uVar7 + 0x2c80) = 0;
  *(undefined4 *)(uVar7 + 0x2d10) = 0;
  *(undefined4 *)(uVar7 + 0x2cf8) = 0;
  uVar14 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(uVar7 + 0x2cf0) = uVar14;
  *(undefined8 *)(uVar7 + 0x2d00) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(uVar7 + 0x2dc0) = uVar14;
  *(undefined8 *)(uVar7 + 0x2d18) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(uVar7 + 0x2d08) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(uVar7 + 0x2cd8) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(uVar7 + 0x2cc0) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(uVar7 + 0x2cc8) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(uVar7 + 0x2cd0) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(uVar7 + 0x2ce0) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(uVar7 + 0x2ce8) = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)(param_1 + 0x28) + 0x90) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (undefined4)puVar12[2];
  }
  FUN_0017c5a0(uVar7,uVar11,*(uint *)((long)puVar12 + 0xc) & 0x7fffffff);
  lVar23 = *(long *)(uVar7 + 0x2cc0);
  lVar24 = *(long *)(uVar7 + 0x2cc8);
  lVar10 = *(long *)(uVar7 + 0x2ce0);
  lVar19 = *(long *)(uVar7 + 0x2ce8);
  uVar3 = *(uint *)(param_1 + 0x60);
  lVar21 = *(long *)(param_1 + 0x58);
  lVar22 = *(long *)(param_1 + 0xb0);
  if (uVar3 == 0) {
    uVar7 = 0;
    uVar18 = 0;
    cVar6 = *(char *)(param_1 + 0xd0);
  }
  else {
    lVar15 = *(long *)(uVar7 + 0x2cd0);
    uVar13 = 0;
    uVar7 = 0;
    uVar16 = 0;
    do {
      uVar17 = *(uint *)(*(long *)(lVar22 + 0x108) + (ulong)*(uint *)(lVar21 + uVar13 * 4) * 0x2c);
      while (uVar18 = (uint)uVar7, uVar17 < 0xffffffc0) {
        while( true ) {
          lVar1 = *(long *)(lVar22 + 200) + (ulong)(uVar17 >> 6) * 0x20;
          if (*(char *)(lVar1 + 5) != '\x01') break;
          *(undefined8 *)(lVar15 + uVar16 * 8) = *(undefined8 *)(lVar1 + 0x18);
          uVar16 = (ulong)((int)uVar16 + 1);
          uVar17 = *(uint *)(lVar1 + 8);
          if (0xffffffbf < uVar17) goto LAB_0017415c;
        }
        *(uint *)(lVar19 + uVar7 * 4) = uVar17 >> 6;
        uVar7 = (ulong)(uVar18 + 1);
        uVar17 = *(uint *)(lVar1 + 8);
      }
LAB_0017415c:
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar3);
    cVar6 = *(char *)(param_1 + 0xd0);
  }
  if (cVar6 != '\0') {
    uVar18 = (uint)uVar7;
    FUN_00135530(lVar19,uVar7,auStack_68,auStack_70,0x20);
  }
  if (uVar18 != 0) {
    uVar7 = 0;
    do {
      uVar13 = (ulong)*(uint *)(lVar19 + uVar7 * 4) & 0x3ffffff;
      lVar15 = *(long *)(*(long *)(lVar22 + 200) + uVar13 * 0x20 + 0x18);
      *(long *)(lVar24 + uVar7 * 8) = lVar15;
      *(undefined8 *)(lVar23 + uVar7 * 8) = *(undefined8 *)(lVar15 + 0x28);
      *(int *)(lVar10 + (ulong)*(uint *)(*(long *)(lVar22 + 0xd8) + uVar13 * 4) * 4) = (int)uVar7;
      uVar7 = uVar7 + 1;
    } while (uVar18 != uVar7);
  }
  lVar19 = *(long *)(param_1 + 0x50);
  if (uVar3 == 0) {
    uVar18 = 0;
    cVar6 = *(char *)(param_1 + 0xd0);
  }
  else {
    uVar7 = 0;
    uVar13 = 0;
    do {
      uVar17 = *(uint *)(*(long *)(lVar22 + 0x108) + (ulong)*(uint *)(lVar21 + uVar7 * 4) * 0x2c +
                        0x14);
      if (uVar17 == 0xffffffff) {
        uVar18 = (uint)uVar13;
      }
      else {
        do {
          lVar23 = *(long *)(lVar22 + 0xe8);
          lVar24 = *(long *)(*(long *)(*(long *)(param_1 + 0xb0) + 0x90) + (ulong)uVar17 * 8);
          uVar18 = (uint)uVar13;
          if (lVar24 != 0) {
            uVar4 = *(uint *)(**(long **)(lVar22 + 0x2f0) + (ulong)(uVar17 << 1) * 4);
            uVar5 = *(uint *)(**(long **)(lVar22 + 0x2f0) + (ulong)(uVar17 << 1 | 1) * 4);
            uVar18 = uVar18 + 1;
            lVar15 = lVar19 + uVar13 * 0x20;
            *(long *)(lVar15 + 0x18) = lVar24;
            uVar16 = (ulong)(uVar4 >> 6);
            lVar24 = *(long *)(lVar22 + 200) + uVar16 * 0x20;
            if (*(char *)(lVar24 + 5) == '\x01') {
              *(undefined1 *)(lVar15 + 0x10) = 2;
              *(ulong *)(lVar19 + uVar13 * 0x20) = *(ulong *)(lVar24 + 0x18) | (ulong)(uVar4 & 0x3f)
              ;
            }
            else if ((*(byte *)(lVar24 + 4) >> 2 & 1) == 0) {
              *(undefined1 *)(lVar15 + 0x10) = 0;
              *(ulong *)(lVar19 + uVar13 * 0x20) =
                   (ulong)*(uint *)(lVar10 + (ulong)*(uint *)(*(long *)(lVar22 + 0xd8) + uVar16 * 4)
                                             * 4);
            }
            else {
              *(undefined1 *)(lVar15 + 0x10) = 1;
              *(ulong *)(lVar19 + uVar13 * 0x20) =
                   (ulong)*(uint *)(*(long *)(lVar22 + 0xd8) + uVar16 * 4);
            }
            if (uVar5 < 0xffffffc0) {
              uVar13 = (ulong)(uVar5 >> 6);
              lVar24 = *(long *)(lVar22 + 200) + uVar13 * 0x20;
              if (*(char *)(lVar24 + 5) == '\x01') {
                *(undefined1 *)(lVar15 + 0x11) = 2;
                uVar13 = *(ulong *)(lVar24 + 0x18) | (ulong)(uVar5 & 0x3f);
              }
              else if ((*(byte *)(lVar24 + 4) >> 2 & 1) == 0) {
                *(undefined1 *)(lVar15 + 0x11) = 0;
                uVar13 = (ulong)*(uint *)(lVar10 + (ulong)*(uint *)(*(long *)(lVar22 + 0xd8) +
                                                                   uVar13 * 4) * 4);
              }
              else {
                *(undefined1 *)(lVar15 + 0x11) = 1;
                uVar13 = (ulong)*(uint *)(*(long *)(lVar22 + 0xd8) + uVar13 * 4);
              }
              *(ulong *)(lVar15 + 8) = uVar13;
            }
            else {
              *(undefined1 *)(lVar15 + 0x11) = 3;
            }
          }
          uVar17 = *(uint *)(lVar23 + (ulong)uVar17 * 0x10 + 8);
          uVar13 = (ulong)uVar18;
        } while (uVar17 != 0xffffffff);
      }
      uVar7 = uVar7 + 1;
      uVar13 = (ulong)uVar18;
    } while (uVar7 != uVar3);
    cVar6 = *(char *)(param_1 + 0xd0);
  }
  if (cVar6 != '\0') {
    FUN_00174ef0(lVar19,uVar18,auStack_80,auStack_78,0x20);
  }
  *(uint *)(*(long *)(param_1 + 0x30) + 0x10) = uVar18;
  return;
}


