/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fce80; name: FUN_006fce80
 */


void FUN_006fce80(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar3 = FUN_0199bfa0(*(undefined8 *)(param_1 + 0x58));
  *(long *)(param_1 + 0x78) = lVar3;
  local_70 = CONCAT44(local_70._4_4_,0x21);
  local_60 = 0;
  uStack_58 = 0;
  lVar4 = *(long *)(lVar3 + 0x30);
  iVar2 = nn::util::BinaryBlockHeader::GetBlockSize();
  local_70 = CONCAT44(iVar2 + -0x10,(undefined4)local_70);
  local_68 = lVar4 + 0x10;
  FUN_0199e800(*(undefined8 *)(lVar3 + 0x40),PTR_DAT_027155e8,&local_70);
  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar3 + 0x40);
  *(undefined4 *)(lVar3 + 0x50) = 0;
  puVar1 = PTR_DAT_027155e8;
  lVar3 = *(long *)(param_1 + 0x78);
  if (0 < *(int *)(*(long *)(lVar3 + 0x38) + 4)) {
    lVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(lVar3 + 0x28) + lVar4 * 8);
      lVar3 = *(long *)(lVar5 + 0x68);
      FUN_019a5750(*(undefined8 *)(lVar5 + 0x80),puVar1,lVar5 + 0x10,*(undefined8 *)(lVar3 + 0x28),
                   ((ulong)*(uint *)(lVar3 + 0x30) - (*(long *)(lVar3 + 0x10) + 0x10)) +
                   **(long **)(lVar5 + 0x70),*(undefined4 *)(lVar5 + 0x50));
      local_40 = 0;
      uStack_38 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      local_68 = 0;
      FUN_0199c230(&local_70);
      local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(lVar5 + 0x5c));
      local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar5 + 0x58));
      local_70 = CONCAT44(*(undefined4 *)(lVar5 + 0x1c),(undefined4)local_70);
      local_40 = *(undefined8 *)(lVar5 + 0x80);
      local_50 = CONCAT44(*(undefined4 *)(lVar5 + 0x30),(undefined4)local_50);
      local_60._0_4_ = CONCAT22(*(undefined2 *)(lVar5 + 0x16),(undefined2)local_60);
      FUN_019a5890(*(undefined8 *)(lVar5 + 0x88),puVar1,&local_70);
      lVar3 = *(long *)(param_1 + 0x78);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(*(long *)(lVar3 + 0x38) + 4));
  }
  return;
}


