/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bbab0; name: FUN_010bbab0
 */


void FUN_010bbab0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_48;
  
  uVar4 = FUN_010386c0(*(undefined8 *)(param_1 + 0xa8));
  puVar2 = PTR_DAT_027108d8;
  if ((uVar4 & 1) != 0) {
    lVar8 = *(long *)PTR_DAT_027108d8;
    uVar3 = FUN_010bc7b0(lVar8 + 0x108);
    FUN_010b1600(*(undefined8 *)(param_1 + 0x90),uVar3);
    lVar7 = 0x32;
    pcVar6 = (char *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x11ae8) * 8000 + 0x1f9);
    do {
      while (pcVar6[-0xa0] == '\0') {
        pcVar6[-0xa0] = '\x01';
        if (*pcVar6 == '\0') goto LAB_010bbb44;
LAB_010bbb28:
        pcVar6 = pcVar6 + 0x140;
        lVar7 = lVar7 + -2;
        if (lVar7 == 0) goto LAB_010bbb54;
      }
      if (*pcVar6 != '\0') goto LAB_010bbb28;
LAB_010bbb44:
      *pcVar6 = '\x01';
      pcVar6 = pcVar6 + 0x140;
      lVar7 = lVar7 + -2;
    } while (lVar7 != 0);
LAB_010bbb54:
    lVar7 = *(long *)(param_1 + 0x88);
    if (*(char *)(lVar7 + 0x620) != '\0') {
      *(undefined1 *)(lVar7 + 0x620) = 0;
      FUN_00ffcf80(lVar7 + 0x100,"anime_new_out");
    }
    local_48 = -0x5568b94f2d6f6c4a;
    uVar5 = FUN_0167b6b0(*(undefined8 *)(lVar7 + 0x2b0),&local_48);
    FUN_00ffd840(lVar7 + 0x100,uVar5);
    FUN_016b2d70(*(undefined8 *)(lVar7 + 0x600),*(undefined1 *)(lVar7 + 0x620));
    lVar9 = *(long *)puVar2;
    lVar7 = *(long *)(param_1 + 0x88);
    FUN_016b2d70(*(undefined8 *)(lVar7 + 0x5e0),*(int *)(lVar9 + 0x11aec) != 0);
    FUN_016b2d70(*(undefined8 *)(lVar7 + 0x5e8),*(int *)(lVar9 + 0x11aec) != 0);
    lVar7 = *(long *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0xcc) = 0x96;
    *(undefined4 *)(param_1 + 0x7c) = 1;
    FUN_016b2d70(*(undefined8 *)(lVar7 + 0x5f0),1);
    FUN_016b2d70(*(undefined8 *)(lVar7 + 0x5f8),1);
    FUN_016b2d70(*(undefined8 *)(lVar7 + 0x600),*(undefined1 *)(lVar7 + 0x620));
    FUN_016b2d70(*(undefined8 *)(lVar7 + 0x608),1);
    FUN_010bc6f0(param_1,1,1);
    if (*(int *)(lVar8 + 0x11aec) == 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      FUN_010adf80(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x80));
      FUN_010b12f0(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x80));
      lVar7 = *(long *)(param_1 + 0x88);
      (**(code **)(**(long **)(lVar7 + 0x618) + 0x50))();
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x618),1);
      FUN_016b2da0(*(undefined8 *)(lVar7 + 0x618),1);
      local_48 = (ulong)*(uint *)(lVar7 + 0x610) << 0x20;
      FUN_016b7990(*(undefined8 *)(lVar7 + 0x618),&local_48,1,0);
      lVar7 = *(long *)(param_1 + 0x90);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1a80),1);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1a88),1);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1a90),1);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1a98),1);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1aa0),1);
      lVar8 = *(long *)puVar2;
      lVar7 = *(long *)(param_1 + 0x90);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1a70),*(int *)(lVar8 + 0x11aec) != 0);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1a78),*(int *)(lVar8 + 0x11aec) != 0);
      FUN_010ad950(*(undefined8 *)(param_1 + 0x88),1);
      FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),0);
      FUN_010b1170(*(undefined8 *)(param_1 + 0x90),0);
      iVar1 = *(int *)(param_1 + 0x80);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x80);
    }
    if (iVar1 == 0) {
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    }
    else {
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
      lVar7 = *(long *)(param_1 + 0x90);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1a80),1);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1a88),1);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1a90),1);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1a98),1);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1aa0),1);
      lVar8 = *(long *)puVar2;
      lVar7 = *(long *)(param_1 + 0x90);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1a70),*(int *)(lVar8 + 0x11aec) != 0);
      FUN_016b2d70(*(undefined8 *)(lVar7 + 0x1a78),*(int *)(lVar8 + 0x11aec) != 0);
    }
  }
  return;
}


