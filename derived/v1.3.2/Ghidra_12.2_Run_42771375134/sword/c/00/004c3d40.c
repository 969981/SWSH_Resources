/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c3d40; name: FUN_004c3d40
 */


void FUN_004c3d40(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  lVar5 = *(long *)(param_3 + 0x18);
  if (*(char *)(lVar5 + 0x48) == '\0') {
    local_50 = *(undefined8 *)(lVar5 + 0x10);
  }
  else {
    local_50 = 0;
  }
  bVar1 = *(byte *)(param_3 + 0x28);
  uVar3 = bVar1 - 0x80;
  local_38 = *(undefined1 *)(param_3 + 0x29);
  if (uVar3 < 0x21 && (1L << ((ulong)uVar3 & 0x3f) & 0x100010001U) != 0) {
    local_30 = *(undefined1 *)(param_3 + 0x2a);
  }
  else {
    local_30 = 0xff;
  }
  local_40 = *(undefined4 *)(lVar5 + 0x3c);
  local_28 = 0;
  local_48 = 0;
  if (bVar1 == 0xe0) {
    FUN_0049ec70((float)((uint)*(byte *)(param_3 + 0x2a) | (uint)*(byte *)(param_3 + 0x2b) << 7) *
                 DAT_01d4bae0,*(undefined8 *)PTR_DAT_02712b50,0x83,&local_50);
  }
  else if (((bVar1 == 0xb0) && (bVar1 = *(byte *)(param_3 + 0x2a), bVar1 != 0x78)) &&
          (bVar1 != 0x7b)) {
    if (bVar1 == 0x79) {
      *(undefined2 *)(param_2 + 0x10) = 0;
      puVar4 = PTR_DAT_02712b50;
      local_58 = 0;
      iVar6 = 1;
      local_60 = 0x400000000;
      do {
        FUN_0049eb40(*(undefined8 *)puVar4,iVar6,&local_50,&local_60);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x86);
    }
    else {
      uVar7 = NEON_ucvtf((uint)*(byte *)(param_3 + 0x2b));
      FUN_0049ec70(uVar7,*(undefined8 *)PTR_DAT_02712b50,bVar1 + 1,&local_50);
      if (*(char *)(param_3 + 0x2a) == '@') {
        uVar2 = *(ushort *)(param_2 + 0x10) &
                ((ushort)(1 << (ulong)(*(byte *)(param_3 + 0x29) & 0x1f)) ^ 0xffff);
        *(ushort *)(param_2 + 0x10) = uVar2;
        *(ushort *)(param_2 + 0x10) =
             (ushort)(0x3f < *(byte *)(param_3 + 0x2b)) << (ulong)(*(byte *)(param_3 + 0x29) & 0x1f)
             | uVar2;
        return;
      }
    }
  }
  return;
}


