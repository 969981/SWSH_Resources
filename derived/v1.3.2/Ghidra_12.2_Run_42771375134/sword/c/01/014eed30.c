/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014eed30; name: FUN_014eed30
 */


void FUN_014eed30(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  char *param3;
  long lVar8;
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
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar6 = param_2[5];
  *(undefined8 *)(param_1 + 0x38) = param_2[4];
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar6 = param_2[9];
  *(undefined8 *)(param_1 + 0x58) = param_2[8];
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  uVar6 = param_2[0xc];
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0xd);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  lVar8 = param_2[0xe];
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = lVar8;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x90) = param_2[0xf];
  lVar8 = *(long *)(param_1 + 0x10);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uVar5 = 0xcbf29ce484222645;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  param3 = (char *)(param_1 + 0x20);
  if (*param3 != '\0') {
    snprintf((char *)&local_a8,100,"pane_%s",param3);
    uVar5 = 0xcbf29ce484222645;
    if ((byte)local_a8 != 0) {
      uVar5 = 0xcbf29ce484222645;
      pbVar7 = (byte *)((ulong)&local_a8 | 1);
      do {
        uVar5 = (uVar5 ^ (byte)local_a8) * 0x100000001b3;
        local_a8._0_1_ = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while ((byte)local_a8 != 0);
    }
  }
  local_a8 = uVar5;
  lVar4 = FUN_0167b6b0(*(undefined8 *)(lVar8 + 0x1b0),&local_a8);
  *(long *)(param_1 + 0x98) = lVar4;
  if (lVar4 != 0) {
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
    if (*param3 == '\0') {
      snprintf((char *)&local_a8,100,"pane_%s","P_iconType_00");
      bVar3 = (byte)local_a8;
      uVar5 = local_a8;
    }
    else {
      snprintf((char *)&local_a8,100,"pane_%s_%s",param3,"P_iconType_00");
      bVar3 = (byte)local_a8;
      uVar5 = local_a8;
    }
    if (bVar3 != 0) {
      local_a8 = 0xcbf29ce484222645;
      pbVar7 = (byte *)((ulong)&local_a8 | 1);
      do {
        local_a8 = (local_a8 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
      if (local_a8 != 0 && local_a8 != 0xcbf29ce484222645) {
        lVar8 = FUN_0103bd80(*(undefined8 *)(lVar8 + 0x1b0),&local_a8);
        *(long *)(param_1 + 0xa0) = lVar8;
        if (lVar8 != 0) {
          return;
        }
        goto LAB_014eef40;
      }
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    local_a8 = uVar5;
  }
LAB_014eef40:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


