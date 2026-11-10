/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b7980; name: FUN_010b7980
 */


void FUN_010b7980(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined4 local_68;
  undefined4 uStack_64;
  
  uVar1 = FUN_010367c0(*(undefined8 *)(param_1 + 0x90));
  uVar2 = FUN_010367c0(*(undefined8 *)(param_1 + 0x88));
  uVar3 = FUN_010b1310(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x80));
  uVar4 = FUN_010ae0a0(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x80));
  uVar5 = FUN_010afad0(*(undefined8 *)(param_1 + 0xb8),1);
  uVar6 = FUN_010367c0(*(undefined8 *)(param_1 + 0x98));
  uVar7 = FUN_010afad0(*(undefined8 *)(param_1 + 0xb8),3);
  uVar8 = FUN_010367c0(*(undefined8 *)(param_1 + 0xa0));
  uVar9 = FUN_010367c0(*(undefined8 *)(param_1 + 0xb8));
  uVar10 = FUN_010afad0(*(undefined8 *)(param_1 + 0xb8),0);
  uVar11 = FUN_010ae0a0(*(undefined8 *)(param_1 + 0x88),0);
  uVar12 = FUN_01036fd0(*(undefined8 *)(param_1 + 0xb0));
  if (((((((uVar3 & 1) != 0) && ((uVar1 & 1) == 0)) && ((uVar2 & 1) == 0)) &&
       ((((uVar4 & 1) != 0 && ((uVar5 & 1) != 0)) &&
        (((uVar6 & 1) == 0 && (((uVar7 & 1) != 0 && ((uVar8 & 1) == 0)))))))) && ((uVar9 & 1) == 0))
     && ((((uVar10 & 1) != 0 && ((uVar11 & 1) != 0)) && ((uVar12 & 1) != 0)))) {
    uVar15 = *(undefined8 *)PTR_DAT_0271cba8;
    puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar13 = (long *)(**(code **)*puVar16)(puVar16);
    lVar14 = FUN_010aad10();
    for (; plVar13 != (long *)lVar14; plVar13 = (long *)*plVar13) {
    }
    lVar14 = puVar16[2];
    if (((*(int *)(lVar14 + 4) == 3) && (*(int *)(lVar14 + 0x18) != -1)) &&
       (*(int *)(lVar14 + 0x1c) != -1)) {
      FUN_010bbfa0(param_1);
      return;
    }
    uVar3 = FUN_011f6bb0(uVar15);
    if ((uVar3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0x29;
      FUN_010bc320(param_1,0x9c1700574e39b32f,0,1,1,0);
      FUN_010bc6f0(param_1,0,1);
      return;
    }
    lVar14 = *(long *)(param_1 + 0xc0);
    if (*(long *)(lVar14 + 0xba0) != 0) {
      uVar3 = FUN_0103d280(*(long *)(lVar14 + 0xba0));
      if ((uVar3 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x7c) = 1;
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
        FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
        FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
        lVar14 = *(long *)(param_1 + 0x88);
        (**(code **)(**(long **)(lVar14 + 0x618) + 0x50))();
        FUN_016b2d70(*(undefined8 *)(lVar14 + 0x618),1);
        FUN_016b2da0(*(undefined8 *)(lVar14 + 0x618),1);
        uStack_64 = *(undefined4 *)(lVar14 + 0x610);
        local_68 = 0;
        FUN_016b7990(*(undefined8 *)(lVar14 + 0x618),&local_68,1,0);
        FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),0);
        FUN_010ad950(*(undefined8 *)(param_1 + 0x88),1);
        FUN_010b1170(*(undefined8 *)(param_1 + 0x90),0);
        lVar14 = *(long *)(param_1 + 0x88);
        FUN_016b2d70(*(undefined8 *)(lVar14 + 0x5f0),1);
        FUN_016b2d70(*(undefined8 *)(lVar14 + 0x5f8),1);
        FUN_016b2d70(*(undefined8 *)(lVar14 + 0x600),*(undefined1 *)(lVar14 + 0x620));
        FUN_016b2d70(*(undefined8 *)(lVar14 + 0x608),1);
        lVar14 = *(long *)(param_1 + 0x88);
        lVar17 = *(long *)PTR_DAT_027108d8;
        FUN_016b2d70(*(undefined8 *)(lVar14 + 0x5e0),*(int *)(lVar17 + 0x11aec) != 0);
        FUN_016b2d70(*(undefined8 *)(lVar14 + 0x5e8),*(int *)(lVar17 + 0x11aec) != 0);
        if (*(char *)(*(long *)(param_1 + 0x88) + 0x621) == '\0') {
          FUN_00ffcf80(*(long *)(param_1 + 0x88) + 0x100,"anime_L_menu_02_passive");
          return;
        }
        return;
      }
      lVar14 = *(long *)(param_1 + 0xc0);
    }
    FUN_010364c0(lVar14,0);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xc0),0);
    *(undefined4 *)(param_1 + 0x7c) = 0x2e;
  }
  return;
}


