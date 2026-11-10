/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7e830; name: FUN_00d7e830
 */


void FUN_00d7e830(long param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  char local_38 [4];
  undefined1 local_34 [4];
  undefined8 local_28;
  
  cVar2 = *(char *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58);
  local_28 = CONCAT44(local_28._4_4_,4);
  local_34[0] = FUN_00d705e0(&local_28);
  puVar4 = (undefined8 *)FUN_00d70870(local_34);
  local_28 = *puVar4;
  lVar5 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | cVar2 == '\x01';
  local_28._0_4_ = 0xb;
  iVar3 = FUN_00d756f0(*(long *)(param_1 + 0x5d0) + 0x60,&local_28);
  local_28 = CONCAT44(local_28._4_4_,0xb);
  local_34[0] = FUN_00d705e0(&local_28);
  puVar4 = (undefined8 *)FUN_00d70870(local_34);
  local_28 = *puVar4;
  lVar5 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | iVar3 != 0;
  local_28 = 0xaa9746b0d29093b6;
  FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  FUN_019a65b0();
  piVar6 = *(int **)(*(long *)(param_1 + 0x5d0) + 0x280);
  if ((*piVar6 == 2) && ((char)piVar6[2] != '\0')) {
    local_38[0] = '\0';
    do {
      iVar3 = FUN_00d70660(local_38);
      if (iVar3 != 0xb) {
        lVar5 = FUN_00d70870(local_38);
        local_28 = *(undefined8 *)(lVar5 + 8);
        FUN_00ffd010(param_1 + 0x100,&local_28);
      }
      cVar2 = local_38[0] + '\x01';
      bVar1 = local_38[0] + 1;
      local_38[0] = cVar2;
    } while (bVar1 < 0xb);
    local_28 = 0x37b8d3f08901bf32;
    lVar5 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
    local_28 = 0x1bbf10381b560c01;
    lVar5 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  return;
}


