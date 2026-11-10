/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bde20; name: FUN_010bde20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010bde20(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long local_28;
  
  FUN_010b1ee0(*(undefined8 *)(param_1 + 0x90));
  lVar3 = *(long *)PTR_DAT_027108d8;
  uVar2 = FUN_010b6c90(lVar3 + 0x108);
  lVar5 = *(long *)(param_1 + 0x88);
  if ((uVar2 & 1) == 0) {
    if (*(char *)(lVar5 + 0x620) != '\0') {
      *(undefined1 *)(lVar5 + 0x620) = 0;
      FUN_00ffcf80(lVar5 + 0x100,"anime_new_out");
    }
    local_28 = -0x5568b94f2d6f6c4a;
    uVar6 = FUN_0167b6b0(*(undefined8 *)(lVar5 + 0x2b0),&local_28);
    FUN_00ffd840(lVar5 + 0x100,uVar6);
    FUN_016b2d70(*(undefined8 *)(lVar5 + 0x600),*(undefined1 *)(lVar5 + 0x620));
  }
  else {
    uVar1 = FUN_010b6fd0(lVar3 + 0x108);
    FUN_010b6f00(lVar5,1,uVar1 & 1);
  }
  lVar3 = *(long *)(param_1 + 0x88);
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x5e0),0);
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x5e8),0);
  if (*(int *)(param_1 + 0x80) == 1) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    FUN_010adf80(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x80));
    FUN_010b12f0(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x80));
    lVar3 = *(long *)(param_1 + 0x88);
    (**(code **)(**(long **)(lVar3 + 0x618) + 0x50))();
    FUN_016b2d70(*(undefined8 *)(lVar3 + 0x618),1);
    FUN_016b2da0(*(undefined8 *)(lVar3 + 0x618),1);
    local_28 = (ulong)*(uint *)(lVar3 + 0x610) << 0x20;
    FUN_016b7990(*(undefined8 *)(lVar3 + 0x618),&local_28,1,0);
    FUN_010ad950(*(undefined8 *)(param_1 + 0x88),1);
    FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),0);
    FUN_010b1170(*(undefined8 *)(param_1 + 0x90),0);
    FUN_010ae3e0(*(undefined8 *)(param_1 + 0x88),1,0);
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar3 == 0) {
    uVar6 = *(undefined8 *)(_DAT_00000060 + 0x630);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0x60) + 0x630);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN_016b1d00(uVar6);
  return;
}


