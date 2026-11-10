/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c8210; name: FUN_004c8210
 */


byte FUN_004c8210(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_02712b48;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_48 = 0;
  if ((*(ulong **)(param_1 + 0x38) == (ulong *)0x0) ||
     ((**(ulong **)(param_1 + 0x38) & 1L << ((ulong)*(uint *)(PTR_DAT_02712b48 + 0x6c) & 0x3f)) == 0
     )) {
    local_34 = *(undefined4 *)(PTR_DAT_02712b40 + 0x6c);
    pbVar3 = *(byte **)(param_1 + 0x90);
    pbVar4 = pbVar3;
    if (pbVar3 != (byte *)0x0) {
      uVar5 = 0;
      pbVar4 = pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc);
      do {
        if (pbVar3[uVar5 + 1] == 0x1b) goto LAB_004c82ec;
        uVar5 = uVar5 + 1;
        pbVar4 = pbVar4 + 4;
      } while (uVar5 < *pbVar3);
      pbVar4 = (byte *)0x0;
    }
LAB_004c82ec:
    pbVar3 = (byte *)&local_34;
    if (pbVar4 != (byte *)0x0) {
      pbVar3 = pbVar4;
    }
    *param_2 = *(undefined4 *)pbVar3;
  }
  else {
    uVar6 = FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,
                         (ulong)*(uint *)(PTR_DAT_02712b48 + 0x6c),&local_70);
    *param_2 = uVar6;
  }
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_48 = 0;
  if ((*(ulong **)(param_1 + 0x38) == (ulong *)0x0) ||
     ((**(ulong **)(param_1 + 0x38) & 1L << ((ulong)*(uint *)(puVar2 + 0x70) & 0x3f)) == 0)) {
    local_34 = *(undefined4 *)(PTR_DAT_02712b40 + 0x70);
    pbVar3 = *(byte **)(param_1 + 0x90);
    pbVar4 = pbVar3;
    if (pbVar3 != (byte *)0x0) {
      uVar5 = 0;
      pbVar4 = pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc);
      do {
        if (pbVar3[uVar5 + 1] == 0x1c) goto LAB_004c83ac;
        uVar5 = uVar5 + 1;
        pbVar4 = pbVar4 + 4;
      } while (uVar5 < *pbVar3);
      pbVar4 = (byte *)0x0;
    }
LAB_004c83ac:
    pbVar3 = (byte *)&local_34;
    if (pbVar4 != (byte *)0x0) {
      pbVar3 = pbVar4;
    }
    *param_3 = *(undefined4 *)pbVar3;
  }
  else {
    uVar6 = FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,
                         (ulong)*(uint *)(puVar2 + 0x70),&local_70);
    *param_3 = uVar6;
  }
  bVar1 = *(byte *)(param_1 + 0x164);
  *(byte *)(param_1 + 0x164) = bVar1 & 0xdf;
  return bVar1 >> 5 & 1;
}


