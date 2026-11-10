/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a43a30; name: FUN_00a43a30
 */


void FUN_00a43a30(long param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  local_48 = param_1;
  FUN_00a43bb0(&local_48,param_1 + 0x5e0,*param_2,*(undefined1 *)(param_2 + 1),param_1 + 0x5d0,
               0xbd6cee815d952f24,0x3946cf20d29ac9c3,0x82e60d0fb5052acf);
  FUN_00a43bb0(&local_48,param_1 + 0x600,param_2[2],*(undefined1 *)(param_2 + 3),param_1 + 0x5d4,
               0x5cd97c6ffb429c5f,0x29d21bc4861b1874,0x66b89a2883d9878);
  iVar2 = param_2[4];
  lVar6 = *(long *)(param_1 + 0x628);
  bVar4 = iVar2 != 0;
  puVar1 = (undefined8 *)&UNK_01cd5228;
  if (!bVar4) {
    puVar1 = &DAT_01cd5388;
  }
  uVar5 = 3;
  if (!bVar4) {
    uVar5 = 0;
  }
  FUN_016b2da0(lVar6,bVar4);
  FUN_016b2d70(lVar6,bVar4);
  *(undefined8 *)(lVar6 + 0xf8) = *puVar1;
  *(undefined4 *)(param_1 + 0x5d8) = uVar5;
  if (iVar2 != 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    FUN_0168c190(*(undefined8 *)(param_1 + 0x4e8),param_2[4],0,&local_d0);
    pcVar3 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar3)(&local_b0);
    }
  }
  return;
}


