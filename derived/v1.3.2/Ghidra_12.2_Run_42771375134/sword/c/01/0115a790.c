/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115a790; name: FUN_0115a790
 */


void FUN_0115a790(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar4 = FUN_00ffdc80(param_1 + 0x100,"grid_VSSorting");
  local_80 = 0;
  FUN_016b7990(uVar4,&local_80,1,0);
  lVar5 = *(long *)(*(long *)(param_1 + 0x708) + 0x90);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  lVar5 = *(long *)(*(long *)(param_1 + 0x708) + 0xe0);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
  FUN_0115a9f0(param_1,0);
  uVar3 = DAT_01d4daf8;
  uVar2 = DAT_01d4daf0;
  uVar1 = DAT_01d4dae8;
  uVar4 = DAT_01d4dae0;
  local_70 = DAT_01d4daf0;
  uStack_68 = DAT_01d4daf8;
  local_80 = DAT_01d4dae0;
  uStack_78 = DAT_01d4dae8;
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x5e0),&local_80);
  FUN_0167bdb0(0,*(undefined8 *)(param_1 + 0x5e0),&local_80);
  lVar5 = *(long *)(*(long *)(param_1 + 0x708) + 0x98);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  lVar5 = *(long *)(*(long *)(param_1 + 0x708) + 0xe8);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
  FUN_0115a9f0(param_1,1);
  local_70 = uVar2;
  uStack_68 = uVar3;
  local_80 = uVar4;
  uStack_78 = uVar1;
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x5e0),&uStack_78);
  FUN_0167bdb0(0,*(undefined8 *)(param_1 + 0x5e0),&uStack_78);
  lVar5 = *(long *)(*(long *)(param_1 + 0x708) + 0xa0);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  lVar5 = *(long *)(*(long *)(param_1 + 0x708) + 0xf0);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
  FUN_0115a9f0(param_1,2);
  local_70 = uVar2;
  uStack_68 = uVar3;
  local_80 = uVar4;
  uStack_78 = uVar1;
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x5e0),&local_70);
  FUN_0167bdb0(0x3f800000,*(undefined8 *)(param_1 + 0x5e0),&local_70);
  lVar5 = *(long *)(*(long *)(param_1 + 0x708) + 0xa8);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  lVar5 = *(long *)(*(long *)(param_1 + 0x708) + 0xf8);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
  FUN_0115a9f0(param_1,3);
  local_70 = uVar2;
  uStack_68 = uVar3;
  local_80 = uVar4;
  uStack_78 = uVar1;
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x5e0),&uStack_68);
  FUN_0167bdb0(0x3f800000,*(undefined8 *)(param_1 + 0x5e0),&uStack_68);
  return;
}


