/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9e180; name: FUN_00e9e180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e9e180(long param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_100 [96];
  ulong local_a0;
  ulong local_98;
  undefined1 auStack_90 [64];
  
  puVar7 = &local_130;
  puVar8 = &local_130;
  lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar10 + 0x7d8);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  FUN_00db5e00(auStack_90,param_1,param_1 + 0xb0,4);
  lVar4 = FUN_00e7e2e0();
  if (lVar4 != -0x57753fb9fdfaf46b) {
    if (lVar11 == 0) {
      FUN_006c5c80(auStack_90);
      goto joined_r0x00e9e408;
    }
    uVar3 = FUN_00ecec10();
    FUN_006c5d20(&local_120,auStack_90);
    lVar4 = FUN_00e331a0(lVar11,auStack_100);
    local_98 = 0xcbf29ce484222645;
    local_a0 = 0xcbf29ce484222645;
    if (lVar4 == 0) {
      bVar2 = true;
    }
    else {
      pcVar5 = (char *)FUN_00e33410(lVar11,lVar4,2,uVar3,0);
      if (pcVar5 != (char *)0x0) {
        snprintf((char *)&local_120,0x80,"bin/field/effect/particle/ef_chara_jumping/%s.ptcl",pcVar5
                );
        local_98 = 0xcbf29ce484222645;
        if ((byte)local_120 != 0) {
          local_98 = 0xcbf29ce484222645;
          pbVar9 = (byte *)((ulong)&local_120 | 1);
          bVar1 = (byte)local_120;
          do {
            local_98 = (local_98 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar1 != 0);
        }
      }
      pcVar5 = (char *)FUN_00e33410(lVar11,lVar4,2,uVar3,1);
      if (pcVar5 != (char *)0x0) {
        snprintf((char *)&local_120,0x80,"bin/field/effect/particle/ef_chara_jumping/%s.ptcl",pcVar5
                );
        if ((byte)local_120 == 0) {
          local_a0 = 0xcbf29ce484222645;
        }
        else {
          local_a0 = 0xcbf29ce484222645;
          pbVar9 = (byte *)((ulong)&local_120 | 1);
          do {
            local_a0 = (local_a0 ^ (byte)local_120) * 0x100000001b3;
            local_120._0_1_ = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while ((byte)local_120 != 0);
        }
      }
      bVar2 = local_98 == 0xcbf29ce484222645;
    }
    local_120 = 0;
    uStack_118 = 0;
    uStack_128 = _UNK_01d4a658;
    local_130 = _DAT_01d4a650;
    if (!bVar2) {
      uVar6 = FUN_00e46320(param_1);
      if ((uVar6 & 1) == 0) {
        puVar7 = &local_120;
      }
      FUN_00dc0bf0(param_1,&local_98,puVar7);
      FUN_00dc04c0(param_1,&local_98,0,0,0);
    }
    if (local_a0 != 0xcbf29ce484222645) {
      uVar6 = FUN_00e46320(param_1);
      if ((uVar6 & 1) == 0) {
        puVar8 = &local_120;
      }
      FUN_00dc0bf0(param_1,&local_a0,puVar8);
      FUN_00dc04c0(param_1,&local_a0,0,0,0);
    }
  }
  FUN_006c5c80(auStack_90);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
joined_r0x00e9e408:
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  return;
}


