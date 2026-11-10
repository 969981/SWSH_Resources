/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003eb7c0; name: FUN_003eb7c0
 */


uint FUN_003eb7c0(uint *param_1,uint param_2,long *param_3)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  
  uVar14 = param_1[6];
  iVar17 = param_2 - uVar14;
  iVar16 = iVar17;
  if (param_2 <= uVar14) {
    iVar16 = 0;
  }
  uVar19 = param_2 - iVar16;
  memcpy(param_3,(void *)(*(long *)(param_1 + 4) + (ulong)(uVar14 - uVar19) * 8),(ulong)(uVar19 * 8)
        );
  uVar14 = param_1[6] - uVar19;
  param_1[6] = uVar14;
  if (iVar16 != 0) {
    uVar9 = *param_1;
    uVar15 = (iVar16 + uVar9) - 1;
    uVar3 = 0;
    if (uVar9 != 0) {
      uVar3 = uVar15 / uVar9;
    }
    if (param_1[1] <= param_1[2] + uVar3) {
      return uVar19;
    }
    if (uVar9 <= uVar15) {
      if (uVar9 == 0) {
        return uVar19;
      }
      uVar15 = 0;
      uVar13 = uVar19;
      while( true ) {
        plVar4 = (long *)FUN_00400d30();
        pcVar12 = *(code **)(*plVar4 + 0x10);
        plVar5 = (long *)FUN_00400d60();
        uVar8 = (**(code **)(*plVar5 + 0x28))();
        pcVar2 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::PxsContactManager>::getName() [T = physx::PxsContactManager]"
        ;
        if ((uVar8 & 1) == 0) {
          pcVar2 = "<allocation names disabled>";
        }
        lVar7 = (*pcVar12)(plVar4,(ulong)uVar9 * 0x70,pcVar2,"./../../Common/src\\CmPool.h",0x90);
        if (lVar7 == 0) {
          return uVar13;
        }
        uVar19 = param_1[2];
        uVar9 = uVar19 + 1;
        param_1[2] = uVar9;
        *(long *)(*(long *)(param_1 + 8) + (ulong)uVar19 * 8) = lVar7;
        uVar10 = *param_1;
        if (param_1[0xe] << 5 < uVar10 * uVar9) {
          FUN_00190b50(param_1 + 0xc,uVar9 * uVar10 * 2);
          lVar11 = *(long *)(param_1 + 4);
          if (lVar11 != 0) {
            plVar4 = (long *)FUN_00400d30();
            (**(code **)(*plVar4 + 0x18))(plVar4,lVar11);
          }
          uVar9 = param_1[2];
          uVar10 = *param_1;
          uVar19 = uVar9 * uVar10 * 2;
          if (uVar19 == 0) {
            uVar6 = 0;
          }
          else {
            plVar4 = (long *)FUN_00400d30();
            pcVar12 = *(code **)(*plVar4 + 0x10);
            plVar5 = (long *)FUN_00400d60();
            uVar8 = (**(code **)(*plVar5 + 0x28))();
            pcVar2 = 
            "static const char *physx::shdfnd::ReflectionAllocator<physx::PxsContactManager>::getName() [T = physx::PxsContactManager]"
            ;
            if ((uVar8 & 1) == 0) {
              pcVar2 = "<allocation names disabled>";
            }
            uVar6 = (*pcVar12)(plVar4,(ulong)uVar19 << 3,pcVar2,"./../../Common/src\\CmPool.h",0x9c)
            ;
            uVar9 = param_1[2];
            uVar10 = *param_1;
          }
          *(undefined8 *)(param_1 + 4) = uVar6;
        }
        iVar16 = uVar10 - 1;
        if (iVar17 <= iVar16) {
          iVar18 = uVar10 * uVar9;
          uVar19 = uVar14;
          do {
            iVar18 = iVar18 + -1;
            lVar11 = lVar7 + (long)iVar16 * 0x70;
            FUN_00120370(lVar11,*(undefined8 *)(param_1 + 10),iVar18);
            uVar14 = uVar19 + 1;
            iVar16 = iVar16 + -1;
            *(long *)(*(long *)(param_1 + 4) + (ulong)uVar19 * 8) = lVar11;
            uVar19 = uVar14;
          } while (iVar17 <= iVar16);
        }
        uVar19 = uVar13;
        if (-1 < iVar16) {
          lVar7 = lVar7 + (long)iVar16 * 0x70;
          iVar18 = iVar16 + (uVar9 - 1) * uVar10;
          lVar11 = (long)iVar16;
          do {
            FUN_00120370(lVar7,*(undefined8 *)(param_1 + 10),iVar18);
            param_3[(ulong)uVar13 + lVar11] = lVar7;
            uVar19 = uVar19 + 1;
            lVar7 = lVar7 + -0x70;
            iVar18 = iVar18 + -1;
            bVar1 = 0 < lVar11;
            lVar11 = lVar11 + -1;
          } while (bVar1);
        }
        uVar15 = uVar15 + 1;
        if (uVar3 <= uVar15) break;
        iVar17 = (iVar17 + uVar13) - uVar19;
        uVar9 = *param_1;
        uVar13 = uVar19;
        if (uVar9 == 0) {
          return uVar19;
        }
      }
    }
    param_1[6] = uVar14;
  }
  if (uVar19 != 0) {
    lVar7 = *(long *)(param_1 + 0xc);
    uVar8 = (ulong)uVar19;
    do {
      lVar11 = (ulong)(*(uint *)(*param_3 + 0x58) >> 5) * 4;
      uVar8 = uVar8 - 1;
      *(uint *)(lVar7 + lVar11) =
           *(uint *)(lVar7 + lVar11) | 1 << ((ulong)*(uint *)(*param_3 + 0x58) & 0x1f);
      param_3 = param_3 + 1;
    } while (uVar8 != 0);
  }
  return param_2;
}


