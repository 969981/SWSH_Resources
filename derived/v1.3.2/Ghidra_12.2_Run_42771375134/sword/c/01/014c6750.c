/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c6750; name: FUN_014c6750
 */


void FUN_014c6750(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,byte param_5)

{
  short sVar1;
  undefined *puVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  short *psVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  byte bVar10;
  short local_48 [2];
  short local_44 [2];
  
  psVar6 = (short *)FUN_0077d470(param_3);
  puVar2 = PTR_DAT_02710898;
LAB_014c67a0:
  do {
    for (; sVar1 = *psVar6, sVar1 != 0x10; psVar6 = psVar6 + 1) {
      if (sVar1 == 0) {
        return;
      }
      local_48[0] = sVar1;
      if ((param_5 & 1) == 0) {
LAB_014c67d8:
        param_5 = 0;
      }
      else {
        param_5 = 1;
        uVar7 = FUN_014ba2e0(sVar1,1);
        if ((uVar7 & 1) == 0) {
          FUN_014bbe80(*(undefined8 *)puVar2,local_48);
          goto LAB_014c67d8;
        }
      }
      FUN_0077d5c0(param_2,local_48[0]);
    }
    uVar7 = FUN_014bed60(psVar6);
    if ((uVar7 & 1) != 0) {
      psVar8 = (short *)FUN_0077db30(psVar6);
      for (psVar9 = psVar6; psVar6 = psVar8, psVar9 < psVar8; psVar9 = psVar9 + 1) {
        FUN_0077d5c0(param_2,*psVar9);
      }
      goto LAB_014c67a0;
    }
    uVar7 = FUN_014bee20(psVar6);
    if (((((uVar7 & 1) == 0) && (uVar7 = FUN_014bee80(psVar6), (uVar7 & 1) == 0)) &&
        (uVar7 = FUN_014beee0(psVar6), (uVar7 & 1) == 0)) &&
       (uVar7 = FUN_014bf030(psVar6), (uVar7 & 1) == 0)) {
      uVar7 = FUN_014bf0b0(psVar6);
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_014bf160(psVar6);
        if ((uVar7 & 1) != 0) {
          psVar6 = (short *)FUN_014c6dc0(param_1,param_2,psVar6);
          goto LAB_014c67a0;
        }
        uVar7 = FUN_014bf1a0(psVar6);
        if ((uVar7 & 1) != 0) {
          psVar6 = (short *)FUN_014c6f40(param_1,param_2,psVar6);
          goto LAB_014c67a0;
        }
        uVar7 = FUN_014bf120(psVar6);
        if ((uVar7 & 1) == 0) {
          uVar7 = FUN_014bf1e0(psVar6);
          if ((uVar7 & 1) == 0) {
            psVar8 = (short *)FUN_0077db30(psVar6);
            for (psVar9 = psVar6; psVar6 = psVar8, psVar9 < psVar8; psVar9 = psVar9 + 1) {
              local_44[0] = *psVar9;
              if ((param_5 & 1) == 0) {
LAB_014c69d4:
                param_5 = 0;
              }
              else {
                param_5 = 1;
                uVar7 = FUN_014ba2e0(local_44[0],1);
                if ((uVar7 & 1) == 0) {
                  FUN_014bbe80(*(undefined8 *)puVar2,local_44);
                  goto LAB_014c69d4;
                }
              }
              FUN_0077d5c0(param_2,local_44[0]);
            }
            goto LAB_014c67a0;
          }
          uVar4 = FUN_0077dba0(psVar6,0);
          FUN_00864910(*(undefined8 *)(param_1 + 0x170),uVar4);
          psVar9 = (short *)FUN_0077d470(*(undefined8 *)(param_1 + 0x170));
          sVar1 = *psVar9;
          while (sVar1 != 0) {
            psVar9 = psVar9 + 1;
            FUN_0077d5c0(param_2);
            sVar1 = *psVar9;
          }
        }
        else {
          cVar3 = FUN_014bed40(psVar6);
          param_5 = cVar3 == '\x03';
          cVar3 = FUN_014bed40(psVar6);
          if (cVar3 == '\x02') {
            *(ushort *)(param_1 + 0x234) = *(ushort *)(param_1 + 0x234) & 0xfffc;
            *(ushort *)(param_1 + 0x23c) = *(ushort *)(param_1 + 0x23c) | 3;
          }
          else {
            if (cVar3 == '\x01') {
              bVar10 = *(byte *)(param_1 + 0x236) & 0xe7 | 4;
            }
            else {
              if (cVar3 != '\0') goto LAB_014c68a4;
              bVar10 = *(byte *)(param_1 + 0x236) & 0xe3;
            }
            *(byte *)(param_1 + 0x236) = bVar10;
            *(byte *)(param_1 + 0x23e) = *(byte *)(param_1 + 0x23e) | 0x1c;
          }
        }
      }
      else {
        uVar4 = FUN_0077dba0(psVar6,0);
        uVar5 = FUN_014ca2e0(*(undefined2 *)(param_1 + 0x230),uVar4);
        if ((uVar5 & 0xffff) != 0) {
          FUN_0077d5c0(param_2,uVar5);
        }
      }
LAB_014c68a4:
      psVar6 = (short *)FUN_0077db30(psVar6);
      goto LAB_014c67a0;
    }
    psVar6 = (short *)FUN_014c6a50(param_1,param_2,psVar6,param_4 & 1,param_5 & 1);
    param_5 = 0;
  } while( true );
}


