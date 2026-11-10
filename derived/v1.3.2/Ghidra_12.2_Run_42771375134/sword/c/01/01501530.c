/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01501530; name: FUN_01501530
 */


void FUN_01501530(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long local_70;
  long local_68;
  
  uVar11 = 0;
  plVar16 = (long *)PTR_DAT_02710798;
  do {
    lVar14 = param_1 + uVar11 * 0x2b8;
    if (1 < (byte)(*(char *)(lVar14 + 0x1a9) + *(char *)(lVar14 + 0x60))) {
      lVar4 = param_1 + uVar11 * 0x2b8;
      uVar1 = *(int *)(lVar4 + 0x2f4) + 1;
      *(uint *)(lVar4 + 0x2f4) = uVar1;
      if (0xb4 < uVar1) {
        *(undefined4 *)(lVar4 + 0x2f4) = 0;
        lVar4 = *(long *)(*plVar16 + 0x1d8);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        uVar2 = FUN_01520ef0(lVar4,0x277,1);
        lVar12 = param_1 + uVar11 * 0x2b8;
        if (*(char *)(lVar12 + 0x300) == '\0') {
          if ((byte)(*(char *)(lVar14 + 0x1a9) + *(char *)(lVar14 + 0x60)) < 2) {
            uVar15 = 1;
          }
          else {
            FUN_01501160(&local_68,param_1,param_2,uVar11 & 0xffffffff,0);
            FUN_01501160(&local_70,param_1,param_2,uVar11 & 0xffffffff,1);
            lVar13 = local_68;
            lVar14 = local_70;
            uVar15 = FUN_0087d900(local_68,local_70);
            uVar15 = uVar15 & 0xffffffff;
            if (lVar14 != 0) {
              plVar16 = (long *)(lVar14 + 0x48);
              (**(code **)(*plVar16 + 0x18))(plVar16);
              local_70 = 0;
            }
            if (lVar13 != 0) {
              plVar16 = (long *)(lVar13 + 0x48);
              (**(code **)(*plVar16 + 0x18))(plVar16);
              local_68 = 0;
            }
            plVar16 = (long *)PTR_DAT_02710798;
          }
          puVar5 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
          uVar7 = *puVar5;
          uVar9 = puVar5[1];
          do {
            uVar10 = uVar7 ^ uVar9;
            iVar8 = (int)uVar9;
            iVar6 = (int)uVar7;
            uVar9 = uVar10 >> 0x1b | uVar10 << 0x25;
            uVar7 = uVar10 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar10 << 0x10;
            uVar1 = iVar6 + iVar8 & 0x7f;
          } while (100 < uVar1);
          *puVar5 = uVar7;
          puVar5[1] = uVar9;
          if (uVar1 < (byte)(&UNK_01cd53c0)[(uVar2 & 1) + uVar15 * 2]) {
            *(undefined1 *)(lVar12 + 0x300) = 1;
            uVar3 = FUN_01028fe0();
            *(undefined8 *)(param_1 + uVar11 * 0x2b8 + 0x2f8) = uVar3;
          }
          FUN_01501160(&local_68,param_1,param_2,uVar11 & 0xffffffff,0);
          FUN_01501160(&local_70,param_1,param_2,uVar11 & 0xffffffff,1);
          lVar12 = local_68;
          lVar14 = local_70;
          FUN_0087ba20(local_68,local_70);
          FUN_0087ba20(lVar14,lVar12);
          lVar13 = param_1 + uVar11 * 0x2b8;
          thunk_FUN_008787a0(lVar12,lVar13 + 0x61);
          thunk_FUN_008787a0(lVar14,lVar13 + 0x1aa);
          if (lVar14 != 0) {
            (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
            local_70 = 0;
          }
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
            local_68 = 0;
          }
        }
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 != 2);
  return;
}


