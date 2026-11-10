/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bdc10; name: FUN_010bdc10
 */


void FUN_010bdc10(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  
  *(undefined4 *)(param_1 + 0x7c) = 1;
  if (*(int *)(param_1 + 0x80) == 0) {
    plVar2 = (long *)(param_1 + 0x88);
    FUN_00ffa3d0(*plVar2,0);
    lVar1 = *plVar2;
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x5f0),1);
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x5f8),1);
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x600),*(undefined1 *)(lVar1 + 0x620));
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x608),1);
    lVar1 = *plVar2;
    lVar3 = *(long *)PTR_DAT_027108d8;
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x5e0),*(int *)(lVar3 + 0x11aec) != 0);
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x5e8),*(int *)(lVar3 + 0x11aec) != 0);
  }
  else {
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
    lVar1 = *(long *)(param_1 + 0x90);
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x1a80),1);
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x1a88),1);
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x1a90),1);
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x1a98),1);
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x1aa0),1);
    lVar1 = *(long *)(param_1 + 0x90);
    lVar3 = *(long *)PTR_DAT_027108d8;
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x1a70),*(int *)(lVar3 + 0x11aec) != 0);
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x1a78),*(int *)(lVar3 + 0x11aec) != 0);
  }
  plVar2 = (long *)(param_1 + 0x88);
  lVar1 = *plVar2;
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x5f0),1);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x5f8),1);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x600),*(undefined1 *)(lVar1 + 0x620));
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x608),1);
  if (*(int *)(param_1 + 0x80) == 0) {
    lVar1 = *plVar2;
    (**(code **)(**(long **)(lVar1 + 0x618) + 0x50))();
    FUN_016b2d70(*(undefined8 *)(lVar1 + 0x618),1);
    FUN_016b2da0(*(undefined8 *)(lVar1 + 0x618),1);
    uStack_34 = *(undefined4 *)(lVar1 + 0x610);
    local_38 = 0;
    FUN_016b7990(*(undefined8 *)(lVar1 + 0x618),&local_38,1,0);
    FUN_010ad950(*plVar2,1);
  }
  else {
    FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),1);
    FUN_010b1170(*(undefined8 *)(param_1 + 0x90),1);
  }
  FUN_00ffa160(*plVar2,1,1);
  return;
}


