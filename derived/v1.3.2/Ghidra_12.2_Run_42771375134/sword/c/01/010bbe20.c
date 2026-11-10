/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bbe20; name: FUN_010bbe20
 */


void FUN_010bbe20(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x88))();
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x7c) = 1;
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
    lVar2 = *(long *)(param_1 + 0x88);
    (**(code **)(**(long **)(lVar2 + 0x618) + 0x50))();
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x618),1);
    FUN_016b2da0(*(undefined8 *)(lVar2 + 0x618),1);
    uStack_34 = *(undefined4 *)(lVar2 + 0x610);
    local_38 = 0;
    FUN_016b7990(*(undefined8 *)(lVar2 + 0x618),&local_38,1,0);
    FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),0);
    FUN_010ad950(*(undefined8 *)(param_1 + 0x88),1);
    FUN_010b1170(*(undefined8 *)(param_1 + 0x90),0);
    lVar2 = *(long *)(param_1 + 0x88);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x5f0),1);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x5f8),1);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x600),*(undefined1 *)(lVar2 + 0x620));
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x608),1);
    lVar2 = *(long *)(param_1 + 0x88);
    lVar3 = *(long *)PTR_DAT_027108d8;
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x5e0),*(int *)(lVar3 + 0x11aec) != 0);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x5e8),*(int *)(lVar3 + 0x11aec) != 0);
    if (*(char *)(*(long *)(param_1 + 0x88) + 0x621) == '\0') {
      FUN_00ffcf80(*(long *)(param_1 + 0x88) + 0x100,"anime_L_menu_02_passive");
    }
  }
  return;
}


