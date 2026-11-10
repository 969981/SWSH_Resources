/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ae0a0; name: FUN_010ae0a0
 */


uint FUN_010ae0a0(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_02724350;
  if (param_2 == 0) {
    local_28 = *(undefined8 *)(PTR_DAT_02724350 + 0x18);
    if (*(long *)(param_1 + 0x2b0) != 0) {
      uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28);
      local_28 = *(undefined8 *)(puVar1 + 0x48);
      if (*(long *)(param_1 + 0x2b0) == 0) goto LAB_010ae2b4;
      uVar3 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28);
      uVar2 = uVar2 & uVar3;
      local_28 = *(undefined8 *)(puVar1 + 0x78);
      if (*(long *)(param_1 + 0x2b0) == 0) goto LAB_010ae2c8;
      uVar3 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28);
      uVar2 = uVar2 & uVar3;
      local_28 = *(undefined8 *)(puVar1 + 0xa8);
      if (*(long *)(param_1 + 0x2b0) == 0) goto LAB_010ae2dc;
      uVar3 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28);
      uVar2 = uVar2 & uVar3;
      local_28 = *(undefined8 *)(puVar1 + 0xd8);
      if (*(long *)(param_1 + 0x2b0) == 0) goto LAB_010ae2f0;
      uVar3 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28);
      lVar4 = *(long *)(param_1 + 0x2b0);
      uVar2 = uVar2 & uVar3;
      local_28 = *(undefined8 *)(puVar1 + 0x108);
      goto joined_r0x010ae220;
    }
    uVar2 = 1;
LAB_010ae2b4:
    uVar2 = uVar2 & 1;
LAB_010ae2c8:
    uVar2 = uVar2 & 1;
LAB_010ae2dc:
    uVar2 = uVar2 & 1;
LAB_010ae2f0:
    uVar2 = uVar2 & 1;
  }
  else {
    local_28 = *(undefined8 *)(PTR_DAT_02724350 + 0x20);
    if (*(long *)(param_1 + 0x2b0) == 0) {
      uVar2 = 1;
LAB_010ae250:
      uVar2 = uVar2 & 1;
LAB_010ae264:
      uVar2 = uVar2 & 1;
LAB_010ae278:
      lVar4 = 0;
      uVar2 = uVar2 & 1;
      local_28 = *(undefined8 *)(puVar1 + 0xe0);
    }
    else {
      uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28);
      local_28 = *(undefined8 *)(puVar1 + 0x50);
      if (*(long *)(param_1 + 0x2b0) == 0) goto LAB_010ae250;
      uVar3 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28);
      uVar2 = uVar2 & uVar3;
      local_28 = *(undefined8 *)(puVar1 + 0x80);
      if (*(long *)(param_1 + 0x2b0) == 0) goto LAB_010ae264;
      uVar3 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28);
      uVar2 = uVar2 & uVar3;
      local_28 = *(undefined8 *)(puVar1 + 0xb0);
      if (*(long *)(param_1 + 0x2b0) == 0) goto LAB_010ae278;
      uVar3 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28);
      lVar4 = *(long *)(param_1 + 0x2b0);
      uVar2 = uVar2 & uVar3;
      local_28 = *(undefined8 *)(puVar1 + 0xe0);
    }
    if (lVar4 == 0) {
      uVar2 = uVar2 & 1;
    }
    else {
      uVar3 = FUN_0167bc20(lVar4,&local_28);
      lVar4 = *(long *)(param_1 + 0x2b0);
      uVar2 = uVar2 & uVar3;
      local_28 = *(undefined8 *)(puVar1 + 0x110);
joined_r0x010ae220:
      if (lVar4 != 0) {
        uVar3 = FUN_0167bc20(lVar4,&local_28);
        goto LAB_010ae228;
      }
    }
  }
  uVar3 = 1;
LAB_010ae228:
  return uVar2 & uVar3 & 1;
}


