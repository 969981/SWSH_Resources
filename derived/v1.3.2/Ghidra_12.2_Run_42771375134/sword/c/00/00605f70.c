/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00605f70; name: FUN_00605f70
 */


undefined8 FUN_00605f70(short *param_1,undefined8 *param_2,undefined8 param_3)

{
  short sVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  uint local_b4;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long local_68;
  
  if (param_1 == (short *)0x0) {
LAB_0060639c:
    uVar3 = 0x14;
  }
  else if (param_2 == (undefined8 *)0x0) {
    uVar3 = 6;
  }
  else {
    if (0 < *param_1) {
      lVar8 = param_2[5];
      uVar11 = (ulong)*(uint *)(param_2 + 4);
      lVar9 = 0;
      local_b4 = 0;
      do {
        sVar1 = *(short *)(*(long *)(param_1 + 0xc) + lVar9 * 2);
        if (sVar1 < 0) goto LAB_0060639c;
        plVar5 = (long *)(*(long *)(param_1 + 4) + (ulong)local_b4 * 0x10);
        plVar12 = (long *)(*(long *)(param_1 + 4) + (long)(int)sVar1 * 0x10);
        local_70 = (*plVar5 << (uVar11 & 0x3f)) - lVar8;
        local_68 = (plVar5[1] << (uVar11 & 0x3f)) - lVar8;
        pbVar7 = (byte *)(*(long *)(param_1 + 8) + (ulong)local_b4);
        if ((*pbVar7 & 3) == 0) {
          lStack_78 = (plVar12[1] << (uVar11 & 0x3f)) - lVar8;
          local_80 = (*plVar12 << (uVar11 & 0x3f)) - lVar8;
          if ((*(byte *)(*(long *)(param_1 + 8) + (long)(int)sVar1) & 3) == 1) {
            plVar12 = plVar12 + -2;
          }
          else {
            local_80 = local_80 + local_70;
            lStack_78 = lStack_78 + local_68;
            if (local_80 < 0) {
              local_80 = local_80 + 1;
            }
            if (lStack_78 < 0) {
              lStack_78 = lStack_78 + 1;
            }
            local_80 = local_80 >> 1;
            lStack_78 = lStack_78 >> 1;
          }
          plVar5 = plVar5 + -2;
          pbVar7 = pbVar7 + -1;
        }
        else {
          local_80 = local_70;
          lStack_78 = local_68;
          if ((*pbVar7 & 3) == 2) goto LAB_0060639c;
        }
        uVar3 = (*(code *)*param_2)(&local_80,param_3);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (plVar5 < plVar12) {
          uVar3 = 0;
          do {
            while( true ) {
              pbVar6 = pbVar7 + 1;
              plVar10 = plVar5 + 2;
              if ((*pbVar6 & 3) != 0) break;
              local_70 = (plVar5[2] << (uVar11 & 0x3f)) - lVar8;
              local_68 = (plVar5[3] << (uVar11 & 0x3f)) - lVar8;
              pbVar7 = pbVar6;
              do {
                while( true ) {
                  if (plVar12 <= plVar10) {
                    uVar3 = (*(code *)param_2[2])(&local_70,&local_80,param_3);
                    goto LAB_00606310;
                  }
                  plVar5 = plVar10 + 2;
                  pbVar7 = pbVar7 + 1;
                  local_90 = (*plVar5 << (uVar11 & 0x3f)) - lVar8;
                  local_88 = (plVar10[3] << (uVar11 & 0x3f)) - lVar8;
                  if ((*pbVar7 & 3) != 0) break;
                  local_a0 = local_70 + local_90;
                  if (local_a0 < 0) {
                    local_a0 = local_a0 + 1;
                  }
                  local_a0 = local_a0 >> 1;
                  local_98 = local_68 + local_88;
                  if (local_98 < 0) {
                    local_98 = local_98 + 1;
                  }
                  local_98 = local_98 >> 1;
                  uVar3 = (*(code *)param_2[2])(&local_70,&local_a0,param_3);
                  if ((int)uVar3 != 0) {
                    iVar4 = 10;
                    goto LAB_00606394;
                  }
                  local_68 = local_88;
                  local_70 = local_90;
                  plVar10 = plVar10 + 2;
                }
                if ((*pbVar7 & 3) != 1) {
                  iVar4 = 7;
                  goto joined_r0x0060634c;
                }
                uVar3 = (*(code *)param_2[2])(&local_70,&local_90,param_3);
                iVar4 = 10;
                if ((int)uVar3 == 0) {
                  iVar4 = 0xb;
                }
                plVar10 = plVar10 + 2;
              } while (iVar4 == 0x10);
              if (iVar4 != 0xb) goto joined_r0x0060634c;
              if (plVar12 <= plVar5) goto LAB_006062e4;
            }
            if ((*pbVar6 & 3) == 1) {
              local_90 = (plVar5[2] << (uVar11 & 0x3f)) - lVar8;
              local_88 = (plVar5[3] << (uVar11 & 0x3f)) - lVar8;
              uVar3 = (*(code *)param_2[1])(&local_90,param_3);
              plVar5 = plVar10;
              pbVar7 = pbVar6;
              if ((int)uVar3 != 0) {
                return uVar3;
              }
            }
            else {
              if ((plVar12 < plVar5 + 4) || ((pbVar7[2] & 3) != 2)) goto LAB_0060639c;
              local_90 = (plVar5[2] << (uVar11 & 0x3f)) - lVar8;
              local_88 = (plVar5[3] << (uVar11 & 0x3f)) - lVar8;
              local_a0 = (plVar5[4] << (uVar11 & 0x3f)) - lVar8;
              local_98 = (plVar5[5] << (uVar11 & 0x3f)) - lVar8;
              if (plVar12 < plVar5 + 6) {
                uVar3 = (*(code *)param_2[3])(&local_90,&local_a0,&local_80,param_3);
                goto LAB_00606310;
              }
              local_b0 = (plVar5[6] << (uVar11 & 0x3f)) - lVar8;
              local_a8 = (plVar5[7] << (uVar11 & 0x3f)) - lVar8;
              uVar3 = (*(code *)param_2[3])(&local_90,&local_a0,&local_b0,param_3);
              if ((int)uVar3 != 0) {
                return uVar3;
              }
              plVar5 = plVar5 + 6;
              pbVar7 = pbVar7 + 3;
            }
          } while (plVar5 < plVar12);
        }
LAB_006062e4:
        uVar3 = (*(code *)param_2[1])(&local_80,param_3);
LAB_00606310:
        bVar2 = (int)uVar3 == 0;
        if (bVar2) {
          local_b4 = (int)sVar1 + 1;
        }
        iVar4 = 0;
        if (!bVar2) {
          iVar4 = 10;
        }
joined_r0x0060634c:
        if (iVar4 != 0) {
LAB_00606394:
          if (iVar4 != 7) {
            return uVar3;
          }
          goto LAB_0060639c;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *param_1);
    }
    uVar3 = 0;
  }
  return uVar3;
}


