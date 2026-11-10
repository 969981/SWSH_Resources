/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd3de0; name: FUN_00fd3de0
 */


undefined8 FUN_00fd3de0(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_28;
  
  local_28 = 0xf7798f28a97c0468;
  if (((*(long *)(param_1 + 0x2b0) != 0) &&
      (uVar4 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28), (uVar4 & 1) == 0)) ||
     (puVar3 = PTR_DAT_02710848, *(char *)(param_1 + 0x5d8) != '\0')) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x5d8) = 1;
  lVar8 = *(long *)(*(long *)puVar3 + 0x90);
  if (lVar8 == 0) {
    uVar4 = FUN_0100c3f0(0,1);
  }
  else {
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    uVar4 = FUN_0100c3f0(lVar8,1);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if ((((uVar4 & 1) == 0) && (*PTR_DAT_02722fa0 != '\0')) &&
     ((uVar4 = FUN_00ecee70(), 9 < *(uint *)PTR_DAT_02722f90 && ((uVar4 & 1) == 0)))) {
    *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)PTR_DAT_02722fb8;
    uVar5 = FUN_016b7980(*(undefined8 *)(param_1 + 0x5f0));
    uVar7 = *(uint *)(param_1 + 0x628);
  }
  else {
    uVar5 = FUN_016b7980(*(undefined8 *)(param_1 + 0x5f0));
    uVar7 = *(uint *)PTR_DAT_02722f90;
  }
  uVar2 = 0;
  uVar6 = (uint)((ulong)uVar5 >> 0x20);
  if (uVar6 != 0) {
    uVar2 = uVar7 / uVar6;
  }
  iVar1 = uVar7 - uVar2 * uVar6;
  local_28 = CONCAT44(iVar1,uVar7 - iVar1 * (int)uVar5);
  FUN_016b7990(*(undefined8 *)(param_1 + 0x5f0),&local_28,1,0);
  local_28 = 0xc0b802cc3afa6c58;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_016d2080();
  }
  return 1;
}


