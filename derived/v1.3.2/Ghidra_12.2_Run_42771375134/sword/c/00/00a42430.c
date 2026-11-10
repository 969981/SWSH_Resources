/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a42430; name: FUN_00a42430
 */


void FUN_00a42430(long param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong local_a8;
  undefined8 uStack_a0;
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
  undefined4 local_48;
  long local_38;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  local_48 = 0;
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
  local_a8 = 0;
  uStack_a0 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","P_itemlist_itemIcon");
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",param_2,"P_itemlist_itemIcon");
  }
  uVar5 = local_a8 & 0xff;
  uVar10 = 0xcbf29ce484222645;
  uVar7 = 0xcbf29ce484222645;
  if ((byte)local_a8 != '\0') {
    uVar7 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar7 = (uVar7 ^ uVar5) * 0x100000001b3;
      bVar3 = *pbVar6;
      uVar5 = (ulong)bVar3;
      pbVar6 = pbVar6 + 1;
    } while (bVar3 != 0);
  }
  local_a8 = uVar7;
  uVar4 = FUN_0103bd80(*(undefined8 *)(lVar8 + 0x1b0),&local_a8);
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  local_48 = 0;
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
  local_a8 = 0;
  uStack_a0 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","T_itemlist_name");
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",param_2,"T_itemlist_name");
  }
  uVar5 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar5 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar5 = (uVar5 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x98) = uVar5;
  local_48 = 0;
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
  local_a8 = 0;
  uStack_a0 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","T_itemlist_number_01");
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",param_2,"T_itemlist_number_01");
  }
  uVar5 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar5 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar5 = (uVar5 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0xa0) = uVar5;
  local_48 = 0;
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
  local_a8 = 0;
  uStack_a0 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","T_itemlist_number_00");
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",param_2,"T_itemlist_number_00");
  }
  if ((byte)local_a8 != 0) {
    pbVar6 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar10 = (uVar10 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while ((byte)local_a8 != 0);
  }
  local_38 = *(long *)(param_1 + 0x90);
  local_a8 = uVar10;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_008c4e70(lVar8,&local_a8,&local_38,&DAT_021549a0,10);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar9 = *(long *)(lVar8 + 1000) + (ulong)*(uint *)(param_1 + 0x7c) * 0x3d0;
  uVar4 = FUN_00ff93d0(param_1);
  FUN_0168b110(lVar9,uVar4,*(undefined8 *)(param_1 + 0x88),0);
  *(undefined1 *)(lVar9 + 0x3c1) = 1;
  lVar8 = FUN_00ffda40(lVar8,param_1 + 0x80);
  *(undefined1 *)(lVar8 + 0x142) = 0;
  return;
}


