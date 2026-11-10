/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aadba0; name: FUN_00aadba0
 */


void FUN_00aadba0(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  undefined1 auStack_28 [8];
  
  *(byte *)(param_1 + 0x50a) = param_2 & 1;
  local_50 = 0xa6a33dcbade6c01f;
  local_48 = "PM_Visible";
  uVar4 = 0x3f800000;
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
  }
  local_40 = 10;
  local_38 = 0;
  lVar1 = FUN_00aaf0a0(param_1,auStack_28);
  if ((lVar1 != 0) && ((int)((ulong)(*(long *)(lVar1 + 200) - *(long *)(lVar1 + 0xc0)) >> 3) != 0))
  {
    uVar3 = 0;
    do {
      lVar2 = FUN_00c55f70(lVar1,uVar3);
      if (lVar2 != 0) {
        FUN_00895f40(uVar4,*(undefined8 *)(lVar2 + 0x78),&local_50,0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((ulong)(*(long *)(lVar1 + 200) - *(long *)(lVar1 + 0xc0)) >> 3));
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


