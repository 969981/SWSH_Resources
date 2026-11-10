/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe1370; name: FUN_00fe1370
 */


void FUN_00fe1370(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,int param_5,
                 uint param_6,byte param_7,byte param_8,undefined1 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  long lVar2;
  long local_58;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  }
  if (param_5 == 0) {
    local_58 = *(long *)(param_1 + 0x818);
    if (local_58 != 0) {
      FUN_00ffd010(*(undefined8 *)(param_1 + 0x10),&local_58);
    }
  }
  else {
    local_58 = *(long *)(param_1 + 0x818);
    if (local_58 != 0) {
      FUN_00ffd510(0x40c00000,*(undefined8 *)(param_1 + 0x10),&local_58);
    }
  }
  FUN_00fe14c0(param_1,param_2,param_9,param_10);
  FUN_00fe16e0(param_1,param_3,param_4);
  if (*(long *)(param_1 + 0x800) != 0) {
    lVar2 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),param_1 + 0x800);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_8 & 1;
  }
  if (*(long *)(param_1 + 0x828) != 0) {
    FUN_00ffd510((float)(param_6 & 1),*(undefined8 *)(param_1 + 0x10),param_1 + 0x828);
  }
  if (*(long *)(param_1 + 0x830) != 0) {
    lVar2 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),param_1 + 0x830);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_7 & 1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  uVar1 = FUN_0167b6b0(*(undefined8 *)(lVar2 + 0x1b0),param_1 + 0x840);
  FUN_00ffd840(lVar2,uVar1);
  return;
}


