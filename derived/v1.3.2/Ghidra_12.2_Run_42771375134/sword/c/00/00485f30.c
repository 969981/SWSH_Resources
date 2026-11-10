/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00485f30; name: FUN_00485f30
 */


uint FUN_00485f30(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  ushort *puVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  long local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 8 + 4) != 0) {
    uVar1 = param_2 + 0x1d;
    if (((*(ulong **)(param_1 + 0x38) != (ulong *)0x0) &&
        ((**(ulong **)(param_1 + 0x38) & 1L << ((ulong)uVar1 & 0x3f)) != 0)) ||
       (uVar2 = (**(code **)(*(long *)(param_1 + 0x18) + 0x20))((long *)(param_1 + 0x18),uVar1),
       (uVar2 & 1) != 0)) {
      plVar3 = (long *)(param_1 + 0x18);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0xff;
      local_50 = 0xff;
      local_48 = 0;
      local_70 = param_3;
      uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar1);
      fVar10 = 0.0;
      if ((((uVar2 & 1) != 0) && (uVar2 = FUN_004b3450(plVar3), (uVar2 & 1) != 0)) &&
         ((uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,uVar1), (uVar2 & 1) != 0 &&
          ((plVar3 = (long *)(**(code **)(*plVar3 + 0x80))(plVar3), plVar3 != (long *)0x0 &&
           (lVar4 = *plVar3, lVar4 != 0)))))) {
        fVar10 = 0.0;
        do {
          puVar7 = *(ushort **)(lVar4 + 0x20);
          if (puVar7 != (ushort *)0x0) {
            uVar2 = 0;
            pfVar8 = (float *)((long)puVar7 + ((ulong)((uint)*puVar7 * 2 + 5) & 0x3fffc));
            do {
              if ((uint)puVar7[uVar2 + 1] == (uVar1 & 0xffff)) {
                if (pfVar8 != (float *)0x0) {
                  fVar10 = *pfVar8 + fVar10;
                }
                break;
              }
              uVar2 = uVar2 + 1;
              pfVar8 = pfVar8 + 4;
            } while (uVar2 < *puVar7);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
        } while (lVar4 != 0);
      }
      if ((*(ulong **)(param_1 + 0x38) != (ulong *)0x0) &&
         ((**(ulong **)(param_1 + 0x38) & 1L << ((ulong)uVar1 & 0x3f)) != 0)) {
        fVar9 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,uVar1,&local_70);
        fVar10 = fVar9 + fVar10;
      }
      return (int)fVar10;
    }
  }
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    plVar5 = (long *)*plVar3;
    uVar1 = *(uint *)(plVar3 + 1);
    plVar3 = plVar5;
    if (uVar1 == 0) {
LAB_0048611c:
      if (plVar3 != plVar5 + (ulong)uVar1 * 2) {
        pbVar6 = (byte *)(plVar3[1] + 0x20);
        goto LAB_0048614c;
      }
    }
    else {
      lVar4 = (ulong)uVar1 << 4;
      do {
        if (*plVar3 == param_3) goto LAB_0048611c;
        lVar4 = lVar4 + -0x10;
        plVar3 = plVar3 + 2;
      } while (lVar4 != 0);
    }
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    pbVar6 = (byte *)(*(long *)(param_1 + 0x60) + 0x24);
  }
  else {
    pbVar6 = (byte *)(*(long *)(param_1 + 0x50) + 0x20);
  }
LAB_0048614c:
  return *pbVar6 >> (ulong)(param_2 & 0x1f) & 1;
}


