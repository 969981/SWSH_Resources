/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b6b10; name: FUN_012b6b10
 */


undefined4 FUN_012b6b10(long param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  time_t tVar5;
  time_t tVar6;
  undefined4 uVar7;
  int *piVar8;
  long lVar9;
  float fVar10;
  tm local_c0;
  tm local_88;
  
  uVar4 = FUN_0087b180(*(undefined8 *)(param_1 + 0x58));
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (param_2 == 1) {
    return 0xd;
  }
  if (param_3 == 4) {
    return 0xc;
  }
  uVar3 = FUN_0087b560(*(undefined8 *)(param_1 + 0x58));
  if ((uVar3 | 1) == 3) {
    return 0xb;
  }
  if ((param_2 == 0) && ((param_4 & 1) == 0)) {
    uVar3 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58));
    if ((0xfe < uVar3) &&
       (fVar10 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)),
       fVar10 < DAT_01d4bec4)) {
      return 7;
    }
    FUN_0102ad30(&local_88);
    tVar5 = mktime(&local_88);
    lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x278);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    FUN_0152aae0(&local_c0,lVar9);
    local_88.tm_mon = local_c0.tm_mon;
    local_88.tm_year = local_c0.tm_year;
    local_88.tm_sec = local_c0.tm_sec;
    local_88.tm_min = local_c0.tm_min;
    local_88.tm_hour = local_c0.tm_hour;
    local_88.tm_mday = local_c0.tm_mday;
    local_88.tm_gmtoff = local_c0.tm_gmtoff;
    local_88.tm_zone = local_c0.tm_zone;
    local_88.tm_isdst = local_c0.tm_isdst;
    local_88._36_4_ = local_c0._36_4_;
    local_88.tm_wday = local_c0.tm_wday;
    local_88.tm_yday = local_c0.tm_yday;
    tVar6 = mktime(&local_88);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    uVar4 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
    if (((uVar4 & 1) == 0) || (lVar9 = *(long *)(param_1 + 0xc0), lVar9 == 0)) goto LAB_012b6cc4;
    FUN_0131acf0(lVar9);
    piVar8 = *(int **)(lVar9 + 0x130);
    puVar1 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (4 - (long)*piVar8)));
    if ((*(char *)((long)puVar1 + (ulong)*puVar1 + 0x2d) == '\0') ||
       ((uVar3 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58)), tVar5 - tVar6 < 0x69780 ||
        (uVar3 < 200)))) goto LAB_012b6cc4;
LAB_012b6e5c:
    uVar7 = 8;
  }
  else {
LAB_012b6cc4:
    if (param_3 == 3) {
      return 2;
    }
    uVar4 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
    if (((uVar4 & 1) != 0) && (lVar9 = *(long *)(param_1 + 0xc0), lVar9 != 0)) {
      FUN_0131acf0(lVar9);
      piVar8 = *(int **)(lVar9 + 0x130);
      puVar1 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (4 - (long)*piVar8)));
      if (((*(char *)((long)puVar1 + (ulong)*puVar1 + 0x1e) != '\0') &&
          (((uVar3 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58)), 0xfe < uVar3 &&
            (fVar10 = (float)FUN_01029020(0x3f800000,
                                          *(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)),
            param_2 == 0)) && ((param_4 & 1) == 0)))) && (fVar10 < DAT_01d4bec4)) {
        return 10;
      }
    }
    uVar4 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
    if (((uVar4 & 1) != 0) && (lVar9 = *(long *)(param_1 + 0xc0), lVar9 != 0)) {
      FUN_0131acf0(lVar9);
      piVar8 = *(int **)(lVar9 + 0x130);
      puVar1 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (4 - (long)*piVar8)));
      if (((*(char *)((long)puVar1 + (ulong)*puVar1 + 0x1d) != '\0') &&
          ((uVar3 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58)), 199 < uVar3 &&
           (fVar10 = (float)FUN_01029020(0x3f800000,
                                         *(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)),
           param_2 == 0)))) && (((param_4 & 1) == 0 && (fVar10 < DAT_01d4bec4)))) {
        return 9;
      }
    }
    uVar4 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
    if (((uVar4 & 1) != 0) && (lVar9 = *(long *)(param_1 + 0xc0), lVar9 != 0)) {
      FUN_0131acf0(lVar9);
      piVar8 = *(int **)(lVar9 + 0x130);
      puVar1 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (4 - (long)*piVar8)));
      if ((*(char *)((long)puVar1 + (ulong)*puVar1 + 0x2d) != '\0') &&
         ((((uVar3 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58)), 199 < uVar3 &&
            (fVar10 = (float)FUN_01029020(0x3f800000,
                                          *(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)),
            param_2 == 0)) && ((param_4 & 1) == 0)) && (fVar10 < 0.0)))) goto LAB_012b6e5c;
    }
    uVar4 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
    if (((uVar4 & 1) != 0) && (lVar9 = *(long *)(param_1 + 0xc0), lVar9 != 0)) {
      FUN_0131acf0(lVar9);
      piVar8 = *(int **)(lVar9 + 0x130);
      puVar1 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (4 - (long)*piVar8)));
      if ((((*(char *)((long)puVar1 + (ulong)*puVar1 + 0x22) != '\0') &&
           ((uVar3 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58)), 0xdb < uVar3 &&
            (bVar2 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58)), 0xdb < bVar2)))) &&
          (fVar10 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)
                                       ), fVar10 < DAT_01d4bec4)) &&
         ((param_2 == 2 && ((param_4 & 1) == 0)))) {
        return 4;
      }
    }
    uVar4 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
    if (((uVar4 & 1) != 0) && (lVar9 = *(long *)(param_1 + 0xc0), lVar9 != 0)) {
      FUN_0131acf0(lVar9);
      piVar8 = *(int **)(lVar9 + 0x130);
      puVar1 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (4 - (long)*piVar8)));
      if (((*(char *)((long)puVar1 + (ulong)*puVar1 + 0x1f) != '\0') &&
          (((uVar3 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58)), 0xb3 < uVar3 &&
            (bVar2 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58)), 0xb3 < bVar2)) &&
           (fVar10 = (float)FUN_01029020(0x3f800000,
                                         *(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)),
           fVar10 < DAT_01d4bec4)))) && ((param_4 & 1) == 0)) {
        return 3;
      }
    }
    bVar2 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
    if ((param_3 == 1) && (0xb3 < bVar2)) {
      uVar7 = 6;
    }
    else {
      bVar2 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
      uVar7 = 5;
      if (bVar2 < 0x46 || param_3 != 2) {
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}


