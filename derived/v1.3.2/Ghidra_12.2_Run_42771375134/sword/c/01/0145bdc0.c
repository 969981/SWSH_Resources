/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0145bdc0; name: FUN_0145bdc0
 */


void FUN_0145bdc0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *pcStack_88;
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar8 = FUN_0152d900(*(undefined8 *)(param_1 + 0x428),*(undefined4 *)(param_1 + 0x414));
  if (0 < *(int *)(param_1 + 0x410)) {
    lVar13 = 0;
    do {
      lVar2 = param_1 + lVar13 * 8;
      lVar9 = *(long *)(lVar2 + 800);
      if (lVar9 == 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x420);
        uVar4 = *(undefined4 *)(param_1 + 0x414);
        local_68 = 0;
      }
      else {
        plVar11 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        uVar10 = *(undefined8 *)(param_1 + 0x420);
        uVar4 = *(undefined4 *)(param_1 + 0x414);
        local_68 = lVar9;
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      uVar4 = FUN_0144d540(uVar10,uVar4,&local_68);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      *(undefined4 *)(lVar2 + 0x1b8) = uVar4;
      uVar5 = FUN_0087a5f0(lVar9);
      FUN_0087b360(lVar9,uVar4);
      uVar6 = FUN_0087a5f0(lVar9);
      *(bool *)(lVar2 + 0x1bc) = uVar5 < uVar6;
      if (uVar5 < uVar6) {
        uVar5 = uVar5 + 1;
        local_6c = 0;
        if (uVar5 <= uVar6) {
          iVar12 = 0;
          plVar11 = (long *)(lVar9 + 0x48);
LAB_0145bed4:
          do {
            iVar7 = FUN_0087c9f0(lVar9,uVar5,&local_6c,&local_70,0);
            uVar4 = local_70;
            if (iVar7 != 2) {
              if (iVar7 == 1) {
                FUN_0087bfb0(lVar9,iVar12,local_70);
                uVar4 = local_70;
                uVar1 = iVar12 + 4;
                if (-1 < iVar12 + 1) {
                  uVar1 = iVar12 + 1;
                }
                local_90 = -0x1576521039458059;
                pcStack_88 = "LEARN_SKILL";
                local_80 = 0xb;
                local_78 = 0;
                local_a0 = lVar9;
                if (lVar9 != 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
                FUN_014af7f0(&local_90,uVar4,&local_a0);
                if (local_a0 != 0) {
                  (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
                  local_a0 = 0;
                }
                iVar12 = (iVar12 + 1) - (uVar1 & 0xfffffffc);
                lVar2 = local_98;
              }
              else {
                if (iVar7 != 0) {
                  uVar5 = uVar5 + 1;
                  local_6c = 0;
                  if (uVar6 < uVar5) break;
                  goto LAB_0145bed4;
                }
                local_90 = -0x1576521039458059;
                pcStack_88 = "LEARN_SKILL";
                local_80 = 0xb;
                local_78 = 0;
                local_98 = lVar9;
                if (lVar9 != 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
                FUN_014af7f0(&local_90,uVar4,&local_98);
                lVar2 = 0;
                if (local_98 != 0) {
                  (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
                  local_98 = 0;
                  lVar2 = local_98;
                }
              }
              local_98 = lVar2;
              if (local_78 != 0) {
                (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                local_78 = 0;
              }
            }
          } while (uVar5 <= uVar6);
        }
      }
      uVar3 = *(undefined1 *)(lVar8 + 2);
      iVar12 = *(int *)(param_1 + 0x410);
      uVar10 = *(undefined8 *)(param_1 + 0x428);
      local_a8 = lVar9;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      FUN_0152db90(uVar10,uVar3,iVar12 + ~(uint)lVar13,&local_a8);
      if (local_a8 != 0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
        local_a8 = 0;
      }
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x410));
  }
  return;
}


