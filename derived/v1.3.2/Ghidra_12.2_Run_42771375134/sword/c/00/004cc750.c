/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cc750; name: FUN_004cc750
 */


undefined8 FUN_004cc750(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  uint local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  byte local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x1f8);
  if ((*(long *)(lVar3 + 0x10) == 0) && (*(int *)(lVar3 + 4) == -1)) {
    return 2;
  }
  local_18 = 0;
  local_20 = 0x3f800000;
  local_13 = (undefined1)(int)*(float *)(*(long *)(param_1 + 0x18) + 0x270);
  if ((*(ushort *)(lVar3 + 0xc) & 0x500) == 0) {
    local_2c = *(undefined4 *)(lVar3 + 4);
  }
  else {
    local_2c = 0xffffffff;
  }
  local_30 = (byte)*(ushort *)(lVar3 + 0xc) & 1;
  uStack_44 = (uint)*(ushort *)(lVar3 + 0x1a);
  local_40 = 0;
  local_38 = 0;
  uStack_28 = 0;
  local_48 = (uint)((*(ushort *)(lVar3 + 0xc) >> 8 & 1) != 0);
  plVar2 = *(long **)PTR_DAT_02712d98;
  local_14 = param_3;
  if ((*(ushort *)(lVar3 + 0xc) >> 9 & 1) == 0) {
    uVar1 = (**(code **)(*plVar2 + 0x38))
                      (plVar2,*(undefined4 *)(lVar3 + 4),&local_48,&local_20,param_2,param_1 + 0x58,
                       0);
    return uVar1;
  }
  uVar1 = (**(code **)(*plVar2 + 0x30))
                    (plVar2,*(undefined8 *)(lVar3 + 0x10),&local_48,&local_20,param_2,param_1 + 0x58
                     ,0);
  return uVar1;
}


