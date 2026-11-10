/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00658f40; name: FUN_00658f40
 */


undefined8 FUN_00658f40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [4];
  char local_34 [4];
  undefined4 local_28;
  undefined4 uStack_24;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  uVar8 = (**(code **)(**(long **)(param_1 + 0x20) + 0x2a8))();
  FUN_00662ff0(*(undefined4 *)(param_1 + 0x78),&uStack_24,&local_28,local_34,auStack_38);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  (**(code **)PTR_DAT_02714b88)(&local_98);
  (**(code **)PTR_DAT_02714b90)(&local_98,uVar8);
  (**(code **)PTR_DAT_02714b98)(&local_98,uStack_24,local_28);
  uVar4 = FUN_00663160(*(undefined4 *)(param_1 + 0x7c));
  uVar5 = FUN_00663160(*(undefined4 *)(param_1 + 0x80));
  uVar6 = FUN_00663160(*(undefined4 *)(param_1 + 0x84));
  (**(code **)PTR_DAT_02714ba0)(&local_98,uVar4,uVar5,uVar6);
  if (local_34[0] != '\0') {
    uVar4 = FUN_00663250(*(undefined4 *)(param_1 + 0x98));
    (**(code **)PTR_DAT_02714ba8)(&local_98,1,uVar4);
  }
  (**(code **)PTR_DAT_02714bb0)(&local_98,param_1 + 0x9c);
  (**(code **)PTR_DAT_02714bb8)(*(undefined4 *)(param_1 + 0x88),&local_98);
  (**(code **)PTR_DAT_02714bc0)
            (*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),&local_98);
  (**(code **)PTR_DAT_02714bc8)((float)*(int *)(param_1 + 0x94),&local_98);
  (**(code **)PTR_DAT_02714bd0)(&local_98,0);
  lVar1 = param_1 + 0xc0;
  cVar3 = (**(code **)PTR_DAT_02714bd8)(lVar1,&local_98);
  if (cVar3 == '\x01') {
    iVar7 = FUN_005fb310(*(undefined8 *)(param_1 + 0x20),lVar1);
    *(int *)(param_1 + 0x120) = iVar7;
    if (iVar7 != -1) {
      *(undefined1 *)(param_1 + 0x124) = 1;
      puVar2 = PTR_DAT_02713e78;
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x38);
      }
      (**(code **)PTR_DAT_02714be0)(lVar1,puVar2);
      return 1;
    }
  }
  return 0;
}


