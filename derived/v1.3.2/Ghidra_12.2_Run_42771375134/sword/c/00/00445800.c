/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00445800; name: FUN_00445800
 */


int FUN_00445800(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  float fVar15;
  undefined1 auStack_7c [4];
  byte local_78 [4];
  uint local_74;
  undefined1 auStack_68 [4];
  uint local_64;
  
  puVar5 = PTR_DAT_02712a90;
  fVar4 = DAT_01d4bee0;
  if (param_2 != 0) {
    lVar1 = param_1 + 8;
    do {
      iVar6 = FUN_0044e640(lVar1,auStack_68,8);
      if (iVar6 != 1) {
        return iVar6;
      }
      param_2 = param_2 + -8;
      if (local_64 != 0) {
        uVar14 = 0;
        do {
          iVar6 = FUN_0044e640(lVar1,&local_74,4);
          if (iVar6 != 1) {
            return iVar6;
          }
          iVar6 = FUN_0044e640(lVar1,local_78,1);
          if (iVar6 != 1) {
            return iVar6;
          }
          uVar12 = *(uint *)(param_1 + 0xb0);
          if (uVar12 != 0) {
            uVar2 = 0;
            if (uVar12 != 0) {
              uVar2 = local_74 / uVar12;
            }
            for (plVar10 = *(long **)(*(long *)(param_1 + 0xa8) +
                                     (ulong)(local_74 - uVar2 * uVar12) * 8); plVar10 != (long *)0x0
                ; plVar10 = (long *)*plVar10) {
              if (*(uint *)(plVar10 + 1) == local_74) {
                FUN_0044df40(lVar1,local_78[0],auStack_7c);
                uVar12 = (uint)local_78[0];
                goto LAB_00445a20;
              }
            }
          }
          lVar7 = FUN_00404690(*(undefined4 *)puVar5,(ulong)local_78[0] + 5);
          if (lVar7 == 0) {
            return 0x34;
          }
          *(undefined1 *)(lVar7 + (ulong)local_78[0]) = 0x2e;
          *(undefined1 *)(lVar7 + (ulong)local_78[0] + 1) = 0x62;
          *(undefined1 *)(lVar7 + (ulong)local_78[0] + 2) = 0x6e;
          *(undefined1 *)(lVar7 + (ulong)local_78[0] + 3) = 0x6b;
          *(undefined1 *)(lVar7 + (ulong)local_78[0] + 4) = 0;
          iVar6 = FUN_0044e640(lVar1,lVar7,local_78[0]);
          uVar2 = local_74;
          if (iVar6 != 1) goto LAB_00445a48;
          uVar12 = (uint)local_78[0];
          uVar9 = *(uint *)(param_1 + 0xb0);
          if ((uVar9 == 0) ||
             (fVar15 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xb8)),
             fVar4 < fVar15 / (float)uVar9)) {
            FUN_00449fb0(param_1 + 0xa0);
            uVar9 = *(uint *)(param_1 + 0xb0);
            if (uVar9 != 0) goto LAB_00445994;
LAB_00445a44:
            iVar6 = 0x34;
LAB_00445a48:
            FUN_00404870(*(undefined4 *)puVar5,lVar7);
            return iVar6;
          }
LAB_00445994:
          uVar3 = 0;
          if (uVar9 != 0) {
            uVar3 = uVar2 / uVar9;
          }
          uVar13 = (ulong)(uVar2 - uVar3 * uVar9);
          for (plVar10 = *(long **)(*(long *)(param_1 + 0xa8) + uVar13 * 8); plVar10 != (long *)0x0;
              plVar10 = (long *)*plVar10) {
            if (*(uint *)(plVar10 + 1) == uVar2) {
              plVar10[2] = lVar7;
              goto LAB_00445a20;
            }
          }
          puVar8 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar5,0x18);
          if (puVar8 == (undefined8 *)0x0) goto LAB_00445a44;
          lVar11 = uVar13 * 8;
          *puVar8 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + lVar11);
          *(uint *)(puVar8 + 1) = uVar2;
          *(undefined8 **)(*(long *)(param_1 + 0xa8) + lVar11) = puVar8;
          *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
          puVar8[2] = lVar7;
LAB_00445a20:
          param_2 = (param_2 + -5) - uVar12;
          uVar14 = uVar14 + 1;
        } while (uVar14 < local_64);
      }
    } while (param_2 != 0);
  }
  return 1;
}


