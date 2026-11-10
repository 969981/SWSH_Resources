/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00292e30; name: FUN_00292e30
 */


undefined1  [16]
FUN_00292e30(void *param_1,long param_2,undefined8 param_3,long param_4,char param_5)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  float fVar15;
  undefined1 auVar14 [16];
  ulong uVar16;
  undefined8 uVar17;
  
  if (param_5 == '\x03') {
    if (3 < *(uint *)(param_4 + 0x38)) {
      auVar14 = FUN_00291ed0(param_1,param_2,param_3,param_4);
      uVar8 = 3;
LAB_00293070:
      *(undefined4 *)((long)param_1 + 0x180) = uVar8;
      return auVar14;
    }
    uVar10 = 0;
    lVar13 = param_4;
    do {
      uVar16 = (ulong)*(uint *)(lVar13 + 0x30);
      if (*(uint *)(lVar13 + 0x30) < *(uint *)(lVar13 + 0x34)) {
        pvVar12 = (void *)(param_2 + uVar16 * 0x40);
        uVar9 = uVar10;
        do {
          uVar10 = uVar9 + 1;
          memcpy((void *)((long)param_1 + (ulong)uVar9 * 0x40),pvVar12,0x34);
          uVar16 = uVar16 + 1;
          pvVar12 = (void *)((long)pvVar12 + 0x40);
          uVar9 = uVar10;
        } while (uVar16 < *(uint *)(lVar13 + 0x34));
      }
      lVar13 = *(long *)(lVar13 + 0x10);
    } while (lVar13 != 0);
  }
  else {
    if (param_5 == '\x01') {
      uVar16 = 0x7f7fffff7f7fffff;
      uVar10 = 0xffffffff;
      do {
        uVar9 = *(uint *)(param_4 + 0x30);
        uVar3 = (ulong)uVar9;
        uVar4 = *(uint *)(param_4 + 0x34);
        if (uVar9 < uVar4) {
          uVar11 = uVar3;
          uVar7 = uVar10;
          if ((uVar4 - uVar9 & 1) != 0) {
            fVar15 = (float)((ulong)*(undefined8 *)(param_2 + uVar3 * 0x40 + 0x28) >> 0x20);
            bVar5 = fVar15 < (float)uVar16;
            iVar2 = -(uint)bVar5;
            uVar16 = uVar16 ^ (uVar16 ^ CONCAT44(fVar15,fVar15)) & CONCAT44(iVar2,iVar2);
            uVar11 = uVar3 + 1;
            uVar7 = uVar9;
            if (!bVar5) {
              uVar7 = uVar10;
            }
          }
          uVar10 = uVar7;
          if ((ulong)uVar4 - 1 != uVar3) {
            lVar13 = param_2 + 0x60 + uVar11 * 0x40;
            uVar9 = uVar10;
            do {
              fVar15 = (float)((ulong)*(undefined8 *)(lVar13 + -0x38) >> 0x20);
              bVar5 = fVar15 < (float)uVar16;
              iVar2 = -(uint)bVar5;
              uVar16 = uVar16 ^ (uVar16 ^ CONCAT44(fVar15,fVar15)) & CONCAT44(iVar2,iVar2);
              puVar1 = (undefined8 *)(lVar13 + 8);
              lVar13 = lVar13 + 0x80;
              fVar15 = (float)((ulong)*puVar1 >> 0x20);
              bVar6 = fVar15 < (float)uVar16;
              uVar10 = (uint)uVar11;
              if (!bVar5) {
                uVar10 = uVar9;
              }
              iVar2 = -(uint)bVar6;
              if (bVar6) {
                uVar10 = (uint)uVar11 + 1;
              }
              uVar16 = uVar16 ^ (uVar16 ^ CONCAT44(fVar15,fVar15)) & CONCAT44(iVar2,iVar2);
              uVar11 = uVar11 + 2;
              uVar9 = uVar10;
            } while (uVar11 != uVar4);
          }
        }
        uVar17 = 0;
        param_4 = *(long *)(param_4 + 0x10);
      } while (param_4 != 0);
      memcpy(param_1,(void *)(param_2 + (long)(int)uVar10 * 0x40),0x34);
      *(undefined4 *)((long)param_1 + 0x180) = 1;
      goto LAB_0029303c;
    }
    if (6 < *(uint *)(param_4 + 0x38)) {
      auVar14 = FUN_002917d0(param_1,param_2,param_3,param_4);
      uVar8 = 6;
      goto LAB_00293070;
    }
    uVar10 = 0;
    lVar13 = param_4;
    do {
      uVar16 = (ulong)*(uint *)(lVar13 + 0x30);
      if (*(uint *)(lVar13 + 0x30) < *(uint *)(lVar13 + 0x34)) {
        pvVar12 = (void *)(param_2 + uVar16 * 0x40);
        uVar9 = uVar10;
        do {
          uVar10 = uVar9 + 1;
          memcpy((void *)((long)param_1 + (ulong)uVar9 * 0x40),pvVar12,0x34);
          uVar16 = uVar16 + 1;
          pvVar12 = (void *)((long)pvVar12 + 0x40);
          uVar9 = uVar10;
        } while (uVar16 < *(uint *)(lVar13 + 0x34));
      }
      lVar13 = *(long *)(lVar13 + 0x10);
    } while (lVar13 != 0);
  }
  *(uint *)((long)param_1 + 0x180) = uVar10;
  uVar16 = *(ulong *)(param_4 + 0x28);
  uVar17 = 0;
LAB_0029303c:
  auVar14._8_8_ = uVar17;
  auVar14._0_8_ = uVar16;
  return auVar14;
}


