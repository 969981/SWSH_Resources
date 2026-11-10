/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfd190; name: FUN_00dfd190
 */


void FUN_00dfd190(long param_1,undefined1 param_2,byte param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_38;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_38 = CONCAT71(local_38._1_7_,param_2) & 0xffffffffffffff01;
  local_38 = CONCAT62(local_38._2_6_,CONCAT11(~param_3,(undefined1)local_38)) & 0xffffffffffff01ff;
  FUN_016b1390(*(undefined8 *)(*(long *)(lVar4 + 0x60) + 0x630),&local_38);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  plVar1 = (long *)(param_1 + 0xd60);
  if ((*(long *)(param_1 + 0xd60) != 0) && (*(int *)(*(long *)(param_1 + 0xd60) + 0x54) != 0)) {
    FUN_00deff50(&local_38,plVar1);
    uVar2 = local_38;
    uVar3 = FUN_015b5230(local_38 + 0x50);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (uVar2 != 0) {
      *(undefined1 *)(uVar2 + 0xb80) = 0;
    }
  }
  FUN_00a658b0(&local_38,param_1 + 0x50);
  if (local_38 != 0) {
    FUN_00e90030();
  }
  lVar4 = *plVar1;
  *plVar1 = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0xe30);
  *(undefined8 *)(param_1 + 0xe30) = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xcb8) = 0;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


