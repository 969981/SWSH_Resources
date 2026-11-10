/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043e5c0; name: FUN_0043e5c0
 */


undefined8 FUN_0043e5c0(long *param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte *pbVar7;
  size_t sVar8;
  ulong uVar9;
  undefined4 local_4c;
  byte *local_48;
  
  if (*(short *)((long)param_1 + 0x34) != *(short *)(param_2 + 4)) {
    return 1;
  }
  local_48 = (byte *)(param_2 + 0xb);
  local_4c = param_3;
  (**(code **)(*param_1 + 0x28))
            (param_1,(ulong)CONCAT14(*(char *)(param_2 + 10) != '\0',*(undefined4 *)(param_2 + 6)));
  if (param_1[4] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  param_1[5] = 0;
  bVar2 = *(byte *)(param_2 + 0xb);
  uVar9 = (ulong)bVar2;
  local_48 = (byte *)(param_2 + 0xc);
  if (uVar9 == 0) {
LAB_0043e6d0:
    pbVar7 = local_48 + 1;
    bVar2 = *local_48;
    uVar9 = (ulong)bVar2;
    local_48 = pbVar7;
    if (uVar9 != 0) {
      uVar1 = bVar2 + 4 & 0x1fc;
      sVar8 = uVar9 * 8;
      pbVar5 = (byte *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar1 + (int)sVar8);
      pbVar7 = local_48;
      if (pbVar5 == (byte *)0x0) goto LAB_0043e768;
      *pbVar5 = bVar2;
      memcpy(pbVar5 + 1,local_48,uVar9);
      memcpy(pbVar5 + uVar1,pbVar7 + uVar9,sVar8);
      local_48 = pbVar7 + uVar9 + sVar8;
      param_1[5] = (long)pbVar5;
    }
    uVar6 = (**(code **)(*param_1 + 0x48))(param_1,&local_48,&local_4c);
    pbVar7 = (byte *)param_1[4];
  }
  else {
    uVar1 = bVar2 + 4 & 0x1fc;
    sVar8 = uVar9 * 4;
    pbVar5 = (byte *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar1 + (int)sVar8);
    pbVar7 = local_48;
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = bVar2;
      memcpy(pbVar5 + 1,local_48,uVar9);
      memcpy(pbVar5 + uVar1,pbVar7 + uVar9,sVar8);
      local_48 = pbVar7 + uVar9 + sVar8;
      param_1[4] = (long)pbVar5;
      goto LAB_0043e6d0;
    }
LAB_0043e768:
    uVar6 = 0x34;
    pbVar7 = (byte *)param_1[4];
  }
  if (pbVar7 != (byte *)0x0) {
    uVar9 = 0;
    pbVar5 = pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc);
    do {
      if (pbVar7[uVar9 + 1] == 0xf) {
        if (pbVar5 != (byte *)0x0) {
          auVar3 = SEXT816((long)((ulong)*(uint *)PTR_DAT_02712b38 * (long)*(int *)pbVar5)) *
                   SEXT816(0x20c49ba5e353f7cf);
          *(int *)pbVar5 = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
        }
        break;
      }
      uVar9 = uVar9 + 1;
      pbVar5 = pbVar5 + 4;
    } while (uVar9 < *pbVar7);
  }
  puVar4 = PTR_DAT_02712b38;
  pbVar7 = (byte *)param_1[5];
  if (pbVar7 != (byte *)0x0) {
    uVar9 = 0;
    pbVar5 = pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc);
    do {
      if (pbVar7[uVar9 + 1] == 0xf) {
        if (pbVar5 == (byte *)0x0) {
          return uVar6;
        }
        auVar3 = SEXT816((long)((ulong)*(uint *)PTR_DAT_02712b38 * (long)*(int *)pbVar5)) *
                 SEXT816(0x20c49ba5e353f7cf);
        *(int *)pbVar5 = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
        auVar3 = SEXT816((long)((ulong)*(uint *)puVar4 * (long)*(int *)(pbVar5 + 4))) *
                 SEXT816(0x20c49ba5e353f7cf);
        *(int *)(pbVar5 + 4) = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
        return uVar6;
      }
      uVar9 = uVar9 + 1;
      pbVar5 = pbVar5 + 8;
    } while (uVar9 < *pbVar7);
  }
  return uVar6;
}


