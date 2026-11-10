/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01510700; name: FUN_01510700
 */


void FUN_01510700(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  uint *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  undefined4 local_6c;
  uint local_68 [2];
  ulong local_58;
  
  local_58 = local_58 & 0xffffffff00000000;
  lVar6 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_58);
  if ((*(long *)(param_2 + 8) != 0) &&
     (lVar7 = FUN_006e72a0(), puVar5 = PTR_DAT_02710920, lVar7 != 0)) {
    if ((param_4 & 1) == 0) {
      lVar13 = 0;
      do {
        FUN_01511640(&local_58,param_2,lVar13);
        puVar3 = (undefined8 *)puVar5;
        if (local_58 != 0) {
          puVar3 = (undefined8 *)(local_58 + 0x58);
        }
        local_68[0] = (uint)*puVar3;
        uVar12 = FUN_01515610(lVar6,local_68);
        if (((uVar12 & 0xff) == 0) && (plVar8 = *(long **)(lVar6 + 0x58), plVar8 != (long *)0x0)) {
          (**(code **)(*plVar8 + 0x50))(plVar8,local_68);
        }
        puVar2 = puVar5;
        if (local_58 != 0) {
          puVar2 = (undefined *)(local_58 + 0x58);
        }
        uVar9 = FUN_01513560(param_3,puVar2);
        *(bool *)uVar9 = (uVar12 & 0xff00) != 0;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        lVar13 = lVar13 + 1;
      } while (lVar7 != lVar13);
    }
    else {
      lVar13 = 0;
      do {
        FUN_01511640(&local_58,param_2,lVar13);
        puVar3 = (undefined8 *)puVar5;
        if (local_58 != 0) {
          puVar3 = (undefined8 *)(local_58 + 0x58);
        }
        local_68[0] = (uint)*puVar3;
        nn::os::LockMutex((MutexType *)(lVar6 + 0x78));
        puVar4 = *(uint **)(lVar6 + 0x10);
        uVar12 = (long)puVar4 - (long)*(uint **)(lVar6 + 8);
        if (0 < (long)uVar12) {
          puVar10 = *(uint **)(lVar6 + 8);
          puVar11 = puVar4;
          do {
            puVar14 = (uint *)((long)puVar10 + (uVar12 >> 1 & 0x7fffffffffffffe0));
            if (*puVar14 == local_68[0]) goto LAB_015107ec;
            puVar1 = puVar14 + 8;
            if (local_68[0] <= *puVar14) {
              puVar1 = puVar10;
              puVar11 = puVar14;
            }
            uVar12 = (long)puVar11 - (long)puVar1;
            puVar10 = puVar1;
          } while (0 < (long)uVar12);
        }
        puVar14 = puVar4;
LAB_015107ec:
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x78));
        if ((puVar14 == (uint *)0x0) || (puVar14 == puVar4)) {
          local_6c = 0;
          FUN_01514f80(lVar6,local_68,&local_6c);
        }
        uVar12 = FUN_01515610(lVar6,local_68);
        if (((uVar12 & 0xff) == 0) && (plVar8 = *(long **)(lVar6 + 0x58), plVar8 != (long *)0x0)) {
          (**(code **)(*plVar8 + 0x50))(plVar8,local_68);
        }
        puVar2 = puVar5;
        if (local_58 != 0) {
          puVar2 = (undefined *)(local_58 + 0x58);
        }
        uVar9 = FUN_01513560(param_3,puVar2);
        *(bool *)uVar9 = (uVar12 & 0xff00) != 0;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar7);
    }
  }
  return;
}


