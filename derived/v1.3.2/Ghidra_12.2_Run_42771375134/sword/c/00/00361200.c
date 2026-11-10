/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00361200; name: FUN_00361200
 */


void FUN_00361200(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  uint *puVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  char *local_4e0;
  long local_4d8;
  undefined8 *local_4d0;
  long local_4c8;
  long local_4c0;
  long local_4b8;
  long local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  long local_488;
  long local_480;
  long local_478;
  char *local_470;
  long local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined1 auStack_1d0 [80];
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long lStack_160;
  long local_158;
  undefined8 local_150;
  long local_148;
  long local_140;
  undefined1 local_138;
  char *local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  undefined1 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long local_70;
  char local_64 [4];
  
  local_490 = (**(code **)(*(long *)param_1[7] + 0x20))();
  local_498 = 0;
  puVar8 = (undefined8 *)param_1[8];
  local_4c0 = 0;
  local_4b8 = 0;
  local_4d0 = &local_490;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_4c8 = 0;
  local_4a0 = 0xffffffff3f400000;
  FUN_003209e0(&local_4d0,0x40);
  lVar16 = *param_1;
  lVar9 = param_1[1];
  local_470 = (char *)CONCAT44(local_470._4_4_,*(undefined4 *)(lVar16 + 0x10));
  if (*(uint *)(lVar9 + 0x10) < (*(uint *)(lVar9 + 0x14) & 0x7fffffff)) {
    *(undefined4 *)(*(long *)(lVar9 + 8) + (ulong)*(uint *)(lVar9 + 0x10) * 4) =
         *(undefined4 *)(lVar16 + 0x10);
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + 1;
    iVar12 = *(int *)(lVar16 + 0x10);
    if (iVar12 == 0) goto LAB_003612d4;
LAB_003612c0:
    lVar9 = *(long *)(lVar16 + 8);
    uVar6 = (ulong)(iVar12 - 1);
    pbVar15 = (byte *)(lVar9 + uVar6 * 0x10 + 8);
    if (*pbVar15 != 0) goto LAB_003612d4;
    bVar5 = 0;
    if ((char)param_1[9] != '\0') {
      bVar5 = (**(code **)(*(long *)param_1[5] + 0x20))
                        ((long *)param_1[5],*(undefined8 *)(lVar9 + uVar6 * 0x10));
      bVar5 = bVar5 & 1;
      lVar16 = *param_1;
      *(byte *)(param_1 + 9) = bVar5;
      lVar9 = *(long *)(lVar16 + 8);
      uVar6 = (ulong)(*(int *)(lVar16 + 0x10) - 1);
      pbVar15 = (byte *)(lVar9 + uVar6 * 0x10 + 8);
    }
    *(byte *)(lVar9 + uVar6 * 0x10 + 9) = bVar5;
    *pbVar15 = bVar5;
    cVar4 = (char)param_1[9];
  }
  else {
                    /* try { // try from 003612a8 to 00361323 has its CatchHandler @ 003617f8 */
    FUN_00321390(lVar9,&local_470);
    lVar16 = *param_1;
    iVar12 = *(int *)(lVar16 + 0x10);
    if (iVar12 != 0) goto LAB_003612c0;
LAB_003612d4:
    cVar4 = (char)param_1[9];
  }
  if (cVar4 == '\0') goto LAB_003616b8;
  puVar10 = (uint *)(lVar16 + 0x10);
  uVar13 = *puVar10;
  if (uVar13 == 0) {
LAB_003612fc:
    bVar5 = 1;
  }
  else {
    if (*(char *)(*(long *)(lVar16 + 8) + (ulong)(uVar13 - 1) * 0x10 + 8) != '\0')
    goto LAB_003612fc;
                    /* try { // try from 00361370 to 0036140f has its CatchHandler @ 00361808 */
    bVar5 = (**(code **)(*(long *)param_1[5] + 0x20))
                      ((long *)param_1[5],
                       *(undefined8 *)(*(long *)(lVar16 + 8) + (ulong)(uVar13 - 1) * 0x10));
    bVar5 = bVar5 & 1;
    lVar16 = *param_1;
    *(byte *)(param_1 + 9) = bVar5;
    puVar10 = (uint *)(lVar16 + 0x10);
    uVar13 = *puVar10;
    lVar9 = *(long *)(lVar16 + 8) + (ulong)(uVar13 - 1) * 0x10;
    *(byte *)(lVar9 + 9) = bVar5;
    *(byte *)(lVar9 + 8) = bVar5;
  }
  local_470 = "__child";
  local_468 = (ulong)CONCAT61((int6)((ulong)local_468 >> 0x10),bVar5) << 8;
  if (uVar13 < (*(uint *)(lVar16 + 0x14) & 0x7fffffff)) {
    puVar7 = (undefined8 *)(*(long *)(lVar16 + 8) + (ulong)uVar13 * 0x10);
    puVar7[1] = local_468;
    *puVar7 = "__child";
    *puVar10 = *puVar10 + 1;
    if ((char)param_1[9] == '\0') {
      bVar5 = 0;
    }
    else {
LAB_00361400:
      bVar5 = (**(code **)(*(long *)param_1[5] + 0x28))();
      bVar5 = bVar5 & 1;
      *(byte *)(param_1 + 9) = bVar5;
    }
  }
  else {
    FUN_00321500(lVar16,&local_470);
    bVar5 = 0;
    if ((char)param_1[9] != '\0') goto LAB_00361400;
  }
  lVar16 = *(long *)(*param_1 + 8) + (ulong)(*(int *)(*param_1 + 0x10) - 1) * 0x10;
  *(byte *)(lVar16 + 9) = bVar5;
  *(byte *)(lVar16 + 8) = bVar5;
  if (bVar5 != 0) {
    do {
      local_4d8 = 0;
                    /* try { // try from 00361468 to 00361477 has its CatchHandler @ 00361838 */
      uVar6 = (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],"Parent",&local_4d8);
      if ((uVar6 & 1) == 0) {
        uVar11 = 0;
      }
      else {
        uVar6 = local_4d8 + (local_4d8 << 0x20 ^ 0xffffffffffffffffU);
        uVar6 = uVar6 ^ uVar6 >> 0x16;
        uVar6 = uVar6 + (uVar6 << 0xd ^ 0xffffffffffffffff);
        uVar6 = (uVar6 ^ uVar6 >> 8) * 9;
        uVar6 = uVar6 ^ uVar6 >> 0xf;
        uVar6 = uVar6 + (uVar6 << 0x1b ^ 0xffffffffffffffff);
        uVar6 = (ulong)*(uint *)(local_4b0 +
                                (ulong)(uStack_4a8._4_4_ - 1 & ((uint)(uVar6 >> 0x1f) ^ (uint)uVar6)
                                       ) * 4);
        lVar16 = *(long *)(local_4c0 + uVar6 * 0x10);
        while (lVar16 != local_4d8) {
          uVar6 = (ulong)*(uint *)(local_4b8 + uVar6 * 4);
          lVar16 = *(long *)(local_4c0 + uVar6 * 0x10);
        }
        uVar11 = *(undefined8 *)(local_4c0 + uVar6 * 0x10 + 8);
      }
      local_470 = (char *)0x0;
      local_468 = 0x3f80000000000000;
      local_460 = 0;
      local_458 = 0;
                    /* try { // try from 00361524 to 00361533 has its CatchHandler @ 00361828 */
      uVar11 = (**(code **)(*param_2 + 0xd0))(param_2,uVar11,&local_470);
      local_4e0 = (char *)0x0;
                    /* try { // try from 00361544 to 0036169b has its CatchHandler @ 00361858 */
      (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],&DAT_01cf88f4,&local_4e0);
      local_470 = local_4e0;
      puVar7 = (undefined8 *)FUN_00320860(&local_4d0,&local_470,&local_118);
      if ((char)local_118 == '\0') {
        *puVar7 = local_470;
        puVar7[1] = uVar11;
      }
      FUN_00214fd0(&local_470);
      local_478 = param_1[4];
      local_480 = param_1[3];
      local_488 = param_1[2];
      lVar16 = *param_1;
      lVar1 = param_1[1];
      lVar18 = param_1[5];
      lVar9 = param_1[7];
      lVar2 = param_1[8];
      local_64[0] = '\0';
      local_d0 = 1;
      local_c8 = local_64;
      local_c0 = 0;
      local_b8 = 0;
      local_118 = lVar16;
      local_110 = lVar1;
      local_108 = local_488;
      local_100 = local_480;
      lStack_f8 = local_478;
      local_f0 = lVar18;
      local_e8 = uVar11;
      local_e0 = lVar9;
      local_d8 = lVar2;
      local_b0 = local_488;
      local_a8 = local_480;
      lStack_a0 = local_478;
      local_98 = local_488;
      local_90 = local_480;
      lStack_88 = local_478;
      local_80 = local_488;
      local_78 = local_480;
      local_70 = local_478;
      FUN_003618c0(&local_470,&local_118,0);
      local_168 = local_90;
      lStack_160 = lStack_88;
      local_170 = local_98;
      local_138 = 1;
      local_130 = local_64;
      local_128 = 0;
      local_120 = 0;
      local_180 = lVar16;
      local_178 = lVar1;
      local_158 = lVar18;
      local_150 = uVar11;
      local_148 = lVar9;
      local_140 = lVar2;
      FUN_00365990(&local_180,auStack_1d0);
      if (local_64[0] != '\0') {
        *(undefined1 *)param_1[10] = 1;
      }
      (**(code **)*puVar8)(puVar8,uVar11,local_4e0);
    } while (((char)param_1[9] != '\0') &&
            (uVar6 = (**(code **)(*(long *)param_1[5] + 0x30))(), (uVar6 & 1) != 0
                    /* try { // try from 003616b0 to 003616b3 has its CatchHandler @ 00361818 */));
  }
LAB_003616b8:
  puVar10 = (uint *)(param_1[1] + 0x10);
  if (*puVar10 != 0) {
    uVar17 = *puVar10 - 1;
    uVar3 = *(uint *)(*(long *)(param_1[1] + 8) + (ulong)uVar17 * 4);
    lVar16 = *param_1;
    puVar14 = (uint *)(lVar16 + 0x10);
    uVar13 = *puVar14;
    if (uVar3 < uVar13) {
      do {
        while( true ) {
          uVar13 = uVar13 - 1;
          if ((*(char *)(*(long *)(lVar16 + 8) + (ulong)uVar13 * 0x10 + 8) != '\0') &&
             (*(char *)(*(long *)(lVar16 + 8) + (ulong)uVar13 * 0x10 + 9) != '\0')) {
                    /* try { // try from 00361718 to 0036171b has its CatchHandler @ 00361848 */
            (**(code **)(*(long *)param_1[5] + 0x50))();
            lVar16 = *param_1;
            puVar14 = (uint *)(lVar16 + 0x10);
            uVar13 = *puVar14 - 1;
          }
          *puVar14 = uVar13;
          *(undefined1 *)(param_1 + 9) = 1;
          if ((uVar13 != 0) &&
             (*(char *)(*(long *)(lVar16 + 8) + (ulong)(uVar13 - 1) * 0x10 + 9) == '\0')) break;
          puVar14 = (uint *)(lVar16 + 0x10);
          uVar13 = *puVar14;
          if (uVar13 <= uVar3) goto LAB_00361774;
        }
        *(undefined1 *)(param_1 + 9) = 0;
        puVar14 = (uint *)(lVar16 + 0x10);
        uVar13 = *puVar14;
      } while (uVar3 < uVar13);
LAB_00361774:
      puVar10 = (uint *)(param_1[1] + 0x10);
      uVar17 = *puVar10 - 1;
    }
    *puVar10 = uVar17;
  }
  if (uStack_4a8._4_4_ != 0) {
    uVar6 = 0;
    do {
      for (uVar13 = *(uint *)(local_4b0 + uVar6 * 4); uVar13 != 0xffffffff;
          uVar13 = *(uint *)(local_4b8 + (ulong)uVar13 * 4)) {
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uStack_4a8._4_4_);
  }
  if (local_4c8 != 0) {
                    /* try { // try from 003617d0 to 003617d3 has its CatchHandler @ 003617f4 */
    (**(code **)(*(long *)*local_4d0 + 0x18))();
  }
  return;
}


