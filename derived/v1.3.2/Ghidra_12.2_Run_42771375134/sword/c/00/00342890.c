/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00342890; name: FUN_00342890
 */


void FUN_00342890(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5,undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  undefined4 *puStack_c0;
  long local_b8;
  long lStack_b0;
  undefined1 local_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long local_48;
  char local_34 [4];
  
  iVar1 = *(int *)(*param_5 + 0x10);
  if (iVar1 != 0) {
    lVar4 = *(long *)(*param_5 + 8);
    uVar5 = (ulong)(iVar1 - 1);
    pbVar6 = (byte *)(lVar4 + uVar5 * 0x10 + 8);
    if (*pbVar6 == 0) {
      bVar3 = 0;
      if ((char)param_5[9] != '\0') {
        bVar3 = (**(code **)(*(long *)param_5[5] + 0x20))
                          ((long *)param_5[5],*(undefined8 *)(lVar4 + uVar5 * 0x10));
        bVar3 = bVar3 & 1;
        *(byte *)(param_5 + 9) = bVar3;
        lVar4 = *(long *)(*param_5 + 8);
        uVar5 = (ulong)(*(int *)(*param_5 + 0x10) - 1);
        pbVar6 = (byte *)(lVar4 + uVar5 * 0x10 + 8);
      }
      *(byte *)(lVar4 + uVar5 * 0x10 + 9) = bVar3;
      *pbVar6 = bVar3;
      cVar2 = (char)param_5[9];
      goto joined_r0x003428d8;
    }
  }
  cVar2 = (char)param_5[9];
joined_r0x003428d8:
  if (cVar2 != '\0') {
    local_118 = (**(code **)(*(long *)(param_7 + 0x10) + 0x18))
                          (param_5[6],*(undefined4 *)(param_7 + 8));
    local_f8 = param_5[4];
    local_c8 = param_5[5];
    local_100 = param_5[3];
    lStack_e8 = param_5[1];
    local_108 = param_5[2];
    local_f0 = *param_5;
    local_b8 = param_5[7];
    lStack_b0 = param_5[8];
    local_34[0] = '\0';
    puStack_c0 = &local_118;
    local_a0 = local_34;
    uStack_98 = 0;
    local_a8 = 1;
    local_90 = 0;
    uStack_114 = param_2;
    local_110 = param_3;
    uStack_10c = param_4;
    local_e0 = local_108;
    local_d8 = local_100;
    lStack_d0 = local_f8;
    local_88 = local_108;
    local_80 = local_100;
    lStack_78 = local_f8;
    local_70 = local_108;
    local_68 = local_100;
    lStack_60 = local_f8;
    local_58 = local_108;
    local_50 = local_100;
    local_48 = local_f8;
    FUN_00342a60(&local_f0,param_8,0);
    FUN_00342c10(&local_f0,param_8 + 0x20,1);
    FUN_00342dc0(&local_f0,param_8 + 0x40,2);
    FUN_00342f70(&local_f0,param_8 + 0x60,3);
    if (local_34[0] != '\0') {
      *(undefined1 *)param_5[10] = 1;
    }
    (**(code **)(*(long *)(param_7 + 0x10) + 0x10))
              (local_118,uStack_114,local_110,uStack_10c,param_5[6],*(undefined4 *)(param_7 + 8));
  }
  return;
}


