/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e12d70; name: FUN_00e12d70
 */


void FUN_00e12d70(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *__s2;
  int iVar2;
  long lVar3;
  long lVar4;
  size_t __n;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  long local_2a8 [2];
  undefined1 *local_298;
  long local_290;
  long local_288;
  byte local_278 [512];
  undefined8 local_78;
  byte *local_70 [2];
  
  puVar1 = PTR_DAT_02710848;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_78 = *(undefined8 *)(param_1 + 0xf0);
  lVar3 = FUN_00da09e0(*(undefined8 *)PTR_DAT_0271e770,2);
  snprintf((char *)local_278,0x200,"bin/field/param/terrain_draw_setting/%s.bin",
           *(char **)(param_1 + 0xf8));
  uVar5 = 0xcbf29ce484222645;
  if (local_278[0] != 0) {
    uVar5 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)local_278 | 1);
    do {
      uVar5 = (uVar5 ^ local_278[0]) * 0x100000001b3;
      local_278[0] = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (local_278[0] != 0);
  }
  lVar4 = FUN_006e2ec0(lVar3 + 0x120,uVar5);
  __s2 = PTR_s_data___02710918;
  if (0 < lVar4) {
    __n = strlen(PTR_s_data___02710918);
    iVar2 = strncmp((char *)local_278,__s2,__n);
    if (iVar2 == 0) {
      local_70[0] = local_278;
      FUN_00d99c10(local_2a8,local_70,0);
    }
    else {
      FUN_00e1d200(local_70,PTR_s_data___02710918,local_278);
      FUN_006e5870(local_2a8,local_70,0);
      if (local_70[0] != (byte *)0x0) {
        (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
        local_70[0] = (byte *)0x0;
      }
    }
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x18) != 0) {
      lVar4 = lVar3 + 0x120;
    }
    FUN_006dccd0(local_70,*(undefined8 *)PTR_DAT_02710788,1,local_2a8,0,param_2,lVar4);
    if (*(long *)(param_1 + 0x248) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x248) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x248) = 0;
    }
    pbVar6 = local_70[0];
    *(byte **)(param_1 + 0x248) = local_70[0];
    if (local_70[0] != (byte *)0x0) {
      pbVar8 = local_70[0] + 0x48;
      (**(code **)(*(long *)pbVar8 + 0x10))(pbVar8);
      if ((*(long *)(param_1 + 0x250) != 0) || (*(long *)(param_1 + 0x2d0) != 0)) {
        FUN_006e1e70(pbVar6,param_1 + 0x240,1);
      }
      (**(code **)(*(long *)pbVar8 + 0x18))(pbVar8);
    }
    if ((local_290 != 0) && (local_2a8[0] != 0)) {
      (**(code **)(*(long *)(local_2a8[0] + 0x48) + 0x18))();
    }
    local_2a8[0] = 0;
    local_2a8[1] = 0xcbf29ce484222645;
    local_298 = &DAT_01d38550;
    local_290 = 0;
    if (local_288 != 0) {
      (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
      local_288 = 0;
    }
  }
  if ((param_3 & 1) != 0) {
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar3 + 0x1e8);
    if (lVar4 == 0) {
      FUN_015c5550(0,&local_78,1);
    }
    else {
      plVar9 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_015c5550(lVar4,&local_78,1);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


