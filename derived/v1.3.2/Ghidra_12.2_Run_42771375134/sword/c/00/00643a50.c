/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00643a50; name: FUN_00643a50
 */


undefined8 FUN_00643a50(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  void *__s;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  *(long **)(param_1 + 0x18) = param_2;
  plVar6 = (long *)(**(code **)(*param_2 + 0x28))(param_2);
  if (*(long *)(param_1 + 0x40) == 0x1000) {
LAB_00643ac4:
    lVar10 = 0;
    lVar12 = 0;
    do {
      puVar13 = (undefined8 *)(*(long *)(param_1 + 0x58) + lVar10);
      lVar10 = lVar10 + 0x38;
      puVar13[5] = 0;
      puVar13[6] = 0;
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      lVar12 = lVar12 + 1;
      puVar13[1] = 0;
      puVar13[2] = 0;
    } while (lVar12 < *(int *)(param_1 + 0x40));
    if (*(long *)(param_1 + 0x98) == 0x400) goto LAB_00643b38;
LAB_00643b04:
    if ((0x400 < *(ulong *)(param_1 + 0xa0)) ||
       (uVar7 = FUN_00646540(param_1 + 0x88,0x400,1), (uVar7 & 1) != 0)) {
      *(undefined8 *)(param_1 + 0x98) = 0x400;
      *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
      *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb0) + 0x5000;
      goto LAB_00643b38;
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  else {
    if ((0x1000 < *(ulong *)(param_1 + 0x48)) ||
       (uVar7 = FUN_00646280(param_1 + 0x30,0x1000,1), (uVar7 & 1) != 0)) {
      *(undefined8 *)(param_1 + 0x40) = 0x1000;
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x58) + 0x38000;
      goto LAB_00643ac4;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (*(long *)(param_1 + 0x98) != 0x400) goto LAB_00643b04;
LAB_00643b38:
    lVar10 = 0;
    lVar12 = 0;
    do {
      puVar13 = (undefined8 *)(*(long *)(param_1 + 0xb0) + lVar10);
      lVar10 = lVar10 + 0x14;
      *(undefined4 *)(puVar13 + 2) = 0;
      *puVar13 = 0;
      puVar13[1] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0x98));
  }
  plVar8 = (long *)(**(code **)(*plVar6 + 0x1c0))(plVar6,1);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x10))();
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    }
    *(long **)(param_1 + 0x20) = plVar8;
  }
  if (*(long *)(param_1 + 0x130) == 0x4000) {
LAB_00643d8c:
    uVar7 = *(ulong *)(param_1 + 0x180);
  }
  else {
    if (0x3fff < *(ulong *)(param_1 + 0x138)) {
      *(undefined8 *)(param_1 + 0x130) = 0x4000;
      *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x148);
      *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x148) + 0xa0000;
      goto LAB_00643d8c;
    }
    plVar8 = *(long **)(param_1 + 0x128);
    if ((plVar8 != (long *)0x0) &&
       (__s = (void *)(**(code **)(*plVar8 + 0x40))
                                (plVar8,0x28,0x4000,0x10,
                                 "../../../../Include\\SiCore/SiCore_Array.h",0x5d1),
       __s != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      memset(__s,0,0xa0000);
    }
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    uVar7 = *(ulong *)(param_1 + 0x180);
  }
  if (uVar7 == 0x6000) goto LAB_00643ed8;
  if (*(ulong *)(param_1 + 0x188) < 0x6000) {
    plVar8 = *(long **)(param_1 + 0x178);
    if (plVar8 != (long *)0x0) {
      lVar10 = (**(code **)(*plVar8 + 0x40))
                         (plVar8,2,0x6000,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
      uVar1 = uVar7;
      if (0x5fff < uVar7) {
        uVar1 = 0x6000;
      }
      if (lVar10 != 0) {
        if (uVar1 != 0) {
          if (uVar7 == 1) {
            lVar12 = 0;
          }
          else {
            uVar2 = 0xffffffffffff9fff;
            if (0xffffffffffff9fff < ~uVar7) {
              uVar2 = ~uVar7;
            }
            lVar12 = 0;
            do {
              lVar14 = lVar12 * 2;
              lVar12 = lVar12 + 2;
              *(undefined2 *)(lVar10 + lVar14) =
                   *(undefined2 *)(*(long *)(param_1 + 0x198) + lVar14);
              ((undefined2 *)(lVar10 + lVar14))[1] =
                   *(undefined2 *)(*(long *)(param_1 + 0x198) + lVar14 + 2);
            } while (~(uVar1 & 1) - uVar2 != lVar12);
          }
          if ((uVar1 & 1) != 0) {
            *(undefined2 *)(lVar10 + lVar12 * 2) =
                 *(undefined2 *)(*(long *)(param_1 + 0x198) + lVar12 * 2);
          }
        }
        if (((*(byte *)(param_1 + 0x1b8) & 1) == 0) && (*(long *)(param_1 + 0x198) != 0)) {
          plVar8 = *(long **)(param_1 + 0x178);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x48))
                      (plVar8,*(long *)(param_1 + 0x198),
                       "../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x198) = 0;
        }
        *(undefined8 *)(param_1 + 0x1b8) = 0;
        *(undefined8 *)(param_1 + 0x1a0) = 0;
        *(undefined8 *)(param_1 + 0x1a8) = 0;
        *(long *)(param_1 + 0x198) = lVar10;
        *(ulong *)(param_1 + 0x180) = uVar1;
        *(undefined8 *)(param_1 + 0x188) = 0x6000;
        goto LAB_00643ec4;
      }
    }
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x198);
LAB_00643ec4:
    *(undefined8 *)(param_1 + 0x180) = 0x6000;
    *(long *)(param_1 + 0x1a0) = lVar10;
    *(long *)(param_1 + 0x1a8) = lVar10 + 0xc000;
  }
LAB_00643ed8:
  puVar13 = *(undefined8 **)(param_1 + 0x148);
  lVar10 = 0;
  iVar11 = 0;
  puVar13[3] = 0;
  puVar13[4] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  do {
    *(short *)(*(long *)(param_1 + 0x198) + lVar10) = (short)(iVar11 << 2);
    uVar3 = (ushort)(iVar11 << 2) | 1;
    *(ushort *)(*(long *)(param_1 + 0x198) + lVar10 + 2) = uVar3;
    uVar4 = (ushort)(iVar11 << 2) | 2;
    *(ushort *)(*(long *)(param_1 + 0x198) + lVar10 + 4) = uVar4;
    *(ushort *)(*(long *)(param_1 + 0x198) + lVar10 + 6) = uVar4;
    *(ushort *)(*(long *)(param_1 + 0x198) + lVar10 + 8) = uVar3;
    iVar5 = iVar11 << 2;
    iVar11 = iVar11 + 1;
    lVar12 = *(long *)(param_1 + 0x198) + lVar10;
    lVar10 = lVar10 + 0xc;
    *(ushort *)(lVar12 + 10) = (ushort)iVar5 | 3;
  } while (lVar10 != 0xc000);
  plVar8 = (long *)(**(code **)(*plVar6 + 0x130))(plVar6,0,0,0);
  (**(code **)(*plVar8 + 0x90))();
  (**(code **)(*plVar8 + 0x98))(plVar8,0,0,2,0,0xffffffff,0,0);
  (**(code **)(*plVar8 + 0x98))(plVar8,4,0,2,0,0xffffffff,0,0);
  (**(code **)(*plVar8 + 0x98))(plVar8,5,0,0x10,0,0xffffffff,0,0);
  (**(code **)(*plVar8 + 0xa0))(plVar8);
  *(long **)(param_1 + 0x1c0) = plVar8;
  local_80 = 0x100000003;
  local_44 = 0;
  local_78 = 0x100000001;
  uStack_70 = 0;
  local_68 = 0x142c80000;
  local_60 = 8;
  local_4c = 0;
  local_54 = 0;
  local_5c = 0;
  uVar9 = (**(code **)(*plVar6 + 0x1a0))(plVar6,&local_80,0,0,0);
  *(undefined8 *)(param_1 + 0x228) = uVar9;
  plVar6 = (long *)FUN_005cbff0();
  (**(code **)(*plVar6 + 0x108))(plVar6,param_1 + 0x2b8);
  return 1;
}


