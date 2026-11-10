/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01196d30; name: FUN_01196d30
 */


void FUN_01196d30(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((*(int *)(param_1 + 0x7c) == 9) && (uVar1 = *(uint *)(param_1 + 0x70), 1 < uVar1)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x74) = 0;
    FUN_011faf50(*(undefined8 *)PTR_DAT_02710940);
    if (*(int *)(param_1 + 0x7c) != 10) {
      *(undefined4 *)(param_1 + 0x7c) = 10;
    }
    switch(uVar1) {
    case 2:
      FUN_011972a0(&local_30,param_1);
      lVar2 = *(long *)(param_1 + 0x88);
      break;
    case 3:
      FUN_0114eb10(&local_30,*(undefined8 *)PTR_DAT_02710848);
      lVar2 = *(long *)(param_1 + 0x88);
      break;
    case 4:
      FUN_0114eca0(&local_30,*(undefined8 *)PTR_DAT_02710848);
      lVar2 = *(long *)(param_1 + 0x88);
      break;
    case 5:
      FUN_0114ed10(&local_30,*(undefined8 *)PTR_DAT_02710848);
      lVar2 = *(long *)(param_1 + 0x88);
      break;
    default:
      FUN_01528a20(0x1b);
      FUN_01652280(&local_28,*(undefined8 *)PTR_DAT_02710848);
      lVar2 = *(long *)(param_1 + 0x88);
      local_30 = local_28;
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    *(undefined8 *)(param_1 + 0x88) = local_30;
  }
  return;
}


