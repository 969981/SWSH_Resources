/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010730f0; name: FUN_010730f0
 */


void FUN_010730f0(long param_1,ulong param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  
  *(int *)(param_1 + 0x5dc) = (int)param_2;
  lVar7 = *(long *)(*(long *)(param_1 + 0x5f0) + 0xe8);
  if (lVar7 != 0) {
    *(long *)(*(long *)(param_1 + 0x5f0) + 0xe8) = lVar7 + (lVar7 * 0x18 >> 3) * 0x5555555555555555;
    param_2 = (ulong)*(uint *)(param_1 + 0x5dc);
  }
  iVar3 = FUN_010782f0(*(long *)(param_1 + 0x5d0) + 0x68,param_2);
  if (iVar3 != 0) {
    uVar8 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x5f0);
      puVar5 = (undefined8 *)
               FUN_010782d0(*(long *)(param_1 + 0x5d0) + 0x68,*(undefined4 *)(param_1 + 0x5dc),uVar8
                           );
      local_48 = *puVar5;
      local_40 = *(undefined1 *)(puVar5 + 1);
      local_38 = 0;
      FUN_010765b0(lVar7 + 0xa0,&local_48);
      uVar8 = uVar8 + 1;
      uVar4 = FUN_010782f0(*(long *)(param_1 + 0x5d0) + 0x68,*(undefined4 *)(param_1 + 0x5dc));
    } while (uVar8 < uVar4);
  }
  bVar2 = FUN_0106f510(*(undefined4 *)(param_1 + 0x5dc),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
  lVar7 = param_1 + (ulong)bVar2 * 4;
  FUN_016c2c80(*(undefined8 *)(param_1 + 0x5e8),*(undefined4 *)(lVar7 + 0x610),0);
  FUN_016c2c90(*(undefined8 *)(param_1 + 0x5e8),*(undefined4 *)(lVar7 + 0x624));
  uVar6 = FUN_0106f400(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x60),1);
  if ((uVar6 & 1) != 0) {
    local_48 = 0x26cacfdb1bb279d7;
    lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_48);
    bVar1 = false;
    if (*(char *)(param_1 + 0x690) != '\0') {
      bVar1 = *(int *)(param_1 + 0x5dc) == 1;
    }
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | bVar1;
    local_48 = 0xb340ca007f312fb2;
    lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_48);
    bVar1 = false;
    if (*(char *)(param_1 + 0x690) != '\0') {
      bVar1 = *(int *)(param_1 + 0x5dc) == 1;
    }
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | bVar1;
    FUN_010733f0(param_1);
  }
  iVar3 = FUN_010782f0(*(long *)(param_1 + 0x5d0) + 0x68,*(undefined4 *)(param_1 + 0x5dc));
  if (iVar3 == 0) {
    FUN_010736c0(param_1);
  }
  FUN_016bef00(*(undefined8 *)(param_1 + 0x5e8));
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5f8),1);
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x600),1);
  return;
}


