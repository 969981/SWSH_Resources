/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01549530; name: FUN_01549530
 */


void FUN_01549530(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_38;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == *(ushort *)(param_1 + 0x15c8)) {
    lVar4 = 0;
  }
  else if (uVar1 == *(ushort *)(param_1 + 0x15d8)) {
    lVar4 = 1;
  }
  else if (uVar1 == *(ushort *)(param_1 + 0x15e8)) {
    lVar4 = 2;
  }
  else if (uVar1 == *(ushort *)(param_1 + 0x15f8)) {
    lVar4 = 3;
  }
  else if (uVar1 == *(ushort *)(param_1 + 0x1608)) {
    lVar4 = 4;
  }
  else if (uVar1 == *(ushort *)(param_1 + 0x1618)) {
    lVar4 = 5;
  }
  else if (uVar1 == *(ushort *)(param_1 + 0x1628)) {
    lVar4 = 6;
  }
  else if (uVar1 == *(ushort *)(param_1 + 0x1638)) {
    lVar4 = 7;
  }
  else if (uVar1 == *(ushort *)(param_1 + 0x1648)) {
    lVar4 = 8;
  }
  else {
    if (uVar1 != *(ushort *)(param_1 + 0x1658)) {
      local_38 = *(undefined8 *)(param_1 + 0x15c0);
      uVar3 = FUN_017cc160(&uStack_28,&local_38);
      if ((uVar3 & 1) == 0) {
        local_38 = *(undefined8 *)(param_1 + 0x15d0);
        uVar3 = FUN_017cc160(&uStack_28,&local_38);
        if ((uVar3 & 1) == 0) {
          local_38 = *(undefined8 *)(param_1 + 0x15e0);
          uVar3 = FUN_017cc160(&uStack_28,&local_38);
          if ((uVar3 & 1) == 0) {
            local_38 = *(undefined8 *)(param_1 + 0x15f0);
            uVar3 = FUN_017cc160(&uStack_28,&local_38);
            if ((uVar3 & 1) == 0) {
              local_38 = *(undefined8 *)(param_1 + 0x1600);
              uVar3 = FUN_017cc160(&uStack_28,&local_38);
              if ((uVar3 & 1) == 0) {
                local_38 = *(undefined8 *)(param_1 + 0x1610);
                uVar3 = FUN_017cc160(&uStack_28,&local_38);
                if ((uVar3 & 1) == 0) {
                  local_38 = *(undefined8 *)(param_1 + 0x1620);
                  uVar3 = FUN_017cc160(&uStack_28,&local_38);
                  if ((uVar3 & 1) == 0) {
                    local_38 = *(undefined8 *)(param_1 + 0x1630);
                    uVar3 = FUN_017cc160(&uStack_28,&local_38);
                    if ((uVar3 & 1) == 0) {
                      local_38 = *(undefined8 *)(param_1 + 0x1640);
                      uVar3 = FUN_017cc160(&uStack_28,&local_38);
                      if ((uVar3 & 1) == 0) {
                        local_38 = *(undefined8 *)(param_1 + 0x1650);
                        uVar3 = FUN_017cc160(&uStack_28,&local_38);
                        if ((uVar3 & 1) == 0) {
                          return;
                        }
                        puVar5 = (undefined8 *)(param_1 + 0x1650);
                        lVar4 = 9;
                      }
                      else {
                        puVar5 = (undefined8 *)(param_1 + 0x1640);
                        lVar4 = 8;
                      }
                    }
                    else {
                      puVar5 = (undefined8 *)(param_1 + 0x1630);
                      lVar4 = 7;
                    }
                  }
                  else {
                    puVar5 = (undefined8 *)(param_1 + 0x1620);
                    lVar4 = 6;
                  }
                }
                else {
                  puVar5 = (undefined8 *)(param_1 + 0x1610);
                  lVar4 = 5;
                }
              }
              else {
                puVar5 = (undefined8 *)(param_1 + 0x1600);
                lVar4 = 4;
              }
            }
            else {
              puVar5 = (undefined8 *)(param_1 + 0x15f0);
              lVar4 = 3;
            }
          }
          else {
            puVar5 = (undefined8 *)(param_1 + 0x15e0);
            lVar4 = 2;
          }
        }
        else {
          puVar5 = (undefined8 *)(param_1 + 0x15d0);
          lVar4 = 1;
        }
      }
      else {
        lVar4 = 0;
        puVar5 = (undefined8 *)(param_1 + 0x15c0);
      }
      *(short *)(param_1 + lVar4 * 0x10 + 0x15c8) = (short)*(undefined4 *)(param_2 + 1);
      uVar2 = FUN_017cc150(&uStack_28);
      *puVar5 = uVar2;
      return;
    }
    lVar4 = 9;
  }
  uVar2 = FUN_017cc150(&uStack_28);
  *(undefined8 *)(param_1 + lVar4 * 0x10 + 0x15c0) = uVar2;
  return;
}


