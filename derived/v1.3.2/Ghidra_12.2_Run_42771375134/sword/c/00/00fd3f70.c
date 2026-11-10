/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd3f70; name: FUN_00fd3f70
 */


void FUN_00fd3f70(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined8 local_18;
  
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)PTR_DAT_02722fb8;
  }
  uVar4 = FUN_016b7980(*(undefined8 *)(param_1 + 0x5f0));
  uVar1 = *(uint *)(param_1 + 0x628);
  uVar3 = 0;
  uVar6 = (uint)((ulong)uVar4 >> 0x20);
  if (uVar6 != 0) {
    uVar3 = uVar1 / uVar6;
  }
  iVar2 = uVar1 - uVar3 * uVar6;
  local_18 = CONCAT44(iVar2,uVar1 - iVar2 * (int)uVar4);
  FUN_016b7990(*(undefined8 *)(param_1 + 0x5f0),&local_18,1,0);
  local_18 = 0xc0b802cc3afa6c58;
  lVar5 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_18);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_016d2080();
  }
  return;
}


