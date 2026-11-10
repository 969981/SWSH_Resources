/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f12b0; name: FUN_004f12b0
 */


void FUN_004f12b0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,uint param_6)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined1 auStack_100 [128];
  int local_80;
  undefined1 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar9 = param_1 + (ulong)param_6 * 0x10;
  puVar12 = (uint *)(lVar9 + 0x30);
  uVar5 = *puVar12;
  uVar11 = *(uint *)(lVar9 + 0x34);
  plVar13 = (long *)(lVar9 + 0x28);
  if (uVar11 <= uVar5) {
    uVar11 = uVar11 + 0x10;
    puVar6 = (undefined8 *)FUN_00404750(*(undefined4 *)PTR_DAT_02713640,(ulong)uVar11 << 5,0x10);
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    puVar7 = (undefined8 *)*plVar13;
    if (puVar7 != (undefined8 *)0x0 && puVar7 != puVar6) {
      uVar4 = *puVar12;
      if (uVar4 != 0) {
        puVar6[3] = puVar7[3];
        puVar6[2] = puVar7[2];
        puVar6[1] = puVar7[1];
        *puVar6 = *puVar7;
        if (uVar4 != 1) {
          uVar3 = uVar4 + 3 & 3;
          if ((ulong)uVar4 - 2 < 3) {
            lVar10 = 1;
          }
          else {
            lVar10 = 1;
            lVar8 = 0x80;
            do {
              lVar1 = *plVar13 + lVar8;
              puVar7 = (undefined8 *)((long)puVar6 + lVar8);
              puVar7[-9] = *(undefined8 *)(lVar1 + -0x48);
              puVar7[-10] = *(undefined8 *)(lVar1 + -0x50);
              puVar7[-0xb] = *(undefined8 *)(lVar1 + -0x58);
              puVar7[-0xc] = *(undefined8 *)(lVar1 + -0x60);
              lVar1 = *plVar13 + lVar8;
              puVar7[-5] = *(undefined8 *)(lVar1 + -0x28);
              puVar7[-6] = *(undefined8 *)(lVar1 + -0x30);
              puVar7[-7] = *(undefined8 *)(lVar1 + -0x38);
              puVar7[-8] = *(undefined8 *)(lVar1 + -0x40);
              lVar1 = *plVar13 + lVar8;
              puVar7[-1] = *(undefined8 *)(lVar1 + -8);
              puVar7[-2] = *(undefined8 *)(lVar1 + -0x10);
              puVar7[-3] = *(undefined8 *)(lVar1 + -0x18);
              puVar7[-4] = *(undefined8 *)(lVar1 + -0x20);
              puVar2 = (undefined8 *)(*plVar13 + lVar8);
              lVar8 = lVar8 + 0x80;
              puVar7[2] = puVar2[2];
              *puVar7 = *puVar2;
              puVar7[3] = puVar2[3];
              lVar10 = lVar10 + 4;
              puVar7[1] = puVar2[1];
            } while ((ulong)uVar4 - (ulong)uVar3 != lVar10);
          }
          if (uVar3 != 0) {
            lVar10 = lVar10 << 5;
            lVar8 = -(ulong)uVar3;
            do {
              puVar7 = (undefined8 *)(*plVar13 + lVar10);
              puVar2 = (undefined8 *)((long)puVar6 + lVar10);
              lVar10 = lVar10 + 0x20;
              puVar2[3] = puVar7[3];
              puVar2[2] = puVar7[2];
              puVar2[1] = puVar7[1];
              lVar8 = lVar8 + 1;
              *puVar2 = *puVar7;
            } while (lVar8 != 0);
          }
        }
        puVar7 = (undefined8 *)*plVar13;
      }
      FUN_004047f0(*(undefined4 *)PTR_DAT_02713640,puVar7);
    }
    *plVar13 = (long)puVar6;
    *(uint *)(lVar9 + 0x34) = uVar11;
  }
  if (uVar5 < uVar11) {
    uVar11 = *puVar12;
    lVar9 = *plVar13;
    *puVar12 = uVar11 + 1;
    puVar6 = (undefined8 *)(lVar9 + (ulong)uVar11 * 0x20);
    if (puVar6 != (undefined8 *)0x0) {
      ((uint *)(param_1 + 0x20))[(ulong)*(uint *)(param_1 + 0x20) + 0x12] = uVar11;
      uVar14 = *param_4;
      puVar6[1] = param_4[1];
      *puVar6 = uVar14;
      *(undefined8 *)(lVar9 + (ulong)uVar11 * 0x20 + 0x10) = param_5;
      uStack_68 = param_3[1];
      local_70 = *param_3;
      local_80 = param_6 + 1;
      local_7c = 0;
                    /* WARNING: Subroutine does not return */
      memset(auStack_100,0,0x80);
    }
  }
  return;
}


