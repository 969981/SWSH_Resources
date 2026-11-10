/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f1490; name: FUN_010f1490
 */


void FUN_010f1490(long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 local_280;
  
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(char *)(param_1 + 0x68) != '\0')) {
    uVar2 = *(uint *)(param_1 + 100);
    if (uVar2 < 3) {
      lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x210);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      bVar1 = *(byte *)(param_1 + 0xe8);
      if ((bVar1 & 1) != 0) {
        FUN_01549440(lVar3,param_1 + 0x70);
        bVar1 = *(byte *)(param_1 + 0xe8);
      }
      uVar2 = (uint)bVar1;
      if (((bVar1 & 1) == 0) && (*(char *)(param_1 + 0xea) != '\0')) {
        FUN_01549470(lVar3,param_1 + 0xd8);
        uVar2 = (uint)*(byte *)(param_1 + 0xe8);
      }
      if ((uVar2 >> 2 & 1) != 0) {
        FUN_01549530(lVar3,param_1 + 0xd8);
      }
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010f154c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        return;
      }
    }
    else if (uVar2 == 3) {
      if (*(byte *)(param_1 + 0xf4) < 0x30) {
                    /* WARNING: Subroutine does not return */
        memset(&local_298,0,0x268);
      }
    }
    else if (uVar2 == 4) {
      local_280 = 0;
      local_298 = 0;
      local_290 = 0;
      uStack_288 = 0;
      FUN_01544f50(&local_298);
      switch(*(undefined1 *)(param_1 + 0xe9)) {
      case 1:
        local_298._0_5_ = CONCAT14(3,(undefined4)local_298);
        break;
      case 2:
        local_298._0_6_ = CONCAT15(3,(undefined5)local_298);
        break;
      case 3:
        local_298._0_7_ = CONCAT16(3,(undefined6)local_298);
        break;
      case 4:
        local_298 = CONCAT17(3,(undefined7)local_298);
        break;
      case 5:
        local_290 = CONCAT71(local_290._1_7_,3);
      }
      FUN_01544fd0(&local_298);
    }
  }
  return;
}


