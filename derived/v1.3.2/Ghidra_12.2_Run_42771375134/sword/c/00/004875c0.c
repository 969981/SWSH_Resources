/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004875c0; name: FUN_004875c0
 */


undefined8 FUN_004875c0(long param_1,undefined4 *param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  float fVar14;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  uVar10 = *(uint *)(param_1 + 0x9c) & 0x3ff;
  if (((*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) && (uVar10 != 0)) &&
     (((uint)**(undefined8 **)(param_1 + 0x38) >> 0x10 & 1) != 0)) {
    local_88 = 0;
    local_80 = 0;
    local_78 = 0xff;
    local_70 = 0xff;
    local_68 = 0;
    local_90 = 0;
    fVar14 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,0x10,&local_90);
    uVar10 = (uint)fVar14;
  }
  puVar4 = (undefined4 *)PTR_DAT_02712a90;
  if (*(long *)(param_1 + 0x70) == 0) {
    FUN_00483010(param_1);
    puVar4 = (undefined4 *)PTR_DAT_02712a90;
  }
  if ((uVar10 & 0xffff) == 0) {
    PTR_DAT_02712a90 = (undefined *)puVar4;
    return 1;
  }
  lVar11 = *(long *)(param_1 + 0x70);
  PTR_DAT_02712a90 = (undefined *)puVar4;
  if (lVar11 != 0) {
    plVar12 = *(long **)(param_2 + 4);
    uVar2 = *(uint *)(plVar12 + 1);
    uVar13 = *(uint *)((long)plVar12 + 0xc);
    if (uVar13 <= uVar2) {
      uVar13 = uVar13 + 3;
      puVar6 = (undefined8 *)FUN_00404690(*puVar4,(ulong)uVar13 << 3);
      if (puVar6 == (undefined8 *)0x0) goto LAB_00487718;
      puVar8 = (undefined8 *)*plVar12;
      if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar6)) {
        uVar3 = *(uint *)(plVar12 + 1);
        if (uVar3 != 0) {
          *puVar6 = *puVar8;
          if (uVar3 != 1) {
            if (uVar3 == 2) {
              lVar9 = 1;
            }
            else {
              lVar5 = 0;
              do {
                lVar9 = lVar5;
                puVar6[lVar9 + 1] = *(undefined8 *)(*plVar12 + lVar9 * 8 + 8);
                puVar6[lVar9 + 2] = *(undefined8 *)(*plVar12 + lVar9 * 8 + 0x10);
                lVar5 = lVar9 + 2;
              } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar9 + 2);
              lVar9 = lVar9 + 3;
              if ((~uVar3 & 1) == 0) goto LAB_004876dc;
            }
            puVar6[lVar9] = *(undefined8 *)(*plVar12 + lVar9 * 8);
          }
LAB_004876dc:
          puVar8 = (undefined8 *)*plVar12;
        }
        FUN_00404870(*puVar4,puVar8);
      }
      *plVar12 = (long)puVar6;
      *(uint *)((long)plVar12 + 0xc) = uVar13;
    }
    if (uVar2 < uVar13) {
      plVar1 = (long *)(*plVar12 + (ulong)*(uint *)(plVar12 + 1) * 8);
      *(uint *)(plVar12 + 1) = *(uint *)(plVar12 + 1) + 1;
      if (plVar1 != (long *)0x0) {
        *plVar1 = lVar11 + 0x60;
      }
    }
  }
LAB_00487718:
  if ((((param_3 & 1) != 0) && (*(char *)((long)param_2 + 0x1d) != '\0')) &&
     (*(short *)((long)param_2 + 0x1a) == 0)) {
    lVar11 = *(long *)(param_1 + 0x70);
    if (lVar11 == 0) {
      if ((uVar10 & 0xffff) == 0) goto LAB_00487794;
    }
    else if ((int)(uVar10 & 0xffff) <=
             (int)((uint)*(ushort *)(lVar11 + 0x88) - (uint)*(ushort *)(lVar11 + 0x8a))) {
LAB_00487794:
      local_90 = 0;
      uVar7 = FUN_004bf750(*param_2,lVar11 + 0x60,uVar10,0,*(uint *)(param_1 + 0x9c) >> 10 & 1,
                           *(uint *)(param_1 + 0x9c) >> 0xb & 1,&local_90,1);
      *(short *)((long)param_2 + 0x1a) = *(short *)((long)param_2 + 0x1a) + 1;
      return uVar7;
    }
  }
  return 1;
}


