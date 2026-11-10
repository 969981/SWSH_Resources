/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152ae70; name: FUN_0152ae70
 */


void FUN_0152ae70(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long local_48;
  
  uVar11 = 0x811c9dc5;
  FUN_0152b2f0(&local_48,"PokeCampSave_NPCKey_");
  puVar1 = (undefined8 *)PTR_PTR_02710928;
  if (local_48 != 0) {
    puVar1 = (undefined8 *)(local_48 + 0x60);
  }
  pbVar5 = (byte *)*puVar1;
  uVar6 = (uint)*pbVar5;
  if (*pbVar5 != 0) {
    do {
      pbVar5 = pbVar5 + 1;
      uVar11 = (uVar11 ^ uVar6) * 0x1000193;
      uVar6 = (uint)*pbVar5;
    } while (uVar6 != 0);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar8 = *param_4;
  if (lVar8 != 0) {
    plVar10 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    iVar2 = FUN_00884820(lVar8);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    if ((param_3 < 8) && (iVar2 != 0)) {
      if ((int)uVar11 < -0x2efafd86) {
        if ((int)uVar11 < -0x631a324b) {
          if (uVar11 == 0x84fd4f59) {
            lVar8 = 5;
            iVar2 = FUN_00884820(*param_4);
          }
          else {
            if (uVar11 != 0x944481dd) {
              return;
            }
            lVar8 = 7;
            iVar2 = FUN_00884820(*param_4);
          }
        }
        else if (uVar11 == 0x9ce5cdb5) {
          lVar8 = 1;
          iVar2 = FUN_00884820(*param_4);
        }
        else {
          if (uVar11 != 0xc87219f6) {
            return;
          }
          lVar8 = 0;
          iVar2 = FUN_00884820(*param_4);
        }
      }
      else if ((int)uVar11 < 0x6a09346c) {
        if (uVar11 == 0xd105027a) {
          lVar8 = 4;
          iVar2 = FUN_00884820(*param_4);
        }
        else {
          if (uVar11 != 0x20fa6183) {
            return;
          }
          lVar8 = 3;
          iVar2 = FUN_00884820(*param_4);
        }
      }
      else if (uVar11 == 0x6a09346c) {
        lVar8 = 2;
        iVar2 = FUN_00884820(*param_4);
      }
      else {
        if (uVar11 != 0x718621a5) {
          return;
        }
        lVar8 = 6;
        iVar2 = FUN_00884820(*param_4);
      }
      if (iVar2 != 0) {
        uVar9 = 0;
        puVar7 = (undefined1 *)(param_1 + param_3 * 0x66 + lVar8 * 0x132 + 0x686a);
        do {
          if (puVar7[-2] != '\0') {
            uVar3 = (**(code **)(*(long *)*param_4 + 0x50))((long *)*param_4,uVar9 & 0xffffffff);
            FUN_0087d3f0(uVar3,puVar7[-1]);
            FUN_0087d540(uVar3,*puVar7);
          }
          uVar9 = uVar9 + 1;
          uVar4 = FUN_00884820(*param_4);
          puVar7 = puVar7 + 0x11;
        } while (uVar9 < (uVar4 & 0xffffffff));
      }
    }
  }
  return;
}


