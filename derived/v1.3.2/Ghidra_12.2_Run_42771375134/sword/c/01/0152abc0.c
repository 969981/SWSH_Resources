/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152abc0; name: FUN_0152abc0
 */


void FUN_0152abc0(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long local_48;
  
  uVar12 = 0x811c9dc5;
  FUN_0152b2f0(&local_48,"PokeCampSave_NPCKey_");
  puVar1 = (undefined8 *)PTR_PTR_02710928;
  if (local_48 != 0) {
    puVar1 = (undefined8 *)(local_48 + 0x60);
  }
  pbVar6 = (byte *)*puVar1;
  uVar7 = (uint)*pbVar6;
  if (*pbVar6 != 0) {
    do {
      pbVar6 = pbVar6 + 1;
      uVar12 = (uVar12 ^ uVar7) * 0x1000193;
      uVar7 = (uint)*pbVar6;
    } while (uVar7 != 0);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar9 = *param_4;
  if (lVar9 != 0) {
    plVar11 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    iVar3 = FUN_00884820(lVar9);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    if ((param_3 < 8) && (iVar3 != 0)) {
      if ((int)uVar12 < -0x2efafd86) {
        if ((int)uVar12 < -0x631a324b) {
          if (uVar12 == 0x84fd4f59) {
            lVar9 = 5;
            iVar3 = FUN_00884820(*param_4);
          }
          else {
            if (uVar12 != 0x944481dd) {
              return;
            }
            lVar9 = 7;
            iVar3 = FUN_00884820(*param_4);
          }
        }
        else if (uVar12 == 0x9ce5cdb5) {
          lVar9 = 1;
          iVar3 = FUN_00884820(*param_4);
        }
        else {
          if (uVar12 != 0xc87219f6) {
            return;
          }
          lVar9 = 0;
          iVar3 = FUN_00884820(*param_4);
        }
      }
      else if ((int)uVar12 < 0x6a09346c) {
        if (uVar12 == 0xd105027a) {
          lVar9 = 4;
          iVar3 = FUN_00884820(*param_4);
        }
        else {
          if (uVar12 != 0x20fa6183) {
            return;
          }
          lVar9 = 3;
          iVar3 = FUN_00884820(*param_4);
        }
      }
      else if (uVar12 == 0x6a09346c) {
        lVar9 = 2;
        iVar3 = FUN_00884820(*param_4);
      }
      else {
        if (uVar12 != 0x718621a5) {
          return;
        }
        lVar9 = 6;
        iVar3 = FUN_00884820(*param_4);
      }
      if (iVar3 != 0) {
        uVar10 = 0;
        puVar8 = (undefined1 *)(param_1 + param_3 * 0x66 + lVar9 * 0x132 + 0x686a);
        do {
          uVar4 = (**(code **)(*(long *)*param_4 + 0x58))((long *)*param_4,uVar10 & 0xffffffff);
          puVar8[-2] = 1;
          uVar2 = FUN_0087d3e0();
          puVar8[-1] = uVar2;
          uVar2 = FUN_0087d530(uVar4);
          *puVar8 = uVar2;
          uVar10 = uVar10 + 1;
          uVar5 = FUN_00884820(*param_4);
          puVar8 = puVar8 + 0x11;
        } while (uVar10 < (uVar5 & 0xffffffff));
      }
    }
  }
  return;
}


