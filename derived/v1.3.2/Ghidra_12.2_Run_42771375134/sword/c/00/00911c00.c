/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00911c00; name: FUN_00911c00
 */


void FUN_00911c00(long param_1,long param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 local_80 [2];
  byte local_7e;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_48;
  undefined1 local_44 [4];
  
  uVar6 = (ulong)param_3;
  bVar2 = *(char *)(param_1 + (ulong)param_3 * 0x18 + 0x90) == '\0';
  if (bVar2) {
    local_80[0] = 0;
  }
  else {
    uVar3 = *(undefined2 *)(param_1 + uVar6 * 0x18 + 0x92);
    uVar4 = FUN_00931920(*(undefined8 *)(param_1 + 0x68));
    uVar4 = FUN_008df7f0(uVar4,4);
    uVar5 = FUN_00931920(*(undefined8 *)(param_1 + 0x68));
    uVar5 = FUN_008df3d0(uVar5,param_3,0);
    local_44[0] = 0;
    local_48 = 0x1000;
    FUN_00961ac0(&local_48,local_44,*(undefined8 *)(param_1 + 0x60),uVar4);
    local_78 = *(undefined8 *)(param_1 + 0x60);
    local_70 = *(undefined8 *)(param_1 + 0x68);
    local_54 = local_48;
    local_50 = local_44[0];
    local_4f = 0;
    uStack_68 = uVar5;
    local_60 = uVar4;
    local_58 = uVar3;
    FUN_009a7040(local_80,&local_78);
    lVar1 = param_2 + uVar6 * 8;
    *(undefined2 *)(lVar1 + 2) = uVar3;
    *(ushort *)(lVar1 + 6) = (ushort)local_7e;
  }
  param_2 = param_2 + uVar6 * 8;
  *(bool *)param_2 = !bVar2;
  *(undefined1 *)(param_2 + 4) = local_80[0];
  return;
}


